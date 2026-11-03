/********************************************************************************
** Form generated from reading UI file 'moderation_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODERATION_DIALOG_H
#define UI_MODERATION_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModerationDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *ban_list_group_box;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *refresh;
    QPushButton *unban;
    QTreeView *ban_list_view;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ModerationDialog)
    {
        if (ModerationDialog->objectName().isEmpty())
            ModerationDialog->setObjectName("ModerationDialog");
        ModerationDialog->resize(500, 300);
        vboxLayout = new QVBoxLayout(ModerationDialog);
        vboxLayout->setObjectName("vboxLayout");
        ban_list_group_box = new QGroupBox(ModerationDialog);
        ban_list_group_box->setObjectName("ban_list_group_box");
        vboxLayout1 = new QVBoxLayout(ban_list_group_box);
        vboxLayout1->setObjectName("vboxLayout1");
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName("hboxLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout->addItem(horizontalSpacer);

        refresh = new QPushButton(ban_list_group_box);
        refresh->setObjectName("refresh");
        refresh->setEnabled(false);

        hboxLayout->addWidget(refresh);

        unban = new QPushButton(ban_list_group_box);
        unban->setObjectName("unban");
        unban->setEnabled(false);

        hboxLayout->addWidget(unban);


        vboxLayout1->addLayout(hboxLayout);

        ban_list_view = new QTreeView(ban_list_group_box);
        ban_list_view->setObjectName("ban_list_view");

        vboxLayout1->addWidget(ban_list_view);


        vboxLayout->addWidget(ban_list_group_box);

        buttonBox = new QDialogButtonBox(ModerationDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(ModerationDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ModerationDialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(ModerationDialog);
    } // setupUi

    void retranslateUi(QDialog *ModerationDialog)
    {
        ModerationDialog->setWindowTitle(QCoreApplication::translate("ModerationDialog", "Moderation", nullptr));
        ban_list_group_box->setTitle(QCoreApplication::translate("ModerationDialog", "Ban List", nullptr));
        refresh->setText(QCoreApplication::translate("ModerationDialog", "Refreshing", nullptr));
        unban->setText(QCoreApplication::translate("ModerationDialog", "Unban", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModerationDialog: public Ui_ModerationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODERATION_DIALOG_H
