/********************************************************************************
** Form generated from reading UI file 'configure_applets.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_APPLETS_H
#define UI_CONFIGURE_APPLETS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureApplets
{
public:
    QVBoxLayout *verticalLayout_1;
    QVBoxLayout *verticalLayout;
    QGroupBox *group_library_applet_modes;
    QVBoxLayout *vboxLayout;
    QWidget *applets_widget;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ConfigureApplets)
    {
        if (ConfigureApplets->objectName().isEmpty())
            ConfigureApplets->setObjectName("ConfigureApplets");
        ConfigureApplets->resize(605, 300);
        verticalLayout_1 = new QVBoxLayout(ConfigureApplets);
        verticalLayout_1->setObjectName("verticalLayout_1");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        group_library_applet_modes = new QGroupBox(ConfigureApplets);
        group_library_applet_modes->setObjectName("group_library_applet_modes");
        vboxLayout = new QVBoxLayout(group_library_applet_modes);
        vboxLayout->setObjectName("vboxLayout");
        applets_widget = new QWidget(group_library_applet_modes);
        applets_widget->setObjectName("applets_widget");
        verticalLayout_3 = new QVBoxLayout(applets_widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, -1);

        vboxLayout->addWidget(applets_widget);


        verticalLayout->addWidget(group_library_applet_modes);


        verticalLayout_1->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_1->addItem(verticalSpacer);


        retranslateUi(ConfigureApplets);

        QMetaObject::connectSlotsByName(ConfigureApplets);
    } // setupUi

    void retranslateUi(QWidget *ConfigureApplets)
    {
        ConfigureApplets->setWindowTitle(QCoreApplication::translate("ConfigureApplets", "Form", nullptr));
#if QT_CONFIG(accessibility)
        ConfigureApplets->setAccessibleName(QCoreApplication::translate("ConfigureApplets", "Applets", nullptr));
#endif // QT_CONFIG(accessibility)
        group_library_applet_modes->setTitle(QCoreApplication::translate("ConfigureApplets", "Applet mode preference", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureApplets: public Ui_ConfigureApplets {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_APPLETS_H
