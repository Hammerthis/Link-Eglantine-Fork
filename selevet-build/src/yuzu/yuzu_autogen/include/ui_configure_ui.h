/********************************************************************************
** Form generated from reading UI file 'configure_ui.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_UI_H
#define UI_CONFIGURE_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureUi
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *general_groupBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_change_language_info;
    QHBoxLayout *horizontalLayout_2;
    QLabel *language_label;
    QComboBox *language_combobox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *theme_label;
    QComboBox *theme_combobox;
    QGroupBox *GameListGroupBox;
    QHBoxLayout *GameListHorizontalLayout;
    QVBoxLayout *GeneralVerticalLayout;
    QCheckBox *show_add_ons;
    QCheckBox *show_size;
    QCheckBox *show_types;
    QCheckBox *show_play_time;
    QHBoxLayout *folder_icon_size_qhbox_layout_2;
    QLabel *folder_icon_size_label;
    QComboBox *folder_icon_size_combobox;
    QHBoxLayout *row_1_qhbox_layout;
    QLabel *row_1_label;
    QComboBox *row_1_text_combobox;
    QHBoxLayout *row_2_qhbox_layout;
    QLabel *row_2_label;
    QComboBox *row_2_text_combobox;
    QGroupBox *screenshots_GroupBox;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *enable_screenshot_save_as;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *screenshot_path_edit;
    QToolButton *screenshot_path_button;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *screenshot_width;
    QComboBox *screenshot_height;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ConfigureUi)
    {
        if (ConfigureUi->objectName().isEmpty())
            ConfigureUi->setObjectName("ConfigureUi");
        ConfigureUi->resize(363, 613);
        verticalLayout = new QVBoxLayout(ConfigureUi);
        verticalLayout->setObjectName("verticalLayout");
        general_groupBox = new QGroupBox(ConfigureUi);
        general_groupBox->setObjectName("general_groupBox");
        horizontalLayout = new QHBoxLayout(general_groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_change_language_info = new QLabel(general_groupBox);
        label_change_language_info->setObjectName("label_change_language_info");
        label_change_language_info->setWordWrap(true);

        verticalLayout_2->addWidget(label_change_language_info);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        language_label = new QLabel(general_groupBox);
        language_label->setObjectName("language_label");

        horizontalLayout_2->addWidget(language_label);

        language_combobox = new QComboBox(general_groupBox);
        language_combobox->setObjectName("language_combobox");

        horizontalLayout_2->addWidget(language_combobox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        theme_label = new QLabel(general_groupBox);
        theme_label->setObjectName("theme_label");

        horizontalLayout_3->addWidget(theme_label);

        theme_combobox = new QComboBox(general_groupBox);
        theme_combobox->setObjectName("theme_combobox");

        horizontalLayout_3->addWidget(theme_combobox);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addWidget(general_groupBox);

        GameListGroupBox = new QGroupBox(ConfigureUi);
        GameListGroupBox->setObjectName("GameListGroupBox");
        GameListHorizontalLayout = new QHBoxLayout(GameListGroupBox);
        GameListHorizontalLayout->setObjectName("GameListHorizontalLayout");
        GeneralVerticalLayout = new QVBoxLayout();
        GeneralVerticalLayout->setObjectName("GeneralVerticalLayout");
        show_add_ons = new QCheckBox(GameListGroupBox);
        show_add_ons->setObjectName("show_add_ons");

        GeneralVerticalLayout->addWidget(show_add_ons);

        show_size = new QCheckBox(GameListGroupBox);
        show_size->setObjectName("show_size");

        GeneralVerticalLayout->addWidget(show_size);

        show_types = new QCheckBox(GameListGroupBox);
        show_types->setObjectName("show_types");

        GeneralVerticalLayout->addWidget(show_types);

        show_play_time = new QCheckBox(GameListGroupBox);
        show_play_time->setObjectName("show_play_time");

        GeneralVerticalLayout->addWidget(show_play_time);

        folder_icon_size_qhbox_layout_2 = new QHBoxLayout();
        folder_icon_size_qhbox_layout_2->setObjectName("folder_icon_size_qhbox_layout_2");
        folder_icon_size_label = new QLabel(GameListGroupBox);
        folder_icon_size_label->setObjectName("folder_icon_size_label");

        folder_icon_size_qhbox_layout_2->addWidget(folder_icon_size_label);

        folder_icon_size_combobox = new QComboBox(GameListGroupBox);
        folder_icon_size_combobox->setObjectName("folder_icon_size_combobox");

        folder_icon_size_qhbox_layout_2->addWidget(folder_icon_size_combobox);


        GeneralVerticalLayout->addLayout(folder_icon_size_qhbox_layout_2);

        row_1_qhbox_layout = new QHBoxLayout();
        row_1_qhbox_layout->setObjectName("row_1_qhbox_layout");
        row_1_label = new QLabel(GameListGroupBox);
        row_1_label->setObjectName("row_1_label");

        row_1_qhbox_layout->addWidget(row_1_label);

        row_1_text_combobox = new QComboBox(GameListGroupBox);
        row_1_text_combobox->setObjectName("row_1_text_combobox");

        row_1_qhbox_layout->addWidget(row_1_text_combobox);


        GeneralVerticalLayout->addLayout(row_1_qhbox_layout);

        row_2_qhbox_layout = new QHBoxLayout();
        row_2_qhbox_layout->setObjectName("row_2_qhbox_layout");
        row_2_label = new QLabel(GameListGroupBox);
        row_2_label->setObjectName("row_2_label");

        row_2_qhbox_layout->addWidget(row_2_label);

        row_2_text_combobox = new QComboBox(GameListGroupBox);
        row_2_text_combobox->setObjectName("row_2_text_combobox");

        row_2_qhbox_layout->addWidget(row_2_text_combobox);


        GeneralVerticalLayout->addLayout(row_2_qhbox_layout);


        GameListHorizontalLayout->addLayout(GeneralVerticalLayout);


        verticalLayout->addWidget(GameListGroupBox);

        screenshots_GroupBox = new QGroupBox(ConfigureUi);
        screenshots_GroupBox->setObjectName("screenshots_GroupBox");
        verticalLayout_4 = new QVBoxLayout(screenshots_GroupBox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        enable_screenshot_save_as = new QCheckBox(screenshots_GroupBox);
        enable_screenshot_save_as->setObjectName("enable_screenshot_save_as");

        verticalLayout_3->addWidget(enable_screenshot_save_as);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(screenshots_GroupBox);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        screenshot_path_edit = new QLineEdit(screenshots_GroupBox);
        screenshot_path_edit->setObjectName("screenshot_path_edit");

        horizontalLayout_4->addWidget(screenshot_path_edit);

        screenshot_path_button = new QToolButton(screenshots_GroupBox);
        screenshot_path_button->setObjectName("screenshot_path_button");

        horizontalLayout_4->addWidget(screenshot_path_button);


        verticalLayout_3->addLayout(horizontalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        screenshot_width = new QLabel(screenshots_GroupBox);
        screenshot_width->setObjectName("screenshot_width");
        screenshot_width->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_5->addWidget(screenshot_width);

        screenshot_height = new QComboBox(screenshots_GroupBox);
        screenshot_height->setObjectName("screenshot_height");
        screenshot_height->setEditable(true);

        horizontalLayout_5->addWidget(screenshot_height);


        gridLayout->addLayout(horizontalLayout_5, 0, 1, 1, 1);

        label_3 = new QLabel(screenshots_GroupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout->addWidget(screenshots_GroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ConfigureUi);

        QMetaObject::connectSlotsByName(ConfigureUi);
    } // setupUi

    void retranslateUi(QWidget *ConfigureUi)
    {
        ConfigureUi->setWindowTitle(QCoreApplication::translate("ConfigureUi", "Form", nullptr));
#if QT_CONFIG(accessibility)
        ConfigureUi->setAccessibleName(QCoreApplication::translate("ConfigureUi", "UI", nullptr));
#endif // QT_CONFIG(accessibility)
        general_groupBox->setTitle(QCoreApplication::translate("ConfigureUi", "General", nullptr));
        label_change_language_info->setText(QCoreApplication::translate("ConfigureUi", "Note: Changing language will apply your configuration.", nullptr));
        language_label->setText(QCoreApplication::translate("ConfigureUi", "Interface language:", nullptr));
        theme_label->setText(QCoreApplication::translate("ConfigureUi", "Theme:", nullptr));
        GameListGroupBox->setTitle(QCoreApplication::translate("ConfigureUi", "Game List", nullptr));
        show_add_ons->setText(QCoreApplication::translate("ConfigureUi", "Show Add-Ons Column", nullptr));
        show_size->setText(QCoreApplication::translate("ConfigureUi", "Show Size Column", nullptr));
        show_types->setText(QCoreApplication::translate("ConfigureUi", "Show File Types Column", nullptr));
        show_play_time->setText(QCoreApplication::translate("ConfigureUi", "Show Play Time Column", nullptr));
        folder_icon_size_label->setText(QCoreApplication::translate("ConfigureUi", "Folder Icon Size:", nullptr));
        row_1_label->setText(QCoreApplication::translate("ConfigureUi", "Row 1 Text:", nullptr));
        row_2_label->setText(QCoreApplication::translate("ConfigureUi", "Row 2 Text:", nullptr));
        screenshots_GroupBox->setTitle(QCoreApplication::translate("ConfigureUi", "Screenshots", nullptr));
        enable_screenshot_save_as->setText(QCoreApplication::translate("ConfigureUi", "Ask Where To Save Screenshots (Windows Only)", nullptr));
        label->setText(QCoreApplication::translate("ConfigureUi", "Screenshots Path: ", nullptr));
        screenshot_path_button->setText(QCoreApplication::translate("ConfigureUi", "...", nullptr));
        screenshot_width->setText(QCoreApplication::translate("ConfigureUi", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("ConfigureUi", "Resolution:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureUi: public Ui_ConfigureUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_UI_H
