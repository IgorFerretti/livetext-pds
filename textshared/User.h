#pragma once

#include <QImage>
#include <QList>
#include <QByteArray>
#include "Document.h"

class User
{
	/* Operators for QDataStream serialization and deserialization */
	friend QDataStream& operator>>(QDataStream& in, User& user);			// Input
	friend QDataStream& operator<<(QDataStream& out, const User& user);		// Output
	
private:

	QString m_username;
	int m_userId;
	QString m_nickname;
	QByteArray m_passwd;		// hashed
	QByteArray m_salt;			// randomly generated
	QImage m_icon;			// nullable, check with QImage::isNull()
	QList<URI> m_documents;

	static const QString saltCharacters;

public:

	User();	 // Use this to construct an empty user and populate the fields later

	User(QString username, int userId, QString nickname, QString passwd, QImage icon = QImage());

	~User();

	/* getters */
	QString getUsername();
	int getUserId();
	QString getNickname();
	QByteArray getPasswordHash();
	QByteArray getSalt();
	QImage getIcon();
	QList<URI> getDocuments();
	bool hasDocument(URI uri);
	URI getURIat(int index);

	/* setters */
	void addDocument(URI docUri);
	void removeDocument(URI uri);
	void setNickname(QString newNickname);
	void deleteNickname();
	void setIcon(QImage newIcon);
	void deleteIcon();	
	void setPassword(QString newPassword);

};


QDataStream& operator>>(QDataStream& in, User& user);			// Input deserialization
QDataStream& operator<<(QDataStream& out, const User& user);	// Output serialization

