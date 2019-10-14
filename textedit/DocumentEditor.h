#ifndef DOCUMENTEDITOR_H
#define DOCUMENTEDITOR_H

#include <QObject>
#include <Document.h>
#include <User.h>
#include "textedit.h"

class DocumentEditor : public QObject
{
	Q_OBJECT

public:
	DocumentEditor(Document doc, TextEdit* editor, User user, QObject* parent = nullptr);
	void openDocument();

public slots:
	void addSymbol(Symbol s);
	void addCharAtIndex(QChar ch, QTextCharFormat fmt, int position);

	void removeSymbol(QVector<int> position);
	void deleteCharAtIndex(int position);

	void changeBlockFormat(int start, int end, QTextBlockFormat fmt);
	void applyBlockFormat(TextBlockID blockId, QTextBlockFormat fmt);

	void changeSymbolFormat(qint32 userId, int position, QTextCharFormat fmt);
	void applySymbolFormat(QVector<qint32> position, QTextCharFormat fmt);


	void generateExtraSelection();


private:
	Document _document;
	User _user;
	TextEdit* _textedit;

private slots:



signals:
	void deleteChar(QVector<qint32> fPos);
	void insertChar(Symbol s);
	void blockFormatChanged(TextBlockID blockId, QTextBlockFormat fmt);
	void symbolFormatChanged(QVector<qint32> position, QTextCharFormat fmt);
};


#endif //DOCUMENTEDITOR_H