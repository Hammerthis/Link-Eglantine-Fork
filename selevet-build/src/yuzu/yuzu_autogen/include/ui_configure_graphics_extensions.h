/********************************************************************************
** Form generated from reading UI file 'configure_graphics_extensions.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_GRAPHICS_EXTENSIONS_H
#define UI_CONFIGURE_GRAPHICS_EXTENSIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureGraphicsExtensions
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *hacks;
    QVBoxLayout *verticalLayout_6;
    QLabel *label;
    QWidget *hacks_target;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_1;
    QVBoxLayout *verticalLayout_3;
    QWidget *populate_target;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ConfigureGraphicsExtensions)
    {
        if (ConfigureGraphicsExtensions->objectName().isEmpty())
            ConfigureGraphicsExtensions->setObjectName("ConfigureGraphicsExtensions");
        ConfigureGraphicsExtensions->resize(465, 376);
        verticalLayout_4 = new QVBoxLayout(ConfigureGraphicsExtensions);
        verticalLayout_4->setObjectName("verticalLayout_4");
        hacks = new QGroupBox(ConfigureGraphicsExtensions);
        hacks->setObjectName("hacks");
        verticalLayout_6 = new QVBoxLayout(hacks);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label = new QLabel(hacks);
        label->setObjectName("label");

        verticalLayout_6->addWidget(label);

        hacks_target = new QWidget(hacks);
        hacks_target->setObjectName("hacks_target");
        verticalLayout_7 = new QVBoxLayout(hacks_target);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);

        verticalLayout_6->addWidget(hacks_target);


        verticalLayout_4->addWidget(hacks);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_1 = new QGroupBox(ConfigureGraphicsExtensions);
        groupBox_1->setObjectName("groupBox_1");
        verticalLayout_3 = new QVBoxLayout(groupBox_1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        populate_target = new QWidget(groupBox_1);
        populate_target->setObjectName("populate_target");
        verticalLayout = new QVBoxLayout(populate_target);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        verticalLayout_3->addWidget(populate_target);


        verticalLayout_2->addWidget(groupBox_1);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        retranslateUi(ConfigureGraphicsExtensions);

        QMetaObject::connectSlotsByName(ConfigureGraphicsExtensions);
    } // setupUi

    void retranslateUi(QWidget *ConfigureGraphicsExtensions)
    {
        ConfigureGraphicsExtensions->setWindowTitle(QCoreApplication::translate("ConfigureGraphicsExtensions", "Form", nullptr));
#if QT_CONFIG(accessibility)
        ConfigureGraphicsExtensions->setAccessibleName(QCoreApplication::translate("ConfigureGraphicsExtensions", "Extras", nullptr));
#endif // QT_CONFIG(accessibility)
        hacks->setTitle(QCoreApplication::translate("ConfigureGraphicsExtensions", "Hacks", nullptr));
        label->setText(QCoreApplication::translate("ConfigureGraphicsExtensions", "Changing these options from their default may cause issues. Novitii cavete!", nullptr));
        groupBox_1->setTitle(QCoreApplication::translate("ConfigureGraphicsExtensions", "Vulkan Extensions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureGraphicsExtensions: public Ui_ConfigureGraphicsExtensions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_GRAPHICS_EXTENSIONS_H
