/********************************************************************************
** Form generated from reading UI file 'set_play_time_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SET_PLAY_TIME_DIALOG_H
#define UI_SET_PLAY_TIME_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SetPlayTimeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *inputLayout;
    QLabel *labelHours;
    QSpinBox *hoursSpinBox;
    QLabel *labelMinutes;
    QSpinBox *minutesSpinBox;
    QLabel *labelSeconds;
    QSpinBox *secondsSpinBox;
    QLabel *errorLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SetPlayTimeDialog)
    {
        if (SetPlayTimeDialog->objectName().isEmpty())
            SetPlayTimeDialog->setObjectName("SetPlayTimeDialog");
        SetPlayTimeDialog->resize(400, 150);
        SetPlayTimeDialog->setModal(true);
        verticalLayout = new QVBoxLayout(SetPlayTimeDialog);
        verticalLayout->setObjectName("verticalLayout");
        inputLayout = new QHBoxLayout();
        inputLayout->setObjectName("inputLayout");
        labelHours = new QLabel(SetPlayTimeDialog);
        labelHours->setObjectName("labelHours");

        inputLayout->addWidget(labelHours);

        hoursSpinBox = new QSpinBox(SetPlayTimeDialog);
        hoursSpinBox->setObjectName("hoursSpinBox");
        hoursSpinBox->setMaximum(9999);

        inputLayout->addWidget(hoursSpinBox);

        labelMinutes = new QLabel(SetPlayTimeDialog);
        labelMinutes->setObjectName("labelMinutes");

        inputLayout->addWidget(labelMinutes);

        minutesSpinBox = new QSpinBox(SetPlayTimeDialog);
        minutesSpinBox->setObjectName("minutesSpinBox");
        minutesSpinBox->setMaximum(59);

        inputLayout->addWidget(minutesSpinBox);

        labelSeconds = new QLabel(SetPlayTimeDialog);
        labelSeconds->setObjectName("labelSeconds");

        inputLayout->addWidget(labelSeconds);

        secondsSpinBox = new QSpinBox(SetPlayTimeDialog);
        secondsSpinBox->setObjectName("secondsSpinBox");
        secondsSpinBox->setMaximum(59);

        inputLayout->addWidget(secondsSpinBox);


        verticalLayout->addLayout(inputLayout);

        errorLabel = new QLabel(SetPlayTimeDialog);
        errorLabel->setObjectName("errorLabel");
        errorLabel->setStyleSheet(QString::fromUtf8("QLabel { color : red; }"));
        errorLabel->setVisible(false);

        verticalLayout->addWidget(errorLabel);

        buttonBox = new QDialogButtonBox(SetPlayTimeDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SetPlayTimeDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SetPlayTimeDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SetPlayTimeDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SetPlayTimeDialog);
    } // setupUi

    void retranslateUi(QDialog *SetPlayTimeDialog)
    {
        SetPlayTimeDialog->setWindowTitle(QCoreApplication::translate("SetPlayTimeDialog", "Set Play Time Data", nullptr));
        labelHours->setText(QCoreApplication::translate("SetPlayTimeDialog", "Hours:", nullptr));
        labelMinutes->setText(QCoreApplication::translate("SetPlayTimeDialog", "Minutes:", nullptr));
        labelSeconds->setText(QCoreApplication::translate("SetPlayTimeDialog", "Seconds:", nullptr));
        errorLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SetPlayTimeDialog: public Ui_SetPlayTimeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SET_PLAY_TIME_DIALOG_H
