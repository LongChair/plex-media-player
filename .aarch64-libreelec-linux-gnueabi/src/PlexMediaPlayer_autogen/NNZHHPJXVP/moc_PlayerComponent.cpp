/****************************************************************************
** Meta object code from reading C++ file 'PlayerComponent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/player/PlayerComponent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlayerComponent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlayerComponent_t {
    QByteArrayData data[74];
    char stringdata0[857];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlayerComponent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlayerComponent_t qt_meta_stringdata_PlayerComponent = {
    {
QT_MOC_LITERAL(0, 0, 15), // "PlayerComponent"
QT_MOC_LITERAL(1, 16, 7), // "playing"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 9), // "buffering"
QT_MOC_LITERAL(4, 35, 7), // "percent"
QT_MOC_LITERAL(5, 43, 6), // "paused"
QT_MOC_LITERAL(6, 50, 8), // "finished"
QT_MOC_LITERAL(7, 59, 8), // "canceled"
QT_MOC_LITERAL(8, 68, 5), // "error"
QT_MOC_LITERAL(9, 74, 3), // "msg"
QT_MOC_LITERAL(10, 78, 7), // "stopped"
QT_MOC_LITERAL(11, 86, 12), // "stateChanged"
QT_MOC_LITERAL(12, 99, 5), // "State"
QT_MOC_LITERAL(13, 105, 8), // "newState"
QT_MOC_LITERAL(14, 114, 8), // "oldState"
QT_MOC_LITERAL(15, 123, 19), // "videoPlaybackActive"
QT_MOC_LITERAL(16, 143, 6), // "active"
QT_MOC_LITERAL(17, 150, 13), // "windowVisible"
QT_MOC_LITERAL(18, 164, 7), // "visible"
QT_MOC_LITERAL(19, 172, 14), // "updateDuration"
QT_MOC_LITERAL(20, 187, 12), // "milliseconds"
QT_MOC_LITERAL(21, 200, 14), // "positionUpdate"
QT_MOC_LITERAL(22, 215, 22), // "onVideoRecangleChanged"
QT_MOC_LITERAL(23, 238, 11), // "onMpvEvents"
QT_MOC_LITERAL(24, 250, 21), // "setAudioConfiguration"
QT_MOC_LITERAL(25, 272, 21), // "updateAudioDeviceList"
QT_MOC_LITERAL(26, 294, 22), // "updateSubtitleSettings"
QT_MOC_LITERAL(27, 317, 19), // "updateVideoSettings"
QT_MOC_LITERAL(28, 337, 15), // "handleMpvEvents"
QT_MOC_LITERAL(29, 353, 16), // "onRestoreDisplay"
QT_MOC_LITERAL(30, 370, 19), // "onRefreshRateChange"
QT_MOC_LITERAL(31, 390, 19), // "onCodecsLoadingDone"
QT_MOC_LITERAL(32, 410, 14), // "CodecsFetcher*"
QT_MOC_LITERAL(33, 425, 6), // "sender"
QT_MOC_LITERAL(34, 432, 17), // "updateAudioDevice"
QT_MOC_LITERAL(35, 450, 4), // "load"
QT_MOC_LITERAL(36, 455, 3), // "url"
QT_MOC_LITERAL(37, 459, 7), // "options"
QT_MOC_LITERAL(38, 467, 8), // "metadata"
QT_MOC_LITERAL(39, 476, 11), // "audioStream"
QT_MOC_LITERAL(40, 488, 14), // "subtitleStream"
QT_MOC_LITERAL(41, 503, 10), // "queueMedia"
QT_MOC_LITERAL(42, 514, 10), // "clearQueue"
QT_MOC_LITERAL(43, 525, 6), // "seekTo"
QT_MOC_LITERAL(44, 532, 2), // "ms"
QT_MOC_LITERAL(45, 535, 4), // "stop"
QT_MOC_LITERAL(46, 540, 12), // "streamSwitch"
QT_MOC_LITERAL(47, 553, 5), // "pause"
QT_MOC_LITERAL(48, 559, 4), // "play"
QT_MOC_LITERAL(49, 564, 9), // "setVolume"
QT_MOC_LITERAL(50, 574, 6), // "volume"
QT_MOC_LITERAL(51, 581, 8), // "setMuted"
QT_MOC_LITERAL(52, 590, 5), // "muted"
QT_MOC_LITERAL(53, 596, 18), // "getAudioDeviceList"
QT_MOC_LITERAL(54, 615, 14), // "setAudioDevice"
QT_MOC_LITERAL(55, 630, 4), // "name"
QT_MOC_LITERAL(56, 635, 14), // "setAudioStream"
QT_MOC_LITERAL(57, 650, 17), // "setSubtitleStream"
QT_MOC_LITERAL(58, 668, 13), // "setAudioDelay"
QT_MOC_LITERAL(59, 682, 16), // "setSubtitleDelay"
QT_MOC_LITERAL(60, 699, 16), // "setVideoOnlyMode"
QT_MOC_LITERAL(61, 716, 6), // "enable"
QT_MOC_LITERAL(62, 723, 17), // "checkCodecSupport"
QT_MOC_LITERAL(63, 741, 5), // "codec"
QT_MOC_LITERAL(64, 747, 21), // "installedCodecDrivers"
QT_MOC_LITERAL(65, 769, 18), // "QList<CodecDriver>"
QT_MOC_LITERAL(66, 788, 22), // "installedDecoderCodecs"
QT_MOC_LITERAL(67, 811, 11), // "userCommand"
QT_MOC_LITERAL(68, 823, 7), // "command"
QT_MOC_LITERAL(69, 831, 17), // "setVideoRectangle"
QT_MOC_LITERAL(70, 849, 1), // "x"
QT_MOC_LITERAL(71, 851, 1), // "y"
QT_MOC_LITERAL(72, 853, 1), // "w"
QT_MOC_LITERAL(73, 855, 1) // "h"

    },
    "PlayerComponent\0playing\0\0buffering\0"
    "percent\0paused\0finished\0canceled\0error\0"
    "msg\0stopped\0stateChanged\0State\0newState\0"
    "oldState\0videoPlaybackActive\0active\0"
    "windowVisible\0visible\0updateDuration\0"
    "milliseconds\0positionUpdate\0"
    "onVideoRecangleChanged\0onMpvEvents\0"
    "setAudioConfiguration\0updateAudioDeviceList\0"
    "updateSubtitleSettings\0updateVideoSettings\0"
    "handleMpvEvents\0onRestoreDisplay\0"
    "onRefreshRateChange\0onCodecsLoadingDone\0"
    "CodecsFetcher*\0sender\0updateAudioDevice\0"
    "load\0url\0options\0metadata\0audioStream\0"
    "subtitleStream\0queueMedia\0clearQueue\0"
    "seekTo\0ms\0stop\0streamSwitch\0pause\0"
    "play\0setVolume\0volume\0setMuted\0muted\0"
    "getAudioDeviceList\0setAudioDevice\0"
    "name\0setAudioStream\0setSubtitleStream\0"
    "setAudioDelay\0setSubtitleDelay\0"
    "setVideoOnlyMode\0enable\0checkCodecSupport\0"
    "codec\0installedCodecDrivers\0"
    "QList<CodecDriver>\0installedDecoderCodecs\0"
    "userCommand\0command\0setVideoRectangle\0"
    "x\0y\0w\0h"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlayerComponent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  259,    2, 0x06 /* Public */,
       3,    1,  260,    2, 0x06 /* Public */,
       5,    0,  263,    2, 0x06 /* Public */,
       6,    0,  264,    2, 0x06 /* Public */,
       7,    0,  265,    2, 0x06 /* Public */,
       8,    1,  266,    2, 0x06 /* Public */,
      10,    0,  269,    2, 0x06 /* Public */,
      11,    2,  270,    2, 0x06 /* Public */,
      15,    1,  275,    2, 0x06 /* Public */,
      17,    1,  278,    2, 0x06 /* Public */,
      19,    1,  281,    2, 0x06 /* Public */,
      21,    1,  284,    2, 0x06 /* Public */,
      22,    0,  287,    2, 0x06 /* Public */,
      23,    0,  288,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    0,  289,    2, 0x0a /* Public */,
      25,    0,  290,    2, 0x0a /* Public */,
      26,    0,  291,    2, 0x0a /* Public */,
      27,    0,  292,    2, 0x0a /* Public */,
      28,    0,  293,    2, 0x08 /* Private */,
      29,    0,  294,    2, 0x08 /* Private */,
      30,    0,  295,    2, 0x08 /* Private */,
      31,    1,  296,    2, 0x08 /* Private */,
      34,    0,  299,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      35,    5,  300,    2, 0x02 /* Public */,
      35,    4,  311,    2, 0x22 /* Public | MethodCloned */,
      35,    3,  320,    2, 0x22 /* Public | MethodCloned */,
      41,    5,  327,    2, 0x02 /* Public */,
      42,    0,  338,    2, 0x02 /* Public */,
      43,    1,  339,    2, 0x02 /* Public */,
      45,    0,  342,    2, 0x02 /* Public */,
      46,    0,  343,    2, 0x02 /* Public */,
      47,    0,  344,    2, 0x02 /* Public */,
      48,    0,  345,    2, 0x02 /* Public */,
      49,    1,  346,    2, 0x02 /* Public */,
      50,    0,  349,    2, 0x02 /* Public */,
      51,    1,  350,    2, 0x02 /* Public */,
      52,    0,  353,    2, 0x02 /* Public */,
      53,    0,  354,    2, 0x02 /* Public */,
      54,    1,  355,    2, 0x02 /* Public */,
      56,    1,  358,    2, 0x02 /* Public */,
      57,    1,  361,    2, 0x02 /* Public */,
      58,    1,  364,    2, 0x02 /* Public */,
      59,    1,  367,    2, 0x02 /* Public */,
      60,    1,  370,    2, 0x02 /* Public */,
      62,    1,  373,    2, 0x02 /* Public */,
      64,    0,  376,    2, 0x02 /* Public */,
      66,    0,  377,    2, 0x02 /* Public */,
      67,    1,  378,    2, 0x02 /* Public */,
      69,    4,  381,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,   13,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::LongLong,   20,
    QMetaType::Void, QMetaType::ULongLong,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString, QMetaType::QVariantMap, QMetaType::QVariantMap, QMetaType::QString, QMetaType::QString,   36,   37,   38,   39,   40,
    QMetaType::Bool, QMetaType::QString, QMetaType::QVariantMap, QMetaType::QVariantMap, QMetaType::QString,   36,   37,   38,   39,
    QMetaType::Bool, QMetaType::QString, QMetaType::QVariantMap, QMetaType::QVariantMap,   36,   37,   38,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap, QMetaType::QVariantMap, QMetaType::QString, QMetaType::QString,   36,   37,   38,   39,   40,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   44,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   50,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Bool,   52,
    QMetaType::Bool,
    QMetaType::QVariant,
    QMetaType::Void, QMetaType::QString,   55,
    QMetaType::Void, QMetaType::QString,   39,
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void, QMetaType::LongLong,   20,
    QMetaType::Void, QMetaType::LongLong,   20,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::Bool, QMetaType::QString,   63,
    0x80000000 | 65,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::QString,   68,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   70,   71,   72,   73,

       0        // eod
};

void PlayerComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlayerComponent *_t = static_cast<PlayerComponent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->playing(); break;
        case 1: _t->buffering((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->paused(); break;
        case 3: _t->finished(); break;
        case 4: _t->canceled(); break;
        case 5: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->stopped(); break;
        case 7: _t->stateChanged((*reinterpret_cast< State(*)>(_a[1])),(*reinterpret_cast< State(*)>(_a[2]))); break;
        case 8: _t->videoPlaybackActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->windowVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->updateDuration((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 11: _t->positionUpdate((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 12: _t->onVideoRecangleChanged(); break;
        case 13: _t->onMpvEvents(); break;
        case 14: _t->setAudioConfiguration(); break;
        case 15: _t->updateAudioDeviceList(); break;
        case 16: _t->updateSubtitleSettings(); break;
        case 17: _t->updateVideoSettings(); break;
        case 18: _t->handleMpvEvents(); break;
        case 19: _t->onRestoreDisplay(); break;
        case 20: _t->onRefreshRateChange(); break;
        case 21: _t->onCodecsLoadingDone((*reinterpret_cast< CodecsFetcher*(*)>(_a[1]))); break;
        case 22: _t->updateAudioDevice(); break;
        case 23: { bool _r = _t->load((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])),(*reinterpret_cast< const QVariantMap(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 24: { bool _r = _t->load((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])),(*reinterpret_cast< const QVariantMap(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 25: { bool _r = _t->load((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])),(*reinterpret_cast< const QVariantMap(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: _t->queueMedia((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])),(*reinterpret_cast< const QVariantMap(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 27: _t->clearQueue(); break;
        case 28: _t->seekTo((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 29: _t->stop(); break;
        case 30: _t->streamSwitch(); break;
        case 31: _t->pause(); break;
        case 32: _t->play(); break;
        case 33: _t->setVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: { int _r = _t->volume();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 35: _t->setMuted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: { bool _r = _t->muted();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 37: { QVariant _r = _t->getAudioDeviceList();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 38: _t->setAudioDevice((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 39: _t->setAudioStream((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 40: _t->setSubtitleStream((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 41: _t->setAudioDelay((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 42: _t->setSubtitleDelay((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 43: _t->setVideoOnlyMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: { bool _r = _t->checkCodecSupport((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 45: { QList<CodecDriver> _r = _t->installedCodecDrivers();
            if (_a[0]) *reinterpret_cast< QList<CodecDriver>*>(_a[0]) = std::move(_r); }  break;
        case 46: { QStringList _r = _t->installedDecoderCodecs();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 47: _t->userCommand((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 48: _t->setVideoRectangle((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CodecsFetcher* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PlayerComponent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerComponent::playing)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PlayerComponent::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerComponent::buffering)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PlayerComponent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerComponent::paused)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PlayerComponent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerComponent::finished)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PlayerComponent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerComponent::canceled)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (PlayerComponent::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerComponent::error)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (PlayerComponent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerComponent::stopped)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (PlayerComponent::*_t)(State , State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerComponent::stateChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (PlayerComponent::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerComponent::videoPlaybackActive)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (PlayerComponent::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerComponent::windowVisible)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (PlayerComponent::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerComponent::updateDuration)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (PlayerComponent::*_t)(quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerComponent::positionUpdate)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (PlayerComponent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerComponent::onVideoRecangleChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (PlayerComponent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerComponent::onMpvEvents)) {
                *result = 13;
                return;
            }
        }
    }
}

const QMetaObject PlayerComponent::staticMetaObject = {
    { &ComponentBase::staticMetaObject, qt_meta_stringdata_PlayerComponent.data,
      qt_meta_data_PlayerComponent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PlayerComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayerComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlayerComponent.stringdata0))
        return static_cast<void*>(this);
    return ComponentBase::qt_metacast(_clname);
}

int PlayerComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComponentBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    }
    return _id;
}

// SIGNAL 0
void PlayerComponent::playing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PlayerComponent::buffering(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PlayerComponent::paused()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PlayerComponent::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PlayerComponent::canceled()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PlayerComponent::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PlayerComponent::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void PlayerComponent::stateChanged(State _t1, State _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PlayerComponent::videoPlaybackActive(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void PlayerComponent::windowVisible(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void PlayerComponent::updateDuration(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void PlayerComponent::positionUpdate(quint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void PlayerComponent::onVideoRecangleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void PlayerComponent::onMpvEvents()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
