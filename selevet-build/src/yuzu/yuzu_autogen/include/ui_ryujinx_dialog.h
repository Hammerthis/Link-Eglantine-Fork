/********************************************************************************
** Form generated from reading UI file 'ryujinx_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RYUJINX_DIALOG_H
#define UI_RYUJINX_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RyujinxDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *eden;
    QPushButton *ryujinx;
    QPushButton *cancel;

    void setupUi(QDialog *RyujinxDialog)
    {
        if (RyujinxDialog->objectName().isEmpty())
            RyujinxDialog->setObjectName("RyujinxDialog");
        RyujinxDialog->resize(404, 170);
        verticalLayout = new QVBoxLayout(RyujinxDialog);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(RyujinxDialog);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        eden = new QPushButton(RyujinxDialog);
        eden->setObjectName("eden");

        horizontalLayout->addWidget(eden);

        ryujinx = new QPushButton(RyujinxDialog);
        ryujinx->setObjectName("ryujinx");

        horizontalLayout->addWidget(ryujinx);

        cancel = new QPushButton(RyujinxDialog);
        cancel->setObjectName("cancel");

        horizontalLayout->addWidget(cancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(RyujinxDialog);
        QObject::connect(cancel, &QPushButton::clicked, RyujinxDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(RyujinxDialog);
    } // setupUi

    void retranslateUi(QDialog *RyujinxDialog)
    {
        RyujinxDialog->setWindowTitle(QCoreApplication::translate("RyujinxDialog", "Ryujinx Link", nullptr));
        label->setText(QCoreApplication::translate("RyujinxDialog", "Linking save data to Ryujinx lets both Ryujinx and Eglantine reference the same save files for your games.\n"
"\n"
"By selecting \"From Eglantine\", previous save data stored in Ryujinx will be deleted, and vice versa for \"From Ryujinx\".", nullptr));
        eden->setText(QCoreApplication::translate("RyujinxDialog", "From Eglantine", nullptr));
        ryujinx->setText(QCoreApplication::translate("RyujinxDialog", "From Ryujinx", nullptr));
        cancel->setText(QCoreApplication::translate("RyujinxDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RyujinxDialog: public Ui_RyujinxDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RYUJINX_DIALOG_H
