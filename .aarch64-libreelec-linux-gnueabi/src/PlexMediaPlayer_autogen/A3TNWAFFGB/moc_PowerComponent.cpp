/****************************************************************************
** Meta object code from reading C++ file 'PowerComponent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/power/PowerComponent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PowerComponent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PowerComponent_t {
    QByteArrayData data[17];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PowerComponent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PowerComponent_t qt_meta_stringdata_PowerComponent = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PowerComponent"
QT_MOC_LITERAL(1, 15, 18), // "screenSaverEnabled"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 19), // "screenSaverDisabled"
QT_MOC_LITERAL(4, 55, 8), // "checkCap"
QT_MOC_LITERAL(5, 64, 17), // "PowerCapabilities"
QT_MOC_LITERAL(6, 82, 10), // "capability"
QT_MOC_LITERAL(7, 93, 11), // "canPowerOff"
QT_MOC_LITERAL(8, 105, 9), // "canReboot"
QT_MOC_LITERAL(9, 115, 10), // "canSuspend"
QT_MOC_LITERAL(10, 126, 11), // "canRelaunch"
QT_MOC_LITERAL(11, 138, 20), // "getPowerCapabilities"
QT_MOC_LITERAL(12, 159, 8), // "PowerOff"
QT_MOC_LITERAL(13, 168, 6), // "Reboot"
QT_MOC_LITERAL(14, 175, 7), // "Suspend"
QT_MOC_LITERAL(15, 183, 21), // "setScreensaverEnabled"
QT_MOC_LITERAL(16, 205, 7) // "enabled"

    },
    "PowerComponent\0screenSaverEnabled\0\0"
    "screenSaverDisabled\0checkCap\0"
    "PowerCapabilities\0capability\0canPowerOff\0"
    "canReboot\0canSuspend\0canRelaunch\0"
    "getPowerCapabilities\0PowerOff\0Reboot\0"
    "Suspend\0setScreensaverEnabled\0enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PowerComponent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   76,    2, 0x0a /* Public */,
       7,    0,   79,    2, 0x0a /* Public */,
       8,    0,   80,    2, 0x0a /* Public */,
       9,    0,   81,    2, 0x0a /* Public */,
      10,    0,   82,    2, 0x0a /* Public */,
      11,    0,   83,    2, 0x0a /* Public */,
      12,    0,   84,    2, 0x0a /* Public */,
      13,    0,   85,    2, 0x0a /* Public */,
      14,    0,   86,    2, 0x0a /* Public */,
      15,    1,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 5,    6,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Int,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   16,

       0        // eod
};

void PowerComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PowerComponent *_t = static_cast<PowerComponent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->screenSaverEnabled(); break;
        case 1: _t->screenSaverDisabled(); break;
        case 2: { bool _r = _t->checkCap((*reinterpret_cast< PowerCapabilities(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->canPowerOff();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->canReboot();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->canSuspend();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->canRelaunch();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { int _r = _t->getPowerCapabilities();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->PowerOff();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->Reboot();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->Suspend();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->setScreensaverEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PowerComponent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PowerComponent::screenSaverEnabled)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PowerComponent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PowerComponent::screenSaverDisabled)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject PowerComponent::staticMetaObject = {
    { &ComponentBase::staticMetaObject, qt_meta_stringdata_PowerComponent.data,
      qt_meta_data_PowerComponent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PowerComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PowerComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PowerComponent.stringdata0))
        return static_cast<void*>(this);
    return ComponentBase::qt_metacast(_clname);
}

int PowerComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComponentBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void PowerComponent::screenSaverEnabled()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PowerComponent::screenSaverDisabled()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
