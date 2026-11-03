/********************************************************************************
** Form generated from reading UI file 'configure_per_game_addons.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_PER_GAME_ADDONS_H
#define UI_CONFIGURE_PER_GAME_ADDONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigurePerGameAddons
{
public:
    QGridLayout *gridLayout;
    QPushButton *zip;
    QPushButton *folder;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *ConfigurePerGameAddons)
    {
        if (ConfigurePerGameAddons->objectName().isEmpty())
            ConfigurePerGameAddons->setObjectName("ConfigurePerGameAddons");
        ConfigurePerGameAddons->resize(400, 300);
        gridLayout = new QGridLayout(ConfigurePerGameAddons);
        gridLayout->setObjectName("gridLayout");
        zip = new QPushButton(ConfigurePerGameAddons);
        zip->setObjectName("zip");

        gridLayout->addWidget(zip, 1, 0, 1, 1);

        folder = new QPushButton(ConfigurePerGameAddons);
        folder->setObjectName("folder");

        gridLayout->addWidget(folder, 1, 1, 1, 1);

        scrollArea = new QScrollArea(ConfigurePerGameAddons);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 380, 249));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 2);


        retranslateUi(ConfigurePerGameAddons);

        QMetaObject::connectSlotsByName(ConfigurePerGameAddons);
    } // setupUi

    void retranslateUi(QWidget *ConfigurePerGameAddons)
    {
        ConfigurePerGameAddons->setWindowTitle(QCoreApplication::translate("ConfigurePerGameAddons", "Form", nullptr));
#if QT_CONFIG(accessibility)
        ConfigurePerGameAddons->setAccessibleDescription(QCoreApplication::translate("ConfigurePerGameAddons", "Add-Ons", nullptr));
#endif // QT_CONFIG(accessibility)
        zip->setText(QCoreApplication::translate("ConfigurePerGameAddons", "Import Mod from ZIP", nullptr));
        folder->setText(QCoreApplication::translate("ConfigurePerGameAddons", "Import Mod from Folder", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigurePerGameAddons: public Ui_ConfigurePerGameAddons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_PER_GAME_ADDONS_H
