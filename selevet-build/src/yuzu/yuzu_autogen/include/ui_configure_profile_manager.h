/********************************************************************************
** Form generated from reading UI file 'configure_profile_manager.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_PROFILE_MANAGER_H
#define UI_CONFIGURE_PROFILE_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureProfileManager
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *gridGroupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QGraphicsView *current_user_icon;
    QLabel *current_user_username;
    QScrollArea *scrollArea;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pm_add;
    QLabel *label_disable_info;

    void setupUi(QWidget *ConfigureProfileManager)
    {
        if (ConfigureProfileManager->objectName().isEmpty())
            ConfigureProfileManager->setObjectName("ConfigureProfileManager");
        ConfigureProfileManager->resize(483, 483);
        horizontalLayout = new QHBoxLayout(ConfigureProfileManager);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        gridGroupBox = new QGroupBox(ConfigureProfileManager);
        gridGroupBox->setObjectName("gridGroupBox");
        gridLayout_2 = new QGridLayout(gridGroupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(gridGroupBox);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label);

        current_user_icon = new QGraphicsView(gridGroupBox);
        current_user_icon->setObjectName("current_user_icon");
        current_user_icon->setMinimumSize(QSize(64, 64));
        current_user_icon->setMaximumSize(QSize(64, 64));
        current_user_icon->setFrameShape(QFrame::Shape::NoFrame);
        current_user_icon->setFrameShadow(QFrame::Shadow::Plain);
        current_user_icon->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        current_user_icon->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        current_user_icon->setInteractive(false);

        horizontalLayout_2->addWidget(current_user_icon);

        current_user_username = new QLabel(gridGroupBox);
        current_user_username->setObjectName("current_user_username");
        sizePolicy.setHeightForWidth(current_user_username->sizePolicy().hasHeightForWidth());
        current_user_username->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(current_user_username);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        scrollArea = new QScrollArea(gridGroupBox);
        scrollArea->setObjectName("scrollArea");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setFrameShape(QFrame::Shape::StyledPanel);
        scrollArea->setWidgetResizable(false);

        gridLayout_2->addWidget(scrollArea, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pm_add = new QPushButton(gridGroupBox);
        pm_add->setObjectName("pm_add");

        horizontalLayout_3->addWidget(pm_add);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        verticalLayout->addWidget(gridGroupBox);

        label_disable_info = new QLabel(ConfigureProfileManager);
        label_disable_info->setObjectName("label_disable_info");
        label_disable_info->setWordWrap(true);

        verticalLayout->addWidget(label_disable_info);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(ConfigureProfileManager);

        QMetaObject::connectSlotsByName(ConfigureProfileManager);
    } // setupUi

    void retranslateUi(QWidget *ConfigureProfileManager)
    {
        ConfigureProfileManager->setWindowTitle(QCoreApplication::translate("ConfigureProfileManager", "Form", nullptr));
#if QT_CONFIG(accessibility)
        ConfigureProfileManager->setAccessibleName(QCoreApplication::translate("ConfigureProfileManager", "Profiles", nullptr));
#endif // QT_CONFIG(accessibility)
        gridGroupBox->setTitle(QCoreApplication::translate("ConfigureProfileManager", "Profile Manager", nullptr));
        label->setText(QCoreApplication::translate("ConfigureProfileManager", "Current User", nullptr));
        current_user_username->setText(QCoreApplication::translate("ConfigureProfileManager", "Username", nullptr));
        pm_add->setText(QCoreApplication::translate("ConfigureProfileManager", "Add", nullptr));
        label_disable_info->setText(QCoreApplication::translate("ConfigureProfileManager", "Profile management is available only when game is not running.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureProfileManager: public Ui_ConfigureProfileManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_PROFILE_MANAGER_H
