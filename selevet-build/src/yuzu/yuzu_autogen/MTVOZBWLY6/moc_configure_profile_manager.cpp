/****************************************************************************
** Meta object code from reading C++ file 'configure_profile_manager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../selevet-source/src/yuzu/configuration/configure_profile_manager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configure_profile_manager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN35ConfigureProfileManagerDeleteDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto ConfigureProfileManagerDeleteDialog::qt_create_metaobjectdata<qt_meta_tag_ZN35ConfigureProfileManagerDeleteDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ConfigureProfileManagerDeleteDialog",
        "deleteUser",
        "",
        "index"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'deleteUser'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ConfigureProfileManagerDeleteDialog, qt_meta_tag_ZN35ConfigureProfileManagerDeleteDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ConfigureProfileManagerDeleteDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN35ConfigureProfileManagerDeleteDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN35ConfigureProfileManagerDeleteDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN35ConfigureProfileManagerDeleteDialogE_t>.metaTypes,
    nullptr
} };

void ConfigureProfileManagerDeleteDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ConfigureProfileManagerDeleteDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->deleteUser((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ConfigureProfileManagerDeleteDialog::*)(int )>(_a, &ConfigureProfileManagerDeleteDialog::deleteUser, 0))
            return;
    }
}

const QMetaObject *ConfigureProfileManagerDeleteDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConfigureProfileManagerDeleteDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN35ConfigureProfileManagerDeleteDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ConfigureProfileManagerDeleteDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void ConfigureProfileManagerDeleteDialog::deleteUser(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN23ConfigureProfileManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto ConfigureProfileManager::qt_create_metaobjectdata<qt_meta_tag_ZN23ConfigureProfileManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ConfigureProfileManager",
        "saveImage",
        "",
        "pixmap",
        "Common::UUID",
        "uuid",
        "showContextMenu",
        "pos",
        "DeleteUser",
        "index"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'saveImage'
        QtMocHelpers::SlotData<void(QPixmap, Common::UUID)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QPixmap, 3 }, { 0x80000000 | 4, 5 },
        }}),
        // Slot 'showContextMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QPoint, 7 },
        }}),
        // Slot 'DeleteUser'
        QtMocHelpers::SlotData<void(const int)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ConfigureProfileManager, qt_meta_tag_ZN23ConfigureProfileManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ConfigureProfileManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23ConfigureProfileManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23ConfigureProfileManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23ConfigureProfileManagerE_t>.metaTypes,
    nullptr
} };

void ConfigureProfileManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ConfigureProfileManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->saveImage((*reinterpret_cast< std::add_pointer_t<QPixmap>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Common::UUID>>(_a[2]))); break;
        case 1: _t->showContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 2: _t->DeleteUser((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *ConfigureProfileManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConfigureProfileManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23ConfigureProfileManagerE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ConfigureProfileManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
