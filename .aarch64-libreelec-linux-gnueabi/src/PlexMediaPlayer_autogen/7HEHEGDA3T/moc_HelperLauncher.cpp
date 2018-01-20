/****************************************************************************
** Meta object code from reading C++ file 'HelperLauncher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/utils/HelperLauncher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HelperLauncher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HelperLauncher_t {
    QByteArrayData data[11];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HelperLauncher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HelperLauncher_t qt_meta_stringdata_HelperLauncher = {
    {
QT_MOC_LITERAL(0, 0, 14), // "HelperLauncher"
QT_MOC_LITERAL(1, 15, 10), // "gotMessage"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 7), // "message"
QT_MOC_LITERAL(4, 35, 11), // "socketError"
QT_MOC_LITERAL(5, 47, 30), // "QLocalSocket::LocalSocketError"
QT_MOC_LITERAL(6, 78, 5), // "error"
QT_MOC_LITERAL(7, 84, 10), // "didConnect"
QT_MOC_LITERAL(8, 95, 6), // "launch"
QT_MOC_LITERAL(9, 102, 16), // "socketDisconnect"
QT_MOC_LITERAL(10, 119, 10) // "killHelper"

    },
    "HelperLauncher\0gotMessage\0\0message\0"
    "socketError\0QLocalSocket::LocalSocketError\0"
    "error\0didConnect\0launch\0socketDisconnect\0"
    "killHelper"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HelperLauncher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    1,   47,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,
       9,    0,   52,    2, 0x08 /* Private */,
      10,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantMap,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,

       0        // eod
};

void HelperLauncher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HelperLauncher *_t = static_cast<HelperLauncher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gotMessage((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 1: _t->socketError((*reinterpret_cast< QLocalSocket::LocalSocketError(*)>(_a[1]))); break;
        case 2: _t->didConnect(); break;
        case 3: _t->launch(); break;
        case 4: _t->socketDisconnect(); break;
        case 5: { bool _r = _t->killHelper();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject HelperLauncher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HelperLauncher.data,
      qt_meta_data_HelperLauncher,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *HelperLauncher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HelperLauncher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HelperLauncher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HelperLauncher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
