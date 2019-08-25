#pragma once

#include <qobject.h>
#include <qtcpsocket.h>
#include <QtNetwork>
#include <QObject>

#include <signal.h>
#include <sys/types.h>
#include <time.h>
#include <csignal>
#include <stdio.h>

#include <string>

#include <fstream>
#include <iostream>
#include <sstream>

#include <vector>

// File to handle Message with the server
#include <AccountMessage.h>
#include <Message.h>
#include <LoginMessage.h>
#include <LogoutMessage.h>
#include <PresenceMessage.h>
#include <DocumentMessage.h>
#include <MessageFactory.h>
#include <TextEditMessage.h>


//File for DataStructure
#include <User.h>
#include <Symbol.h>

class Client : public QObject
{
	Q_OBJECT
private:
	QTcpSocket* socket;
	QString username;
	QString nickname;
	QString password;
	QImage image;
	bool login;
signals:
	void connectionEstablished();
	void impossibleToConnect();

	// Login, Logout & Register
	void loginSuccess(User user);
	void loginFailed(QString errorType);
	void registrationCompleted(User user);
	void registrationFailed(QString errorType);
	void logoutCompleted();
	void logoutFailed(QString errorType);

	// Presence Signals
	void cursorMoved(qint32 position, qint32 user);
	void accountModified(qint32 userId,QString username,QImage image);
	void userPresence(qint32 userId, QString username, QImage image);
	void cancelUserPresence(qint32 userId);
	
	//Document Signals
	void removeFileFailed(QString errorType);
	void openFileCompleted(Document document);
	void openFileFailed(QString error);
	void documentDismissed();
	
	// Symbol Signals
	void recivedSymbol(Symbol character);
	void removeSymbol(QVector<int> position);
public:
	Client(QObject* parent = 0);
	~Client();

public slots:
	//signals handler
	void serverConnection();
	void readBuffer();
	void serverDisconnection();
	void errorHandler();
	void writeOnServer();
	// User connection
	void Login();
	void Register();
	void Logout();
	//Data Exchange
	void sendCursor(qint32 userId, qint32 position);
	void reciveCursor(QDataStream& in);
	void sendChar(Symbol character);
	void reciveChar(QDataStream& in);
	void deleteChar(QDataStream& in);
	//Document handler
	void openDocument(QString URI);
	void createDocument(QString name);
	void deleteDocument(QString URI);
	//Server connection
	void Connect(QString ipAddress, quint16 port);
	void Disconnect();
	// Setter & Getter
	void setUsername(QString username);
	void setPassword(QString password);
	void setLogin(bool flag);
	void setNickname(QString nickname);
	void setImage(QImage image);
	bool getLogin();
	//Account handler
	void newUserPresence(QDataStream& in);
	void accountUpdate(QDataStream& in);
	void sendAccountUpdate(qint32 userId, QString name, QImage image);
	void deleteUserPresence(QDataStream& in);
};

