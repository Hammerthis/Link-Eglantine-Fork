/********************************************************************************
** Form generated from reading UI file 'configure_graphics_advanced.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_GRAPHICS_ADVANCED_H
#define UI_CONFIGURE_GRAPHICS_ADVANCED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureGraphicsAdvanced
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *normal;
    QVBoxLayout *verticalLayout_3;
    QWidget *normal_target;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ConfigureGraphicsAdvanced)
    {
        if (ConfigureGraphicsAdvanced->objectName().isEmpty())
            ConfigureGraphicsAdvanced->setObjectName("ConfigureGraphicsAdvanced");
        ConfigureGraphicsAdvanced->resize(465, 376);
        verticalLayout_2 = new QVBoxLayout(ConfigureGraphicsAdvanced);
        verticalLayout_2->setObjectName("verticalLayout_2");
        normal = new QGroupBox(ConfigureGraphicsAdvanced);
        normal->setObjectName("normal");
        verticalLayout_3 = new QVBoxLayout(normal);
        verticalLayout_3->setObjectName("verticalLayout_3");
        normal_target = new QWidget(normal);
        normal_target->setObjectName("normal_target");
        verticalLayout = new QVBoxLayout(normal_target);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        verticalLayout_3->addWidget(normal_target);


        verticalLayout_2->addWidget(normal);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(ConfigureGraphicsAdvanced);

        QMetaObject::connectSlotsByName(ConfigureGraphicsAdvanced);
    } // setupUi

    void retranslateUi(QWidget *ConfigureGraphicsAdvanced)
    {
        ConfigureGraphicsAdvanced->setWindowTitle(QCoreApplication::translate("ConfigureGraphicsAdvanced", "Form", nullptr));
#if QT_CONFIG(accessibility)
        ConfigureGraphicsAdvanced->setAccessibleName(QCoreApplication::translate("ConfigureGraphicsAdvanced", "Advanced", nullptr));
#endif // QT_CONFIG(accessibility)
        normal->setTitle(QCoreApplication::translate("ConfigureGraphicsAdvanced", "Advanced Graphics Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureGraphicsAdvanced: public Ui_ConfigureGraphicsAdvanced {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_GRAPHICS_ADVANCED_H
