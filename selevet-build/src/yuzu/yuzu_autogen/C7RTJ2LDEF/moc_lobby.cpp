/****************************************************************************
** Meta object code from reading C++ file 'lobby.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../selevet-source/src/yuzu/multiplayer/lobby.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lobby.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5LobbyE_t {};
} // unnamed namespace

template <> constexpr inline auto Lobby::qt_create_metaobjectdata<qt_meta_tag_ZN5LobbyE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Lobby",
        "StateChanged",
        "",
        "Network::RoomMember::State",
        "SaveConfig",
        "RefreshLobby",
        "OnRefreshLobby",
        "OnExpandRoom",
        "QModelIndex",
        "OnJoinRoom"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'StateChanged'
        QtMocHelpers::SignalData<void(const Network::RoomMember::State &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'SaveConfig'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'RefreshLobby'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OnRefreshLobby'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnExpandRoom'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 2 },
        }}),
        // Slot 'OnJoinRoom'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Lobby, qt_meta_tag_ZN5LobbyE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Lobby::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5LobbyE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5LobbyE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5LobbyE_t>.metaTypes,
    nullptr
} };

void Lobby::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Lobby *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->StateChanged((*reinterpret_cast< std::add_pointer_t<Network::RoomMember::State>>(_a[1]))); break;
        case 1: _t->SaveConfig(); break;
        case 2: _t->RefreshLobby(); break;
        case 3: _t->OnRefreshLobby(); break;
        case 4: _t->OnExpandRoom((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 5: _t->OnJoinRoom((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Lobby::*)(const Network::RoomMember::State & )>(_a, &Lobby::StateChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Lobby::*)()>(_a, &Lobby::SaveConfig, 1))
            return;
    }
}

const QMetaObject *Lobby::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Lobby::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5LobbyE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Lobby::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Lobby::StateChanged(const Network::RoomMember::State & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Lobby::SaveConfig()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
namespace {
struct qt_meta_tag_ZN21LobbyFilterProxyModelE_t {};
} // unnamed namespace

template <> constexpr inline auto LobbyFilterProxyModel::qt_create_metaobjectdata<qt_meta_tag_ZN21LobbyFilterProxyModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "LobbyFilterProxyModel",
        "SetFilterOwned",
        "",
        "SetFilterEmpty",
        "SetFilterFull",
        "SetFilterSearch"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'SetFilterOwned'
        QtMocHelpers::SlotData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'SetFilterEmpty'
        QtMocHelpers::SlotData<void(bool)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'SetFilterFull'
        QtMocHelpers::SlotData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'SetFilterSearch'
        QtMocHelpers::SlotData<void(const QString &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<LobbyFilterProxyModel, qt_meta_tag_ZN21LobbyFilterProxyModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject LobbyFilterProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21LobbyFilterProxyModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21LobbyFilterProxyModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21LobbyFilterProxyModelE_t>.metaTypes,
    nullptr
} };

void LobbyFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LobbyFilterProxyModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->SetFilterOwned((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->SetFilterEmpty((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->SetFilterFull((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->SetFilterSearch((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *LobbyFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LobbyFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21LobbyFilterProxyModelE_t>.strings))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int LobbyFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
