/****************************************************************************
** Meta object code from reading C++ file 'chat_room.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../selevet-source/src/yuzu/multiplayer/chat_room.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chat_room.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8ChatRoomE_t {};
} // unnamed namespace

template <> constexpr inline auto ChatRoom::qt_create_metaobjectdata<qt_meta_tag_ZN8ChatRoomE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ChatRoom",
        "ChatReceived",
        "",
        "Network::ChatEntry",
        "StatusMessageReceived",
        "Network::StatusMessageEntry",
        "UserPinged",
        "OnRoomUpdate",
        "Network::RoomInformation",
        "info",
        "OnChatReceive",
        "OnStatusMessageReceive",
        "OnSendChat",
        "OnChatTextChanged",
        "PopupContextMenu",
        "menu_location",
        "Disable",
        "Enable"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'ChatReceived'
        QtMocHelpers::SignalData<void(const Network::ChatEntry &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'StatusMessageReceived'
        QtMocHelpers::SignalData<void(const Network::StatusMessageEntry &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Signal 'UserPinged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OnRoomUpdate'
        QtMocHelpers::SlotData<void(const Network::RoomInformation &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'OnChatReceive'
        QtMocHelpers::SlotData<void(const Network::ChatEntry &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'OnStatusMessageReceive'
        QtMocHelpers::SlotData<void(const Network::StatusMessageEntry &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Slot 'OnSendChat'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OnChatTextChanged'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'PopupContextMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QPoint, 15 },
        }}),
        // Slot 'Disable'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'Enable'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ChatRoom, qt_meta_tag_ZN8ChatRoomE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ChatRoom::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8ChatRoomE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8ChatRoomE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8ChatRoomE_t>.metaTypes,
    nullptr
} };

void ChatRoom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ChatRoom *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->ChatReceived((*reinterpret_cast< std::add_pointer_t<Network::ChatEntry>>(_a[1]))); break;
        case 1: _t->StatusMessageReceived((*reinterpret_cast< std::add_pointer_t<Network::StatusMessageEntry>>(_a[1]))); break;
        case 2: _t->UserPinged(); break;
        case 3: _t->OnRoomUpdate((*reinterpret_cast< std::add_pointer_t<Network::RoomInformation>>(_a[1]))); break;
        case 4: _t->OnChatReceive((*reinterpret_cast< std::add_pointer_t<Network::ChatEntry>>(_a[1]))); break;
        case 5: _t->OnStatusMessageReceive((*reinterpret_cast< std::add_pointer_t<Network::StatusMessageEntry>>(_a[1]))); break;
        case 6: _t->OnSendChat(); break;
        case 7: _t->OnChatTextChanged(); break;
        case 8: _t->PopupContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 9: _t->Disable(); break;
        case 10: _t->Enable(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Network::ChatEntry >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Network::StatusMessageEntry >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Network::RoomInformation >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Network::ChatEntry >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Network::StatusMessageEntry >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ChatRoom::*)(const Network::ChatEntry & )>(_a, &ChatRoom::ChatReceived, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ChatRoom::*)(const Network::StatusMessageEntry & )>(_a, &ChatRoom::StatusMessageReceived, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ChatRoom::*)()>(_a, &ChatRoom::UserPinged, 2))
            return;
    }
}

const QMetaObject *ChatRoom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatRoom::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8ChatRoomE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ChatRoom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ChatRoom::ChatReceived(const Network::ChatEntry & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void ChatRoom::StatusMessageReceived(const Network::StatusMessageEntry & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void ChatRoom::UserPinged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
