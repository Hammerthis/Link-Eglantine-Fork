/********************************************************************************
** Form generated from reading UI file 'configure_network.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_NETWORK_H
#define UI_CONFIGURE_NETWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureNetwork
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QComboBox *network_interface;
    QLabel *label_4;
    QCheckBox *airplane_mode;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ConfigureNetwork)
    {
        if (ConfigureNetwork->objectName().isEmpty())
            ConfigureNetwork->setObjectName("ConfigureNetwork");
        ConfigureNetwork->resize(433, 561);
        verticalLayout = new QVBoxLayout(ConfigureNetwork);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox_2 = new QGroupBox(ConfigureNetwork);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        network_interface = new QComboBox(groupBox_2);
        network_interface->setObjectName("network_interface");

        gridLayout_2->addWidget(network_interface, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        airplane_mode = new QCheckBox(groupBox_2);
        airplane_mode->setObjectName("airplane_mode");

        gridLayout_2->addWidget(airplane_mode, 2, 0, 1, 2);


        verticalLayout_3->addWidget(groupBox_2);


        verticalLayout->addLayout(verticalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ConfigureNetwork);

        QMetaObject::connectSlotsByName(ConfigureNetwork);
    } // setupUi

    void retranslateUi(QWidget *ConfigureNetwork)
    {
        ConfigureNetwork->setWindowTitle(QCoreApplication::translate("ConfigureNetwork", "Form", nullptr));
#if QT_CONFIG(accessibility)
        ConfigureNetwork->setAccessibleName(QCoreApplication::translate("ConfigureNetwork", "Network", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_2->setTitle(QCoreApplication::translate("ConfigureNetwork", "General", nullptr));
        label_4->setText(QCoreApplication::translate("ConfigureNetwork", "Network Interface", nullptr));
        airplane_mode->setText(QCoreApplication::translate("ConfigureNetwork", "Enable Airplane Mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureNetwork: public Ui_ConfigureNetwork {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_NETWORK_H
