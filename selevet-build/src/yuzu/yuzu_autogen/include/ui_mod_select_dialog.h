/********************************************************************************
** Form generated from reading UI file 'mod_select_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOD_SELECT_DIALOG_H
#define UI_MOD_SELECT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModSelectDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTreeView *treeView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ModSelectDialog)
    {
        if (ModSelectDialog->objectName().isEmpty())
            ModSelectDialog->setObjectName("ModSelectDialog");
        ModSelectDialog->resize(580, 430);
        verticalLayout = new QVBoxLayout(ModSelectDialog);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(ModSelectDialog);
        label->setObjectName("label");
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        treeView = new QTreeView(ModSelectDialog);
        treeView->setObjectName("treeView");
        treeView->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
        treeView->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        treeView->setAlternatingRowColors(true);
        treeView->setVerticalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        treeView->setUniformRowHeights(true);
        treeView->setSortingEnabled(true);
        treeView->setHeaderHidden(true);

        verticalLayout->addWidget(treeView);

        buttonBox = new QDialogButtonBox(ModSelectDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ModSelectDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ModSelectDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ModSelectDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ModSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *ModSelectDialog)
    {
        ModSelectDialog->setWindowTitle(QCoreApplication::translate("ModSelectDialog", "Import Mods", nullptr));
        label->setText(QCoreApplication::translate("ModSelectDialog", "The specified folder or archive contains the following mods. Select which ones to install.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModSelectDialog: public Ui_ModSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOD_SELECT_DIALOG_H
