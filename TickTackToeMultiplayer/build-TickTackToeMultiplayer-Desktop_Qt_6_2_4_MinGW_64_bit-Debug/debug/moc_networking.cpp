/****************************************************************************
** Meta object code from reading C++ file 'networking.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../TickTackToeMultiplayer-main/TickTackToeMultiplayer/networking.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networking.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Networking_t {
    const uint offsetsAndSize[20];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Networking_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Networking_t qt_meta_stringdata_Networking = {
    {
QT_MOC_LITERAL(0, 10), // "Networking"
QT_MOC_LITERAL(11, 11), // "messageSend"
QT_MOC_LITERAL(23, 0), // ""
QT_MOC_LITERAL(24, 22), // "connecttionEstablished"
QT_MOC_LITERAL(47, 7), // "ourTurn"
QT_MOC_LITERAL(55, 14), // "searchtimeOver"
QT_MOC_LITERAL(70, 18), // "playerDisconnected"
QT_MOC_LITERAL(89, 11), // "clearSocket"
QT_MOC_LITERAL(101, 12), // "catchMessage"
QT_MOC_LITERAL(114, 27) // "processNewConnectionRequest"

    },
    "Networking\0messageSend\0\0connecttionEstablished\0"
    "ourTurn\0searchtimeOver\0playerDisconnected\0"
    "clearSocket\0catchMessage\0"
    "processNewConnectionRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Networking[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    0,   63,    2, 0x06,    2 /* Public */,
       4,    1,   64,    2, 0x06,    3 /* Public */,
       5,    0,   67,    2, 0x06,    5 /* Public */,
       6,    0,   68,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   69,    2, 0x08,    7 /* Private */,
       8,    0,   70,    2, 0x08,    8 /* Private */,
       9,    0,   71,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Networking::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Networking *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->messageSend(); break;
        case 1: _t->connecttionEstablished(); break;
        case 2: _t->ourTurn((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->searchtimeOver(); break;
        case 4: _t->playerDisconnected(); break;
        case 5: _t->clearSocket(); break;
        case 6: _t->catchMessage(); break;
        case 7: _t->processNewConnectionRequest(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Networking::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Networking::messageSend)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Networking::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Networking::connecttionEstablished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Networking::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Networking::ourTurn)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Networking::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Networking::searchtimeOver)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Networking::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Networking::playerDisconnected)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject Networking::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Networking.offsetsAndSize,
    qt_meta_data_Networking,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Networking_t
, QtPrivate::TypeAndForceComplete<Networking, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Networking::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Networking::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Networking.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Networking::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Networking::messageSend()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Networking::connecttionEstablished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Networking::ourTurn(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Networking::searchtimeOver()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Networking::playerDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
