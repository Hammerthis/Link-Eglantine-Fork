/****************************************************************************
** Meta object code from reading C++ file 'qt_amiibo_settings.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../selevet-source/src/yuzu/applets/qt_amiibo_settings.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_amiibo_settings.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN22QtAmiiboSettingsDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto QtAmiiboSettingsDialog::qt_create_metaobjectdata<qt_meta_tag_ZN22QtAmiiboSettingsDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtAmiiboSettingsDialog"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtAmiiboSettingsDialog, qt_meta_tag_ZN22QtAmiiboSettingsDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtAmiiboSettingsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QtAmiiboSettingsDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QtAmiiboSettingsDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22QtAmiiboSettingsDialogE_t>.metaTypes,
    nullptr
} };

void QtAmiiboSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtAmiiboSettingsDialog *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *QtAmiiboSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAmiiboSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QtAmiiboSettingsDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QtAmiiboSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN16QtAmiiboSettingsE_t {};
} // unnamed namespace

template <> constexpr inline auto QtAmiiboSettings::qt_create_metaobjectdata<qt_meta_tag_ZN16QtAmiiboSettingsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtAmiiboSettings",
        "MainWindowShowAmiiboSettings",
        "",
        "Core::Frontend::CabinetParameters",
        "parameters",
        "std::shared_ptr<Service::NFC::NfcDevice>",
        "nfp_device",
        "MainWindowRequestExit"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'MainWindowShowAmiiboSettings'
        QtMocHelpers::SignalData<void(const Core::Frontend::CabinetParameters &, std::shared_ptr<Service::NFC::NfcDevice>) const>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Signal 'MainWindowRequestExit'
        QtMocHelpers::SignalData<void() const>(7, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtAmiiboSettings, qt_meta_tag_ZN16QtAmiiboSettingsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtAmiiboSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QtAmiiboSettingsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QtAmiiboSettingsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16QtAmiiboSettingsE_t>.metaTypes,
    nullptr
} };

void QtAmiiboSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtAmiiboSettings *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->MainWindowShowAmiiboSettings((*reinterpret_cast< std::add_pointer_t<Core::Frontend::CabinetParameters>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::shared_ptr<Service::NFC::NfcDevice>>>(_a[2]))); break;
        case 1: _t->MainWindowRequestExit(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtAmiiboSettings::*)(const Core::Frontend::CabinetParameters & , std::shared_ptr<Service::NFC::NfcDevice> ) const>(_a, &QtAmiiboSettings::MainWindowShowAmiiboSettings, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtAmiiboSettings::*)() const>(_a, &QtAmiiboSettings::MainWindowRequestExit, 1))
            return;
    }
}

const QMetaObject *QtAmiiboSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAmiiboSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QtAmiiboSettingsE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Core::Frontend::CabinetApplet"))
        return static_cast< Core::Frontend::CabinetApplet*>(this);
    return QObject::qt_metacast(_clname);
}

int QtAmiiboSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QtAmiiboSettings::MainWindowShowAmiiboSettings(const Core::Frontend::CabinetParameters & _t1, std::shared_ptr<Service::NFC::NfcDevice> _t2)const
{
    QMetaObject::activate<void>(const_cast< QtAmiiboSettings *>(this), &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void QtAmiiboSettings::MainWindowRequestExit()const
{
    QMetaObject::activate(const_cast< QtAmiiboSettings *>(this), &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
