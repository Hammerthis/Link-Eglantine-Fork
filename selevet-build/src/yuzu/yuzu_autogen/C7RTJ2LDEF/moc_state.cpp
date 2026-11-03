/****************************************************************************
** Meta object code from reading C++ file 'state.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../selevet-source/src/yuzu/multiplayer/state.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'state.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN16MultiplayerStateE_t {};
} // unnamed namespace

template <> constexpr inline auto MultiplayerState::qt_create_metaobjectdata<qt_meta_tag_ZN16MultiplayerStateE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MultiplayerState",
        "NetworkStateChanged",
        "",
        "Network::RoomMember::State",
        "NetworkError",
        "Network::RoomMember::Error",
        "AnnounceFailed",
        "WebService::WebResult",
        "SaveConfig",
        "OnNetworkStateChanged",
        "state",
        "OnNetworkError",
        "error",
        "OnViewLobby",
        "OnCreateRoom",
        "OnCloseRoom",
        "OnOpenNetworkRoom",
        "OnDirectConnectToRoom",
        "OnAnnounceFailed",
        "OnSaveConfig",
        "UpdateThemedIcons",
        "ShowNotification",
        "HideNotification"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'NetworkStateChanged'
        QtMocHelpers::SignalData<void(const Network::RoomMember::State &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'NetworkError'
        QtMocHelpers::SignalData<void(const Network::RoomMember::Error &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Signal 'AnnounceFailed'
        QtMocHelpers::SignalData<void(const WebService::WebResult &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 2 },
        }}),
        // Signal 'SaveConfig'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OnNetworkStateChanged'
        QtMocHelpers::SlotData<void(const Network::RoomMember::State &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 10 },
        }}),
        // Slot 'OnNetworkError'
        QtMocHelpers::SlotData<void(const Network::RoomMember::Error &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 12 },
        }}),
        // Slot 'OnViewLobby'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OnCreateRoom'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OnCloseRoom'
        QtMocHelpers::SlotData<bool()>(15, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'OnOpenNetworkRoom'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OnDirectConnectToRoom'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OnAnnounceFailed'
        QtMocHelpers::SlotData<void(const WebService::WebResult &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 2 },
        }}),
        // Slot 'OnSaveConfig'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'UpdateThemedIcons'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ShowNotification'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'HideNotification'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MultiplayerState, qt_meta_tag_ZN16MultiplayerStateE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MultiplayerState::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16MultiplayerStateE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16MultiplayerStateE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16MultiplayerStateE_t>.metaTypes,
    nullptr
} };

void MultiplayerState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MultiplayerState *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->NetworkStateChanged((*reinterpret_cast< std::add_pointer_t<Network::RoomMember::State>>(_a[1]))); break;
        case 1: _t->NetworkError((*reinterpret_cast< std::add_pointer_t<Network::RoomMember::Error>>(_a[1]))); break;
        case 2: _t->AnnounceFailed((*reinterpret_cast< std::add_pointer_t<WebService::WebResult>>(_a[1]))); break;
        case 3: _t->SaveConfig(); break;
        case 4: _t->OnNetworkStateChanged((*reinterpret_cast< std::add_pointer_t<Network::RoomMember::State>>(_a[1]))); break;
        case 5: _t->OnNetworkError((*reinterpret_cast< std::add_pointer_t<Network::RoomMember::Error>>(_a[1]))); break;
        case 6: _t->OnViewLobby(); break;
        case 7: _t->OnCreateRoom(); break;
        case 8: { bool _r = _t->OnCloseRoom();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->OnOpenNetworkRoom(); break;
        case 10: _t->OnDirectConnectToRoom(); break;
        case 11: _t->OnAnnounceFailed((*reinterpret_cast< std::add_pointer_t<WebService::WebResult>>(_a[1]))); break;
        case 12: _t->OnSaveConfig(); break;
        case 13: _t->UpdateThemedIcons(); break;
        case 14: _t->ShowNotification(); break;
        case 15: _t->HideNotification(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< WebService::WebResult >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< WebService::WebResult >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MultiplayerState::*)(const Network::RoomMember::State & )>(_a, &MultiplayerState::NetworkStateChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MultiplayerState::*)(const Network::RoomMember::Error & )>(_a, &MultiplayerState::NetworkError, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MultiplayerState::*)(const WebService::WebResult & )>(_a, &MultiplayerState::AnnounceFailed, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MultiplayerState::*)()>(_a, &MultiplayerState::SaveConfig, 3))
            return;
    }
}

const QMetaObject *MultiplayerState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultiplayerState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16MultiplayerStateE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MultiplayerState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void MultiplayerState::NetworkStateChanged(const Network::RoomMember::State & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void MultiplayerState::NetworkError(const Network::RoomMember::Error & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void MultiplayerState::AnnounceFailed(const WebService::WebResult & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void MultiplayerState::SaveConfig()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
