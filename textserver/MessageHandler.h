#pragma once

#include <QObject>
#include <QTcpSocket>

#include <Message.h>
#include <User.h>
#include "Document.h"


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

signals: MessageCapsule accountCreate(QTcpSocket* �lientSocket, User& newUser);
signals: MessageCapsule accountUpdate(QTcpSocket* �lientSocket, User& updatedUser);

signals: MessageCapsule documentCreate(QTcpSocket* �lientSocket, QString docName);
signals: MessageCapsule documentOpen(QTcpSocket* �lientSocket, QString docUri);
signals: MessageCapsule documentRemove(QTcpSocket* �lientSocket, QString docUri);

signals: void charInsert(Symbol& s);
signals: void charDelete(QVector<qint32> pos);
signals: void messageDispatch(MessageCapsule message, QTcpSocket* sender);

signals: MessageCapsule userLogout(QTcpSocket* clientSocket);

};
