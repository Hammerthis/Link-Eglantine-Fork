/********************************************************************************
** Form generated from reading UI file 'configure_general.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_GENERAL_H
#define UI_CONFIGURE_GENERAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureGeneral
{
public:
    QHBoxLayout *HorizontalLayout;
    QVBoxLayout *VerticalLayout;
    QGroupBox *GeneralGroupBox;
    QHBoxLayout *GeneralHorizontalLayout;
    QWidget *general_widget;
    QVBoxLayout *GeneralVerticalLayout;
    QGroupBox *groupBox_external;
    QVBoxLayout *verticalLayout_external;
    QLabel *label_external_desc;
    QListWidget *external_content_list;
    QHBoxLayout *horizontalLayout_external_buttons;
    QPushButton *add_external_dir_button;
    QPushButton *remove_external_dir_button;
    QSpacerItem *horizontalSpacer_external;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *layout_reset;
    QPushButton *button_reset_defaults;
    QSpacerItem *spacer_reset;

    void setupUi(QWidget *ConfigureGeneral)
    {
        if (ConfigureGeneral->objectName().isEmpty())
            ConfigureGeneral->setObjectName("ConfigureGeneral");
        ConfigureGeneral->resize(744, 568);
        HorizontalLayout = new QHBoxLayout(ConfigureGeneral);
        HorizontalLayout->setObjectName("HorizontalLayout");
        VerticalLayout = new QVBoxLayout();
        VerticalLayout->setObjectName("VerticalLayout");
        GeneralGroupBox = new QGroupBox(ConfigureGeneral);
        GeneralGroupBox->setObjectName("GeneralGroupBox");
        GeneralHorizontalLayout = new QHBoxLayout(GeneralGroupBox);
        GeneralHorizontalLayout->setObjectName("GeneralHorizontalLayout");
        general_widget = new QWidget(GeneralGroupBox);
        general_widget->setObjectName("general_widget");
        GeneralVerticalLayout = new QVBoxLayout(general_widget);
        GeneralVerticalLayout->setObjectName("GeneralVerticalLayout");
        GeneralVerticalLayout->setContentsMargins(0, 0, 0, 0);

        GeneralHorizontalLayout->addWidget(general_widget);


        VerticalLayout->addWidget(GeneralGroupBox);

        groupBox_external = new QGroupBox(ConfigureGeneral);
        groupBox_external->setObjectName("groupBox_external");
        verticalLayout_external = new QVBoxLayout(groupBox_external);
        verticalLayout_external->setObjectName("verticalLayout_external");
        label_external_desc = new QLabel(groupBox_external);
        label_external_desc->setObjectName("label_external_desc");
        label_external_desc->setWordWrap(true);

        verticalLayout_external->addWidget(label_external_desc);

        external_content_list = new QListWidget(groupBox_external);
        external_content_list->setObjectName("external_content_list");
        external_content_list->setSelectionMode(QAbstractItemView::SingleSelection);

        verticalLayout_external->addWidget(external_content_list);

        horizontalLayout_external_buttons = new QHBoxLayout();
        horizontalLayout_external_buttons->setObjectName("horizontalLayout_external_buttons");
        add_external_dir_button = new QPushButton(groupBox_external);
        add_external_dir_button->setObjectName("add_external_dir_button");

        horizontalLayout_external_buttons->addWidget(add_external_dir_button);

        remove_external_dir_button = new QPushButton(groupBox_external);
        remove_external_dir_button->setObjectName("remove_external_dir_button");
        remove_external_dir_button->setEnabled(false);

        horizontalLayout_external_buttons->addWidget(remove_external_dir_button);

        horizontalSpacer_external = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_external_buttons->addItem(horizontalSpacer_external);


        verticalLayout_external->addLayout(horizontalLayout_external_buttons);


        VerticalLayout->addWidget(groupBox_external);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        VerticalLayout->addItem(verticalSpacer);

        layout_reset = new QHBoxLayout();
        layout_reset->setSpacing(6);
        layout_reset->setObjectName("layout_reset");
        layout_reset->setContentsMargins(5, 5, 5, 5);
        button_reset_defaults = new QPushButton(ConfigureGeneral);
        button_reset_defaults->setObjectName("button_reset_defaults");

        layout_reset->addWidget(button_reset_defaults);

        spacer_reset = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        layout_reset->addItem(spacer_reset);


        VerticalLayout->addLayout(layout_reset);


        HorizontalLayout->addLayout(VerticalLayout);


        retranslateUi(ConfigureGeneral);

        QMetaObject::connectSlotsByName(ConfigureGeneral);
    } // setupUi

    void retranslateUi(QWidget *ConfigureGeneral)
    {
        ConfigureGeneral->setWindowTitle(QCoreApplication::translate("ConfigureGeneral", "Form", nullptr));
#if QT_CONFIG(accessibility)
        ConfigureGeneral->setAccessibleName(QCoreApplication::translate("ConfigureGeneral", "General", nullptr));
#endif // QT_CONFIG(accessibility)
        GeneralGroupBox->setTitle(QCoreApplication::translate("ConfigureGeneral", "General", nullptr));
        groupBox_external->setTitle(QCoreApplication::translate("ConfigureGeneral", "External Content", nullptr));
        label_external_desc->setText(QCoreApplication::translate("ConfigureGeneral", "Add directories to scan for DLCs and Updates without installing to NAND", nullptr));
        add_external_dir_button->setText(QCoreApplication::translate("ConfigureGeneral", "Add Directory", nullptr));
        remove_external_dir_button->setText(QCoreApplication::translate("ConfigureGeneral", "Remove Selected", nullptr));
        button_reset_defaults->setText(QCoreApplication::translate("ConfigureGeneral", "Reset All Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureGeneral: public Ui_ConfigureGeneral {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_GENERAL_H
