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

signals:

	MessageCapsule loginRequest(QSslSocket* clientSocket, QString username);
	MessageCapsule loginUnlock(QSslSocket* clientSocket, QByteArray token);

	MessageCapsule accountCreate(QSslSocket* �lientSocket, QString username, QString nickname, QImage icon, QString password);
	MessageCapsule accountUpdate(QSslSocket* �lientSocket, QString nickname, QImage icon, QString password);

	MessageCapsule documentCreate(QSslSocket* �lientSocket, QString docName);
	MessageCapsule documentOpen(QSslSocket* �lientSocket, URI docUri, bool docJustCreated = false);
	MessageCapsule documentRemove(QSslSocket* �lientSocket, URI docUri);

	void charInsert(Symbol s);
	void charDelete(Position pos);
	void charFormat(Position pos, QTextCharFormat fmt);
	void bulkInsert(QList<Symbol> syms, TextBlockID bId, QTextBlockFormat blkFmt);
	void bulkDelete(QList<Position> poss);
	void blockEdit(TextBlockID id, QTextBlockFormat fmt);
	void listEdit(TextBlockID blockId, TextListID listId, QTextListFormat fmt);
	void messageDispatch(MessageCapsule message, QSslSocket* sender);

	void documentClose(QSslSocket* clientSocket, bool forced = false);
	void userLogout(QSslSocket* clientSocket);

};
