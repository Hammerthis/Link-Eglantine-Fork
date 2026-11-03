/********************************************************************************
** Form generated from reading UI file 'data_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATA_DIALOG_H
#define UI_DATA_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DataDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTabWidget *pages;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DataDialog)
    {
        if (DataDialog->objectName().isEmpty())
            DataDialog->setObjectName("DataDialog");
        DataDialog->resize(480, 320);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DataDialog->sizePolicy().hasHeightForWidth());
        DataDialog->setSizePolicy(sizePolicy);
        DataDialog->setMinimumSize(QSize(300, 320));
        verticalLayout = new QVBoxLayout(DataDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pages = new QTabWidget(DataDialog);
        pages->setObjectName("pages");

        horizontalLayout->addWidget(pages);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(10, -1, -1, -1);
        label = new QLabel(DataDialog);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        buttonBox = new QDialogButtonBox(DataDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(DataDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DataDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DataDialog, qOverload<>(&QDialog::reject));

        pages->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(DataDialog);
    } // setupUi

    void retranslateUi(QDialog *DataDialog)
    {
        DataDialog->setWindowTitle(QCoreApplication::translate("DataDialog", "Data Manager", nullptr));
        label->setText(QCoreApplication::translate("DataDialog", "Deleting ANY data is IRREVERSABLE!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataDialog: public Ui_DataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATA_DIALOG_H
