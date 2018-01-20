/****************************************************************************
** Meta object code from reading C++ file 'SettingsComponent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/settings/SettingsComponent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SettingsComponent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsComponent_t {
    QByteArrayData data[24];
    char stringdata0[279];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsComponent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsComponent_t qt_meta_stringdata_SettingsComponent = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SettingsComponent"
QT_MOC_LITERAL(1, 18, 11), // "groupUpdate"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "section"
QT_MOC_LITERAL(4, 39, 11), // "description"
QT_MOC_LITERAL(5, 51, 18), // "sectionValueUpdate"
QT_MOC_LITERAL(6, 70, 6), // "values"
QT_MOC_LITERAL(7, 77, 19), // "cycleSettingCommand"
QT_MOC_LITERAL(8, 97, 4), // "args"
QT_MOC_LITERAL(9, 102, 17), // "setSettingCommand"
QT_MOC_LITERAL(10, 120, 8), // "setValue"
QT_MOC_LITERAL(11, 129, 9), // "sectionID"
QT_MOC_LITERAL(12, 139, 3), // "key"
QT_MOC_LITERAL(13, 143, 5), // "value"
QT_MOC_LITERAL(14, 149, 9), // "setValues"
QT_MOC_LITERAL(15, 159, 7), // "options"
QT_MOC_LITERAL(16, 167, 9), // "allValues"
QT_MOC_LITERAL(17, 177, 11), // "removeValue"
QT_MOC_LITERAL(18, 189, 12), // "sectionOrKey"
QT_MOC_LITERAL(19, 202, 17), // "resetToDefaultAll"
QT_MOC_LITERAL(20, 220, 14), // "resetToDefault"
QT_MOC_LITERAL(21, 235, 19), // "settingDescriptions"
QT_MOC_LITERAL(22, 255, 15), // "getWebClientUrl"
QT_MOC_LITERAL(23, 271, 7) // "desktop"

    },
    "SettingsComponent\0groupUpdate\0\0section\0"
    "description\0sectionValueUpdate\0values\0"
    "cycleSettingCommand\0args\0setSettingCommand\0"
    "setValue\0sectionID\0key\0value\0setValues\0"
    "options\0allValues\0removeValue\0"
    "sectionOrKey\0resetToDefaultAll\0"
    "resetToDefault\0settingDescriptions\0"
    "getWebClientUrl\0desktop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsComponent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   84,    2, 0x06 /* Public */,
       5,    2,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   94,    2, 0x0a /* Public */,
       9,    1,   97,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      10,    3,  100,    2, 0x02 /* Public */,
      14,    1,  107,    2, 0x02 /* Public */,
      13,    2,  110,    2, 0x02 /* Public */,
      16,    1,  115,    2, 0x02 /* Public */,
      16,    0,  118,    2, 0x22 /* Public | MethodCloned */,
      17,    1,  119,    2, 0x02 /* Public */,
      19,    0,  122,    2, 0x02 /* Public */,
      20,    1,  123,    2, 0x02 /* Public */,
      21,    0,  126,    2, 0x02 /* Public */,
      22,    1,  127,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap,    3,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QVariant,   11,   12,   13,
    QMetaType::Void, QMetaType::QVariantMap,   15,
    QMetaType::QVariant, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::QVariant, QMetaType::QString,    3,
    QMetaType::QVariant,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::QVariantList,
    QMetaType::QString, QMetaType::Bool,   23,

       0        // eod
};

void SettingsComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsComponent *_t = static_cast<SettingsComponent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->groupUpdate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 1: _t->sectionValueUpdate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 2: _t->cycleSettingCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setSettingCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setValue((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 5: _t->setValues((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 6: { QVariant _r = _t->value((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 7: { QVariant _r = _t->allValues((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 8: { QVariant _r = _t->allValues();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->removeValue((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->resetToDefaultAll(); break;
        case 11: _t->resetToDefault((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: { QVariantList _r = _t->settingDescriptions();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 13: { QString _r = _t->getWebClientUrl((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SettingsComponent::*_t)(const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsComponent::groupUpdate)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SettingsComponent::*_t)(const QString & , const QVariantMap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsComponent::sectionValueUpdate)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject SettingsComponent::staticMetaObject = {
    { &ComponentBase::staticMetaObject, qt_meta_stringdata_SettingsComponent.data,
      qt_meta_data_SettingsComponent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SettingsComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsComponent.stringdata0))
        return static_cast<void*>(this);
    return ComponentBase::qt_metacast(_clname);
}

int SettingsComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComponentBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void SettingsComponent::groupUpdate(const QString & _t1, const QVariant & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SettingsComponent::sectionValueUpdate(const QString & _t1, const QVariantMap & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
