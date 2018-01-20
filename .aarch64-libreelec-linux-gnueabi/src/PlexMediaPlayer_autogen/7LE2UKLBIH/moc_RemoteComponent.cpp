/****************************************************************************
** Meta object code from reading C++ file 'RemoteComponent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/remote/RemoteComponent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RemoteComponent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RemoteComponent_t {
    QByteArrayData data[15];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RemoteComponent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RemoteComponent_t qt_meta_stringdata_RemoteComponent = {
    {
QT_MOC_LITERAL(0, 0, 15), // "RemoteComponent"
QT_MOC_LITERAL(1, 16, 15), // "commandReceived"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "commandInfo"
QT_MOC_LITERAL(4, 45, 16), // "checkSubscribers"
QT_MOC_LITERAL(5, 62, 16), // "timelineFinished"
QT_MOC_LITERAL(6, 79, 14), // "QNetworkReply*"
QT_MOC_LITERAL(7, 94, 5), // "reply"
QT_MOC_LITERAL(8, 100, 12), // "responseDone"
QT_MOC_LITERAL(9, 113, 15), // "commandResponse"
QT_MOC_LITERAL(10, 129, 17), // "responseArguments"
QT_MOC_LITERAL(11, 147, 12), // "resourceInfo"
QT_MOC_LITERAL(12, 160, 14), // "timelineUpdate"
QT_MOC_LITERAL(13, 175, 9), // "commandID"
QT_MOC_LITERAL(14, 185, 8) // "timeline"

    },
    "RemoteComponent\0commandReceived\0\0"
    "commandInfo\0checkSubscribers\0"
    "timelineFinished\0QNetworkReply*\0reply\0"
    "responseDone\0commandResponse\0"
    "responseArguments\0resourceInfo\0"
    "timelineUpdate\0commandID\0timeline"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RemoteComponent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   52,    2, 0x08 /* Private */,
       5,    1,   53,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       9,    1,   57,    2, 0x02 /* Public */,
      11,    0,   60,    2, 0x02 /* Public */,
      12,    2,   61,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariantMap,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QVariantMap,   10,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::QString,   13,   14,

       0        // eod
};

void RemoteComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RemoteComponent *_t = static_cast<RemoteComponent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->commandReceived((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 1: _t->checkSubscribers(); break;
        case 2: _t->timelineFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->responseDone(); break;
        case 4: _t->commandResponse((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 5: { QVariantMap _r = _t->resourceInfo();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->timelineUpdate((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (RemoteComponent::*_t)(const QVariantMap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteComponent::commandReceived)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject RemoteComponent::staticMetaObject = {
    { &ComponentBase::staticMetaObject, qt_meta_stringdata_RemoteComponent.data,
      qt_meta_data_RemoteComponent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RemoteComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemoteComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RemoteComponent.stringdata0))
        return static_cast<void*>(this);
    return ComponentBase::qt_metacast(_clname);
}

int RemoteComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComponentBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void RemoteComponent::commandReceived(const QVariantMap & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
