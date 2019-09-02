#pragma once

#include <QObject>
#include <QTcpSocket>

#include <Message.h>
#include <User.h>
#include <Document.h>


class WorkSpace;
class TcpServer;

class MessageHandler : public QObject
{
	Q_OBJECT

private:

	enum OwnerType
	{
		Server,
		Workspace
	};

private:

	OwnerType _usecase;

public:

	MessageHandler(WorkSpace* w);
	MessageHandler(TcpServer* s);

	void process(MessageCapsule message, QTcpSocket* sender);

	~MessageHandler();


signals: MessageCapsule loginRequest(QTcpSocket* clientSocket, QString username);
signals: MessageCapsule loginUnlock(QTcpSocket* clientSocket, QString token);

signals: MessageCapsule accountCreate(QTcpSocket* �lientSocket, QString username, QString nickname, QImage icon, QString password);
signals: MessageCapsule accountUpdate(QTcpSocket* �lientSocket, QString nickname, QImage icon, QString password);

signals: MessageCapsule documentCreate(QTcpSocket* �lientSocket, QString docName);
signals: MessageCapsule documentOpen(QTcpSocket* �lientSocket, URI docUri);
signals: MessageCapsule documentRemove(QTcpSocket* �lientSocket, URI docUri);

signals: void charInsert(Symbol& s);
signals: void charDelete(QVector<qint32> pos);
signals: void messageDispatch(MessageCapsule message, QTcpSocket* sender);

signals: void removePresence(QTcpSocket* clientSocket);
signals: void userLogout(QTcpSocket* clientSocket);

};
