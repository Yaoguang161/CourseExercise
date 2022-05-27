/****************************************************************************
** Meta object code from reading C++ file 'whotel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../whotel.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'whotel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_whotel_t {
    const uint offsetsAndSize[22];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_whotel_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_whotel_t qt_meta_stringdata_whotel = {
    {
QT_MOC_LITERAL(0, 6), // "whotel"
QT_MOC_LITERAL(7, 13), // "SaveAndLogout"
QT_MOC_LITERAL(21, 0), // ""
QT_MOC_LITERAL(22, 12), // "ShowRoomInfo"
QT_MOC_LITERAL(35, 17), // "InitialRoomHeader"
QT_MOC_LITERAL(53, 10), // "ChangeRoom"
QT_MOC_LITERAL(64, 7), // "CheckIn"
QT_MOC_LITERAL(72, 8), // "CheckOut"
QT_MOC_LITERAL(81, 13), // "ShowOrderInfo"
QT_MOC_LITERAL(95, 12), // "InitialOrder"
QT_MOC_LITERAL(108, 8) // "NewARoom"

    },
    "whotel\0SaveAndLogout\0\0ShowRoomInfo\0"
    "InitialRoomHeader\0ChangeRoom\0CheckIn\0"
    "CheckOut\0ShowOrderInfo\0InitialOrder\0"
    "NewARoom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_whotel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x0a,    1 /* Public */,
       3,    0,   69,    2, 0x0a,    2 /* Public */,
       4,    0,   70,    2, 0x0a,    3 /* Public */,
       5,    0,   71,    2, 0x0a,    4 /* Public */,
       6,    0,   72,    2, 0x0a,    5 /* Public */,
       7,    0,   73,    2, 0x0a,    6 /* Public */,
       8,    0,   74,    2, 0x0a,    7 /* Public */,
       9,    0,   75,    2, 0x0a,    8 /* Public */,
      10,    0,   76,    2, 0x0a,    9 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void whotel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<whotel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SaveAndLogout(); break;
        case 1: _t->ShowRoomInfo(); break;
        case 2: _t->InitialRoomHeader(); break;
        case 3: _t->ChangeRoom(); break;
        case 4: _t->CheckIn(); break;
        case 5: _t->CheckOut(); break;
        case 6: _t->ShowOrderInfo(); break;
        case 7: _t->InitialOrder(); break;
        case 8: _t->NewARoom(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject whotel::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_whotel.offsetsAndSize,
    qt_meta_data_whotel,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_whotel_t
, QtPrivate::TypeAndForceComplete<whotel, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *whotel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *whotel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_whotel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int whotel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
