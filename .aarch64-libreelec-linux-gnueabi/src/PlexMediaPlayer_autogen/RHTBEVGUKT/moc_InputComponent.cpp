/****************************************************************************
** Meta object code from reading C++ file 'InputComponent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/input/InputComponent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InputComponent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InputBase_t {
    QByteArrayData data[10];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InputBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InputBase_t qt_meta_stringdata_InputBase = {
    {
QT_MOC_LITERAL(0, 0, 9), // "InputBase"
QT_MOC_LITERAL(1, 10, 13), // "receivedInput"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 6), // "source"
QT_MOC_LITERAL(4, 32, 7), // "keycode"
QT_MOC_LITERAL(5, 40, 13), // "InputkeyState"
QT_MOC_LITERAL(6, 54, 8), // "keystate"
QT_MOC_LITERAL(7, 63, 7), // "KeyDown"
QT_MOC_LITERAL(8, 71, 5), // "KeyUp"
QT_MOC_LITERAL(9, 77, 10) // "KeyPressed"

    },
    "InputBase\0receivedInput\0\0source\0keycode\0"
    "InputkeyState\0keystate\0KeyDown\0KeyUp\0"
    "KeyPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InputBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       1,   26, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 5,    3,    4,    6,

 // enums: name, flags, count, data
       5, 0x0,    3,   30,

 // enum data: key, value
       7, uint(InputBase::KeyDown),
       8, uint(InputBase::KeyUp),
       9, uint(InputBase::KeyPressed),

       0        // eod
};

void InputBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InputBase *_t = static_cast<InputBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receivedInput((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< InputkeyState(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (InputBase::*_t)(const QString & , const QString & , InputkeyState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputBase::receivedInput)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject InputBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_InputBase.data,
      qt_meta_data_InputBase,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *InputBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InputBase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int InputBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void InputBase::receivedInput(const QString & _t1, const QString & _t2, InputkeyState _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_InputComponent_t {
    QByteArrayData data[11];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InputComponent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InputComponent_t qt_meta_stringdata_InputComponent = {
    {
QT_MOC_LITERAL(0, 0, 14), // "InputComponent"
QT_MOC_LITERAL(1, 15, 13), // "receivedInput"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "hostInput"
QT_MOC_LITERAL(4, 40, 7), // "actions"
QT_MOC_LITERAL(5, 48, 10), // "remapInput"
QT_MOC_LITERAL(6, 59, 6), // "source"
QT_MOC_LITERAL(7, 66, 7), // "keycode"
QT_MOC_LITERAL(8, 74, 24), // "InputBase::InputkeyState"
QT_MOC_LITERAL(9, 99, 8), // "keyState"
QT_MOC_LITERAL(10, 108, 14) // "executeActions"

    },
    "InputComponent\0receivedInput\0\0hostInput\0"
    "actions\0remapInput\0source\0keycode\0"
    "InputBase::InputkeyState\0keyState\0"
    "executeActions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InputComponent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    3,   38,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      10,    1,   45,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 8,    6,    7,    9,

 // methods: parameters
    QMetaType::Void, QMetaType::QStringList,    4,

       0        // eod
};

void InputComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InputComponent *_t = static_cast<InputComponent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receivedInput(); break;
        case 1: _t->hostInput((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: _t->remapInput((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< InputBase::InputkeyState(*)>(_a[3]))); break;
        case 3: _t->executeActions((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (InputComponent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputComponent::receivedInput)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (InputComponent::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputComponent::hostInput)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject InputComponent::staticMetaObject = {
    { &ComponentBase::staticMetaObject, qt_meta_stringdata_InputComponent.data,
      qt_meta_data_InputComponent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *InputComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InputComponent.stringdata0))
        return static_cast<void*>(this);
    return ComponentBase::qt_metacast(_clname);
}

int InputComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComponentBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void InputComponent::receivedInput()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void InputComponent::hostInput(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
