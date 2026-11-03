/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelLogo;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *labelYuzu;
    QLabel *labelBuildInfo;
    QLabel *labelAbout;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelLinks;
    QLabel *labelLiability;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName("AboutDialog");
        AboutDialog->resize(701, 385);
        verticalLayout_3 = new QVBoxLayout(AboutDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        labelLogo = new QLabel(AboutDialog);
        labelLogo->setObjectName("labelLogo");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelLogo->sizePolicy().hasHeightForWidth());
        labelLogo->setSizePolicy(sizePolicy);
        labelLogo->setMaximumSize(QSize(200, 200));
        labelLogo->setPixmap(QPixmap(QString::fromUtf8(":/icons/default/256x256/eden.png")));
        labelLogo->setScaledContents(true);

        verticalLayout_2->addWidget(labelLogo);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        labelYuzu = new QLabel(AboutDialog);
        labelYuzu->setObjectName("labelYuzu");
        sizePolicy.setHeightForWidth(labelYuzu->sizePolicy().hasHeightForWidth());
        labelYuzu->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(labelYuzu);

        labelBuildInfo = new QLabel(AboutDialog);
        labelBuildInfo->setObjectName("labelBuildInfo");
        sizePolicy.setHeightForWidth(labelBuildInfo->sizePolicy().hasHeightForWidth());
        labelBuildInfo->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(labelBuildInfo);

        labelAbout = new QLabel(AboutDialog);
        labelAbout->setObjectName("labelAbout");
        sizePolicy.setHeightForWidth(labelAbout->sizePolicy().hasHeightForWidth());
        labelAbout->setSizePolicy(sizePolicy);
        labelAbout->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        labelAbout->setWordWrap(true);

        verticalLayout->addWidget(labelAbout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        labelLinks = new QLabel(AboutDialog);
        labelLinks->setObjectName("labelLinks");
        labelLinks->setOpenExternalLinks(true);

        verticalLayout->addWidget(labelLinks);

        labelLiability = new QLabel(AboutDialog);
        labelLiability->setObjectName("labelLiability");
        sizePolicy.setHeightForWidth(labelLiability->sizePolicy().hasHeightForWidth());
        labelLiability->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(labelLiability);


        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AboutDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AboutDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About Eglantine", nullptr));
        labelLogo->setText(QString());
        labelYuzu->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p><span style=\" font-size:28pt;\">Eglantine</span></p></body></html>", nullptr));
        labelBuildInfo->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p>%1 (%2)</p></body></html>", nullptr));
        labelAbout->setText(QCoreApplication::translate("AboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">Eglantine is an experimental open-source emulator for the Nintendo Switch 2, based on the Eden emulator. <br /><br />This software should not be used to play games you have not legally obtained.</span></p></body></html>", nullptr));
        labelLinks->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p><a href=\"https://eden-emulator.github.io/\"><span style=\" text-decoration: underline; color:#039be5;\">Website</span></a> | <a href=\"https://git.eden-emu.dev\"><span style=\" text-decoration: underline; color:#039be5;\">Source Code</span></a> | <a href=\"https://git.eden-emu.dev/eden-emu/eden/activity/contributors\"><span style=\" text-decoration: underline; color:#039be5;\">Contributors</span></a> | <a href=\"https://discord.gg/HstXbPch7X\"><span style=\" text-decoration: underline; color:#039be5;\">Discord</span></a> | <a href=\"https://stt.gg/qKgFEAbH\"><span style=\" text-decoration: underline; color:#039be5;\">Stoat</span></a> | <a href=\"https://nitter.poast.org/edenemuofficial\"><span style=\" text-decoration: underline; color:#039be5;\">Twitter</span></a> | <a href=\"https://git.eden-emu.dev/eden-emu/eden/src/branch/master/LICENSE.txt\"><span style=\" text-decoration: underline; color:#039be5;\">License</span></a></p></body></html>", nullptr));
        labelLiability->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p><span style=\" font-size:7pt;\">&quot;Nintendo Switch&quot; is a trademark of Nintendo. Eglantine is not affiliated with Nintendo in any way.</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
