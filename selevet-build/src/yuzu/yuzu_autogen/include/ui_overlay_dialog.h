/********************************************************************************
** Form generated from reading UI file 'overlay_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERLAY_DIALOG_H
#define UI_OVERLAY_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverlayDialog
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedDialog;
    QWidget *lineDialog;
    QGridLayout *lineDialogGridLayout;
    QWidget *contentDialog;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_title;
    QLabel *label_dialog;
    QWidget *buttonsDialog;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_cancel;
    QPushButton *button_ok_label;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *richDialog;
    QGridLayout *richDialogGridLayout;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QWidget *contentRichDialog;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_title_rich;
    QTextBrowser *text_browser_dialog;
    QWidget *buttonsRichDialog;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *button_cancel_rich;
    QPushButton *button_ok_rich;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *OverlayDialog)
    {
        if (OverlayDialog->objectName().isEmpty())
            OverlayDialog->setObjectName("OverlayDialog");
        OverlayDialog->resize(1280, 720);
        OverlayDialog->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(OverlayDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackedDialog = new QStackedWidget(OverlayDialog);
        stackedDialog->setObjectName("stackedDialog");
        lineDialog = new QWidget();
        lineDialog->setObjectName("lineDialog");
        lineDialogGridLayout = new QGridLayout(lineDialog);
        lineDialogGridLayout->setSpacing(0);
        lineDialogGridLayout->setObjectName("lineDialogGridLayout");
        lineDialogGridLayout->setContentsMargins(0, 0, 0, 0);
        contentDialog = new QWidget(lineDialog);
        contentDialog->setObjectName("contentDialog");
        verticalLayout_2 = new QVBoxLayout(contentDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_title = new QLabel(contentDialog);
        label_title->setObjectName("label_title");
        QFont font;
        font.setPointSize(14);
        label_title->setFont(font);
        label_title->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_2->addWidget(label_title);

        label_dialog = new QLabel(contentDialog);
        label_dialog->setObjectName("label_dialog");
        QFont font1;
        font1.setPointSize(18);
        label_dialog->setFont(font1);
        label_dialog->setAlignment(Qt::AlignCenter);
        label_dialog->setWordWrap(true);

        verticalLayout_2->addWidget(label_dialog);

        buttonsDialog = new QWidget(contentDialog);
        buttonsDialog->setObjectName("buttonsDialog");
        horizontalLayout = new QHBoxLayout(buttonsDialog);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        button_cancel = new QPushButton(buttonsDialog);
        button_cancel->setObjectName("button_cancel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button_cancel->sizePolicy().hasHeightForWidth());
        button_cancel->setSizePolicy(sizePolicy);
        button_cancel->setFont(font1);

        horizontalLayout->addWidget(button_cancel);

        button_ok_label = new QPushButton(buttonsDialog);
        button_ok_label->setObjectName("button_ok_label");
        sizePolicy.setHeightForWidth(button_ok_label->sizePolicy().hasHeightForWidth());
        button_ok_label->setSizePolicy(sizePolicy);
        button_ok_label->setFont(font1);

        horizontalLayout->addWidget(button_ok_label);


        verticalLayout_2->addWidget(buttonsDialog);

        verticalLayout_2->setStretch(0, 70);
        verticalLayout_2->setStretch(1, 149);
        verticalLayout_2->setStretch(2, 82);

        lineDialogGridLayout->addWidget(contentDialog, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        lineDialogGridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        lineDialogGridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        lineDialogGridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        lineDialogGridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        lineDialogGridLayout->setRowStretch(0, 210);
        lineDialogGridLayout->setRowStretch(1, 300);
        lineDialogGridLayout->setRowStretch(2, 210);
        lineDialogGridLayout->setColumnStretch(0, 250);
        lineDialogGridLayout->setColumnStretch(1, 780);
        lineDialogGridLayout->setColumnStretch(2, 250);
        stackedDialog->addWidget(lineDialog);
        richDialog = new QWidget();
        richDialog->setObjectName("richDialog");
        richDialogGridLayout = new QGridLayout(richDialog);
        richDialogGridLayout->setSpacing(0);
        richDialogGridLayout->setObjectName("richDialogGridLayout");
        richDialogGridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        richDialogGridLayout->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        richDialogGridLayout->addItem(verticalSpacer_4, 2, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        richDialogGridLayout->addItem(verticalSpacer_3, 0, 1, 1, 1);

        contentRichDialog = new QWidget(richDialog);
        contentRichDialog->setObjectName("contentRichDialog");
        verticalLayout_3 = new QVBoxLayout(contentRichDialog);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_title_rich = new QLabel(contentRichDialog);
        label_title_rich->setObjectName("label_title_rich");
        label_title_rich->setFont(font);
        label_title_rich->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_3->addWidget(label_title_rich);

        text_browser_dialog = new QTextBrowser(contentRichDialog);
        text_browser_dialog->setObjectName("text_browser_dialog");
        text_browser_dialog->setFont(font1);

        verticalLayout_3->addWidget(text_browser_dialog);

        buttonsRichDialog = new QWidget(contentRichDialog);
        buttonsRichDialog->setObjectName("buttonsRichDialog");
        horizontalLayout_2 = new QHBoxLayout(buttonsRichDialog);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        button_cancel_rich = new QPushButton(buttonsRichDialog);
        button_cancel_rich->setObjectName("button_cancel_rich");
        sizePolicy.setHeightForWidth(button_cancel_rich->sizePolicy().hasHeightForWidth());
        button_cancel_rich->setSizePolicy(sizePolicy);
        button_cancel_rich->setFont(font1);

        horizontalLayout_2->addWidget(button_cancel_rich);

        button_ok_rich = new QPushButton(buttonsRichDialog);
        button_ok_rich->setObjectName("button_ok_rich");
        sizePolicy.setHeightForWidth(button_ok_rich->sizePolicy().hasHeightForWidth());
        button_ok_rich->setSizePolicy(sizePolicy);
        button_ok_rich->setFont(font1);

        horizontalLayout_2->addWidget(button_ok_rich);


        verticalLayout_3->addWidget(buttonsRichDialog);

        verticalLayout_3->setStretch(0, 70);
        verticalLayout_3->setStretch(1, 368);
        verticalLayout_3->setStretch(2, 82);

        richDialogGridLayout->addWidget(contentRichDialog, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        richDialogGridLayout->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        richDialogGridLayout->setRowStretch(0, 100);
        richDialogGridLayout->setRowStretch(1, 520);
        richDialogGridLayout->setRowStretch(2, 100);
        richDialogGridLayout->setColumnStretch(0, 165);
        richDialogGridLayout->setColumnStretch(1, 950);
        richDialogGridLayout->setColumnStretch(2, 165);
        stackedDialog->addWidget(richDialog);

        verticalLayout->addWidget(stackedDialog);


        retranslateUi(OverlayDialog);

        stackedDialog->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OverlayDialog);
    } // setupUi

    void retranslateUi(QDialog *OverlayDialog)
    {
        OverlayDialog->setWindowTitle(QCoreApplication::translate("OverlayDialog", "Dialog", nullptr));
        button_cancel->setText(QCoreApplication::translate("OverlayDialog", "Cancel", nullptr));
        button_ok_label->setText(QCoreApplication::translate("OverlayDialog", "OK", nullptr));
        label_title_rich->setText(QString());
        text_browser_dialog->setHtml(QCoreApplication::translate("OverlayDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:18pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        button_cancel_rich->setText(QCoreApplication::translate("OverlayDialog", "Cancel", nullptr));
        button_ok_rich->setText(QCoreApplication::translate("OverlayDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OverlayDialog: public Ui_OverlayDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERLAY_DIALOG_H
