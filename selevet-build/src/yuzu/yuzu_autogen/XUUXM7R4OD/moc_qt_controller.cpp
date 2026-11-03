/****************************************************************************
** Meta object code from reading C++ file 'qt_controller.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../selevet-source/src/yuzu/applets/qt_controller.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_controller.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN26QtControllerSelectorDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto QtControllerSelectorDialog::qt_create_metaobjectdata<qt_meta_tag_ZN26QtControllerSelectorDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtControllerSelectorDialog"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtControllerSelectorDialog, qt_meta_tag_ZN26QtControllerSelectorDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtControllerSelectorDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN26QtControllerSelectorDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN26QtControllerSelectorDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN26QtControllerSelectorDialogE_t>.metaTypes,
    nullptr
} };

void QtControllerSelectorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtControllerSelectorDialog *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *QtControllerSelectorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtControllerSelectorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN26QtControllerSelectorDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QtControllerSelectorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN20QtControllerSelectorE_t {};
} // unnamed namespace

template <> constexpr inline auto QtControllerSelector::qt_create_metaobjectdata<qt_meta_tag_ZN20QtControllerSelectorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtControllerSelector",
        "MainWindowReconfigureControllers",
        "",
        "Core::Frontend::ControllerParameters",
        "parameters",
        "MainWindowRequestExit"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'MainWindowReconfigureControllers'
        QtMocHelpers::SignalData<void(const Core::Frontend::ControllerParameters &) const>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'MainWindowRequestExit'
        QtMocHelpers::SignalData<void() const>(5, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtControllerSelector, qt_meta_tag_ZN20QtControllerSelectorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtControllerSelector::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20QtControllerSelectorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20QtControllerSelectorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20QtControllerSelectorE_t>.metaTypes,
    nullptr
} };

void QtControllerSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtControllerSelector *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->MainWindowReconfigureControllers((*reinterpret_cast< std::add_pointer_t<Core::Frontend::ControllerParameters>>(_a[1]))); break;
        case 1: _t->MainWindowRequestExit(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtControllerSelector::*)(const Core::Frontend::ControllerParameters & ) const>(_a, &QtControllerSelector::MainWindowReconfigureControllers, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtControllerSelector::*)() const>(_a, &QtControllerSelector::MainWindowRequestExit, 1))
            return;
    }
}

const QMetaObject *QtControllerSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtControllerSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20QtControllerSelectorE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Core::Frontend::ControllerApplet"))
        return static_cast< Core::Frontend::ControllerApplet*>(this);
    return QObject::qt_metacast(_clname);
}

int QtControllerSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QtControllerSelector::MainWindowReconfigureControllers(const Core::Frontend::ControllerParameters & _t1)const
{
    QMetaObject::activate<void>(const_cast< QtControllerSelector *>(this), &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QtControllerSelector::MainWindowRequestExit()const
{
    QMetaObject::activate(const_cast< QtControllerSelector *>(this), &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
