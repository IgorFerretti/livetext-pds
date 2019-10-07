#pragma once

#include "Message.h"
#include "Symbol.h"


class CharInsertMessage : public Message
{
	friend MessageFactory;

private:

	Symbol m_symbol;

protected:

	CharInsertMessage();	// empty constructor

	// Constructor for CharInsert messages, carrying the symbol object
	CharInsertMessage(Symbol symbol);

	void writeTo(QDataStream& stream) const override;
	void readFrom(QDataStream& stream) override;

public:

	~CharInsertMessage() {};

	Symbol& getSymbol();
};


class CharFormatMessage : public Message
{
	friend MessageFactory;

private:

	QVector<qint32> m_fPos;
	QTextCharFormat m_fmt;

protected:

	CharFormatMessage();	// empty constructor

	// Constructor for CharDelete messages, with the fractional position of the symbol to delete
	CharFormatMessage(QVector<qint32> position, QTextCharFormat fmt);

	void writeTo(QDataStream& stream) const override;
	void readFrom(QDataStream& stream) override;

public:

	~CharFormatMessage() {};

	QVector<qint32> getPosition() const;
	QTextCharFormat getCharFormat() const;
};


class CharDeleteMessage : public Message
{
	friend MessageFactory;

private:

	QVector<qint32> m_fPos;

protected:

	CharDeleteMessage();	// empty constructor

	// Constructor for CharDelete messages, with the fractional position of the symbol to delete
	CharDeleteMessage(QVector<qint32> position);

	void writeTo(QDataStream& stream) const override;
	void readFrom(QDataStream& stream) override;

public:

	~CharDeleteMessage() {};

	QVector<qint32> getPosition() const;
};

class BlockEditMessage : public Message
{
	friend MessageFactory;

private:

	qint32 m_editorId;
	TextBlockID m_blockId;
	QTextBlockFormat m_blockFmt;

protected:

	BlockEditMessage();		// empty constructor

	// Constructor for BlockEdit messages, editorId is useful to identify the author of the change
	BlockEditMessage(TextBlockID blockId, QTextBlockFormat fmt, qint32 editorId);

	void writeTo(QDataStream& stream) const override;
	void readFrom(QDataStream& stream) override;

public:

	~BlockEditMessage() {};

	qint32 getAuthorId() const;
	TextBlockID getBlockId() const;
	QTextBlockFormat getBlockFormat() const;
};
