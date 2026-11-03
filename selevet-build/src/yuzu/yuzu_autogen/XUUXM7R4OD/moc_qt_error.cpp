/****************************************************************************
** Meta object code from reading C++ file 'qt_error.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../selevet-source/src/yuzu/applets/qt_error.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_error.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14QtErrorDisplayE_t {};
} // unnamed namespace

template <> constexpr inline auto QtErrorDisplay::qt_create_metaobjectdata<qt_meta_tag_ZN14QtErrorDisplayE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtErrorDisplay",
        "MainWindowDisplayError",
        "",
        "error_code",
        "error_text",
        "MainWindowRequestExit"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'MainWindowDisplayError'
        QtMocHelpers::SignalData<void(QString, QString) const>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { QMetaType::QString, 4 },
        }}),
        // Signal 'MainWindowRequestExit'
        QtMocHelpers::SignalData<void() const>(5, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtErrorDisplay, qt_meta_tag_ZN14QtErrorDisplayE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtErrorDisplay::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14QtErrorDisplayE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14QtErrorDisplayE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14QtErrorDisplayE_t>.metaTypes,
    nullptr
} };

void QtErrorDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtErrorDisplay *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->MainWindowDisplayError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->MainWindowRequestExit(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtErrorDisplay::*)(QString , QString ) const>(_a, &QtErrorDisplay::MainWindowDisplayError, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtErrorDisplay::*)() const>(_a, &QtErrorDisplay::MainWindowRequestExit, 1))
            return;
    }
}

const QMetaObject *QtErrorDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtErrorDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14QtErrorDisplayE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Core::Frontend::ErrorApplet"))
        return static_cast< Core::Frontend::ErrorApplet*>(this);
    return QObject::qt_metacast(_clname);
}

int QtErrorDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QtErrorDisplay::MainWindowDisplayError(QString _t1, QString _t2)const
{
    QMetaObject::activate<void>(const_cast< QtErrorDisplay *>(this), &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void QtErrorDisplay::MainWindowRequestExit()const
{
    QMetaObject::activate(const_cast< QtErrorDisplay *>(this), &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
