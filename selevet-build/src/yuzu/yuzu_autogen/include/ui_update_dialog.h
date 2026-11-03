/********************************************************************************
** Form generated from reading UI file 'update_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_DIALOG_H
#define UI_UPDATE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UpdateDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *url;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QVBoxLayout *radioButtons;
    QLabel *version;
    QTextBrowser *body;

    void setupUi(QDialog *UpdateDialog)
    {
        if (UpdateDialog->objectName().isEmpty())
            UpdateDialog->setObjectName("UpdateDialog");
        UpdateDialog->resize(655, 551);
        gridLayout = new QGridLayout(UpdateDialog);
        gridLayout->setObjectName("gridLayout");
        url = new QLabel(UpdateDialog);
        url->setObjectName("url");
        url->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        url->setOpenExternalLinks(true);

        gridLayout->addWidget(url, 0, 1, 1, 1);

        label_2 = new QLabel(UpdateDialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 0, 1, 2);

        buttonBox = new QDialogButtonBox(UpdateDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::No|QDialogButtonBox::StandardButton::Yes);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 2);

        groupBox = new QGroupBox(UpdateDialog);
        groupBox->setObjectName("groupBox");
        radioButtons = new QVBoxLayout(groupBox);
        radioButtons->setObjectName("radioButtons");

        gridLayout->addWidget(groupBox, 2, 0, 1, 2);

        version = new QLabel(UpdateDialog);
        version->setObjectName("version");

        gridLayout->addWidget(version, 0, 0, 1, 1);

        body = new QTextBrowser(UpdateDialog);
        body->setObjectName("body");
        body->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        body->setReadOnly(true);
        body->setOpenExternalLinks(true);

        gridLayout->addWidget(body, 1, 0, 1, 2);


        retranslateUi(UpdateDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, UpdateDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, UpdateDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(UpdateDialog);
    } // setupUi

    void retranslateUi(QDialog *UpdateDialog)
    {
        UpdateDialog->setWindowTitle(QCoreApplication::translate("UpdateDialog", "Update Available", nullptr));
        url->setText(QCoreApplication::translate("UpdateDialog", "<a href=\"%1\">View on Forgejo</a>", nullptr));
        label_2->setText(QCoreApplication::translate("UpdateDialog", "Would you like to install this update?", nullptr));
        groupBox->setTitle(QCoreApplication::translate("UpdateDialog", "Available Versions", nullptr));
        version->setText(QCoreApplication::translate("UpdateDialog", "%1 is available for download.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateDialog: public Ui_UpdateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_DIALOG_H
