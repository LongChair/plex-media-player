/****************************************************************************
** Meta object code from reading C++ file 'UpdaterComponent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/system/UpdaterComponent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UpdaterComponent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Update_t {
    QByteArrayData data[5];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Update_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Update_t qt_meta_stringdata_Update = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Update"
QT_MOC_LITERAL(1, 7, 8), // "fileDone"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 7), // "Update*"
QT_MOC_LITERAL(4, 25, 6) // "update"

    },
    "Update\0fileDone\0\0Update*\0update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Update[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Update::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Update *_t = static_cast<Update *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileDone((*reinterpret_cast< Update*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Update* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Update::*_t)(Update * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Update::fileDone)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Update::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Update.data,
      qt_meta_data_Update,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Update::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Update::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Update.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Update::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Update::fileDone(Update * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_UpdaterComponent_t {
    QByteArrayData data[21];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UpdaterComponent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UpdaterComponent_t qt_meta_stringdata_UpdaterComponent = {
    {
QT_MOC_LITERAL(0, 0, 16), // "UpdaterComponent"
QT_MOC_LITERAL(1, 17, 13), // "downloadError"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "error"
QT_MOC_LITERAL(4, 38, 16), // "downloadComplete"
QT_MOC_LITERAL(5, 55, 7), // "version"
QT_MOC_LITERAL(6, 63, 16), // "downloadProgress"
QT_MOC_LITERAL(7, 80, 13), // "bytesReceived"
QT_MOC_LITERAL(8, 94, 5), // "total"
QT_MOC_LITERAL(9, 100, 10), // "dlComplete"
QT_MOC_LITERAL(10, 111, 14), // "QNetworkReply*"
QT_MOC_LITERAL(11, 126, 5), // "reply"
QT_MOC_LITERAL(12, 132, 12), // "fileComplete"
QT_MOC_LITERAL(13, 145, 7), // "Update*"
QT_MOC_LITERAL(14, 153, 6), // "update"
QT_MOC_LITERAL(15, 160, 7), // "disable"
QT_MOC_LITERAL(16, 168, 14), // "downloadUpdate"
QT_MOC_LITERAL(17, 183, 10), // "updateInfo"
QT_MOC_LITERAL(18, 194, 14), // "checkForUpdate"
QT_MOC_LITERAL(19, 209, 19), // "startUpdateDownload"
QT_MOC_LITERAL(20, 229, 8) // "doUpdate"

    },
    "UpdaterComponent\0downloadError\0\0error\0"
    "downloadComplete\0version\0downloadProgress\0"
    "bytesReceived\0total\0dlComplete\0"
    "QNetworkReply*\0reply\0fileComplete\0"
    "Update*\0update\0disable\0downloadUpdate\0"
    "updateInfo\0checkForUpdate\0startUpdateDownload\0"
    "doUpdate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UpdaterComponent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       6,    2,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   75,    2, 0x08 /* Private */,
      12,    1,   78,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      15,    0,   81,    2, 0x02 /* Public */,
      16,    1,   82,    2, 0x02 /* Public */,
      18,    0,   85,    2, 0x02 /* Public */,
      19,    1,   86,    2, 0x02 /* Public */,
      20,    0,   89,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    7,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Bool, 0x80000000 | 13,   14,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantMap,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantHash,   17,
    QMetaType::Void,

       0        // eod
};

void UpdaterComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UpdaterComponent *_t = static_cast<UpdaterComponent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->downloadError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->downloadComplete((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: _t->dlComplete((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: { bool _r = _t->fileComplete((*reinterpret_cast< Update*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->disable(); break;
        case 6: _t->downloadUpdate((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 7: _t->checkForUpdate(); break;
        case 8: _t->startUpdateDownload((*reinterpret_cast< const QVariantHash(*)>(_a[1]))); break;
        case 9: _t->doUpdate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Update* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (UpdaterComponent::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdaterComponent::downloadError)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UpdaterComponent::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdaterComponent::downloadComplete)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (UpdaterComponent::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdaterComponent::downloadProgress)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject UpdaterComponent::staticMetaObject = {
    { &ComponentBase::staticMetaObject, qt_meta_stringdata_UpdaterComponent.data,
      qt_meta_data_UpdaterComponent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UpdaterComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UpdaterComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UpdaterComponent.stringdata0))
        return static_cast<void*>(this);
    return ComponentBase::qt_metacast(_clname);
}

int UpdaterComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComponentBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void UpdaterComponent::downloadError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UpdaterComponent::downloadComplete(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UpdaterComponent::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
