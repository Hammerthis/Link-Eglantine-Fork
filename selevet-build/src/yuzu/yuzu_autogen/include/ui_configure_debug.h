/********************************************************************************
** Form generated from reading UI file 'configure_debug.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_DEBUG_H
#define UI_CONFIGURE_DEBUG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureDebug
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_1;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QWidget *debug_widget;
    QVBoxLayout *verticalLayout;
    QCheckBox *toggle_gdbstub;
    QWidget *horizontalWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_11;
    QSpinBox *gdbport_spinbox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_1;
    QWidget *logging_widget;
    QHBoxLayout *horizontalLayout_1;
    QLabel *label_1;
    QLineEdit *log_filter_edit;
    QWidget *gpu_log_level_widget;
    QHBoxLayout *gpu_log_level_layout;
    QLabel *gpu_log_level_label;
    QComboBox *gpu_log_level;
    QCheckBox *toggle_console;
    QCheckBox *extended_logging;
    QPushButton *open_log_button;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *homebrew_args_edit;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QCheckBox *disable_loop_safety_checks;
    QCheckBox *dump_macros;
    QCheckBox *enable_nsight_aftermath;
    QCheckBox *dump_guest_shaders;
    QCheckBox *enable_renderdoc_hotkey;
    QCheckBox *disable_macro_jit;
    QCheckBox *disable_macro_hle;
    QCheckBox *enable_graphics_debugging;
    QSpacerItem *verticalSpacer_5;
    QCheckBox *enable_shader_feedback;
    QCheckBox *disable_buffer_reorder;
    QCheckBox *gpu_log_shader_dumps;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_4;
    QCheckBox *perform_vulkan_check;
    QCheckBox *disable_web_applet;
    QCheckBox *enable_all_controllers;
    QCheckBox *use_auto_stub;
    QCheckBox *quest_flag;
    QCheckBox *use_dev_keys;
    QCheckBox *use_debug_asserts;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_3;
    QWidget *serial_battery_widget;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_12;
    QLineEdit *serial_battery_edit;
    QWidget *debug_knobs_widget;
    QHBoxLayout *horizontalLayout_debug_knobs;
    QLabel *label_debug_knobs;
    QSpinBox *debug_knobs_spinbox;
    QWidget *serial_board_widget;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_13;
    QLineEdit *serial_board_edit;
    QSpacerItem *verticalSpacer_3;
    QCheckBox *dump_audio_commands;
    QCheckBox *flush_line;
    QCheckBox *fs_access_log;
    QCheckBox *reporting_services;
    QCheckBox *censor_username;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;

    void setupUi(QScrollArea *ConfigureDebug)
    {
        if (ConfigureDebug->objectName().isEmpty())
            ConfigureDebug->setObjectName("ConfigureDebug");
        ConfigureDebug->resize(831, 760);
        ConfigureDebug->setWidgetResizable(true);
        widget = new QWidget();
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 829, 758));
        verticalLayout_1 = new QVBoxLayout(widget);
        verticalLayout_1->setObjectName("verticalLayout_1");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        debug_widget = new QWidget(groupBox);
        debug_widget->setObjectName("debug_widget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(debug_widget->sizePolicy().hasHeightForWidth());
        debug_widget->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(debug_widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        toggle_gdbstub = new QCheckBox(debug_widget);
        toggle_gdbstub->setObjectName("toggle_gdbstub");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toggle_gdbstub->sizePolicy().hasHeightForWidth());
        toggle_gdbstub->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(toggle_gdbstub);

        horizontalWidget_3 = new QWidget(debug_widget);
        horizontalWidget_3->setObjectName("horizontalWidget_3");
        sizePolicy1.setHeightForWidth(horizontalWidget_3->sizePolicy().hasHeightForWidth());
        horizontalWidget_3->setSizePolicy(sizePolicy1);
        horizontalLayout_3 = new QHBoxLayout(horizontalWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(horizontalWidget_3);
        label_11->setObjectName("label_11");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(label_11);

        gdbport_spinbox = new QSpinBox(horizontalWidget_3);
        gdbport_spinbox->setObjectName("gdbport_spinbox");
        sizePolicy1.setHeightForWidth(gdbport_spinbox->sizePolicy().hasHeightForWidth());
        gdbport_spinbox->setSizePolicy(sizePolicy1);
        gdbport_spinbox->setMinimum(1024);
        gdbport_spinbox->setMaximum(65535);

        horizontalLayout_3->addWidget(gdbport_spinbox);


        verticalLayout->addWidget(horizontalWidget_3);


        verticalLayout_3->addWidget(debug_widget);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName("groupBox_2");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy4);
        gridLayout_1 = new QGridLayout(groupBox_2);
        gridLayout_1->setObjectName("gridLayout_1");
        logging_widget = new QWidget(groupBox_2);
        logging_widget->setObjectName("logging_widget");
        sizePolicy1.setHeightForWidth(logging_widget->sizePolicy().hasHeightForWidth());
        logging_widget->setSizePolicy(sizePolicy1);
        horizontalLayout_1 = new QHBoxLayout(logging_widget);
        horizontalLayout_1->setObjectName("horizontalLayout_1");
        horizontalLayout_1->setContentsMargins(0, 0, 0, 0);
        label_1 = new QLabel(logging_widget);
        label_1->setObjectName("label_1");
        sizePolicy.setHeightForWidth(label_1->sizePolicy().hasHeightForWidth());
        label_1->setSizePolicy(sizePolicy);

        horizontalLayout_1->addWidget(label_1);

        log_filter_edit = new QLineEdit(logging_widget);
        log_filter_edit->setObjectName("log_filter_edit");

        horizontalLayout_1->addWidget(log_filter_edit);


        gridLayout_1->addWidget(logging_widget, 0, 0, 1, 4);

        gpu_log_level_widget = new QWidget(groupBox_2);
        gpu_log_level_widget->setObjectName("gpu_log_level_widget");
        sizePolicy1.setHeightForWidth(gpu_log_level_widget->sizePolicy().hasHeightForWidth());
        gpu_log_level_widget->setSizePolicy(sizePolicy1);
        gpu_log_level_layout = new QHBoxLayout(gpu_log_level_widget);
        gpu_log_level_layout->setObjectName("gpu_log_level_layout");
        gpu_log_level_layout->setContentsMargins(0, 0, 0, 0);
        gpu_log_level_label = new QLabel(gpu_log_level_widget);
        gpu_log_level_label->setObjectName("gpu_log_level_label");

        gpu_log_level_layout->addWidget(gpu_log_level_label);

        gpu_log_level = new QComboBox(gpu_log_level_widget);
        gpu_log_level->addItem(QString());
        gpu_log_level->addItem(QString());
        gpu_log_level->addItem(QString());
        gpu_log_level->addItem(QString());
        gpu_log_level->addItem(QString());
        gpu_log_level->setObjectName("gpu_log_level");

        gpu_log_level_layout->addWidget(gpu_log_level);


        gridLayout_1->addWidget(gpu_log_level_widget, 1, 0, 1, 1);

        toggle_console = new QCheckBox(groupBox_2);
        toggle_console->setObjectName("toggle_console");

        gridLayout_1->addWidget(toggle_console, 1, 1, 1, 1);

        extended_logging = new QCheckBox(groupBox_2);
        extended_logging->setObjectName("extended_logging");
        extended_logging->setEnabled(true);

        gridLayout_1->addWidget(extended_logging, 1, 2, 1, 1);

        open_log_button = new QPushButton(groupBox_2);
        open_log_button->setObjectName("open_log_button");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Maximum);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(open_log_button->sizePolicy().hasHeightForWidth());
        open_log_button->setSizePolicy(sizePolicy5);
        open_log_button->setMinimumSize(QSize(250, 0));

        gridLayout_1->addWidget(open_log_button, 1, 3, 1, 1);


        horizontalLayout->addWidget(groupBox_2);


        verticalLayout_1->addLayout(horizontalLayout);

        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_5 = new QVBoxLayout(groupBox_3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        homebrew_args_edit = new QLineEdit(groupBox_3);
        homebrew_args_edit->setObjectName("homebrew_args_edit");

        horizontalLayout_4->addWidget(homebrew_args_edit);


        verticalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_1->addWidget(groupBox_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        groupBox_4 = new QGroupBox(widget);
        groupBox_4->setObjectName("groupBox_4");
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setObjectName("gridLayout_2");
        disable_loop_safety_checks = new QCheckBox(groupBox_4);
        disable_loop_safety_checks->setObjectName("disable_loop_safety_checks");

        gridLayout_2->addWidget(disable_loop_safety_checks, 4, 0, 1, 1);

        dump_macros = new QCheckBox(groupBox_4);
        dump_macros->setObjectName("dump_macros");
        dump_macros->setEnabled(true);

        gridLayout_2->addWidget(dump_macros, 9, 0, 1, 1);

        enable_nsight_aftermath = new QCheckBox(groupBox_4);
        enable_nsight_aftermath->setObjectName("enable_nsight_aftermath");

        gridLayout_2->addWidget(enable_nsight_aftermath, 3, 0, 1, 1);

        dump_guest_shaders = new QCheckBox(groupBox_4);
        dump_guest_shaders->setObjectName("dump_guest_shaders");
        dump_guest_shaders->setEnabled(true);

        gridLayout_2->addWidget(dump_guest_shaders, 6, 0, 1, 1);

        enable_renderdoc_hotkey = new QCheckBox(groupBox_4);
        enable_renderdoc_hotkey->setObjectName("enable_renderdoc_hotkey");

        gridLayout_2->addWidget(enable_renderdoc_hotkey, 1, 0, 1, 1);

        disable_macro_jit = new QCheckBox(groupBox_4);
        disable_macro_jit->setObjectName("disable_macro_jit");
        disable_macro_jit->setEnabled(true);

        gridLayout_2->addWidget(disable_macro_jit, 8, 0, 1, 1);

        disable_macro_hle = new QCheckBox(groupBox_4);
        disable_macro_hle->setObjectName("disable_macro_hle");
        disable_macro_hle->setEnabled(true);

        gridLayout_2->addWidget(disable_macro_hle, 10, 0, 1, 1);

        enable_graphics_debugging = new QCheckBox(groupBox_4);
        enable_graphics_debugging->setObjectName("enable_graphics_debugging");
        enable_graphics_debugging->setEnabled(true);

        gridLayout_2->addWidget(enable_graphics_debugging, 0, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        gridLayout_2->addItem(verticalSpacer_5, 11, 0, 1, 1);

        enable_shader_feedback = new QCheckBox(groupBox_4);
        enable_shader_feedback->setObjectName("enable_shader_feedback");

        gridLayout_2->addWidget(enable_shader_feedback, 2, 0, 1, 1);

        disable_buffer_reorder = new QCheckBox(groupBox_4);
        disable_buffer_reorder->setObjectName("disable_buffer_reorder");

        gridLayout_2->addWidget(disable_buffer_reorder, 5, 0, 1, 1);

        gpu_log_shader_dumps = new QCheckBox(groupBox_4);
        gpu_log_shader_dumps->setObjectName("gpu_log_shader_dumps");

        gridLayout_2->addWidget(gpu_log_shader_dumps, 7, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBox_4);

        groupBox_6 = new QGroupBox(widget);
        groupBox_6->setObjectName("groupBox_6");
        gridLayout_4 = new QGridLayout(groupBox_6);
        gridLayout_4->setObjectName("gridLayout_4");
        perform_vulkan_check = new QCheckBox(groupBox_6);
        perform_vulkan_check->setObjectName("perform_vulkan_check");

        gridLayout_4->addWidget(perform_vulkan_check, 3, 0, 1, 1);

        disable_web_applet = new QCheckBox(groupBox_6);
        disable_web_applet->setObjectName("disable_web_applet");

        gridLayout_4->addWidget(disable_web_applet, 4, 0, 1, 1);

        enable_all_controllers = new QCheckBox(groupBox_6);
        enable_all_controllers->setObjectName("enable_all_controllers");

        gridLayout_4->addWidget(enable_all_controllers, 5, 0, 1, 1);

        use_auto_stub = new QCheckBox(groupBox_6);
        use_auto_stub->setObjectName("use_auto_stub");

        gridLayout_4->addWidget(use_auto_stub, 6, 0, 1, 1);

        quest_flag = new QCheckBox(groupBox_6);
        quest_flag->setObjectName("quest_flag");

        gridLayout_4->addWidget(quest_flag, 0, 0, 1, 1);

        use_dev_keys = new QCheckBox(groupBox_6);
        use_dev_keys->setObjectName("use_dev_keys");

        gridLayout_4->addWidget(use_dev_keys, 1, 0, 1, 1);

        use_debug_asserts = new QCheckBox(groupBox_6);
        use_debug_asserts->setObjectName("use_debug_asserts");

        gridLayout_4->addWidget(use_debug_asserts, 2, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 7, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBox_6);

        groupBox_5 = new QGroupBox(widget);
        groupBox_5->setObjectName("groupBox_5");
        gridLayout_3 = new QGridLayout(groupBox_5);
        gridLayout_3->setObjectName("gridLayout_3");
        serial_battery_widget = new QWidget(groupBox_5);
        serial_battery_widget->setObjectName("serial_battery_widget");
        sizePolicy1.setHeightForWidth(serial_battery_widget->sizePolicy().hasHeightForWidth());
        serial_battery_widget->setSizePolicy(sizePolicy1);
        horizontalLayout_11 = new QHBoxLayout(serial_battery_widget);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(serial_battery_widget);
        label_12->setObjectName("label_12");
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);

        horizontalLayout_11->addWidget(label_12);

        serial_battery_edit = new QLineEdit(serial_battery_widget);
        serial_battery_edit->setObjectName("serial_battery_edit");

        horizontalLayout_11->addWidget(serial_battery_edit);


        gridLayout_3->addWidget(serial_battery_widget, 6, 0, 1, 1);

        debug_knobs_widget = new QWidget(groupBox_5);
        debug_knobs_widget->setObjectName("debug_knobs_widget");
        sizePolicy1.setHeightForWidth(debug_knobs_widget->sizePolicy().hasHeightForWidth());
        debug_knobs_widget->setSizePolicy(sizePolicy1);
        horizontalLayout_debug_knobs = new QHBoxLayout(debug_knobs_widget);
        horizontalLayout_debug_knobs->setObjectName("horizontalLayout_debug_knobs");
        horizontalLayout_debug_knobs->setContentsMargins(0, 0, 0, 0);
        label_debug_knobs = new QLabel(debug_knobs_widget);
        label_debug_knobs->setObjectName("label_debug_knobs");
        sizePolicy.setHeightForWidth(label_debug_knobs->sizePolicy().hasHeightForWidth());
        label_debug_knobs->setSizePolicy(sizePolicy);

        horizontalLayout_debug_knobs->addWidget(label_debug_knobs);

        debug_knobs_spinbox = new QSpinBox(debug_knobs_widget);
        debug_knobs_spinbox->setObjectName("debug_knobs_spinbox");
        debug_knobs_spinbox->setMinimum(0);
        debug_knobs_spinbox->setMaximum(65535);

        horizontalLayout_debug_knobs->addWidget(debug_knobs_spinbox);


        gridLayout_3->addWidget(debug_knobs_widget, 8, 0, 1, 1);

        serial_board_widget = new QWidget(groupBox_5);
        serial_board_widget->setObjectName("serial_board_widget");
        sizePolicy1.setHeightForWidth(serial_board_widget->sizePolicy().hasHeightForWidth());
        serial_board_widget->setSizePolicy(sizePolicy1);
        horizontalLayout_12 = new QHBoxLayout(serial_board_widget);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(serial_board_widget);
        label_13->setObjectName("label_13");
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);

        horizontalLayout_12->addWidget(label_13);

        serial_board_edit = new QLineEdit(serial_board_widget);
        serial_board_edit->setObjectName("serial_board_edit");

        horizontalLayout_12->addWidget(serial_board_edit);


        gridLayout_3->addWidget(serial_board_widget, 7, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 20, 0, 1, 1);

        dump_audio_commands = new QCheckBox(groupBox_5);
        dump_audio_commands->setObjectName("dump_audio_commands");

        gridLayout_3->addWidget(dump_audio_commands, 1, 0, 1, 1);

        flush_line = new QCheckBox(groupBox_5);
        flush_line->setObjectName("flush_line");

        gridLayout_3->addWidget(flush_line, 2, 0, 1, 1);

        fs_access_log = new QCheckBox(groupBox_5);
        fs_access_log->setObjectName("fs_access_log");

        gridLayout_3->addWidget(fs_access_log, 3, 0, 1, 1);

        reporting_services = new QCheckBox(groupBox_5);
        reporting_services->setObjectName("reporting_services");

        gridLayout_3->addWidget(reporting_services, 4, 0, 1, 1);

        censor_username = new QCheckBox(groupBox_5);
        censor_username->setObjectName("censor_username");

        gridLayout_3->addWidget(censor_username, 5, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBox_5);


        verticalLayout_1->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_1->addItem(verticalSpacer);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        sizePolicy4.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy4);
        QFont font;
        font.setItalic(true);
        label_5->setFont(font);
        label_5->setIndent(20);

        verticalLayout_1->addWidget(label_5);

        ConfigureDebug->setWidget(widget);
        QWidget::setTabOrder(log_filter_edit, toggle_console);
        QWidget::setTabOrder(toggle_console, extended_logging);
        QWidget::setTabOrder(extended_logging, open_log_button);
        QWidget::setTabOrder(open_log_button, homebrew_args_edit);
        QWidget::setTabOrder(homebrew_args_edit, enable_graphics_debugging);
        QWidget::setTabOrder(enable_graphics_debugging, enable_shader_feedback);
        QWidget::setTabOrder(enable_shader_feedback, enable_nsight_aftermath);
        QWidget::setTabOrder(enable_nsight_aftermath, fs_access_log);
        QWidget::setTabOrder(fs_access_log, reporting_services);
        QWidget::setTabOrder(reporting_services, quest_flag);
        QWidget::setTabOrder(quest_flag, use_debug_asserts);

        retranslateUi(ConfigureDebug);

        QMetaObject::connectSlotsByName(ConfigureDebug);
    } // setupUi

    void retranslateUi(QScrollArea *ConfigureDebug)
    {
        groupBox->setTitle(QCoreApplication::translate("ConfigureDebug", "Debugger", nullptr));
        toggle_gdbstub->setText(QCoreApplication::translate("ConfigureDebug", "Enable GDB Stub", nullptr));
        label_11->setText(QCoreApplication::translate("ConfigureDebug", "Port:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ConfigureDebug", "Logging", nullptr));
        label_1->setText(QCoreApplication::translate("ConfigureDebug", "Global Log Filter", nullptr));
        gpu_log_level_label->setText(QCoreApplication::translate("ConfigureDebug", "GPU Logging/Level", nullptr));
        gpu_log_level->setItemText(0, QCoreApplication::translate("ConfigureDebug", "Off", nullptr));
        gpu_log_level->setItemText(1, QCoreApplication::translate("ConfigureDebug", "Errors", nullptr));
        gpu_log_level->setItemText(2, QCoreApplication::translate("ConfigureDebug", "Standard", nullptr));
        gpu_log_level->setItemText(3, QCoreApplication::translate("ConfigureDebug", "Verbose", nullptr));
        gpu_log_level->setItemText(4, QCoreApplication::translate("ConfigureDebug", "All", nullptr));

#if QT_CONFIG(tooltip)
        gpu_log_level->setToolTip(QCoreApplication::translate("ConfigureDebug", "Detail level for GPU logs. Off disables logging entirely.", nullptr));
#endif // QT_CONFIG(tooltip)
        toggle_console->setText(QCoreApplication::translate("ConfigureDebug", "Show Log in Console", nullptr));
#if QT_CONFIG(tooltip)
        extended_logging->setToolTip(QCoreApplication::translate("ConfigureDebug", "When checked, the max size of the log increases from 100 MB to 1 GB", nullptr));
#endif // QT_CONFIG(tooltip)
        extended_logging->setText(QCoreApplication::translate("ConfigureDebug", "Enable Extended Logging**", nullptr));
        open_log_button->setText(QCoreApplication::translate("ConfigureDebug", "Open Log Location", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ConfigureDebug", "Homebrew", nullptr));
        label_3->setText(QCoreApplication::translate("ConfigureDebug", "Arguments String", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("ConfigureDebug", "Graphics", nullptr));
#if QT_CONFIG(tooltip)
        disable_loop_safety_checks->setToolTip(QCoreApplication::translate("ConfigureDebug", "When checked, it executes shaders without loop logic changes", nullptr));
#endif // QT_CONFIG(tooltip)
        disable_loop_safety_checks->setText(QCoreApplication::translate("ConfigureDebug", "Disable Loop safety checks", nullptr));
#if QT_CONFIG(tooltip)
        dump_macros->setToolTip(QCoreApplication::translate("ConfigureDebug", "When checked, it will dump all the macro programs of the GPU", nullptr));
#endif // QT_CONFIG(tooltip)
        dump_macros->setText(QCoreApplication::translate("ConfigureDebug", "Dump Maxwell Macros", nullptr));
#if QT_CONFIG(tooltip)
        enable_nsight_aftermath->setToolTip(QCoreApplication::translate("ConfigureDebug", "When checked, it enables Nsight Aftermath crash dumps", nullptr));
#endif // QT_CONFIG(tooltip)
        enable_nsight_aftermath->setText(QCoreApplication::translate("ConfigureDebug", "Enable Nsight Aftermath", nullptr));
#if QT_CONFIG(tooltip)
        dump_guest_shaders->setToolTip(QCoreApplication::translate("ConfigureDebug", "When checked, it will dump original Maxwell guest shader bytecode (the input to the recompiler) as .ash files under DumpDir/shaders/. Useful for inspection with nvdisasm.", nullptr));
#endif // QT_CONFIG(tooltip)
        dump_guest_shaders->setText(QCoreApplication::translate("ConfigureDebug", "Dump Guest (Maxwell) Shaders", nullptr));
        enable_renderdoc_hotkey->setText(QCoreApplication::translate("ConfigureDebug", "Enable Renderdoc Hotkey", nullptr));
#if QT_CONFIG(tooltip)
        disable_macro_jit->setToolTip(QCoreApplication::translate("ConfigureDebug", "When checked, it disables the macro Just In Time compiler. Enabling this makes games run slower", nullptr));
#endif // QT_CONFIG(tooltip)
        disable_macro_jit->setText(QCoreApplication::translate("ConfigureDebug", "Disable Macro JIT", nullptr));
#if QT_CONFIG(tooltip)
        disable_macro_hle->setToolTip(QCoreApplication::translate("ConfigureDebug", "When checked, it disables the macro HLE functions. Enabling this makes games run slower", nullptr));
#endif // QT_CONFIG(tooltip)
        disable_macro_hle->setText(QCoreApplication::translate("ConfigureDebug", "Disable Macro HLE", nullptr));
#if QT_CONFIG(tooltip)
        enable_graphics_debugging->setToolTip(QCoreApplication::translate("ConfigureDebug", "When checked, the graphics API enters a slower debugging mode", nullptr));
#endif // QT_CONFIG(tooltip)
        enable_graphics_debugging->setText(QCoreApplication::translate("ConfigureDebug", "Enable Graphics Debugging", nullptr));
#if QT_CONFIG(tooltip)
        enable_shader_feedback->setToolTip(QCoreApplication::translate("ConfigureDebug", "When checked, yuzu will log statistics about the compiled pipeline cache", nullptr));
#endif // QT_CONFIG(tooltip)
        enable_shader_feedback->setText(QCoreApplication::translate("ConfigureDebug", "Enable Shader Feedback", nullptr));
#if QT_CONFIG(tooltip)
        disable_buffer_reorder->setToolTip(QCoreApplication::translate("ConfigureDebug", "<html><head/><body><p>When checked, disables reordering of mapped memory uploads which allows to associate uploads with specific draws. May reduce performance in some cases.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        disable_buffer_reorder->setText(QCoreApplication::translate("ConfigureDebug", "Disable Buffer Reorder", nullptr));
#if QT_CONFIG(tooltip)
        gpu_log_shader_dumps->setToolTip(QCoreApplication::translate("ConfigureDebug", "When checked, it will dump the recompiler's output SPIR-V binaries (.spv) under LogDir/shaders/. Inspect via SPIRV-Tools (spirv-dis / spirv-cross / spirv-val) or RenderDoc.", nullptr));
#endif // QT_CONFIG(tooltip)
        gpu_log_shader_dumps->setText(QCoreApplication::translate("ConfigureDebug", "Dump SPIR-V Shaders", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("ConfigureDebug", "Advanced", nullptr));
#if QT_CONFIG(tooltip)
        perform_vulkan_check->setToolTip(QCoreApplication::translate("ConfigureDebug", "Enables yuzu to check for a working Vulkan environment when the program starts up. Disable this if this is causing issues with external programs seeing yuzu.", nullptr));
#endif // QT_CONFIG(tooltip)
        perform_vulkan_check->setText(QCoreApplication::translate("ConfigureDebug", "Perform Startup Vulkan Check", nullptr));
        disable_web_applet->setText(QCoreApplication::translate("ConfigureDebug", "Disable Web Applet", nullptr));
        enable_all_controllers->setText(QCoreApplication::translate("ConfigureDebug", "Enable All Controller Types", nullptr));
        use_auto_stub->setText(QCoreApplication::translate("ConfigureDebug", "Enable Auto-Stub", nullptr));
        quest_flag->setText(QCoreApplication::translate("ConfigureDebug", "Kiosk (Quest) Mode", nullptr));
        use_dev_keys->setText(QCoreApplication::translate("ConfigureDebug", "Use dev.keys", nullptr));
        use_debug_asserts->setText(QCoreApplication::translate("ConfigureDebug", "Enable Debug Asserts", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("ConfigureDebug", "Debugging", nullptr));
        label_12->setText(QCoreApplication::translate("ConfigureDebug", "Battery Serial:", nullptr));
        label_debug_knobs->setText(QCoreApplication::translate("ConfigureDebug", "Debug Knobs:", nullptr));
#if QT_CONFIG(tooltip)
        debug_knobs_spinbox->setToolTip(QCoreApplication::translate("ConfigureDebug", "Bitmask for quick development toggles", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        debug_knobs_spinbox->setStatusTip(QCoreApplication::translate("ConfigureDebug", "Set debug knobs (bitmask)", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        debug_knobs_spinbox->setWhatsThis(QCoreApplication::translate("ConfigureDebug", "16-bit debug knob set for quick development toggles", nullptr));
#endif // QT_CONFIG(whatsthis)
        debug_knobs_spinbox->setSuffix(QCoreApplication::translate("ConfigureDebug", " (bitmask)", nullptr));
        label_13->setText(QCoreApplication::translate("ConfigureDebug", "Unit Serial:", nullptr));
#if QT_CONFIG(tooltip)
        dump_audio_commands->setToolTip(QCoreApplication::translate("ConfigureDebug", "Enable this to output the latest generated audio command list to the console. Only affects games using the audio renderer.", nullptr));
#endif // QT_CONFIG(tooltip)
        dump_audio_commands->setText(QCoreApplication::translate("ConfigureDebug", "Dump Audio Commands To Console**", nullptr));
        flush_line->setText(QCoreApplication::translate("ConfigureDebug", "Flush log output on each line", nullptr));
        fs_access_log->setText(QCoreApplication::translate("ConfigureDebug", "Enable FS Access Log", nullptr));
        reporting_services->setText(QCoreApplication::translate("ConfigureDebug", "Enable Verbose Reporting Services**", nullptr));
        censor_username->setText(QCoreApplication::translate("ConfigureDebug", "Censor username in logs", nullptr));
        label_5->setText(QCoreApplication::translate("ConfigureDebug", "**This will be reset automatically when Eglantine closes.", nullptr));
        (void)ConfigureDebug;
    } // retranslateUi

};

namespace Ui {
    class ConfigureDebug: public Ui_ConfigureDebug {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_DEBUG_H
