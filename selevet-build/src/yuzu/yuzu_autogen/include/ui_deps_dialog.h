/********************************************************************************
** Form generated from reading UI file 'deps_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPS_DIALOG_H
#define UI_DEPS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DepsDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelLogo;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *labelEden;
    QLabel *labelInfo;
    QTableWidget *tableDeps;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DepsDialog)
    {
        if (DepsDialog->objectName().isEmpty())
            DepsDialog->setObjectName("DepsDialog");
        DepsDialog->resize(701, 500);
        verticalLayout_3 = new QVBoxLayout(DepsDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        labelLogo = new QLabel(DepsDialog);
        labelLogo->setObjectName("labelLogo");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelLogo->sizePolicy().hasHeightForWidth());
        labelLogo->setSizePolicy(sizePolicy);
        labelLogo->setMaximumSize(QSize(200, 200));
        labelLogo->setPixmap(QPixmap(QString::fromUtf8(":/icons/default/256x256/eglantine.png")));
        labelLogo->setScaledContents(true);

        verticalLayout_2->addWidget(labelLogo);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        labelEden = new QLabel(DepsDialog);
        labelEden->setObjectName("labelEden");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelEden->sizePolicy().hasHeightForWidth());
        labelEden->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(labelEden);

        labelInfo = new QLabel(DepsDialog);
        labelInfo->setObjectName("labelInfo");
        sizePolicy1.setHeightForWidth(labelInfo->sizePolicy().hasHeightForWidth());
        labelInfo->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(labelInfo);

        tableDeps = new QTableWidget(DepsDialog);
        if (tableDeps->columnCount() < 2)
            tableDeps->setColumnCount(2);
        tableDeps->setObjectName("tableDeps");
        tableDeps->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableDeps->setAlternatingRowColors(true);
        tableDeps->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        tableDeps->setColumnCount(2);
        tableDeps->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableDeps->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableDeps);


        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(DepsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(DepsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DepsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DepsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DepsDialog);
    } // setupUi

    void retranslateUi(QDialog *DepsDialog)
    {
        DepsDialog->setWindowTitle(QCoreApplication::translate("DepsDialog", "Eglantine Dependencies", nullptr));
        labelLogo->setText(QString());
        labelEden->setText(QCoreApplication::translate("DepsDialog", "<html><head/><body><p><span style=\" font-size:28pt;\">Eglantine Dependencies</span></p></body></html>", nullptr));
        labelInfo->setText(QCoreApplication::translate("DepsDialog", "<html><head/><body><p>The projects that make Eglantine possible</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DepsDialog: public Ui_DepsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPS_DIALOG_H
