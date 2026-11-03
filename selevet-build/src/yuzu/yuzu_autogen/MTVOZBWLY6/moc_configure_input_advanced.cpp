/****************************************************************************
** Meta object code from reading C++ file 'configure_input_advanced.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../selevet-source/src/yuzu/configuration/configure_input_advanced.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configure_input_advanced.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN22ConfigureInputAdvancedE_t {};
} // unnamed namespace

template <> constexpr inline auto ConfigureInputAdvanced::qt_create_metaobjectdata<qt_meta_tag_ZN22ConfigureInputAdvancedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ConfigureInputAdvanced",
        "CallDebugControllerDialog",
        "",
        "CallMouseConfigDialog",
        "CallTouchscreenConfigDialog",
        "CallMotionTouchConfigDialog",
        "CallRingControllerDialog",
        "CallCameraDialog"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'CallDebugControllerDialog'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'CallMouseConfigDialog'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'CallTouchscreenConfigDialog'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'CallMotionTouchConfigDialog'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'CallRingControllerDialog'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'CallCameraDialog'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ConfigureInputAdvanced, qt_meta_tag_ZN22ConfigureInputAdvancedE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ConfigureInputAdvanced::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22ConfigureInputAdvancedE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22ConfigureInputAdvancedE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22ConfigureInputAdvancedE_t>.metaTypes,
    nullptr
} };

void ConfigureInputAdvanced::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ConfigureInputAdvanced *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->CallDebugControllerDialog(); break;
        case 1: _t->CallMouseConfigDialog(); break;
        case 2: _t->CallTouchscreenConfigDialog(); break;
        case 3: _t->CallMotionTouchConfigDialog(); break;
        case 4: _t->CallRingControllerDialog(); break;
        case 5: _t->CallCameraDialog(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ConfigureInputAdvanced::*)()>(_a, &ConfigureInputAdvanced::CallDebugControllerDialog, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ConfigureInputAdvanced::*)()>(_a, &ConfigureInputAdvanced::CallMouseConfigDialog, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ConfigureInputAdvanced::*)()>(_a, &ConfigureInputAdvanced::CallTouchscreenConfigDialog, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ConfigureInputAdvanced::*)()>(_a, &ConfigureInputAdvanced::CallMotionTouchConfigDialog, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ConfigureInputAdvanced::*)()>(_a, &ConfigureInputAdvanced::CallRingControllerDialog, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ConfigureInputAdvanced::*)()>(_a, &ConfigureInputAdvanced::CallCameraDialog, 5))
            return;
    }
}

const QMetaObject *ConfigureInputAdvanced::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConfigureInputAdvanced::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22ConfigureInputAdvancedE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ConfigureInputAdvanced::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void ConfigureInputAdvanced::CallDebugControllerDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ConfigureInputAdvanced::CallMouseConfigDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ConfigureInputAdvanced::CallTouchscreenConfigDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ConfigureInputAdvanced::CallMotionTouchConfigDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ConfigureInputAdvanced::CallRingControllerDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ConfigureInputAdvanced::CallCameraDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
