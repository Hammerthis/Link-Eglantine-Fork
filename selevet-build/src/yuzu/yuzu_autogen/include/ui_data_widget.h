/********************************************************************************
** Form generated from reading UI file 'data_widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATA_WIDGET_H
#define UI_DATA_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *tooltip;
    QLabel *size;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *open;
    QPushButton *clear;
    QPushButton *upload;
    QPushButton *download;

    void setupUi(QWidget *DataWidget)
    {
        if (DataWidget->objectName().isEmpty())
            DataWidget->setObjectName("DataWidget");
        DataWidget->resize(275, 200);
        gridLayout = new QGridLayout(DataWidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        tooltip = new QLabel(DataWidget);
        tooltip->setObjectName("tooltip");
        tooltip->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tooltip->setWordWrap(true);

        horizontalLayout->addWidget(tooltip);

        size = new QLabel(DataWidget);
        size->setObjectName("size");
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        size->setFont(font);
        size->setText(QString::fromUtf8("Size"));
        size->setAlignment(Qt::AlignmentFlag::AlignCenter);
        size->setWordWrap(true);

        horizontalLayout->addWidget(size);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        open = new QPushButton(DataWidget);
        open->setObjectName("open");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(open->sizePolicy().hasHeightForWidth());
        open->setSizePolicy(sizePolicy);
        open->setMinimumSize(QSize(52, 47));
        open->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"max-width: 50px;\n"
"max-height: 45px;\n"
"min-width: 50px;\n"
"min-height: 45px;\n"
"}"));
        open->setIconSize(QSize(28, 28));

        horizontalLayout_2->addWidget(open);

        clear = new QPushButton(DataWidget);
        clear->setObjectName("clear");
        sizePolicy.setHeightForWidth(clear->sizePolicy().hasHeightForWidth());
        clear->setSizePolicy(sizePolicy);
        clear->setMinimumSize(QSize(52, 47));
        clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"max-width: 50px;\n"
"max-height: 45px;\n"
"min-width: 50px;\n"
"min-height: 45px;\n"
"}"));
        clear->setIconSize(QSize(28, 28));

        horizontalLayout_2->addWidget(clear);

        upload = new QPushButton(DataWidget);
        upload->setObjectName("upload");
        sizePolicy.setHeightForWidth(upload->sizePolicy().hasHeightForWidth());
        upload->setSizePolicy(sizePolicy);
        upload->setMinimumSize(QSize(52, 47));
        upload->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"max-width: 50px;\n"
"max-height: 45px;\n"
"min-width: 50px;\n"
"min-height: 45px;\n"
"}"));
        upload->setIconSize(QSize(28, 28));

        horizontalLayout_2->addWidget(upload);

        download = new QPushButton(DataWidget);
        download->setObjectName("download");
        sizePolicy.setHeightForWidth(download->sizePolicy().hasHeightForWidth());
        download->setSizePolicy(sizePolicy);
        download->setMinimumSize(QSize(52, 47));
        download->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"max-width: 50px;\n"
"max-height: 45px;\n"
"min-width: 50px;\n"
"min-height: 45px;\n"
"}"));
        download->setIconSize(QSize(28, 28));

        horizontalLayout_2->addWidget(download);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        retranslateUi(DataWidget);

        QMetaObject::connectSlotsByName(DataWidget);
    } // setupUi

    void retranslateUi(QWidget *DataWidget)
    {
        DataWidget->setWindowTitle(QCoreApplication::translate("DataWidget", "Form", nullptr));
        tooltip->setText(QCoreApplication::translate("DataWidget", "Tooltip", nullptr));
#if QT_CONFIG(tooltip)
        open->setToolTip(QCoreApplication::translate("DataWidget", "Open with your system file manager", nullptr));
#endif // QT_CONFIG(tooltip)
        open->setText(QString());
#if QT_CONFIG(tooltip)
        clear->setToolTip(QCoreApplication::translate("DataWidget", "Delete all data in this directory. THIS IS 100% IRREVERSABLE!", nullptr));
#endif // QT_CONFIG(tooltip)
        clear->setText(QString());
#if QT_CONFIG(tooltip)
        upload->setToolTip(QCoreApplication::translate("DataWidget", "Export all data in this directory. This may take a while!", nullptr));
#endif // QT_CONFIG(tooltip)
        upload->setText(QString());
#if QT_CONFIG(tooltip)
        download->setToolTip(QCoreApplication::translate("DataWidget", "Import data for this directory. This may take a while, and will delete ALL EXISTING DATA!", nullptr));
#endif // QT_CONFIG(tooltip)
        download->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DataWidget: public Ui_DataWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATA_WIDGET_H
