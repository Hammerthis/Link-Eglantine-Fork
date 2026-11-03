/********************************************************************************
** Form generated from reading UI file 'new_user_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_USER_DIALOG_H
#define UI_NEW_USER_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_NewUserDialog
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QPushButton *setAvatar;
    QPushButton *selectImage;
    QToolButton *revert;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *username;
    QLineEdit *uuid;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *generate;
    QLabel *uuidVerified;
    QLabel *usernameVerified;
    QGraphicsView *image;

    void setupUi(QDialog *NewUserDialog)
    {
        if (NewUserDialog->objectName().isEmpty())
            NewUserDialog->setObjectName("NewUserDialog");
        NewUserDialog->resize(448, 220);
        gridLayout_2 = new QGridLayout(NewUserDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        buttonBox = new QDialogButtonBox(NewUserDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        gridLayout_2->addWidget(buttonBox, 2, 1, 1, 3);

        setAvatar = new QPushButton(NewUserDialog);
        setAvatar->setObjectName("setAvatar");

        gridLayout_2->addWidget(setAvatar, 1, 2, 1, 1);

        selectImage = new QPushButton(NewUserDialog);
        selectImage->setObjectName("selectImage");

        gridLayout_2->addWidget(selectImage, 1, 1, 1, 1);

        revert = new QToolButton(NewUserDialog);
        revert->setObjectName("revert");

        gridLayout_2->addWidget(revert, 1, 3, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(NewUserDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        username = new QLineEdit(NewUserDialog);
        username->setObjectName("username");

        gridLayout->addWidget(username, 0, 1, 1, 2);

        uuid = new QLineEdit(NewUserDialog);
        uuid->setObjectName("uuid");

        gridLayout->addWidget(uuid, 1, 1, 1, 2);

        label_2 = new QLabel(NewUserDialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(NewUserDialog);
        label_3->setObjectName("label_3");
        QFont font;
        font.setItalic(true);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        generate = new QPushButton(NewUserDialog);
        generate->setObjectName("generate");

        gridLayout->addWidget(generate, 2, 2, 1, 1);

        uuidVerified = new QLabel(NewUserDialog);
        uuidVerified->setObjectName("uuidVerified");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(uuidVerified->sizePolicy().hasHeightForWidth());
        uuidVerified->setSizePolicy(sizePolicy);
        uuidVerified->setMinimumSize(QSize(24, 0));

        gridLayout->addWidget(uuidVerified, 1, 3, 1, 1);

        usernameVerified = new QLabel(NewUserDialog);
        usernameVerified->setObjectName("usernameVerified");

        gridLayout->addWidget(usernameVerified, 0, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 4);

        image = new QGraphicsView(NewUserDialog);
        image->setObjectName("image");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(image->sizePolicy().hasHeightForWidth());
        image->setSizePolicy(sizePolicy1);
        image->setMinimumSize(QSize(64, 64));
        image->setMaximumSize(QSize(64, 64));
        image->setFrameShape(QFrame::Shape::NoFrame);
        image->setFrameShadow(QFrame::Shadow::Plain);
        image->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        image->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        image->setInteractive(false);

        gridLayout_2->addWidget(image, 1, 0, 1, 1);


        retranslateUi(NewUserDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NewUserDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NewUserDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(NewUserDialog);
    } // setupUi

    void retranslateUi(QDialog *NewUserDialog)
    {
        NewUserDialog->setWindowTitle(QCoreApplication::translate("NewUserDialog", "New User", nullptr));
        setAvatar->setText(QCoreApplication::translate("NewUserDialog", "Change Avatar", nullptr));
        selectImage->setText(QCoreApplication::translate("NewUserDialog", "Set Image", nullptr));
        revert->setText(QString());
        label->setText(QCoreApplication::translate("NewUserDialog", "UUID", nullptr));
        username->setText(QCoreApplication::translate("NewUserDialog", "Eglantine", nullptr));
        label_2->setText(QCoreApplication::translate("NewUserDialog", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("NewUserDialog", "UUID must be 32 hex characters (0-9, A-F)", nullptr));
        generate->setText(QCoreApplication::translate("NewUserDialog", "Generate", nullptr));
        usernameVerified->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NewUserDialog: public Ui_NewUserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_USER_DIALOG_H
