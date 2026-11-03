/********************************************************************************
** Form generated from reading UI file 'configure_web.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_WEB_H
#define UI_CONFIGURE_WEB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureWeb
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBoxWebConfig;
    QVBoxLayout *verticalLayoutYuzuWebService;
    QGridLayout *gridLayoutYuzuUsername;
    QLabel *label_token;
    QLabel *label_username;
    QLineEdit *edit_username;
    QLabel *label_token_verified;
    QLineEdit *edit_token;
    QLabel *label_username_verified;
    QPushButton *button_generate;
    QSpacerItem *horizontalSpacer;
    QLabel *label_disable_info;
    QGroupBox *discord_group;
    QVBoxLayout *verticalLayout_21;
    QCheckBox *toggle_discordrpc;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ConfigureWeb)
    {
        if (ConfigureWeb->objectName().isEmpty())
            ConfigureWeb->setObjectName("ConfigureWeb");
        ConfigureWeb->resize(926, 561);
        verticalLayout = new QVBoxLayout(ConfigureWeb);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBoxWebConfig = new QGroupBox(ConfigureWeb);
        groupBoxWebConfig->setObjectName("groupBoxWebConfig");
        verticalLayoutYuzuWebService = new QVBoxLayout(groupBoxWebConfig);
        verticalLayoutYuzuWebService->setObjectName("verticalLayoutYuzuWebService");
        gridLayoutYuzuUsername = new QGridLayout();
        gridLayoutYuzuUsername->setObjectName("gridLayoutYuzuUsername");
        label_token = new QLabel(groupBoxWebConfig);
        label_token->setObjectName("label_token");

        gridLayoutYuzuUsername->addWidget(label_token, 1, 0, 1, 1);

        label_username = new QLabel(groupBoxWebConfig);
        label_username->setObjectName("label_username");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_username->sizePolicy().hasHeightForWidth());
        label_username->setSizePolicy(sizePolicy);

        gridLayoutYuzuUsername->addWidget(label_username, 0, 0, 1, 1);

        edit_username = new QLineEdit(groupBoxWebConfig);
        edit_username->setObjectName("edit_username");
        edit_username->setMaxLength(20);
        edit_username->setEchoMode(QLineEdit::EchoMode::Normal);

        gridLayoutYuzuUsername->addWidget(edit_username, 0, 1, 1, 4);

        label_token_verified = new QLabel(groupBoxWebConfig);
        label_token_verified->setObjectName("label_token_verified");
        sizePolicy.setHeightForWidth(label_token_verified->sizePolicy().hasHeightForWidth());
        label_token_verified->setSizePolicy(sizePolicy);
        label_token_verified->setMinimumSize(QSize(24, 0));

        gridLayoutYuzuUsername->addWidget(label_token_verified, 1, 5, 1, 1);

        edit_token = new QLineEdit(groupBoxWebConfig);
        edit_token->setObjectName("edit_token");
        edit_token->setInputMethodHints(Qt::InputMethodHint::ImhLowercaseOnly);
        edit_token->setMaxLength(80);
        edit_token->setEchoMode(QLineEdit::EchoMode::Normal);

        gridLayoutYuzuUsername->addWidget(edit_token, 1, 1, 1, 4);

        label_username_verified = new QLabel(groupBoxWebConfig);
        label_username_verified->setObjectName("label_username_verified");

        gridLayoutYuzuUsername->addWidget(label_username_verified, 0, 5, 1, 1);

        button_generate = new QPushButton(groupBoxWebConfig);
        button_generate->setObjectName("button_generate");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button_generate->sizePolicy().hasHeightForWidth());
        button_generate->setSizePolicy(sizePolicy1);

        gridLayoutYuzuUsername->addWidget(button_generate, 2, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayoutYuzuUsername->addItem(horizontalSpacer, 2, 1, 1, 3);


        verticalLayoutYuzuWebService->addLayout(gridLayoutYuzuUsername);


        verticalLayout_3->addWidget(groupBoxWebConfig);

        label_disable_info = new QLabel(ConfigureWeb);
        label_disable_info->setObjectName("label_disable_info");
        label_disable_info->setWordWrap(true);

        verticalLayout_3->addWidget(label_disable_info);


        verticalLayout->addLayout(verticalLayout_3);

        discord_group = new QGroupBox(ConfigureWeb);
        discord_group->setObjectName("discord_group");
        verticalLayout_21 = new QVBoxLayout(discord_group);
        verticalLayout_21->setObjectName("verticalLayout_21");
        toggle_discordrpc = new QCheckBox(discord_group);
        toggle_discordrpc->setObjectName("toggle_discordrpc");

        verticalLayout_21->addWidget(toggle_discordrpc);


        verticalLayout->addWidget(discord_group);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ConfigureWeb);

        QMetaObject::connectSlotsByName(ConfigureWeb);
    } // setupUi

    void retranslateUi(QWidget *ConfigureWeb)
    {
        ConfigureWeb->setWindowTitle(QCoreApplication::translate("ConfigureWeb", "Form", nullptr));
#if QT_CONFIG(accessibility)
        ConfigureWeb->setAccessibleName(QCoreApplication::translate("ConfigureWeb", "Web", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBoxWebConfig->setTitle(QCoreApplication::translate("ConfigureWeb", "Eglantine Web Service", nullptr));
        label_token->setText(QCoreApplication::translate("ConfigureWeb", "Token: ", nullptr));
        label_username->setText(QCoreApplication::translate("ConfigureWeb", "Username: ", nullptr));
        label_username_verified->setText(QString());
        button_generate->setText(QCoreApplication::translate("ConfigureWeb", "Generate", nullptr));
        label_disable_info->setText(QCoreApplication::translate("ConfigureWeb", "Web Service configuration can only be changed when a public room isn't being hosted.", nullptr));
        discord_group->setTitle(QCoreApplication::translate("ConfigureWeb", "Discord Presence", nullptr));
        toggle_discordrpc->setText(QCoreApplication::translate("ConfigureWeb", "Show Current Game in your Discord Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureWeb: public Ui_ConfigureWeb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_WEB_H
