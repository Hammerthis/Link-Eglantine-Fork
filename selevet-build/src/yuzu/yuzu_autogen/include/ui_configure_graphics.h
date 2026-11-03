/********************************************************************************
** Form generated from reading UI file 'configure_graphics.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_GRAPHICS_H
#define UI_CONFIGURE_GRAPHICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureGraphics
{
public:
    QVBoxLayout *verticalLayout_1;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QWidget *api_widget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QWidget *graphics_widget;
    QVBoxLayout *verticalLayout;
    QWidget *bg_widget;
    QHBoxLayout *bg_layout;
    QLabel *label;
    QPushButton *bg_button;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ConfigureGraphics)
    {
        if (ConfigureGraphics->objectName().isEmpty())
            ConfigureGraphics->setObjectName("ConfigureGraphics");
        ConfigureGraphics->resize(541, 759);
        verticalLayout_1 = new QVBoxLayout(ConfigureGraphics);
        verticalLayout_1->setObjectName("verticalLayout_1");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_2 = new QGroupBox(ConfigureGraphics);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        api_widget = new QWidget(groupBox_2);
        api_widget->setObjectName("api_widget");
        horizontalLayout = new QHBoxLayout(api_widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);

        verticalLayout_3->addWidget(api_widget);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(ConfigureGraphics);
        groupBox->setObjectName("groupBox");
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        graphics_widget = new QWidget(groupBox);
        graphics_widget->setObjectName("graphics_widget");
        verticalLayout = new QVBoxLayout(graphics_widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        verticalLayout_4->addWidget(graphics_widget);

        bg_widget = new QWidget(groupBox);
        bg_widget->setObjectName("bg_widget");
        bg_layout = new QHBoxLayout(bg_widget);
        bg_layout->setObjectName("bg_layout");
        bg_layout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(bg_widget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        bg_layout->addWidget(label);

        bg_button = new QPushButton(bg_widget);
        bg_button->setObjectName("bg_button");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bg_button->sizePolicy().hasHeightForWidth());
        bg_button->setSizePolicy(sizePolicy1);
        bg_button->setMaximumSize(QSize(40, 16777215));

        bg_layout->addWidget(bg_button);


        verticalLayout_4->addWidget(bg_widget);


        verticalLayout_2->addWidget(groupBox);


        verticalLayout_1->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_1->addItem(verticalSpacer);


        retranslateUi(ConfigureGraphics);

        QMetaObject::connectSlotsByName(ConfigureGraphics);
    } // setupUi

    void retranslateUi(QWidget *ConfigureGraphics)
    {
        ConfigureGraphics->setWindowTitle(QCoreApplication::translate("ConfigureGraphics", "Form", nullptr));
#if QT_CONFIG(accessibility)
        ConfigureGraphics->setAccessibleName(QCoreApplication::translate("ConfigureGraphics", "Graphics", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_2->setTitle(QCoreApplication::translate("ConfigureGraphics", "API Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ConfigureGraphics", "Graphics Settings", nullptr));
        label->setText(QCoreApplication::translate("ConfigureGraphics", "Background Color:", nullptr));
        bg_button->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ConfigureGraphics: public Ui_ConfigureGraphics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_GRAPHICS_H
