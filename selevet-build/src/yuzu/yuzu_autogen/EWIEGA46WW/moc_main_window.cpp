/****************************************************************************
** Meta object code from reading C++ file 'main_window.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../selevet-source/src/yuzu/main_window.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12VolumeButtonE_t {};
} // unnamed namespace

template <> constexpr inline auto VolumeButton::qt_create_metaobjectdata<qt_meta_tag_ZN12VolumeButtonE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VolumeButton",
        "VolumeChanged",
        "",
        "ResetMultiplier"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'VolumeChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ResetMultiplier'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VolumeButton, qt_meta_tag_ZN12VolumeButtonE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VolumeButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12VolumeButtonE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12VolumeButtonE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12VolumeButtonE_t>.metaTypes,
    nullptr
} };

void VolumeButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VolumeButton *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->VolumeChanged(); break;
        case 1: _t->ResetMultiplier(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (VolumeButton::*)()>(_a, &VolumeButton::VolumeChanged, 0))
            return;
    }
}

const QMetaObject *VolumeButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VolumeButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12VolumeButtonE_t>.strings))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int VolumeButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void VolumeButton::VolumeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainWindow",
        "EmulationStarting",
        "",
        "EmulationStopping",
        "UpdateThemedIcons",
        "UpdateInstallProgress",
        "AmiiboSettingsFinished",
        "is_success",
        "std::string",
        "name",
        "ControllerSelectorReconfigureFinished",
        "ErrorDisplayFinished",
        "ProfileSelectorFinishedSelection",
        "std::optional<Common::UUID>",
        "uuid",
        "SoftwareKeyboardSubmitNormalText",
        "Service::AM::Frontend::SwkbdResult",
        "result",
        "std::u16string",
        "submitted_text",
        "confirmed",
        "SoftwareKeyboardSubmitInlineText",
        "Service::AM::Frontend::SwkbdReplyType",
        "reply_type",
        "s32",
        "cursor_position",
        "WebBrowserExtractOfflineRomFS",
        "WebBrowserClosed",
        "Service::AM::Frontend::WebExitReason",
        "exit_reason",
        "last_url",
        "SigInterrupt",
        "sizeChanged",
        "size",
        "positionChanged",
        "pos",
        "statsUpdated",
        "Core::PerfStatsResults",
        "results",
        "VideoCore::ShaderNotify",
        "shaders",
        "OnLoadComplete",
        "OnExecuteProgram",
        "std::size_t",
        "program_index",
        "OnExit",
        "OnSaveConfig",
        "AmiiboSettingsShowDialog",
        "Core::Frontend::CabinetParameters",
        "parameters",
        "std::shared_ptr<Service::NFC::NfcDevice>",
        "nfp_device",
        "AmiiboSettingsRequestExit",
        "ControllerSelectorReconfigureControllers",
        "Core::Frontend::ControllerParameters",
        "ControllerSelectorRequestExit",
        "SoftwareKeyboardInitialize",
        "is_inline",
        "Core::Frontend::KeyboardInitializeParameters",
        "initialize_parameters",
        "SoftwareKeyboardShowNormal",
        "SoftwareKeyboardShowTextCheck",
        "Service::AM::Frontend::SwkbdTextCheckResult",
        "text_check_result",
        "text_check_message",
        "SoftwareKeyboardShowInline",
        "Core::Frontend::InlineAppearParameters",
        "appear_parameters",
        "SoftwareKeyboardHideInline",
        "SoftwareKeyboardInlineTextChanged",
        "Core::Frontend::InlineTextParameters",
        "text_parameters",
        "SoftwareKeyboardExit",
        "ErrorDisplayDisplayError",
        "error_code",
        "error_text",
        "ErrorDisplayRequestExit",
        "ProfileSelectorSelectProfile",
        "Core::Frontend::ProfileSelectParameters",
        "ProfileSelectorRequestExit",
        "WebBrowserOpenWebPage",
        "main_url",
        "additional_args",
        "is_local",
        "WebBrowserRequestExit",
        "OnAppFocusStateChanged",
        "Qt::ApplicationState",
        "state",
        "OnTasStateChanged",
        "OnStartGame",
        "OnRestartGame",
        "OnPauseGame",
        "OnPauseContinueGame",
        "OnStopGame",
        "OnPrepareForSleep",
        "prepare_sleep",
        "OnMenuReportCompatibility",
        "OnOpenModsPage",
        "OnOpenUserHandbook",
        "OnGameListLoadFile",
        "game_path",
        "u64",
        "program_id",
        "OnGameListOpenFolder",
        "GameListOpenTarget",
        "target",
        "OnGameListRemoveInstalledEntry",
        "QtCommon::Game::InstalledEntryType",
        "type",
        "OnGameListRemoveFile",
        "QtCommon::Game::GameListRemoveTarget",
        "OnGameListRemovePlayTimeData",
        "OnGameListSetPlayTime",
        "OnGameListDumpRomFS",
        "DumpRomFSTarget",
        "OnGameListVerifyIntegrity",
        "OnGameListConvertToNup",
        "OnGameListCopyTID",
        "OnGameListCreateShortcut",
        "QtCommon::Game::ShortcutTarget",
        "OnGameListOpenDirectory",
        "directory",
        "OnGameListAddDirectory",
        "OnGameListShowList",
        "show",
        "OnGameListOpenPerGameProperties",
        "file",
        "OnLinkToRyujinx",
        "OnMenuLoadFile",
        "OnMenuLoadFolder",
        "IncrementInstallProgress",
        "OnMenuInstallToNAND",
        "OnMenuRecentFile",
        "OnConfigure",
        "OnConfigureTas",
        "OnDecreaseVolume",
        "OnIncreaseVolume",
        "OnMute",
        "OnTasStartStop",
        "OnTasRecord",
        "OnTasReset",
        "OnToggleGraphicsAPI",
        "OnToggleDockedMode",
        "OnToggleGpuAccuracy",
        "OnToggleAdaptingFilter",
        "OnConfigurePerGame",
        "OnLoadAmiibo",
        "OnOpenRootDataFolder",
        "OnOpenNANDFolder",
        "OnOpenSDMCFolder",
        "OnOpenModFolder",
        "OnOpenLogFolder",
        "OnVerifyInstalledContents",
        "OnInstallFirmware",
        "OnInstallFirmwareFromZIP",
        "OnInstallDecryptionKeys",
        "OnAbout",
        "OnEdenDependencies",
        "OnDataDialog",
        "OnToggleFilterBar",
        "OnToggleStatusBar",
        "OnTogglePerfOverlay",
        "OnPostProcessingShaders",
        "OnGameListRefresh",
        "InitializeHotkeys",
        "ToggleFullscreen",
        "UsingExclusiveFullscreen",
        "ShowFullscreen",
        "HideFullscreen",
        "ToggleWindowMode",
        "ResetWindowSize",
        "u32",
        "width",
        "height",
        "ResetWindowSize720",
        "ResetWindowSize900",
        "ResetWindowSize1080",
        "SetGameListMode",
        "Settings::GameListMode",
        "mode",
        "SetGridView",
        "SetTreeView",
        "SetCarouselView",
        "CheckIconSize",
        "ToggleShowGameName",
        "LaunchFirmwareApplet",
        "std::optional<Service::NFP::CabinetMode>",
        "OnCreateHomeMenuDesktopShortcut",
        "OnCreateHomeMenuApplicationMenuShortcut",
        "OnCaptureScreenshot",
        "OnCheckFirmwareDecryption",
        "prompt",
        "OnLanguageChanged",
        "locale",
        "OnMouseActivity",
        "OnShutdownBegin",
        "OnShutdownBeginDialog",
        "OnEmulationStopped",
        "OnEmulationStopTimeExpired"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'EmulationStarting'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'EmulationStopping'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'UpdateThemedIcons'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'UpdateInstallProgress'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'AmiiboSettingsFinished'
        QtMocHelpers::SignalData<void(bool, const std::string &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Signal 'ControllerSelectorReconfigureFinished'
        QtMocHelpers::SignalData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Signal 'ErrorDisplayFinished'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ProfileSelectorFinishedSelection'
        QtMocHelpers::SignalData<void(std::optional<Common::UUID>)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'SoftwareKeyboardSubmitNormalText'
        QtMocHelpers::SignalData<void(Service::AM::Frontend::SwkbdResult, std::u16string, bool)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 17 }, { 0x80000000 | 18, 19 }, { QMetaType::Bool, 20 },
        }}),
        // Signal 'SoftwareKeyboardSubmitInlineText'
        QtMocHelpers::SignalData<void(Service::AM::Frontend::SwkbdReplyType, std::u16string, s32)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 22, 23 }, { 0x80000000 | 18, 19 }, { 0x80000000 | 24, 25 },
        }}),
        // Signal 'WebBrowserExtractOfflineRomFS'
        QtMocHelpers::SignalData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'WebBrowserClosed'
        QtMocHelpers::SignalData<void(Service::AM::Frontend::WebExitReason, std::string)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 28, 29 }, { 0x80000000 | 8, 30 },
        }}),
        // Signal 'SigInterrupt'
        QtMocHelpers::SignalData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sizeChanged'
        QtMocHelpers::SignalData<void(const QSize &)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QSize, 33 },
        }}),
        // Signal 'positionChanged'
        QtMocHelpers::SignalData<void(const QPoint &)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QPoint, 35 },
        }}),
        // Signal 'statsUpdated'
        QtMocHelpers::SignalData<void(const Core::PerfStatsResults &, const VideoCore::ShaderNotify &)>(36, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 37, 38 }, { 0x80000000 | 39, 40 },
        }}),
        // Slot 'OnLoadComplete'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OnExecuteProgram'
        QtMocHelpers::SlotData<void(std::size_t)>(42, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 43, 44 },
        }}),
        // Slot 'OnExit'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OnSaveConfig'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'AmiiboSettingsShowDialog'
        QtMocHelpers::SlotData<void(const Core::Frontend::CabinetParameters &, std::shared_ptr<Service::NFC::NfcDevice>)>(47, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 48, 49 }, { 0x80000000 | 50, 51 },
        }}),
        // Slot 'AmiiboSettingsRequestExit'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ControllerSelectorReconfigureControllers'
        QtMocHelpers::SlotData<void(const Core::Frontend::ControllerParameters &)>(53, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 54, 49 },
        }}),
        // Slot 'ControllerSelectorRequestExit'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SoftwareKeyboardInitialize'
        QtMocHelpers::SlotData<void(bool, Core::Frontend::KeyboardInitializeParameters)>(56, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 57 }, { 0x80000000 | 58, 59 },
        }}),
        // Slot 'SoftwareKeyboardShowNormal'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SoftwareKeyboardShowTextCheck'
        QtMocHelpers::SlotData<void(Service::AM::Frontend::SwkbdTextCheckResult, std::u16string)>(61, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 62, 63 }, { 0x80000000 | 18, 64 },
        }}),
        // Slot 'SoftwareKeyboardShowInline'
        QtMocHelpers::SlotData<void(Core::Frontend::InlineAppearParameters)>(65, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 66, 67 },
        }}),
        // Slot 'SoftwareKeyboardHideInline'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SoftwareKeyboardInlineTextChanged'
        QtMocHelpers::SlotData<void(Core::Frontend::InlineTextParameters)>(69, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 70, 71 },
        }}),
        // Slot 'SoftwareKeyboardExit'
        QtMocHelpers::SlotData<void()>(72, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ErrorDisplayDisplayError'
        QtMocHelpers::SlotData<void(QString, QString)>(73, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 74 }, { QMetaType::QString, 75 },
        }}),
        // Slot 'ErrorDisplayRequestExit'
        QtMocHelpers::SlotData<void()>(76, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ProfileSelectorSelectProfile'
        QtMocHelpers::SlotData<void(const Core::Frontend::ProfileSelectParameters &)>(77, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 78, 49 },
        }}),
        // Slot 'ProfileSelectorRequestExit'
        QtMocHelpers::SlotData<void()>(79, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'WebBrowserOpenWebPage'
        QtMocHelpers::SlotData<void(const std::string &, const std::string &, bool)>(80, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 81 }, { 0x80000000 | 8, 82 }, { QMetaType::Bool, 83 },
        }}),
        // Slot 'WebBrowserRequestExit'
        QtMocHelpers::SlotData<void()>(84, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OnAppFocusStateChanged'
        QtMocHelpers::SlotData<void(Qt::ApplicationState)>(85, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 86, 87 },
        }}),
        // Slot 'OnTasStateChanged'
        QtMocHelpers::SlotData<void()>(88, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OnStartGame'
        QtMocHelpers::SlotData<void()>(89, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnRestartGame'
        QtMocHelpers::SlotData<void()>(90, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnPauseGame'
        QtMocHelpers::SlotData<void()>(91, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnPauseContinueGame'
        QtMocHelpers::SlotData<void()>(92, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnStopGame'
        QtMocHelpers::SlotData<void()>(93, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnPrepareForSleep'
        QtMocHelpers::SlotData<void(bool)>(94, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 95 },
        }}),
        // Slot 'OnMenuReportCompatibility'
        QtMocHelpers::SlotData<void()>(96, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnOpenModsPage'
        QtMocHelpers::SlotData<void()>(97, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnOpenUserHandbook'
        QtMocHelpers::SlotData<void()>(98, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnGameListLoadFile'
        QtMocHelpers::SlotData<void(QString, u64)>(99, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 100 }, { 0x80000000 | 101, 102 },
        }}),
        // Slot 'OnGameListOpenFolder'
        QtMocHelpers::SlotData<void(u64, GameListOpenTarget, const std::string &)>(103, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 101, 102 }, { 0x80000000 | 104, 105 }, { 0x80000000 | 8, 100 },
        }}),
        // Slot 'OnGameListRemoveInstalledEntry'
        QtMocHelpers::SlotData<void(u64, QtCommon::Game::InstalledEntryType)>(106, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 101, 102 }, { 0x80000000 | 107, 108 },
        }}),
        // Slot 'OnGameListRemoveFile'
        QtMocHelpers::SlotData<void(u64, QtCommon::Game::GameListRemoveTarget, const std::string &)>(109, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 101, 102 }, { 0x80000000 | 110, 105 }, { 0x80000000 | 8, 100 },
        }}),
        // Slot 'OnGameListRemovePlayTimeData'
        QtMocHelpers::SlotData<void(u64)>(111, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 101, 102 },
        }}),
        // Slot 'OnGameListSetPlayTime'
        QtMocHelpers::SlotData<void(u64)>(112, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 101, 102 },
        }}),
        // Slot 'OnGameListDumpRomFS'
        QtMocHelpers::SlotData<void(u64, const std::string &, DumpRomFSTarget)>(113, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 101, 102 }, { 0x80000000 | 8, 100 }, { 0x80000000 | 114, 105 },
        }}),
        // Slot 'OnGameListVerifyIntegrity'
        QtMocHelpers::SlotData<void(const std::string &)>(115, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 100 },
        }}),
        // Slot 'OnGameListConvertToNup'
        QtMocHelpers::SlotData<void(const std::string &)>(116, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 100 },
        }}),
        // Slot 'OnGameListCopyTID'
        QtMocHelpers::SlotData<void(u64)>(117, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 101, 102 },
        }}),
        // Slot 'OnGameListCreateShortcut'
        QtMocHelpers::SlotData<void(u64, const std::string &, const QtCommon::Game::ShortcutTarget)>(118, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 101, 102 }, { 0x80000000 | 8, 100 }, { 0x80000000 | 119, 105 },
        }}),
        // Slot 'OnGameListOpenDirectory'
        QtMocHelpers::SlotData<void(const QString &)>(120, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 121 },
        }}),
        // Slot 'OnGameListAddDirectory'
        QtMocHelpers::SlotData<void()>(122, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnGameListShowList'
        QtMocHelpers::SlotData<void(bool)>(123, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 124 },
        }}),
        // Slot 'OnGameListOpenPerGameProperties'
        QtMocHelpers::SlotData<void(const std::string &)>(125, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 126 },
        }}),
        // Slot 'OnLinkToRyujinx'
        QtMocHelpers::SlotData<void(const u64 &)>(127, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 101, 102 },
        }}),
        // Slot 'OnMenuLoadFile'
        QtMocHelpers::SlotData<void()>(128, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnMenuLoadFolder'
        QtMocHelpers::SlotData<void()>(129, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'IncrementInstallProgress'
        QtMocHelpers::SlotData<void()>(130, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnMenuInstallToNAND'
        QtMocHelpers::SlotData<void()>(131, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnMenuRecentFile'
        QtMocHelpers::SlotData<void()>(132, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnConfigure'
        QtMocHelpers::SlotData<void()>(133, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnConfigureTas'
        QtMocHelpers::SlotData<void()>(134, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnDecreaseVolume'
        QtMocHelpers::SlotData<void()>(135, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnIncreaseVolume'
        QtMocHelpers::SlotData<void()>(136, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnMute'
        QtMocHelpers::SlotData<void()>(137, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnTasStartStop'
        QtMocHelpers::SlotData<void()>(138, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnTasRecord'
        QtMocHelpers::SlotData<void()>(139, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnTasReset'
        QtMocHelpers::SlotData<void()>(140, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnToggleGraphicsAPI'
        QtMocHelpers::SlotData<void()>(141, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnToggleDockedMode'
        QtMocHelpers::SlotData<void()>(142, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnToggleGpuAccuracy'
        QtMocHelpers::SlotData<void()>(143, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnToggleAdaptingFilter'
        QtMocHelpers::SlotData<void()>(144, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnConfigurePerGame'
        QtMocHelpers::SlotData<void()>(145, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnLoadAmiibo'
        QtMocHelpers::SlotData<void()>(146, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnOpenRootDataFolder'
        QtMocHelpers::SlotData<void()>(147, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnOpenNANDFolder'
        QtMocHelpers::SlotData<void()>(148, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnOpenSDMCFolder'
        QtMocHelpers::SlotData<void()>(149, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnOpenModFolder'
        QtMocHelpers::SlotData<void()>(150, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnOpenLogFolder'
        QtMocHelpers::SlotData<void()>(151, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnVerifyInstalledContents'
        QtMocHelpers::SlotData<void()>(152, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnInstallFirmware'
        QtMocHelpers::SlotData<void()>(153, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnInstallFirmwareFromZIP'
        QtMocHelpers::SlotData<void()>(154, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnInstallDecryptionKeys'
        QtMocHelpers::SlotData<void()>(155, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnAbout'
        QtMocHelpers::SlotData<void()>(156, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnEdenDependencies'
        QtMocHelpers::SlotData<void()>(157, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnDataDialog'
        QtMocHelpers::SlotData<void()>(158, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnToggleFilterBar'
        QtMocHelpers::SlotData<void()>(159, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnToggleStatusBar'
        QtMocHelpers::SlotData<void()>(160, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnTogglePerfOverlay'
        QtMocHelpers::SlotData<void()>(161, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnPostProcessingShaders'
        QtMocHelpers::SlotData<void()>(162, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnGameListRefresh'
        QtMocHelpers::SlotData<void()>(163, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'InitializeHotkeys'
        QtMocHelpers::SlotData<void()>(164, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ToggleFullscreen'
        QtMocHelpers::SlotData<void()>(165, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'UsingExclusiveFullscreen'
        QtMocHelpers::SlotData<bool()>(166, 2, QMC::AccessPrivate, QMetaType::Bool),
        // Slot 'ShowFullscreen'
        QtMocHelpers::SlotData<void()>(167, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'HideFullscreen'
        QtMocHelpers::SlotData<void()>(168, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ToggleWindowMode'
        QtMocHelpers::SlotData<void()>(169, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ResetWindowSize'
        QtMocHelpers::SlotData<void(u32, u32)>(170, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 171, 172 }, { 0x80000000 | 171, 173 },
        }}),
        // Slot 'ResetWindowSize720'
        QtMocHelpers::SlotData<void()>(174, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ResetWindowSize900'
        QtMocHelpers::SlotData<void()>(175, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ResetWindowSize1080'
        QtMocHelpers::SlotData<void()>(176, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SetGameListMode'
        QtMocHelpers::SlotData<void(Settings::GameListMode)>(177, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 178, 179 },
        }}),
        // Slot 'SetGridView'
        QtMocHelpers::SlotData<void()>(180, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SetTreeView'
        QtMocHelpers::SlotData<void()>(181, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SetCarouselView'
        QtMocHelpers::SlotData<void()>(182, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'CheckIconSize'
        QtMocHelpers::SlotData<void()>(183, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ToggleShowGameName'
        QtMocHelpers::SlotData<void()>(184, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'LaunchFirmwareApplet'
        QtMocHelpers::SlotData<void(u64, std::optional<Service::NFP::CabinetMode>)>(185, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 101, 102 }, { 0x80000000 | 186, 179 },
        }}),
        // Slot 'OnCreateHomeMenuDesktopShortcut'
        QtMocHelpers::SlotData<void()>(187, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnCreateHomeMenuApplicationMenuShortcut'
        QtMocHelpers::SlotData<void()>(188, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnCaptureScreenshot'
        QtMocHelpers::SlotData<void()>(189, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnCheckFirmwareDecryption'
        QtMocHelpers::SlotData<void(bool)>(190, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 191 },
        }}),
        // Slot 'OnCheckFirmwareDecryption'
        QtMocHelpers::SlotData<void()>(190, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'OnLanguageChanged'
        QtMocHelpers::SlotData<void(const QString &)>(192, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 193 },
        }}),
        // Slot 'OnMouseActivity'
        QtMocHelpers::SlotData<void()>(194, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnShutdownBegin'
        QtMocHelpers::SlotData<bool()>(195, 2, QMC::AccessPrivate, QMetaType::Bool),
        // Slot 'OnShutdownBeginDialog'
        QtMocHelpers::SlotData<void()>(196, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnEmulationStopped'
        QtMocHelpers::SlotData<void()>(197, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnEmulationStopTimeExpired'
        QtMocHelpers::SlotData<void()>(198, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainWindowE_t>.metaTypes,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->EmulationStarting(); break;
        case 1: _t->EmulationStopping(); break;
        case 2: _t->UpdateThemedIcons(); break;
        case 3: _t->UpdateInstallProgress(); break;
        case 4: _t->AmiiboSettingsFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::string>>(_a[2]))); break;
        case 5: _t->ControllerSelectorReconfigureFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->ErrorDisplayFinished(); break;
        case 7: _t->ProfileSelectorFinishedSelection((*reinterpret_cast< std::add_pointer_t<std::optional<Common::UUID>>>(_a[1]))); break;
        case 8: _t->SoftwareKeyboardSubmitNormalText((*reinterpret_cast< std::add_pointer_t<Service::AM::Frontend::SwkbdResult>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::u16string>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 9: _t->SoftwareKeyboardSubmitInlineText((*reinterpret_cast< std::add_pointer_t<Service::AM::Frontend::SwkbdReplyType>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::u16string>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<s32>>(_a[3]))); break;
        case 10: _t->WebBrowserExtractOfflineRomFS(); break;
        case 11: _t->WebBrowserClosed((*reinterpret_cast< std::add_pointer_t<Service::AM::Frontend::WebExitReason>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::string>>(_a[2]))); break;
        case 12: _t->SigInterrupt(); break;
        case 13: _t->sizeChanged((*reinterpret_cast< std::add_pointer_t<QSize>>(_a[1]))); break;
        case 14: _t->positionChanged((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 15: _t->statsUpdated((*reinterpret_cast< std::add_pointer_t<Core::PerfStatsResults>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<VideoCore::ShaderNotify>>(_a[2]))); break;
        case 16: _t->OnLoadComplete(); break;
        case 17: _t->OnExecuteProgram((*reinterpret_cast< std::add_pointer_t<std::size_t>>(_a[1]))); break;
        case 18: _t->OnExit(); break;
        case 19: _t->OnSaveConfig(); break;
        case 20: _t->AmiiboSettingsShowDialog((*reinterpret_cast< std::add_pointer_t<Core::Frontend::CabinetParameters>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::shared_ptr<Service::NFC::NfcDevice>>>(_a[2]))); break;
        case 21: _t->AmiiboSettingsRequestExit(); break;
        case 22: _t->ControllerSelectorReconfigureControllers((*reinterpret_cast< std::add_pointer_t<Core::Frontend::ControllerParameters>>(_a[1]))); break;
        case 23: _t->ControllerSelectorRequestExit(); break;
        case 24: _t->SoftwareKeyboardInitialize((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Core::Frontend::KeyboardInitializeParameters>>(_a[2]))); break;
        case 25: _t->SoftwareKeyboardShowNormal(); break;
        case 26: _t->SoftwareKeyboardShowTextCheck((*reinterpret_cast< std::add_pointer_t<Service::AM::Frontend::SwkbdTextCheckResult>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::u16string>>(_a[2]))); break;
        case 27: _t->SoftwareKeyboardShowInline((*reinterpret_cast< std::add_pointer_t<Core::Frontend::InlineAppearParameters>>(_a[1]))); break;
        case 28: _t->SoftwareKeyboardHideInline(); break;
        case 29: _t->SoftwareKeyboardInlineTextChanged((*reinterpret_cast< std::add_pointer_t<Core::Frontend::InlineTextParameters>>(_a[1]))); break;
        case 30: _t->SoftwareKeyboardExit(); break;
        case 31: _t->ErrorDisplayDisplayError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 32: _t->ErrorDisplayRequestExit(); break;
        case 33: _t->ProfileSelectorSelectProfile((*reinterpret_cast< std::add_pointer_t<Core::Frontend::ProfileSelectParameters>>(_a[1]))); break;
        case 34: _t->ProfileSelectorRequestExit(); break;
        case 35: _t->WebBrowserOpenWebPage((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::string>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 36: _t->WebBrowserRequestExit(); break;
        case 37: _t->OnAppFocusStateChanged((*reinterpret_cast< std::add_pointer_t<Qt::ApplicationState>>(_a[1]))); break;
        case 38: _t->OnTasStateChanged(); break;
        case 39: _t->OnStartGame(); break;
        case 40: _t->OnRestartGame(); break;
        case 41: _t->OnPauseGame(); break;
        case 42: _t->OnPauseContinueGame(); break;
        case 43: _t->OnStopGame(); break;
        case 44: _t->OnPrepareForSleep((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 45: _t->OnMenuReportCompatibility(); break;
        case 46: _t->OnOpenModsPage(); break;
        case 47: _t->OnOpenUserHandbook(); break;
        case 48: _t->OnGameListLoadFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<u64>>(_a[2]))); break;
        case 49: _t->OnGameListOpenFolder((*reinterpret_cast< std::add_pointer_t<u64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<GameListOpenTarget>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<std::string>>(_a[3]))); break;
        case 50: _t->OnGameListRemoveInstalledEntry((*reinterpret_cast< std::add_pointer_t<u64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QtCommon::Game::InstalledEntryType>>(_a[2]))); break;
        case 51: _t->OnGameListRemoveFile((*reinterpret_cast< std::add_pointer_t<u64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QtCommon::Game::GameListRemoveTarget>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<std::string>>(_a[3]))); break;
        case 52: _t->OnGameListRemovePlayTimeData((*reinterpret_cast< std::add_pointer_t<u64>>(_a[1]))); break;
        case 53: _t->OnGameListSetPlayTime((*reinterpret_cast< std::add_pointer_t<u64>>(_a[1]))); break;
        case 54: _t->OnGameListDumpRomFS((*reinterpret_cast< std::add_pointer_t<u64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::string>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<DumpRomFSTarget>>(_a[3]))); break;
        case 55: _t->OnGameListVerifyIntegrity((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1]))); break;
        case 56: _t->OnGameListConvertToNup((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1]))); break;
        case 57: _t->OnGameListCopyTID((*reinterpret_cast< std::add_pointer_t<u64>>(_a[1]))); break;
        case 58: _t->OnGameListCreateShortcut((*reinterpret_cast< std::add_pointer_t<u64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::string>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QtCommon::Game::ShortcutTarget>>(_a[3]))); break;
        case 59: _t->OnGameListOpenDirectory((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 60: _t->OnGameListAddDirectory(); break;
        case 61: _t->OnGameListShowList((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 62: _t->OnGameListOpenPerGameProperties((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1]))); break;
        case 63: _t->OnLinkToRyujinx((*reinterpret_cast< std::add_pointer_t<u64>>(_a[1]))); break;
        case 64: _t->OnMenuLoadFile(); break;
        case 65: _t->OnMenuLoadFolder(); break;
        case 66: _t->IncrementInstallProgress(); break;
        case 67: _t->OnMenuInstallToNAND(); break;
        case 68: _t->OnMenuRecentFile(); break;
        case 69: _t->OnConfigure(); break;
        case 70: _t->OnConfigureTas(); break;
        case 71: _t->OnDecreaseVolume(); break;
        case 72: _t->OnIncreaseVolume(); break;
        case 73: _t->OnMute(); break;
        case 74: _t->OnTasStartStop(); break;
        case 75: _t->OnTasRecord(); break;
        case 76: _t->OnTasReset(); break;
        case 77: _t->OnToggleGraphicsAPI(); break;
        case 78: _t->OnToggleDockedMode(); break;
        case 79: _t->OnToggleGpuAccuracy(); break;
        case 80: _t->OnToggleAdaptingFilter(); break;
        case 81: _t->OnConfigurePerGame(); break;
        case 82: _t->OnLoadAmiibo(); break;
        case 83: _t->OnOpenRootDataFolder(); break;
        case 84: _t->OnOpenNANDFolder(); break;
        case 85: _t->OnOpenSDMCFolder(); break;
        case 86: _t->OnOpenModFolder(); break;
        case 87: _t->OnOpenLogFolder(); break;
        case 88: _t->OnVerifyInstalledContents(); break;
        case 89: _t->OnInstallFirmware(); break;
        case 90: _t->OnInstallFirmwareFromZIP(); break;
        case 91: _t->OnInstallDecryptionKeys(); break;
        case 92: _t->OnAbout(); break;
        case 93: _t->OnEdenDependencies(); break;
        case 94: _t->OnDataDialog(); break;
        case 95: _t->OnToggleFilterBar(); break;
        case 96: _t->OnToggleStatusBar(); break;
        case 97: _t->OnTogglePerfOverlay(); break;
        case 98: _t->OnPostProcessingShaders(); break;
        case 99: _t->OnGameListRefresh(); break;
        case 100: _t->InitializeHotkeys(); break;
        case 101: _t->ToggleFullscreen(); break;
        case 102: { bool _r = _t->UsingExclusiveFullscreen();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 103: _t->ShowFullscreen(); break;
        case 104: _t->HideFullscreen(); break;
        case 105: _t->ToggleWindowMode(); break;
        case 106: _t->ResetWindowSize((*reinterpret_cast< std::add_pointer_t<u32>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<u32>>(_a[2]))); break;
        case 107: _t->ResetWindowSize720(); break;
        case 108: _t->ResetWindowSize900(); break;
        case 109: _t->ResetWindowSize1080(); break;
        case 110: _t->SetGameListMode((*reinterpret_cast< std::add_pointer_t<Settings::GameListMode>>(_a[1]))); break;
        case 111: _t->SetGridView(); break;
        case 112: _t->SetTreeView(); break;
        case 113: _t->SetCarouselView(); break;
        case 114: _t->CheckIconSize(); break;
        case 115: _t->ToggleShowGameName(); break;
        case 116: _t->LaunchFirmwareApplet((*reinterpret_cast< std::add_pointer_t<u64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::optional<Service::NFP::CabinetMode>>>(_a[2]))); break;
        case 117: _t->OnCreateHomeMenuDesktopShortcut(); break;
        case 118: _t->OnCreateHomeMenuApplicationMenuShortcut(); break;
        case 119: _t->OnCaptureScreenshot(); break;
        case 120: _t->OnCheckFirmwareDecryption((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 121: _t->OnCheckFirmwareDecryption(); break;
        case 122: _t->OnLanguageChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 123: _t->OnMouseActivity(); break;
        case 124: { bool _r = _t->OnShutdownBegin();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 125: _t->OnShutdownBeginDialog(); break;
        case 126: _t->OnEmulationStopped(); break;
        case 127: _t->OnEmulationStopTimeExpired(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::EmulationStarting, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::EmulationStopping, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::UpdateThemedIcons, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::UpdateInstallProgress, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(bool , const std::string & )>(_a, &MainWindow::AmiiboSettingsFinished, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(bool )>(_a, &MainWindow::ControllerSelectorReconfigureFinished, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::ErrorDisplayFinished, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(std::optional<Common::UUID> )>(_a, &MainWindow::ProfileSelectorFinishedSelection, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(Service::AM::Frontend::SwkbdResult , std::u16string , bool )>(_a, &MainWindow::SoftwareKeyboardSubmitNormalText, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(Service::AM::Frontend::SwkbdReplyType , std::u16string , s32 )>(_a, &MainWindow::SoftwareKeyboardSubmitInlineText, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::WebBrowserExtractOfflineRomFS, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(Service::AM::Frontend::WebExitReason , std::string )>(_a, &MainWindow::WebBrowserClosed, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::SigInterrupt, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(const QSize & )>(_a, &MainWindow::sizeChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(const QPoint & )>(_a, &MainWindow::positionChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(const Core::PerfStatsResults & , const VideoCore::ShaderNotify & )>(_a, &MainWindow::statsUpdated, 15))
            return;
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 128)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 128;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 128)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 128;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::EmulationStarting()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::EmulationStopping()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::UpdateThemedIcons()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainWindow::UpdateInstallProgress()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MainWindow::AmiiboSettingsFinished(bool _t1, const std::string & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}

// SIGNAL 5
void MainWindow::ControllerSelectorReconfigureFinished(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void MainWindow::ErrorDisplayFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MainWindow::ProfileSelectorFinishedSelection(std::optional<Common::UUID> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void MainWindow::SoftwareKeyboardSubmitNormalText(Service::AM::Frontend::SwkbdResult _t1, std::u16string _t2, bool _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1, _t2, _t3);
}

// SIGNAL 9
void MainWindow::SoftwareKeyboardSubmitInlineText(Service::AM::Frontend::SwkbdReplyType _t1, std::u16string _t2, s32 _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1, _t2, _t3);
}

// SIGNAL 10
void MainWindow::WebBrowserExtractOfflineRomFS()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void MainWindow::WebBrowserClosed(Service::AM::Frontend::WebExitReason _t1, std::string _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1, _t2);
}

// SIGNAL 12
void MainWindow::SigInterrupt()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void MainWindow::sizeChanged(const QSize & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void MainWindow::positionChanged(const QPoint & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}

// SIGNAL 15
void MainWindow::statsUpdated(const Core::PerfStatsResults & _t1, const VideoCore::ShaderNotify & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1, _t2);
}
QT_WARNING_POP
