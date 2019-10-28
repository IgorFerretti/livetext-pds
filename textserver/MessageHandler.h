#pragma once

#include <QSslSocket>

#include <Message.h>
#include <User.h>
#include <Document.h>


class WorkSpace;
class TcpServer;

class MessageHandler : public QObject
{
	Q_OBJECT

private:

	enum Context
	{
		Server,
		Workspace
	};

private:

	Context _useCase;

public:

	MessageHandler(WorkSpace* w);
	MessageHandler(TcpServer* s);

	void process(MessageCapsule message, QSslSocket* sender);

	~MessageHandler();


signals: MessageCapsule loginRequest(QSslSocket* clientSocket, QString username);
signals: MessageCapsule loginUnlock(QSslSocket* clientSocket, QByteArray token);

signals: MessageCapsule accountCreate(QSslSocket* ÁlientSocket, QString username, QString nickname, QImage icon, QString password);
signals: MessageCapsule accountUpdate(QSslSocket* ÁlientSocket, QString nickname, QImage icon, QString password);

signals: MessageCapsule documentCreate(QSslSocket* ÁlientSocket, QString docName);
signals: MessageCapsule documentOpen(QSslSocket* ÁlientSocket, URI docUri, bool docJustCreated = false);
signals: MessageCapsule documentRemove(QSslSocket* ÁlientSocket, URI docUri);

signals: void charInsert(Symbol s);
signals: void charDelete(QVector<qint32> pos);
signals: void charFormat(QVector<qint32> pos, QTextCharFormat fmt);
signals: void blockEdit(TextBlockID id, QTextBlockFormat fmt);
signals: void listEdit(TextBlockID blockId, TextListID listId, QTextListFormat fmt);
signals: void messageDispatch(MessageCapsule message, QSslSocket* sender);

signals: void documentClose(QSslSocket* clientSocket);
signals: void userLogout(QSslSocket* clientSocket);

};
