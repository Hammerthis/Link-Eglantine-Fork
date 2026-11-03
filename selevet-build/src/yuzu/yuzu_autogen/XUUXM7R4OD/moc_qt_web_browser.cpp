/****************************************************************************
** Meta object code from reading C++ file 'qt_web_browser.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../selevet-source/src/yuzu/applets/qt_web_browser.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_web_browser.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12QtWebBrowserE_t {};
} // unnamed namespace

template <> constexpr inline auto QtWebBrowser::qt_create_metaobjectdata<qt_meta_tag_ZN12QtWebBrowserE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtWebBrowser",
        "MainWindowOpenWebPage",
        "",
        "std::string",
        "main_url",
        "additional_args",
        "is_local",
        "MainWindowRequestExit"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'MainWindowOpenWebPage'
        QtMocHelpers::SignalData<void(const std::string &, const std::string &, bool) const>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 3, 5 }, { QMetaType::Bool, 6 },
        }}),
        // Signal 'MainWindowRequestExit'
        QtMocHelpers::SignalData<void() const>(7, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtWebBrowser, qt_meta_tag_ZN12QtWebBrowserE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtWebBrowser::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12QtWebBrowserE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12QtWebBrowserE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12QtWebBrowserE_t>.metaTypes,
    nullptr
} };

void QtWebBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtWebBrowser *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->MainWindowOpenWebPage((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::string>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 1: _t->MainWindowRequestExit(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtWebBrowser::*)(const std::string & , const std::string & , bool ) const>(_a, &QtWebBrowser::MainWindowOpenWebPage, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtWebBrowser::*)() const>(_a, &QtWebBrowser::MainWindowRequestExit, 1))
            return;
    }
}

const QMetaObject *QtWebBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtWebBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12QtWebBrowserE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Core::Frontend::WebBrowserApplet"))
        return static_cast< Core::Frontend::WebBrowserApplet*>(this);
    return QObject::qt_metacast(_clname);
}

int QtWebBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QtWebBrowser::MainWindowOpenWebPage(const std::string & _t1, const std::string & _t2, bool _t3)const
{
    QMetaObject::activate<void>(const_cast< QtWebBrowser *>(this), &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}

// SIGNAL 1
void QtWebBrowser::MainWindowRequestExit()const
{
    QMetaObject::activate(const_cast< QtWebBrowser *>(this), &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
