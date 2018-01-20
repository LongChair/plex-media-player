/****************************************************************************
** Meta object code from reading C++ file 'InputSDL.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/input/InputSDL.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InputSDL.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InputSDLWorker_t {
    QByteArrayData data[10];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InputSDLWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InputSDLWorker_t qt_meta_stringdata_InputSDLWorker = {
    {
QT_MOC_LITERAL(0, 0, 14), // "InputSDLWorker"
QT_MOC_LITERAL(1, 15, 13), // "receivedInput"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 6), // "source"
QT_MOC_LITERAL(4, 37, 7), // "keycode"
QT_MOC_LITERAL(5, 45, 24), // "InputBase::InputkeyState"
QT_MOC_LITERAL(6, 70, 8), // "keyState"
QT_MOC_LITERAL(7, 79, 3), // "run"
QT_MOC_LITERAL(8, 83, 10), // "initialize"
QT_MOC_LITERAL(9, 94, 5) // "close"

    },
    "InputSDLWorker\0receivedInput\0\0source\0"
    "keycode\0InputBase::InputkeyState\0"
    "keyState\0run\0initialize\0close"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InputSDLWorker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   41,    2, 0x0a /* Public */,
       8,    0,   42,    2, 0x0a /* Public */,
       9,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 5,    3,    4,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,

       0        // eod
};

void InputSDLWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InputSDLWorker *_t = static_cast<InputSDLWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receivedInput((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< InputBase::InputkeyState(*)>(_a[3]))); break;
        case 1: _t->run(); break;
        case 2: { bool _r = _t->initialize();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->close(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (InputSDLWorker::*_t)(const QString & , const QString & , InputBase::InputkeyState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputSDLWorker::receivedInput)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject InputSDLWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_InputSDLWorker.data,
      qt_meta_data_InputSDLWorker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *InputSDLWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputSDLWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InputSDLWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int InputSDLWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void InputSDLWorker::receivedInput(const QString & _t1, const QString & _t2, InputBase::InputkeyState _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_InputSDL_t {
    QByteArrayData data[3];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InputSDL_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InputSDL_t qt_meta_stringdata_InputSDL = {
    {
QT_MOC_LITERAL(0, 0, 8), // "InputSDL"
QT_MOC_LITERAL(1, 9, 3), // "run"
QT_MOC_LITERAL(2, 13, 0) // ""

    },
    "InputSDL\0run\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InputSDL[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void InputSDL::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InputSDL *_t = static_cast<InputSDL *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->run(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (InputSDL::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputSDL::run)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject InputSDL::staticMetaObject = {
    { &InputBase::staticMetaObject, qt_meta_stringdata_InputSDL.data,
      qt_meta_data_InputSDL,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *InputSDL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputSDL::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InputSDL.stringdata0))
        return static_cast<void*>(this);
    return InputBase::qt_metacast(_clname);
}

int InputSDL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InputBase::qt_metacall(_c, _id, _a);
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
void InputSDL::run()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
