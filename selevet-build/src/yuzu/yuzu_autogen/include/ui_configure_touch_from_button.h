/********************************************************************************
** Form generated from reading UI file 'configure_touch_from_button.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_TOUCH_FROM_BUTTON_H
#define UI_CONFIGURE_TOUCH_FROM_BUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include "yuzu/configuration/configure_touch_widget.h"

QT_BEGIN_NAMESPACE

class Ui_ConfigureTouchFromButton
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *mapping;
    QPushButton *button_new;
    QPushButton *button_delete;
    QPushButton *button_rename;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *button_delete_bind;
    QTreeView *binding_list;
    TouchScreenPreview *bottom_screen;
    QHBoxLayout *horizontalLayout_3;
    QLabel *coord_label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigureTouchFromButton)
    {
        if (ConfigureTouchFromButton->objectName().isEmpty())
            ConfigureTouchFromButton->setObjectName("ConfigureTouchFromButton");
        ConfigureTouchFromButton->resize(500, 500);
        vboxLayout = new QVBoxLayout(ConfigureTouchFromButton);
        vboxLayout->setObjectName("vboxLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(ConfigureTouchFromButton);
        label->setObjectName("label");
        label->setTextFormat(Qt::PlainText);

        horizontalLayout->addWidget(label);

        mapping = new QComboBox(ConfigureTouchFromButton);
        mapping->setObjectName("mapping");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mapping->sizePolicy().hasHeightForWidth());
        mapping->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mapping);

        button_new = new QPushButton(ConfigureTouchFromButton);
        button_new->setObjectName("button_new");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button_new->sizePolicy().hasHeightForWidth());
        button_new->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(button_new);

        button_delete = new QPushButton(ConfigureTouchFromButton);
        button_delete->setObjectName("button_delete");
        sizePolicy1.setHeightForWidth(button_delete->sizePolicy().hasHeightForWidth());
        button_delete->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(button_delete);

        button_rename = new QPushButton(ConfigureTouchFromButton);
        button_rename->setObjectName("button_rename");
        sizePolicy1.setHeightForWidth(button_rename->sizePolicy().hasHeightForWidth());
        button_rename->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(button_rename);


        vboxLayout->addLayout(horizontalLayout);

        line = new QFrame(ConfigureTouchFromButton);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        vboxLayout->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(ConfigureTouchFromButton);
        label_2->setObjectName("label_2");
        label_2->setTextFormat(Qt::PlainText);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        button_delete_bind = new QPushButton(ConfigureTouchFromButton);
        button_delete_bind->setObjectName("button_delete_bind");

        horizontalLayout_2->addWidget(button_delete_bind);


        vboxLayout->addLayout(horizontalLayout_2);

        binding_list = new QTreeView(ConfigureTouchFromButton);
        binding_list->setObjectName("binding_list");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(binding_list->sizePolicy().hasHeightForWidth());
        binding_list->setSizePolicy(sizePolicy2);
        binding_list->setRootIsDecorated(false);
        binding_list->setUniformRowHeights(true);
        binding_list->setItemsExpandable(false);

        vboxLayout->addWidget(binding_list);

        bottom_screen = new TouchScreenPreview(ConfigureTouchFromButton);
        bottom_screen->setObjectName("bottom_screen");
        sizePolicy2.setHeightForWidth(bottom_screen->sizePolicy().hasHeightForWidth());
        bottom_screen->setSizePolicy(sizePolicy2);
        bottom_screen->setMinimumSize(QSize(160, 120));
        bottom_screen->setBaseSize(QSize(320, 240));
        bottom_screen->setCursor(QCursor(Qt::CursorShape::CrossCursor));
        bottom_screen->setMouseTracking(true);
        bottom_screen->setAutoFillBackground(true);
        bottom_screen->setFrameShape(QFrame::StyledPanel);
        bottom_screen->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(bottom_screen);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        coord_label = new QLabel(ConfigureTouchFromButton);
        coord_label->setObjectName("coord_label");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(coord_label->sizePolicy().hasHeightForWidth());
        coord_label->setSizePolicy(sizePolicy3);
        coord_label->setTextFormat(Qt::PlainText);

        horizontalLayout_3->addWidget(coord_label);

        buttonBox = new QDialogButtonBox(ConfigureTouchFromButton);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(buttonBox);


        vboxLayout->addLayout(horizontalLayout_3);


        retranslateUi(ConfigureTouchFromButton);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ConfigureTouchFromButton, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ConfigureTouchFromButton);
    } // setupUi

    void retranslateUi(QDialog *ConfigureTouchFromButton)
    {
        ConfigureTouchFromButton->setWindowTitle(QCoreApplication::translate("ConfigureTouchFromButton", "Configure Touchscreen Mappings", nullptr));
        label->setText(QCoreApplication::translate("ConfigureTouchFromButton", "Mapping:", nullptr));
        button_new->setText(QCoreApplication::translate("ConfigureTouchFromButton", "New", nullptr));
        button_delete->setText(QCoreApplication::translate("ConfigureTouchFromButton", "Delete", nullptr));
        button_rename->setText(QCoreApplication::translate("ConfigureTouchFromButton", "Rename", nullptr));
        label_2->setText(QCoreApplication::translate("ConfigureTouchFromButton", "Click the bottom area to add a point, then press a button to bind.\n"
"Drag points to change position, or double-click table cells to edit values.", nullptr));
        button_delete_bind->setText(QCoreApplication::translate("ConfigureTouchFromButton", "Delete Point", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureTouchFromButton: public Ui_ConfigureTouchFromButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_TOUCH_FROM_BUTTON_H
