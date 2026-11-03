/********************************************************************************
** Form generated from reading UI file 'performance_overlay.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERFORMANCE_OVERLAY_H
#define UI_PERFORMANCE_OVERLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PerformanceOverlay
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *ft_label_layout;
    QLabel *label_3;
    QLabel *frametime;
    QHBoxLayout *ft_layout;
    QLabel *ft_min;
    QLabel *ft_max;
    QLabel *ft_avg;
    QHBoxLayout *fps_label_layout;
    QLabel *label_4;
    QLabel *fps;
    QHBoxLayout *horizontalLayout;
    QLabel *fps_min;
    QLabel *fps_max;
    QLabel *fps_avg;

    void setupUi(QWidget *PerformanceOverlay)
    {
        if (PerformanceOverlay->objectName().isEmpty())
            PerformanceOverlay->setObjectName("PerformanceOverlay");
        PerformanceOverlay->resize(225, 250);
        verticalLayout = new QVBoxLayout(PerformanceOverlay);
        verticalLayout->setObjectName("verticalLayout");
        ft_label_layout = new QHBoxLayout();
        ft_label_layout->setObjectName("ft_label_layout");
        label_3 = new QLabel(PerformanceOverlay);
        label_3->setObjectName("label_3");
        QFont font;
        font.setFamilies({QString::fromUtf8("Sans Serif")});
        font.setPointSize(12);
        font.setBold(true);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: #0000ff;"));

        ft_label_layout->addWidget(label_3);

        frametime = new QLabel(PerformanceOverlay);
        frametime->setObjectName("frametime");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sans Serif")});
        font1.setPointSize(12);
        frametime->setFont(font1);

        ft_label_layout->addWidget(frametime);


        verticalLayout->addLayout(ft_label_layout);

        ft_layout = new QHBoxLayout();
        ft_layout->setObjectName("ft_layout");
        ft_min = new QLabel(PerformanceOverlay);
        ft_min->setObjectName("ft_min");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sans Serif")});
        font2.setPointSize(10);
        font2.setBold(false);
        ft_min->setFont(font2);

        ft_layout->addWidget(ft_min);

        ft_max = new QLabel(PerformanceOverlay);
        ft_max->setObjectName("ft_max");
        ft_max->setFont(font2);

        ft_layout->addWidget(ft_max);

        ft_avg = new QLabel(PerformanceOverlay);
        ft_avg->setObjectName("ft_avg");
        ft_avg->setFont(font2);

        ft_layout->addWidget(ft_avg);


        verticalLayout->addLayout(ft_layout);

        fps_label_layout = new QHBoxLayout();
        fps_label_layout->setObjectName("fps_label_layout");
        label_4 = new QLabel(PerformanceOverlay);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: #ff0000;"));

        fps_label_layout->addWidget(label_4);

        fps = new QLabel(PerformanceOverlay);
        fps->setObjectName("fps");
        fps->setFont(font1);

        fps_label_layout->addWidget(fps);


        verticalLayout->addLayout(fps_label_layout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        fps_min = new QLabel(PerformanceOverlay);
        fps_min->setObjectName("fps_min");
        fps_min->setFont(font2);

        horizontalLayout->addWidget(fps_min);

        fps_max = new QLabel(PerformanceOverlay);
        fps_max->setObjectName("fps_max");
        fps_max->setFont(font2);

        horizontalLayout->addWidget(fps_max);

        fps_avg = new QLabel(PerformanceOverlay);
        fps_avg->setObjectName("fps_avg");
        fps_avg->setFont(font2);

        horizontalLayout->addWidget(fps_avg);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(PerformanceOverlay);

        QMetaObject::connectSlotsByName(PerformanceOverlay);
    } // setupUi

    void retranslateUi(QWidget *PerformanceOverlay)
    {
        PerformanceOverlay->setWindowTitle(QCoreApplication::translate("PerformanceOverlay", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("PerformanceOverlay", "Frametime", nullptr));
        frametime->setText(QCoreApplication::translate("PerformanceOverlay", "0 ms", nullptr));
        ft_min->setText(QCoreApplication::translate("PerformanceOverlay", "Min: 0", nullptr));
        ft_max->setText(QCoreApplication::translate("PerformanceOverlay", "Max: 0", nullptr));
        ft_avg->setText(QCoreApplication::translate("PerformanceOverlay", "Avg: 0", nullptr));
        label_4->setText(QCoreApplication::translate("PerformanceOverlay", "FPS", nullptr));
        fps->setText(QCoreApplication::translate("PerformanceOverlay", "0 fps", nullptr));
        fps_min->setText(QCoreApplication::translate("PerformanceOverlay", "Min: 0", nullptr));
        fps_max->setText(QCoreApplication::translate("PerformanceOverlay", "Max: 0", nullptr));
        fps_avg->setText(QCoreApplication::translate("PerformanceOverlay", "Avg: 0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PerformanceOverlay: public Ui_PerformanceOverlay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERFORMANCE_OVERLAY_H
