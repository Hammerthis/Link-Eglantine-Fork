/********************************************************************************
** Form generated from reading UI file 'qt_amiibo_settings.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_AMIIBO_SETTINGS_H
#define UI_QT_AMIIBO_SETTINGS_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtAmiiboSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *mainControllerApplet;
    QVBoxLayout *verticalLayout_1;
    QWidget *topControllerApplet;
    QHBoxLayout *horizontalLayout;
    QLabel *cabinetActionDescriptionLabel;
    QSpacerItem *horizontalSpacer_2;
    QWidget *middleControllerApplet;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *amiiboImageLabel;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *amiiboInfoGroup;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_1;
    QLabel *amiiboSeriesLabel;
    QLineEdit *amiiboSeriesValue;
    QLabel *amiiboTypeLabel;
    QLineEdit *amiiboTypeValue;
    QLabel *amiiboNameLabel;
    QLineEdit *amiiboNameValue;
    QGroupBox *amiiboDataGroup;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_2;
    QLabel *amiiboCustomNameLabel;
    QLineEdit *amiiboCustomNameValue;
    QLabel *amiiboOwnerLabel;
    QLineEdit *amiiboOwnerValue;
    QLabel *creationDateLabel;
    QDateTimeEdit *creationDateValue;
    QLabel *modificationDateLabel;
    QDateTimeEdit *modificationDateValue;
    QGroupBox *gameDataGroup;
    QGridLayout *gridLayout_3;
    QLabel *gameIdLabel;
    QLineEdit *gameIdValue;
    QGroupBox *MountAmiiboGroup;
    QGridLayout *gridLayout_4;
    QToolButton *amiiboDirectoryButton;
    QSpacerItem *horizontalSpacer;
    QLabel *amiiboDirectoryLabel;
    QLineEdit *amiiboDirectoryValue;
    QSpacerItem *verticalSpacer;
    QWidget *bottomControllerApplet;
    QHBoxLayout *horizontalLayout_6;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QtAmiiboSettingsDialog)
    {
        if (QtAmiiboSettingsDialog->objectName().isEmpty())
            QtAmiiboSettingsDialog->setObjectName("QtAmiiboSettingsDialog");
        QtAmiiboSettingsDialog->resize(839, 500);
        QtAmiiboSettingsDialog->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(QtAmiiboSettingsDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mainControllerApplet = new QWidget(QtAmiiboSettingsDialog);
        mainControllerApplet->setObjectName("mainControllerApplet");
        verticalLayout_1 = new QVBoxLayout(mainControllerApplet);
        verticalLayout_1->setSpacing(0);
        verticalLayout_1->setObjectName("verticalLayout_1");
        verticalLayout_1->setContentsMargins(0, 0, 0, 0);
        topControllerApplet = new QWidget(mainControllerApplet);
        topControllerApplet->setObjectName("topControllerApplet");
        horizontalLayout = new QHBoxLayout(topControllerApplet);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(20, 15, 0, 15);
        cabinetActionDescriptionLabel = new QLabel(topControllerApplet);
        cabinetActionDescriptionLabel->setObjectName("cabinetActionDescriptionLabel");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        cabinetActionDescriptionLabel->setFont(font);
        cabinetActionDescriptionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        cabinetActionDescriptionLabel->setWordWrap(false);

        horizontalLayout->addWidget(cabinetActionDescriptionLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_1->addWidget(topControllerApplet);

        middleControllerApplet = new QWidget(mainControllerApplet);
        middleControllerApplet->setObjectName("middleControllerApplet");
        verticalLayout_3 = new QVBoxLayout(middleControllerApplet);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(15, -1, 15, -1);
        amiiboImageLabel = new QLabel(middleControllerApplet);
        amiiboImageLabel->setObjectName("amiiboImageLabel");
        amiiboImageLabel->setMinimumSize(QSize(250, 350));
        amiiboImageLabel->setMaximumSize(QSize(236, 350));
        amiiboImageLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(amiiboImageLabel);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 8, -1, 15);
        amiiboInfoGroup = new QGroupBox(middleControllerApplet);
        amiiboInfoGroup->setObjectName("amiiboInfoGroup");
        verticalLayout_5 = new QVBoxLayout(amiiboInfoGroup);
        verticalLayout_5->setObjectName("verticalLayout_5");
        gridLayout_1 = new QGridLayout();
        gridLayout_1->setObjectName("gridLayout_1");
        amiiboSeriesLabel = new QLabel(amiiboInfoGroup);
        amiiboSeriesLabel->setObjectName("amiiboSeriesLabel");

        gridLayout_1->addWidget(amiiboSeriesLabel, 0, 0, 1, 1);

        amiiboSeriesValue = new QLineEdit(amiiboInfoGroup);
        amiiboSeriesValue->setObjectName("amiiboSeriesValue");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(amiiboSeriesValue->sizePolicy().hasHeightForWidth());
        amiiboSeriesValue->setSizePolicy(sizePolicy);
        amiiboSeriesValue->setReadOnly(true);

        gridLayout_1->addWidget(amiiboSeriesValue, 0, 1, 1, 1);

        amiiboTypeLabel = new QLabel(amiiboInfoGroup);
        amiiboTypeLabel->setObjectName("amiiboTypeLabel");

        gridLayout_1->addWidget(amiiboTypeLabel, 1, 0, 1, 1);

        amiiboTypeValue = new QLineEdit(amiiboInfoGroup);
        amiiboTypeValue->setObjectName("amiiboTypeValue");
        sizePolicy.setHeightForWidth(amiiboTypeValue->sizePolicy().hasHeightForWidth());
        amiiboTypeValue->setSizePolicy(sizePolicy);
        amiiboTypeValue->setReadOnly(true);

        gridLayout_1->addWidget(amiiboTypeValue, 1, 1, 1, 1);

        amiiboNameLabel = new QLabel(amiiboInfoGroup);
        amiiboNameLabel->setObjectName("amiiboNameLabel");

        gridLayout_1->addWidget(amiiboNameLabel, 2, 0, 1, 1);

        amiiboNameValue = new QLineEdit(amiiboInfoGroup);
        amiiboNameValue->setObjectName("amiiboNameValue");
        sizePolicy.setHeightForWidth(amiiboNameValue->sizePolicy().hasHeightForWidth());
        amiiboNameValue->setSizePolicy(sizePolicy);
        amiiboNameValue->setReadOnly(true);

        gridLayout_1->addWidget(amiiboNameValue, 2, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout_1);


        verticalLayout_4->addWidget(amiiboInfoGroup);

        amiiboDataGroup = new QGroupBox(middleControllerApplet);
        amiiboDataGroup->setObjectName("amiiboDataGroup");
        verticalLayout_6 = new QVBoxLayout(amiiboDataGroup);
        verticalLayout_6->setObjectName("verticalLayout_6");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        amiiboCustomNameLabel = new QLabel(amiiboDataGroup);
        amiiboCustomNameLabel->setObjectName("amiiboCustomNameLabel");

        gridLayout_2->addWidget(amiiboCustomNameLabel, 0, 0, 1, 1);

        amiiboCustomNameValue = new QLineEdit(amiiboDataGroup);
        amiiboCustomNameValue->setObjectName("amiiboCustomNameValue");
        sizePolicy.setHeightForWidth(amiiboCustomNameValue->sizePolicy().hasHeightForWidth());
        amiiboCustomNameValue->setSizePolicy(sizePolicy);
        amiiboCustomNameValue->setMaxLength(10);

        gridLayout_2->addWidget(amiiboCustomNameValue, 0, 1, 1, 1);

        amiiboOwnerLabel = new QLabel(amiiboDataGroup);
        amiiboOwnerLabel->setObjectName("amiiboOwnerLabel");

        gridLayout_2->addWidget(amiiboOwnerLabel, 1, 0, 1, 1);

        amiiboOwnerValue = new QLineEdit(amiiboDataGroup);
        amiiboOwnerValue->setObjectName("amiiboOwnerValue");
        sizePolicy.setHeightForWidth(amiiboOwnerValue->sizePolicy().hasHeightForWidth());
        amiiboOwnerValue->setSizePolicy(sizePolicy);
        amiiboOwnerValue->setMaxLength(10);

        gridLayout_2->addWidget(amiiboOwnerValue, 1, 1, 1, 1);

        creationDateLabel = new QLabel(amiiboDataGroup);
        creationDateLabel->setObjectName("creationDateLabel");

        gridLayout_2->addWidget(creationDateLabel, 2, 0, 1, 1);

        creationDateValue = new QDateTimeEdit(amiiboDataGroup);
        creationDateValue->setObjectName("creationDateValue");
        creationDateValue->setReadOnly(true);
        creationDateValue->setMinimumDate(QDate(1970, 1, 1));

        gridLayout_2->addWidget(creationDateValue, 2, 1, 1, 1);

        modificationDateLabel = new QLabel(amiiboDataGroup);
        modificationDateLabel->setObjectName("modificationDateLabel");

        gridLayout_2->addWidget(modificationDateLabel, 3, 0, 1, 1);

        modificationDateValue = new QDateTimeEdit(amiiboDataGroup);
        modificationDateValue->setObjectName("modificationDateValue");
        modificationDateValue->setReadOnly(true);
        modificationDateValue->setMinimumDate(QDate(1970, 1, 1));

        gridLayout_2->addWidget(modificationDateValue, 3, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout_2);


        verticalLayout_4->addWidget(amiiboDataGroup);

        gameDataGroup = new QGroupBox(middleControllerApplet);
        gameDataGroup->setObjectName("gameDataGroup");
        gameDataGroup->setMinimumSize(QSize(500, 0));
        gridLayout_3 = new QGridLayout(gameDataGroup);
        gridLayout_3->setObjectName("gridLayout_3");
        gameIdLabel = new QLabel(gameDataGroup);
        gameIdLabel->setObjectName("gameIdLabel");

        gridLayout_3->addWidget(gameIdLabel, 0, 0, 1, 1);

        gameIdValue = new QLineEdit(gameDataGroup);
        gameIdValue->setObjectName("gameIdValue");
        sizePolicy.setHeightForWidth(gameIdValue->sizePolicy().hasHeightForWidth());
        gameIdValue->setSizePolicy(sizePolicy);
        gameIdValue->setReadOnly(true);

        gridLayout_3->addWidget(gameIdValue, 0, 1, 1, 1);


        verticalLayout_4->addWidget(gameDataGroup);

        MountAmiiboGroup = new QGroupBox(middleControllerApplet);
        MountAmiiboGroup->setObjectName("MountAmiiboGroup");
        MountAmiiboGroup->setMinimumSize(QSize(500, 0));
        gridLayout_4 = new QGridLayout(MountAmiiboGroup);
        gridLayout_4->setObjectName("gridLayout_4");
        amiiboDirectoryButton = new QToolButton(MountAmiiboGroup);
        amiiboDirectoryButton->setObjectName("amiiboDirectoryButton");

        gridLayout_4->addWidget(amiiboDirectoryButton, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 1, 1, 1);

        amiiboDirectoryLabel = new QLabel(MountAmiiboGroup);
        amiiboDirectoryLabel->setObjectName("amiiboDirectoryLabel");

        gridLayout_4->addWidget(amiiboDirectoryLabel, 0, 0, 1, 1);

        amiiboDirectoryValue = new QLineEdit(MountAmiiboGroup);
        amiiboDirectoryValue->setObjectName("amiiboDirectoryValue");

        gridLayout_4->addWidget(amiiboDirectoryValue, 0, 2, 1, 1);


        verticalLayout_4->addWidget(MountAmiiboGroup);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_1->addWidget(middleControllerApplet);

        bottomControllerApplet = new QWidget(mainControllerApplet);
        bottomControllerApplet->setObjectName("bottomControllerApplet");
        horizontalLayout_6 = new QHBoxLayout(bottomControllerApplet);
        horizontalLayout_6->setSpacing(15);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(15, 8, 20, 8);
        buttonBox = new QDialogButtonBox(bottomControllerApplet);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setEnabled(true);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_6->addWidget(buttonBox, 0, Qt::AlignBottom);


        verticalLayout_1->addWidget(bottomControllerApplet);

        verticalLayout_1->setStretch(1, 3);

        verticalLayout->addWidget(mainControllerApplet);


        retranslateUi(QtAmiiboSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, QtAmiiboSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, QtAmiiboSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(QtAmiiboSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *QtAmiiboSettingsDialog)
    {
        QtAmiiboSettingsDialog->setWindowTitle(QCoreApplication::translate("QtAmiiboSettingsDialog", "Amiibo Settings", nullptr));
        cabinetActionDescriptionLabel->setText(QString());
        amiiboImageLabel->setText(QString());
        amiiboInfoGroup->setTitle(QCoreApplication::translate("QtAmiiboSettingsDialog", "Amiibo Info", nullptr));
        amiiboSeriesLabel->setText(QCoreApplication::translate("QtAmiiboSettingsDialog", "Series", nullptr));
        amiiboTypeLabel->setText(QCoreApplication::translate("QtAmiiboSettingsDialog", "Type", nullptr));
        amiiboNameLabel->setText(QCoreApplication::translate("QtAmiiboSettingsDialog", "Name", nullptr));
        amiiboDataGroup->setTitle(QCoreApplication::translate("QtAmiiboSettingsDialog", "Amiibo Data", nullptr));
        amiiboCustomNameLabel->setText(QCoreApplication::translate("QtAmiiboSettingsDialog", "Custom Name", nullptr));
        amiiboOwnerLabel->setText(QCoreApplication::translate("QtAmiiboSettingsDialog", "Owner", nullptr));
        creationDateLabel->setText(QCoreApplication::translate("QtAmiiboSettingsDialog", "Creation Date", nullptr));
        creationDateValue->setDisplayFormat(QCoreApplication::translate("QtAmiiboSettingsDialog", "dd/MM/yyyy", nullptr));
        modificationDateLabel->setText(QCoreApplication::translate("QtAmiiboSettingsDialog", "Modification Date", nullptr));
        modificationDateValue->setDisplayFormat(QCoreApplication::translate("QtAmiiboSettingsDialog", "dd/MM/yyyy ", nullptr));
        gameDataGroup->setTitle(QCoreApplication::translate("QtAmiiboSettingsDialog", "Game Data", nullptr));
        gameIdLabel->setText(QCoreApplication::translate("QtAmiiboSettingsDialog", "Game Id", nullptr));
        MountAmiiboGroup->setTitle(QCoreApplication::translate("QtAmiiboSettingsDialog", "Mount Amiibo", nullptr));
        amiiboDirectoryButton->setText(QCoreApplication::translate("QtAmiiboSettingsDialog", "...", nullptr));
        amiiboDirectoryLabel->setText(QCoreApplication::translate("QtAmiiboSettingsDialog", "File Path", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtAmiiboSettingsDialog: public Ui_QtAmiiboSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_AMIIBO_SETTINGS_H
