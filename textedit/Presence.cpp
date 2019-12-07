#include "Presence.h"

#include <QPainter>

Presence::Presence(qint32 id, QString name, QColor color, QImage profilePic, QTextEdit* textedit) 
	: _id(id), _name(name), _color(color), _iconPressedAction(nullptr)
{
	_userCursor = new QTextCursor(textedit->document());
	_label = new QLabel(textedit);

	//Setting up a colored background
	QImage canvas(36, 36, QImage::Format_RGB32);
	canvas.fill(color);

	//Setting-up painter
	QPainter painter(&canvas);
	painter.setRenderHint(QPainter::Antialiasing);
	painter.setRenderHint(QPainter::SmoothPixmapTransform, true);

	//Draw the user icon above the colored canvas
	painter.drawImage(QPoint(3, 3), profilePic.scaled(30, 30, Qt::KeepAspectRatio, Qt::SmoothTransformation));
	painter.end();

	_profilePicture.convertFromImage(canvas);
}

Presence::~Presence()
{
	//Nothing to do
}

/************************ GETTERS ************************/

QColor Presence::color() const
{
	return _color;
}

QString Presence::name() const
{
	return _name;
}

QPixmap Presence::profilePicture() const
{
	return _profilePicture;
}

QTextCursor* Presence::cursor() const
{
	return _userCursor;
}

QLabel* Presence::label() const
{
	return _label;
}

QAction* Presence::actionHighlightText() const
{
	return _iconPressedAction;
}

qint32 Presence::id() const
{
	return _id;
}


/************************ TEXT HIGHLIGHTING ************************/

void Presence::setAction(QAction* action)
{
	//Editor action
	_iconPressedAction = action;
}
