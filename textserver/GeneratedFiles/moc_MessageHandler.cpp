/****************************************************************************
** Meta object code from reading C++ file 'MessageHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../MessageHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MessageHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MessageHandler_t {
    QByteArrayData data[50];
    char stringdata0[521];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MessageHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MessageHandler_t qt_meta_stringdata_MessageHandler = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MessageHandler"
QT_MOC_LITERAL(1, 15, 12), // "loginRequest"
QT_MOC_LITERAL(2, 28, 14), // "MessageCapsule"
QT_MOC_LITERAL(3, 43, 0), // ""
QT_MOC_LITERAL(4, 44, 11), // "QSslSocket*"
QT_MOC_LITERAL(5, 56, 12), // "clientSocket"
QT_MOC_LITERAL(6, 69, 8), // "username"
QT_MOC_LITERAL(7, 78, 11), // "loginUnlock"
QT_MOC_LITERAL(8, 90, 5), // "token"
QT_MOC_LITERAL(9, 96, 13), // "accountCreate"
QT_MOC_LITERAL(10, 110, 11), // "lientSocket"
QT_MOC_LITERAL(11, 122, 8), // "nickname"
QT_MOC_LITERAL(12, 131, 4), // "icon"
QT_MOC_LITERAL(13, 136, 8), // "password"
QT_MOC_LITERAL(14, 145, 13), // "accountUpdate"
QT_MOC_LITERAL(15, 159, 14), // "documentCreate"
QT_MOC_LITERAL(16, 174, 7), // "docName"
QT_MOC_LITERAL(17, 182, 12), // "documentOpen"
QT_MOC_LITERAL(18, 195, 3), // "URI"
QT_MOC_LITERAL(19, 199, 6), // "docUri"
QT_MOC_LITERAL(20, 206, 14), // "docJustCreated"
QT_MOC_LITERAL(21, 221, 14), // "documentRemove"
QT_MOC_LITERAL(22, 236, 11), // "charsInsert"
QT_MOC_LITERAL(23, 248, 15), // "QVector<Symbol>"
QT_MOC_LITERAL(24, 264, 4), // "syms"
QT_MOC_LITERAL(25, 269, 11), // "TextBlockID"
QT_MOC_LITERAL(26, 281, 3), // "bId"
QT_MOC_LITERAL(27, 285, 16), // "QTextBlockFormat"
QT_MOC_LITERAL(28, 302, 6), // "blkFmt"
QT_MOC_LITERAL(29, 309, 11), // "charsDelete"
QT_MOC_LITERAL(30, 321, 17), // "QVector<Position>"
QT_MOC_LITERAL(31, 339, 4), // "poss"
QT_MOC_LITERAL(32, 344, 11), // "charsFormat"
QT_MOC_LITERAL(33, 356, 3), // "pos"
QT_MOC_LITERAL(34, 360, 24), // "QVector<QTextCharFormat>"
QT_MOC_LITERAL(35, 385, 4), // "fmts"
QT_MOC_LITERAL(36, 390, 9), // "blockEdit"
QT_MOC_LITERAL(37, 400, 2), // "id"
QT_MOC_LITERAL(38, 403, 3), // "fmt"
QT_MOC_LITERAL(39, 407, 8), // "listEdit"
QT_MOC_LITERAL(40, 416, 7), // "blockId"
QT_MOC_LITERAL(41, 424, 10), // "TextListID"
QT_MOC_LITERAL(42, 435, 6), // "listId"
QT_MOC_LITERAL(43, 442, 15), // "QTextListFormat"
QT_MOC_LITERAL(44, 458, 15), // "messageDispatch"
QT_MOC_LITERAL(45, 474, 7), // "message"
QT_MOC_LITERAL(46, 482, 6), // "sender"
QT_MOC_LITERAL(47, 489, 13), // "documentClose"
QT_MOC_LITERAL(48, 503, 6), // "forced"
QT_MOC_LITERAL(49, 510, 10) // "userLogout"

    },
    "MessageHandler\0loginRequest\0MessageCapsule\0"
    "\0QSslSocket*\0clientSocket\0username\0"
    "loginUnlock\0token\0accountCreate\0"
    "lientSocket\0nickname\0icon\0password\0"
    "accountUpdate\0documentCreate\0docName\0"
    "documentOpen\0URI\0docUri\0docJustCreated\0"
    "documentRemove\0charsInsert\0QVector<Symbol>\0"
    "syms\0TextBlockID\0bId\0QTextBlockFormat\0"
    "blkFmt\0charsDelete\0QVector<Position>\0"
    "poss\0charsFormat\0pos\0QVector<QTextCharFormat>\0"
    "fmts\0blockEdit\0id\0fmt\0listEdit\0blockId\0"
    "TextListID\0listId\0QTextListFormat\0"
    "messageDispatch\0message\0sender\0"
    "documentClose\0forced\0userLogout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MessageHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   99,    3, 0x06 /* Public */,
       7,    2,  104,    3, 0x06 /* Public */,
       9,    5,  109,    3, 0x06 /* Public */,
      14,    4,  120,    3, 0x06 /* Public */,
      15,    2,  129,    3, 0x06 /* Public */,
      17,    3,  134,    3, 0x06 /* Public */,
      17,    2,  141,    3, 0x26 /* Public | MethodCloned */,
      21,    2,  146,    3, 0x06 /* Public */,
      22,    3,  151,    3, 0x06 /* Public */,
      29,    1,  158,    3, 0x06 /* Public */,
      32,    2,  161,    3, 0x06 /* Public */,
      36,    2,  166,    3, 0x06 /* Public */,
      39,    3,  171,    3, 0x06 /* Public */,
      44,    2,  178,    3, 0x06 /* Public */,
      47,    2,  183,    3, 0x06 /* Public */,
      47,    1,  188,    3, 0x26 /* Public | MethodCloned */,
      49,    1,  191,    3, 0x06 /* Public */,

 // signals: parameters
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QString,    5,    6,
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QByteArray,    5,    8,
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QString, QMetaType::QString, QMetaType::QImage, QMetaType::QString,   10,    6,   11,   12,   13,
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QString, QMetaType::QImage, QMetaType::QString,   10,   11,   12,   13,
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QString,   10,   16,
    0x80000000 | 2, 0x80000000 | 4, 0x80000000 | 18, QMetaType::Bool,   10,   19,   20,
    0x80000000 | 2, 0x80000000 | 4, 0x80000000 | 18,   10,   19,
    0x80000000 | 2, 0x80000000 | 4, 0x80000000 | 18,   10,   19,
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 25, 0x80000000 | 27,   24,   26,   28,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, 0x80000000 | 30, 0x80000000 | 34,   33,   35,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 27,   37,   38,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 41, 0x80000000 | 43,   40,   42,   38,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 4,   45,   46,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Bool,    5,   48,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void MessageHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MessageHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { MessageCapsule _r = _t->loginRequest((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< MessageCapsule*>(_a[0]) = std::move(_r); }  break;
        case 1: { MessageCapsule _r = _t->loginUnlock((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< MessageCapsule*>(_a[0]) = std::move(_r); }  break;
        case 2: { MessageCapsule _r = _t->accountCreate((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QImage(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< MessageCapsule*>(_a[0]) = std::move(_r); }  break;
        case 3: { MessageCapsule _r = _t->accountUpdate((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QImage(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< MessageCapsule*>(_a[0]) = std::move(_r); }  break;
        case 4: { MessageCapsule _r = _t->documentCreate((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< MessageCapsule*>(_a[0]) = std::move(_r); }  break;
        case 5: { MessageCapsule _r = _t->documentOpen((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< URI(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< MessageCapsule*>(_a[0]) = std::move(_r); }  break;
        case 6: { MessageCapsule _r = _t->documentOpen((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< URI(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< MessageCapsule*>(_a[0]) = std::move(_r); }  break;
        case 7: { MessageCapsule _r = _t->documentRemove((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< URI(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< MessageCapsule*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->charsInsert((*reinterpret_cast< QVector<Symbol>(*)>(_a[1])),(*reinterpret_cast< TextBlockID(*)>(_a[2])),(*reinterpret_cast< QTextBlockFormat(*)>(_a[3]))); break;
        case 9: _t->charsDelete((*reinterpret_cast< QVector<Position>(*)>(_a[1]))); break;
        case 10: _t->charsFormat((*reinterpret_cast< QVector<Position>(*)>(_a[1])),(*reinterpret_cast< QVector<QTextCharFormat>(*)>(_a[2]))); break;
        case 11: _t->blockEdit((*reinterpret_cast< TextBlockID(*)>(_a[1])),(*reinterpret_cast< QTextBlockFormat(*)>(_a[2]))); break;
        case 12: _t->listEdit((*reinterpret_cast< TextBlockID(*)>(_a[1])),(*reinterpret_cast< TextListID(*)>(_a[2])),(*reinterpret_cast< QTextListFormat(*)>(_a[3]))); break;
        case 13: _t->messageDispatch((*reinterpret_cast< MessageCapsule(*)>(_a[1])),(*reinterpret_cast< QSslSocket*(*)>(_a[2]))); break;
        case 14: _t->documentClose((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 15: _t->documentClose((*reinterpret_cast< QSslSocket*(*)>(_a[1]))); break;
        case 16: _t->userLogout((*reinterpret_cast< QSslSocket*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslSocket* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslSocket* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslSocket* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslSocket* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslSocket* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslSocket* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< URI >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslSocket* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< URI >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslSocket* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< URI >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<Symbol> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TextBlockID >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<Position> >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<Position> >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TextBlockID >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TextBlockID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TextListID >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslSocket* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslSocket* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslSocket* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslSocket* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = MessageCapsule (MessageHandler::*)(QSslSocket * , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageHandler::loginRequest)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = MessageCapsule (MessageHandler::*)(QSslSocket * , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageHandler::loginUnlock)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = MessageCapsule (MessageHandler::*)(QSslSocket * , QString , QString , QImage , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageHandler::accountCreate)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = MessageCapsule (MessageHandler::*)(QSslSocket * , QString , QImage , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageHandler::accountUpdate)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = MessageCapsule (MessageHandler::*)(QSslSocket * , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageHandler::documentCreate)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = MessageCapsule (MessageHandler::*)(QSslSocket * , URI , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageHandler::documentOpen)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = MessageCapsule (MessageHandler::*)(QSslSocket * , URI );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageHandler::documentRemove)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MessageHandler::*)(QVector<Symbol> , TextBlockID , QTextBlockFormat );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageHandler::charsInsert)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MessageHandler::*)(QVector<Position> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageHandler::charsDelete)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MessageHandler::*)(QVector<Position> , QVector<QTextCharFormat> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageHandler::charsFormat)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MessageHandler::*)(TextBlockID , QTextBlockFormat );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageHandler::blockEdit)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MessageHandler::*)(TextBlockID , TextListID , QTextListFormat );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageHandler::listEdit)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MessageHandler::*)(MessageCapsule , QSslSocket * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageHandler::messageDispatch)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MessageHandler::*)(QSslSocket * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageHandler::documentClose)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (MessageHandler::*)(QSslSocket * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageHandler::userLogout)) {
                *result = 16;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MessageHandler::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MessageHandler.data,
    qt_meta_data_MessageHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MessageHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MessageHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MessageHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MessageHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
MessageCapsule MessageHandler::loginRequest(QSslSocket * _t1, QString _t2)
{
    MessageCapsule _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
MessageCapsule MessageHandler::loginUnlock(QSslSocket * _t1, QByteArray _t2)
{
    MessageCapsule _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 2
MessageCapsule MessageHandler::accountCreate(QSslSocket * _t1, QString _t2, QString _t3, QImage _t4, QString _t5)
{
    MessageCapsule _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
    return _t0;
}

// SIGNAL 3
MessageCapsule MessageHandler::accountUpdate(QSslSocket * _t1, QString _t2, QImage _t3, QString _t4)
{
    MessageCapsule _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
    return _t0;
}

// SIGNAL 4
MessageCapsule MessageHandler::documentCreate(QSslSocket * _t1, QString _t2)
{
    MessageCapsule _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
    return _t0;
}

// SIGNAL 5
MessageCapsule MessageHandler::documentOpen(QSslSocket * _t1, URI _t2, bool _t3)
{
    MessageCapsule _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
    return _t0;
}

// SIGNAL 7
MessageCapsule MessageHandler::documentRemove(QSslSocket * _t1, URI _t2)
{
    MessageCapsule _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
    return _t0;
}

// SIGNAL 8
void MessageHandler::charsInsert(QVector<Symbol> _t1, TextBlockID _t2, QTextBlockFormat _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MessageHandler::charsDelete(QVector<Position> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MessageHandler::charsFormat(QVector<Position> _t1, QVector<QTextCharFormat> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MessageHandler::blockEdit(TextBlockID _t1, QTextBlockFormat _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MessageHandler::listEdit(TextBlockID _t1, TextListID _t2, QTextListFormat _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MessageHandler::messageDispatch(MessageCapsule _t1, QSslSocket * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MessageHandler::documentClose(QSslSocket * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 16
void MessageHandler::userLogout(QSslSocket * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
