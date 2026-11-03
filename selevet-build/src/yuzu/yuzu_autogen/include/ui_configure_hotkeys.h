/********************************************************************************
** Form generated from reading UI file 'configure_hotkeys.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_HOTKEYS_H
#define UI_CONFIGURE_HOTKEYS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureHotkeys
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *button_clear_all;
    QPushButton *button_restore_defaults;
    QVBoxLayout *verticalLayout_2;
    QTreeView *hotkey_list;

    void setupUi(QWidget *ConfigureHotkeys)
    {
        if (ConfigureHotkeys->objectName().isEmpty())
            ConfigureHotkeys->setObjectName("ConfigureHotkeys");
        ConfigureHotkeys->resize(439, 510);
        verticalLayout = new QVBoxLayout(ConfigureHotkeys);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(ConfigureHotkeys);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        button_clear_all = new QPushButton(ConfigureHotkeys);
        button_clear_all->setObjectName("button_clear_all");

        horizontalLayout->addWidget(button_clear_all);

        button_restore_defaults = new QPushButton(ConfigureHotkeys);
        button_restore_defaults->setObjectName("button_restore_defaults");

        horizontalLayout->addWidget(button_restore_defaults);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        hotkey_list = new QTreeView(ConfigureHotkeys);
        hotkey_list->setObjectName("hotkey_list");
        hotkey_list->setEditTriggers(QAbstractItemView::NoEditTriggers);
        hotkey_list->setSortingEnabled(false);

        verticalLayout_2->addWidget(hotkey_list);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(ConfigureHotkeys);

        QMetaObject::connectSlotsByName(ConfigureHotkeys);
    } // setupUi

    void retranslateUi(QWidget *ConfigureHotkeys)
    {
        ConfigureHotkeys->setWindowTitle(QCoreApplication::translate("ConfigureHotkeys", "Hotkey Settings", nullptr));
#if QT_CONFIG(accessibility)
        ConfigureHotkeys->setAccessibleName(QCoreApplication::translate("ConfigureHotkeys", "Hotkeys", nullptr));
#endif // QT_CONFIG(accessibility)
        label_2->setText(QCoreApplication::translate("ConfigureHotkeys", "Double-click on a binding to change it.", nullptr));
        button_clear_all->setText(QCoreApplication::translate("ConfigureHotkeys", "Clear All", nullptr));
        button_restore_defaults->setText(QCoreApplication::translate("ConfigureHotkeys", "Restore Defaults", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureHotkeys: public Ui_ConfigureHotkeys {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_HOTKEYS_H
