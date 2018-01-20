/****************************************************************************
** Meta object code from reading C++ file 'qhttpabstracts.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../external/qhttp/src/qhttpabstracts.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhttpabstracts.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qhttp__QHttpAbstractInput_t {
    QByteArrayData data[4];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qhttp__QHttpAbstractInput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qhttp__QHttpAbstractInput_t qt_meta_stringdata_qhttp__QHttpAbstractInput = {
    {
QT_MOC_LITERAL(0, 0, 25), // "qhttp::QHttpAbstractInput"
QT_MOC_LITERAL(1, 26, 4), // "data"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 3) // "end"

    },
    "qhttp::QHttpAbstractInput\0data\0\0end"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qhttp__QHttpAbstractInput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       3,    0,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    1,
    QMetaType::Void,

       0        // eod
};

void qhttp::QHttpAbstractInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHttpAbstractInput *_t = static_cast<QHttpAbstractInput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->data((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->end(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QHttpAbstractInput::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHttpAbstractInput::data)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QHttpAbstractInput::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHttpAbstractInput::end)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject qhttp::QHttpAbstractInput::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qhttp__QHttpAbstractInput.data,
      qt_meta_data_qhttp__QHttpAbstractInput,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qhttp::QHttpAbstractInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qhttp::QHttpAbstractInput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qhttp__QHttpAbstractInput.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qhttp::QHttpAbstractInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void qhttp::QHttpAbstractInput::data(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qhttp::QHttpAbstractInput::end()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_qhttp__QHttpAbstractOutput_t {
    QByteArrayData data[5];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qhttp__QHttpAbstractOutput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qhttp__QHttpAbstractOutput_t qt_meta_stringdata_qhttp__QHttpAbstractOutput = {
    {
QT_MOC_LITERAL(0, 0, 26), // "qhttp::QHttpAbstractOutput"
QT_MOC_LITERAL(1, 27, 15), // "allBytesWritten"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 4), // "done"
QT_MOC_LITERAL(4, 49, 16) // "wasTheLastPacket"

    },
    "qhttp::QHttpAbstractOutput\0allBytesWritten\0"
    "\0done\0wasTheLastPacket"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qhttp__QHttpAbstractOutput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    1,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void qhttp::QHttpAbstractOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHttpAbstractOutput *_t = static_cast<QHttpAbstractOutput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->allBytesWritten(); break;
        case 1: _t->done((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QHttpAbstractOutput::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHttpAbstractOutput::allBytesWritten)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QHttpAbstractOutput::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHttpAbstractOutput::done)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject qhttp::QHttpAbstractOutput::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qhttp__QHttpAbstractOutput.data,
      qt_meta_data_qhttp__QHttpAbstractOutput,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qhttp::QHttpAbstractOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qhttp::QHttpAbstractOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qhttp__QHttpAbstractOutput.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qhttp::QHttpAbstractOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void qhttp::QHttpAbstractOutput::allBytesWritten()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void qhttp::QHttpAbstractOutput::done(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
