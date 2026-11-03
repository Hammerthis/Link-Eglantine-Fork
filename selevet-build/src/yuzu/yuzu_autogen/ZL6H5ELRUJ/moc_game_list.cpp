/****************************************************************************
** Meta object code from reading C++ file 'game_list.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../selevet-source/src/yuzu/game/game_list.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'game_list.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8GameListE_t {};
} // unnamed namespace

template <> constexpr inline auto GameList::qt_create_metaobjectdata<qt_meta_tag_ZN8GameListE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GameList",
        "BootGame",
        "",
        "game_path",
        "StartGameType",
        "type",
        "GameChosen",
        "u64",
        "title_id",
        "OpenFolderRequested",
        "program_id",
        "GameListOpenTarget",
        "target",
        "std::string",
        "OpenTransferableShaderCacheRequested",
        "RemoveInstalledEntryRequested",
        "QtCommon::Game::InstalledEntryType",
        "RemoveFileRequested",
        "QtCommon::Game::GameListRemoveTarget",
        "RemovePlayTimeRequested",
        "SetPlayTimeRequested",
        "DumpRomFSRequested",
        "DumpRomFSTarget",
        "VerifyIntegrityRequested",
        "ConvertToNupRequested",
        "CopyTIDRequested",
        "CreateShortcut",
        "QtCommon::Game::ShortcutTarget",
        "OpenPerGameGeneralRequested",
        "file",
        "LinkToRyujinxRequested",
        "OpenDirectory",
        "directory",
        "AddDirectory",
        "ShowList",
        "show",
        "PopulatingCompleted",
        "SaveConfig",
        "SetNupConversionRunning",
        "running",
        "RefreshGameDirectory",
        "RefreshExternalContent",
        "UpdateIconSizes",
        "OnPopulate",
        "OnTextChanged",
        "new_text",
        "OnFilterCloseClicked",
        "OnPopulatingCompleted",
        "watch_list"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'BootGame'
        QtMocHelpers::SignalData<void(const QString &, StartGameType)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 4, 5 },
        }}),
        // Signal 'GameChosen'
        QtMocHelpers::SignalData<void(const QString &, const u64)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'GameChosen'
        QtMocHelpers::SignalData<void(const QString &)>(6, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'OpenFolderRequested'
        QtMocHelpers::SignalData<void(u64, GameListOpenTarget, const std::string &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 10 }, { 0x80000000 | 11, 12 }, { 0x80000000 | 13, 3 },
        }}),
        // Signal 'OpenTransferableShaderCacheRequested'
        QtMocHelpers::SignalData<void(u64)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 10 },
        }}),
        // Signal 'RemoveInstalledEntryRequested'
        QtMocHelpers::SignalData<void(u64, QtCommon::Game::InstalledEntryType)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 10 }, { 0x80000000 | 16, 5 },
        }}),
        // Signal 'RemoveFileRequested'
        QtMocHelpers::SignalData<void(u64, QtCommon::Game::GameListRemoveTarget, const std::string &)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 10 }, { 0x80000000 | 18, 12 }, { 0x80000000 | 13, 3 },
        }}),
        // Signal 'RemovePlayTimeRequested'
        QtMocHelpers::SignalData<void(u64)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 10 },
        }}),
        // Signal 'SetPlayTimeRequested'
        QtMocHelpers::SignalData<void(u64)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 10 },
        }}),
        // Signal 'DumpRomFSRequested'
        QtMocHelpers::SignalData<void(u64, const std::string &, DumpRomFSTarget)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 10 }, { 0x80000000 | 13, 3 }, { 0x80000000 | 22, 12 },
        }}),
        // Signal 'VerifyIntegrityRequested'
        QtMocHelpers::SignalData<void(const std::string &)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 3 },
        }}),
        // Signal 'ConvertToNupRequested'
        QtMocHelpers::SignalData<void(const std::string &)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 3 },
        }}),
        // Signal 'CopyTIDRequested'
        QtMocHelpers::SignalData<void(u64)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 10 },
        }}),
        // Signal 'CreateShortcut'
        QtMocHelpers::SignalData<void(u64, const std::string &, const QtCommon::Game::ShortcutTarget)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 10 }, { 0x80000000 | 13, 3 }, { 0x80000000 | 27, 12 },
        }}),
        // Signal 'OpenPerGameGeneralRequested'
        QtMocHelpers::SignalData<void(const std::string &)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 29 },
        }}),
        // Signal 'LinkToRyujinxRequested'
        QtMocHelpers::SignalData<void(const u64 &)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 10 },
        }}),
        // Signal 'OpenDirectory'
        QtMocHelpers::SignalData<void(const QString &)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 32 },
        }}),
        // Signal 'AddDirectory'
        QtMocHelpers::SignalData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ShowList'
        QtMocHelpers::SignalData<void(bool)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 35 },
        }}),
        // Signal 'PopulatingCompleted'
        QtMocHelpers::SignalData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'SaveConfig'
        QtMocHelpers::SignalData<void()>(37, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SetNupConversionRunning'
        QtMocHelpers::SlotData<void(bool)>(38, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 39 },
        }}),
        // Slot 'RefreshGameDirectory'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'RefreshExternalContent'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'UpdateIconSizes'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OnPopulate'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OnTextChanged'
        QtMocHelpers::SlotData<void(const QString &)>(44, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 45 },
        }}),
        // Slot 'OnFilterCloseClicked'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnPopulatingCompleted'
        QtMocHelpers::SlotData<void(const QStringList &)>(47, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QStringList, 48 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GameList, qt_meta_tag_ZN8GameListE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GameList::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8GameListE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8GameListE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8GameListE_t>.metaTypes,
    nullptr
} };

void GameList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GameList *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->BootGame((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<StartGameType>>(_a[2]))); break;
        case 1: _t->GameChosen((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<u64>>(_a[2]))); break;
        case 2: _t->GameChosen((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->OpenFolderRequested((*reinterpret_cast< std::add_pointer_t<u64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<GameListOpenTarget>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<std::string>>(_a[3]))); break;
        case 4: _t->OpenTransferableShaderCacheRequested((*reinterpret_cast< std::add_pointer_t<u64>>(_a[1]))); break;
        case 5: _t->RemoveInstalledEntryRequested((*reinterpret_cast< std::add_pointer_t<u64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QtCommon::Game::InstalledEntryType>>(_a[2]))); break;
        case 6: _t->RemoveFileRequested((*reinterpret_cast< std::add_pointer_t<u64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QtCommon::Game::GameListRemoveTarget>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<std::string>>(_a[3]))); break;
        case 7: _t->RemovePlayTimeRequested((*reinterpret_cast< std::add_pointer_t<u64>>(_a[1]))); break;
        case 8: _t->SetPlayTimeRequested((*reinterpret_cast< std::add_pointer_t<u64>>(_a[1]))); break;
        case 9: _t->DumpRomFSRequested((*reinterpret_cast< std::add_pointer_t<u64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::string>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<DumpRomFSTarget>>(_a[3]))); break;
        case 10: _t->VerifyIntegrityRequested((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1]))); break;
        case 11: _t->ConvertToNupRequested((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1]))); break;
        case 12: _t->CopyTIDRequested((*reinterpret_cast< std::add_pointer_t<u64>>(_a[1]))); break;
        case 13: _t->CreateShortcut((*reinterpret_cast< std::add_pointer_t<u64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::string>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QtCommon::Game::ShortcutTarget>>(_a[3]))); break;
        case 14: _t->OpenPerGameGeneralRequested((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1]))); break;
        case 15: _t->LinkToRyujinxRequested((*reinterpret_cast< std::add_pointer_t<u64>>(_a[1]))); break;
        case 16: _t->OpenDirectory((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->AddDirectory(); break;
        case 18: _t->ShowList((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->PopulatingCompleted(); break;
        case 20: _t->SaveConfig(); break;
        case 21: _t->SetNupConversionRunning((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->RefreshGameDirectory(); break;
        case 23: _t->RefreshExternalContent(); break;
        case 24: _t->UpdateIconSizes(); break;
        case 25: _t->OnPopulate(); break;
        case 26: _t->OnTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->OnFilterCloseClicked(); break;
        case 28: _t->OnPopulatingCompleted((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (GameList::*)(const QString & , StartGameType )>(_a, &GameList::BootGame, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (GameList::*)(const QString & , const u64 )>(_a, &GameList::GameChosen, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (GameList::*)(u64 , GameListOpenTarget , const std::string & )>(_a, &GameList::OpenFolderRequested, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (GameList::*)(u64 )>(_a, &GameList::OpenTransferableShaderCacheRequested, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (GameList::*)(u64 , QtCommon::Game::InstalledEntryType )>(_a, &GameList::RemoveInstalledEntryRequested, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (GameList::*)(u64 , QtCommon::Game::GameListRemoveTarget , const std::string & )>(_a, &GameList::RemoveFileRequested, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (GameList::*)(u64 )>(_a, &GameList::RemovePlayTimeRequested, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (GameList::*)(u64 )>(_a, &GameList::SetPlayTimeRequested, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (GameList::*)(u64 , const std::string & , DumpRomFSTarget )>(_a, &GameList::DumpRomFSRequested, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (GameList::*)(const std::string & )>(_a, &GameList::VerifyIntegrityRequested, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (GameList::*)(const std::string & )>(_a, &GameList::ConvertToNupRequested, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (GameList::*)(u64 )>(_a, &GameList::CopyTIDRequested, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (GameList::*)(u64 , const std::string & , const QtCommon::Game::ShortcutTarget )>(_a, &GameList::CreateShortcut, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (GameList::*)(const std::string & )>(_a, &GameList::OpenPerGameGeneralRequested, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (GameList::*)(const u64 & )>(_a, &GameList::LinkToRyujinxRequested, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (GameList::*)(const QString & )>(_a, &GameList::OpenDirectory, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (GameList::*)()>(_a, &GameList::AddDirectory, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (GameList::*)(bool )>(_a, &GameList::ShowList, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (GameList::*)()>(_a, &GameList::PopulatingCompleted, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (GameList::*)()>(_a, &GameList::SaveConfig, 20))
            return;
    }
}

const QMetaObject *GameList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8GameListE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GameList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void GameList::BootGame(const QString & _t1, StartGameType _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void GameList::GameChosen(const QString & _t1, const u64 _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 3
void GameList::OpenFolderRequested(u64 _t1, GameListOpenTarget _t2, const std::string & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2, _t3);
}

// SIGNAL 4
void GameList::OpenTransferableShaderCacheRequested(u64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void GameList::RemoveInstalledEntryRequested(u64 _t1, QtCommon::Game::InstalledEntryType _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2);
}

// SIGNAL 6
void GameList::RemoveFileRequested(u64 _t1, QtCommon::Game::GameListRemoveTarget _t2, const std::string & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2, _t3);
}

// SIGNAL 7
void GameList::RemovePlayTimeRequested(u64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void GameList::SetPlayTimeRequested(u64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void GameList::DumpRomFSRequested(u64 _t1, const std::string & _t2, DumpRomFSTarget _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1, _t2, _t3);
}

// SIGNAL 10
void GameList::VerifyIntegrityRequested(const std::string & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void GameList::ConvertToNupRequested(const std::string & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void GameList::CopyTIDRequested(u64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void GameList::CreateShortcut(u64 _t1, const std::string & _t2, const QtCommon::Game::ShortcutTarget _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1, _t2, _t3);
}

// SIGNAL 14
void GameList::OpenPerGameGeneralRequested(const std::string & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}

// SIGNAL 15
void GameList::LinkToRyujinxRequested(const u64 & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}

// SIGNAL 16
void GameList::OpenDirectory(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1);
}

// SIGNAL 17
void GameList::AddDirectory()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void GameList::ShowList(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1);
}

// SIGNAL 19
void GameList::PopulatingCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void GameList::SaveConfig()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}
namespace {
struct qt_meta_tag_ZN19GameListPlaceholderE_t {};
} // unnamed namespace

template <> constexpr inline auto GameListPlaceholder::qt_create_metaobjectdata<qt_meta_tag_ZN19GameListPlaceholderE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GameListPlaceholder",
        "AddDirectory",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'AddDirectory'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GameListPlaceholder, qt_meta_tag_ZN19GameListPlaceholderE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GameListPlaceholder::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19GameListPlaceholderE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19GameListPlaceholderE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19GameListPlaceholderE_t>.metaTypes,
    nullptr
} };

void GameListPlaceholder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GameListPlaceholder *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->AddDirectory(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (GameListPlaceholder::*)()>(_a, &GameListPlaceholder::AddDirectory, 0))
            return;
    }
}

const QMetaObject *GameListPlaceholder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameListPlaceholder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19GameListPlaceholderE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GameListPlaceholder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void GameListPlaceholder::AddDirectory()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
