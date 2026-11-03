/****************************************************************************
** Meta object code from reading C++ file 'configure_general.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../selevet-source/src/yuzu/configuration/configure_general.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configure_general.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16ConfigureGeneralE_t {};
} // unnamed namespace

template <> constexpr inline auto ConfigureGeneral::qt_create_metaobjectdata<qt_meta_tag_ZN16ConfigureGeneralE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ConfigureGeneral",
        "ExternalContentDirsChanged",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'ExternalContentDirsChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ConfigureGeneral, qt_meta_tag_ZN16ConfigureGeneralE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ConfigureGeneral::staticMetaObject = { {
    QMetaObject::SuperData::link<ConfigurationShared::Tab::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16ConfigureGeneralE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16ConfigureGeneralE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16ConfigureGeneralE_t>.metaTypes,
    nullptr
} };

void ConfigureGeneral::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ConfigureGeneral *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->ExternalContentDirsChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ConfigureGeneral::*)()>(_a, &ConfigureGeneral::ExternalContentDirsChanged, 0))
            return;
    }
}

const QMetaObject *ConfigureGeneral::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConfigureGeneral::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16ConfigureGeneralE_t>.strings))
        return static_cast<void*>(this);
    return ConfigurationShared::Tab::qt_metacast(_clname);
}

int ConfigureGeneral::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigurationShared::Tab::qt_metacall(_c, _id, _a);
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
void ConfigureGeneral::ExternalContentDirsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
