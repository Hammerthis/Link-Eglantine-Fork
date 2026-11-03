/********************************************************************************
** Form generated from reading UI file 'configure.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_H
#define UI_CONFIGURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfigureDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QListWidget *selectorList;
    QTabWidget *tabWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigureDialog)
    {
        if (ConfigureDialog->objectName().isEmpty())
            ConfigureDialog->setObjectName("ConfigureDialog");
        ConfigureDialog->resize(650, 700);
        ConfigureDialog->setMinimumSize(QSize(0, 675));
        verticalLayout = new QVBoxLayout(ConfigureDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        selectorList = new QListWidget(ConfigureDialog);
        selectorList->setObjectName("selectorList");
        selectorList->setMinimumSize(QSize(120, 0));
        selectorList->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(selectorList);

        tabWidget = new QTabWidget(ConfigureDialog);
        tabWidget->setObjectName("tabWidget");

        horizontalLayout->addWidget(tabWidget);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(ConfigureDialog);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        buttonBox = new QDialogButtonBox(ConfigureDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ConfigureDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ConfigureDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ConfigureDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ConfigureDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigureDialog)
    {
        ConfigureDialog->setWindowTitle(QCoreApplication::translate("ConfigureDialog", "Eglantine Configuration", nullptr));
        label->setText(QCoreApplication::translate("ConfigureDialog", "Some settings are only available when a game is not running.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureDialog: public Ui_ConfigureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_H
