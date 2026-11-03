/********************************************************************************
** Form generated from reading UI file 'configure_tas.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_TAS_H
#define UI_CONFIGURE_TAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfigureTas
{
public:
    QVBoxLayout *verticalLayout_1;
    QHBoxLayout *horizontalLayout_1;
    QGroupBox *groupBox_1;
    QGridLayout *gridLayout_1;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QCheckBox *tas_enable;
    QCheckBox *tas_loop_script;
    QCheckBox *tas_pause_on_load;
    QCheckBox *tas_show_recording_dialog;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QToolButton *tas_path_button;
    QLineEdit *tas_path_edit;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigureTas)
    {
        if (ConfigureTas->objectName().isEmpty())
            ConfigureTas->setObjectName("ConfigureTas");
        verticalLayout_1 = new QVBoxLayout(ConfigureTas);
        verticalLayout_1->setObjectName("verticalLayout_1");
        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName("horizontalLayout_1");
        groupBox_1 = new QGroupBox(ConfigureTas);
        groupBox_1->setObjectName("groupBox_1");
        gridLayout_1 = new QGridLayout(groupBox_1);
        gridLayout_1->setObjectName("gridLayout_1");
        label_1 = new QLabel(groupBox_1);
        label_1->setObjectName("label_1");
        label_1->setOpenExternalLinks(true);

        gridLayout_1->addWidget(label_1, 0, 0, 1, 4);

        label_2 = new QLabel(groupBox_1);
        label_2->setObjectName("label_2");
        label_2->setWordWrap(true);

        gridLayout_1->addWidget(label_2, 1, 0, 1, 4);

        label_3 = new QLabel(groupBox_1);
        label_3->setObjectName("label_3");
        label_3->setWordWrap(true);

        gridLayout_1->addWidget(label_3, 2, 0, 1, 4);


        horizontalLayout_1->addWidget(groupBox_1);


        verticalLayout_1->addLayout(horizontalLayout_1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        groupBox_2 = new QGroupBox(ConfigureTas);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        tas_enable = new QCheckBox(groupBox_2);
        tas_enable->setObjectName("tas_enable");

        gridLayout_2->addWidget(tas_enable, 0, 0, 1, 4);

        tas_loop_script = new QCheckBox(groupBox_2);
        tas_loop_script->setObjectName("tas_loop_script");

        gridLayout_2->addWidget(tas_loop_script, 1, 0, 1, 4);

        tas_pause_on_load = new QCheckBox(groupBox_2);
        tas_pause_on_load->setObjectName("tas_pause_on_load");
        tas_pause_on_load->setEnabled(false);

        gridLayout_2->addWidget(tas_pause_on_load, 2, 0, 1, 4);

        tas_show_recording_dialog = new QCheckBox(groupBox_2);
        tas_show_recording_dialog->setObjectName("tas_show_recording_dialog");

        gridLayout_2->addWidget(tas_show_recording_dialog, 3, 0, 1, 4);


        horizontalLayout_2->addWidget(groupBox_2);


        verticalLayout_1->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        groupBox_3 = new QGroupBox(ConfigureTas);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName("gridLayout_3");
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName("label_4");

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        tas_path_button = new QToolButton(groupBox_3);
        tas_path_button->setObjectName("tas_path_button");

        gridLayout_3->addWidget(tas_path_button, 0, 3, 1, 1);

        tas_path_edit = new QLineEdit(groupBox_3);
        tas_path_edit->setObjectName("tas_path_edit");

        gridLayout_3->addWidget(tas_path_edit, 0, 2, 1, 1);


        horizontalLayout_3->addWidget(groupBox_3);


        verticalLayout_1->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_1->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ConfigureTas);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_1->addWidget(buttonBox);


        retranslateUi(ConfigureTas);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ConfigureTas, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ConfigureTas, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ConfigureTas);
    } // setupUi

    void retranslateUi(QDialog *ConfigureTas)
    {
        groupBox_1->setTitle(QCoreApplication::translate("ConfigureTas", "TAS", nullptr));
        label_1->setText(QCoreApplication::translate("ConfigureTas", "<html><head/><body><p>Reads controller input from scripts in the same format as TAS-nx scripts.<br/>For a more detailed explanation, please consult the user handbook.</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("ConfigureTas", "To check which hotkeys control the playback/recording, please refer to the Hotkey settings (Configure -> General -> Hotkeys).", nullptr));
        label_3->setText(QCoreApplication::translate("ConfigureTas", "WARNING: This is an experimental feature.<br/>It will not play back scripts frame perfectly with the current, imperfect syncing method.", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ConfigureTas", "Settings", nullptr));
        tas_enable->setText(QCoreApplication::translate("ConfigureTas", "Enable TAS features", nullptr));
        tas_loop_script->setText(QCoreApplication::translate("ConfigureTas", "Loop script", nullptr));
        tas_pause_on_load->setText(QCoreApplication::translate("ConfigureTas", "Pause execution during loads", nullptr));
        tas_show_recording_dialog->setText(QCoreApplication::translate("ConfigureTas", "Show recording dialog", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ConfigureTas", "Script Directory", nullptr));
        label_4->setText(QCoreApplication::translate("ConfigureTas", "Path", nullptr));
        tas_path_button->setText(QCoreApplication::translate("ConfigureTas", "...", nullptr));
        (void)ConfigureTas;
    } // retranslateUi

};

namespace Ui {
    class ConfigureTas: public Ui_ConfigureTas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_TAS_H
