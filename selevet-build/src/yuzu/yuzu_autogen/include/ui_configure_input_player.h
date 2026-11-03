/********************************************************************************
** Form generated from reading UI file 'configure_input_player.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_INPUT_PLAYER_H
#define UI_CONFIGURE_INPUT_PLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "yuzu/configuration/configure_input_player_widget.h"

QT_BEGIN_NAMESPACE

class Ui_ConfigureInputPlayer
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *main;
    QHBoxLayout *top;
    QGroupBox *groupConnectedController;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboControllerType;
    QGroupBox *devicesGroup;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *comboDevices;
    QGroupBox *profilesGroup;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *comboProfiles;
    QPushButton *buttonProfilesSave;
    QPushButton *buttonProfilesNew;
    QPushButton *buttonProfilesDelete;
    QFrame *bottom;
    QHBoxLayout *_2;
    QWidget *bottomLeft;
    QVBoxLayout *bottomLeftLayout;
    QGroupBox *LStick;
    QVBoxLayout *verticalLayout_3;
    QWidget *LStickDirectionsWidget;
    QGridLayout *gridLayout;
    QGroupBox *buttonLStickDownGroup;
    QVBoxLayout *buttonLStickDownVerticalLayout;
    QPushButton *buttonLStickDown;
    QGroupBox *buttonLStickRightGroup;
    QVBoxLayout *buttonLStickRightVerticalLayout;
    QPushButton *buttonLStickRight;
    QGroupBox *buttonLStickLeftGroup;
    QVBoxLayout *buttonLStickLeftVerticalLayout;
    QPushButton *buttonLStickLeft;
    QGroupBox *buttonLStickUpGroup;
    QVBoxLayout *buttonLStickUpVerticalLayout;
    QPushButton *buttonLStickUp;
    QHBoxLayout *buttonLStickPressedModifierHorizontalLayout;
    QGroupBox *buttonLStickPressedGroup;
    QVBoxLayout *buttonLStickPressedVerticalLayout;
    QPushButton *buttonLStick;
    QGroupBox *buttonLStickModGroup;
    QVBoxLayout *buttonLStickModVerticalLayout;
    QPushButton *buttonLStickMod;
    QGroupBox *buttonLStickRangeGroup;
    QHBoxLayout *buttonLStickRangeGroupHorizontalLayout;
    QSpinBox *spinboxLStickRange;
    QVBoxLayout *sliderLStickDeadzoneModifierRangeVerticalLayout;
    QHBoxLayout *sliderLStickDeadzoneHorizontalLayout;
    QLabel *labelLStickDeadzone;
    QSlider *sliderLStickDeadzone;
    QHBoxLayout *sliderLStickModifierRangeHorizontalLayout;
    QLabel *labelLStickModifierRange;
    QSlider *sliderLStickModifierRange;
    QGroupBox *Dpad;
    QVBoxLayout *verticalLayout_5;
    QWidget *dpadDirectionsWidget;
    QGridLayout *gridLayout_2;
    QGroupBox *buttonDpadDownGroup;
    QVBoxLayout *buttonDpadDownVerticalLayout;
    QPushButton *buttonDpadDown;
    QGroupBox *buttonDpadLeftGroup;
    QVBoxLayout *buttonDpadLeftVerticalLayout;
    QPushButton *buttonDpadLeft;
    QGroupBox *buttonDpadRightGroup;
    QVBoxLayout *buttonDpadRightVerticalLayout;
    QPushButton *buttonDpadRight;
    QGroupBox *buttonDpadUpGroup;
    QVBoxLayout *buttonDpadUpVerticalLayout;
    QPushButton *buttonDpadUp;
    QSpacerItem *verticalSpacerBottomLeft_2;
    QWidget *bottomMiddle;
    QVBoxLayout *bottomMiddleLayout;
    QHBoxLayout *shoulderButtons;
    QWidget *buttonShoulderButtonsSLSRLeft;
    QHBoxLayout *horizontalLayout;
    QGroupBox *buttonShoulderButtonsSRLeftGroup;
    QVBoxLayout *buttonShoulderButtonsSRLeftVerticalLayout;
    QPushButton *buttonSRLeft;
    QGroupBox *buttonShoulderButtonsSLLeftGroup;
    QVBoxLayout *buttonShoulderButtonsSLLeftVerticalLayout;
    QPushButton *buttonSLLeft;
    QWidget *horizontalSpacerShoulderButtonsWidget4;
    QHBoxLayout *horizontalSpacerShoulderButtonsWidget4Layout;
    QSpacerItem *horizontalSpacerShoulderButtons5;
    QWidget *buttonShoulderButtonsLeft;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *buttonShoulderButtonsButtonZLGroup;
    QVBoxLayout *buttonShoulderButtonsZLVerticalLayout;
    QPushButton *buttonZL;
    QSlider *sliderZLThreshold;
    QGroupBox *buttonShoulderButtonsButtonLGroup;
    QVBoxLayout *buttonShoulderButtonsLVerticalLayout;
    QPushButton *buttonL;
    QWidget *horizontalSpacerShoulderButtonsWidget;
    QHBoxLayout *horizontalSpacerShoulderButtonsWidgetLayout;
    QSpacerItem *horizontalSpacerShoulderButtons1;
    QGroupBox *buttonMiscButtonsMinusGroup;
    QVBoxLayout *buttonMiscMinusVerticalLayout;
    QPushButton *buttonMinus;
    QGroupBox *buttonMiscButtonsPlusGroup;
    QVBoxLayout *buttonMiscPlusVerticalLayout;
    QPushButton *buttonPlus;
    QWidget *horizontalSpacerShoulderButtonsWidget3;
    QHBoxLayout *horizontalSpacerShoulderButtonsWidget3Layout;
    QSpacerItem *horizontalSpacerShoulderButtons2;
    QWidget *buttonShoulderButtonsRight;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *buttonShoulderButtonsZRGroup;
    QVBoxLayout *buttonShoulderButtonsZRVerticalLayout;
    QPushButton *buttonZR;
    QSlider *sliderZRThreshold;
    QGroupBox *buttonShoulderButtonsRGroup;
    QVBoxLayout *buttonShoulderButtonsRVerticalLayout;
    QPushButton *buttonR;
    QWidget *horizontalSpacerShoulderButtonsWidget2;
    QHBoxLayout *horizontalSpacerShoulderButtonsWidget2Layout;
    QSpacerItem *horizontalSpacerShoulderButtons3;
    QWidget *buttonShoulderButtonsSLSRRight;
    QHBoxLayout *horizontalLayout_8;
    QGroupBox *buttonShoulderButtonsSRRightGroup;
    QVBoxLayout *buttonShoulderButtonsSRRightVerticalLayout;
    QPushButton *buttonSRRight;
    QGroupBox *buttonShoulderButtonsSLRightGroup;
    QVBoxLayout *buttonShoulderButtonsSLRightVerticalLayout;
    QPushButton *buttonSLRight;
    PlayerControlPreview *controllerFrame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *miscButtons;
    QSpacerItem *horizontalSpacerMiscButtons1;
    QGroupBox *buttonMotionLeftGroup;
    QVBoxLayout *buttonDpadLeftVerticalLayout_2;
    QPushButton *buttonMotionLeft;
    QGroupBox *buttonMotionRightGroup;
    QVBoxLayout *buttonDpadRightVerticalLayout_2;
    QPushButton *buttonMotionRight;
    QGroupBox *buttonMiscButtonsScreenshotGroup;
    QVBoxLayout *buttonMiscScrCapVerticalLayout;
    QPushButton *buttonScreenshot;
    QGroupBox *buttonMiscButtonsHomeGroup;
    QVBoxLayout *buttonMiscHomeVerticalLayout;
    QPushButton *buttonHome;
    QWidget *bottomRight;
    QVBoxLayout *bottomRightLayout;
    QGroupBox *faceButtons;
    QVBoxLayout *verticalLayout;
    QWidget *faceButtonsWidget;
    QGridLayout *gridLayout_3;
    QGroupBox *buttonFaceButtonsXGroup;
    QVBoxLayout *buttonFaceButtonsXVerticalLayout;
    QPushButton *buttonX;
    QGroupBox *buttonFaceButtonsBWidget_2;
    QVBoxLayout *buttonFaceButtonsBVerticalLayout;
    QPushButton *buttonB;
    QGroupBox *buttonFaceButtonsAGroup;
    QVBoxLayout *buttonFaceButtonsAVerticalLayout;
    QPushButton *buttonA;
    QGroupBox *buttonFaceButtonsYGroup;
    QVBoxLayout *buttonFaceButtonsYVerticalLayout;
    QPushButton *buttonY;
    QGroupBox *RStick;
    QVBoxLayout *verticalLayout_2;
    QWidget *RStickDirectionsWidget;
    QGridLayout *gridLayout_4;
    QGroupBox *buttonRStickRightGroup;
    QVBoxLayout *buttonRStickRightVerticalLayout;
    QPushButton *buttonRStickRight;
    QGroupBox *buttonRStickDownGroup;
    QVBoxLayout *buttonRStickDownVerticalLayout;
    QPushButton *buttonRStickDown;
    QGroupBox *buttonRStickLeftGroup;
    QVBoxLayout *buttonRStickLeftVerticalLayout;
    QPushButton *buttonRStickLeft;
    QGroupBox *buttonRStickUpGroup;
    QVBoxLayout *buttonRStickUpVerticalLayout;
    QPushButton *buttonRStickUp;
    QWidget *buttonRStickDownWidget;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *buttonRStickPressedModifierHorizontalLayout;
    QGroupBox *groupRStickPressed;
    QVBoxLayout *buttonRStickPressedVerticalLayout;
    QPushButton *buttonRStick;
    QGroupBox *buttonRStickModGroup;
    QVBoxLayout *buttonRStickModVerticalLayout;
    QPushButton *buttonRStickMod;
    QGroupBox *buttonRStickRangeGroup;
    QHBoxLayout *buttonRStickRangeGroupHorizontalLayout;
    QSpinBox *spinboxRStickRange;
    QVBoxLayout *sliderRStickDeadzoneModifierRangeVerticalLayout;
    QHBoxLayout *sliderRStickDeadzoneHorizontalLayout;
    QLabel *labelRStickDeadzone;
    QSlider *sliderRStickDeadzone;
    QHBoxLayout *sliderRStickModifierRangeHorizontalLayout;
    QLabel *labelRStickModifierRange;
    QSlider *sliderRStickModifierRange;
    QWidget *mousePanningWidget;
    QHBoxLayout *mousePanningHorizontalLayout;
    QSpacerItem *mousePanningHorizontalSpacerLeft;
    QGroupBox *mousePanningGroup;
    QVBoxLayout *mousePanningVerticalLayout;
    QPushButton *mousePanningButton;
    QSpacerItem *mousePanningHorizontalSpacerRight;
    QSpacerItem *verticalSpacerBottomRight_2;

    void setupUi(QWidget *ConfigureInputPlayer)
    {
        if (ConfigureInputPlayer->objectName().isEmpty())
            ConfigureInputPlayer->setObjectName("ConfigureInputPlayer");
        ConfigureInputPlayer->resize(1391, 680);
        horizontalLayout_2 = new QHBoxLayout(ConfigureInputPlayer);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        main = new QVBoxLayout();
        main->setSpacing(0);
        main->setObjectName("main");
        main->setContentsMargins(0, 0, 0, 0);
        top = new QHBoxLayout();
        top->setSpacing(3);
        top->setObjectName("top");
        top->setContentsMargins(-1, 0, -1, -1);
        groupConnectedController = new QGroupBox(ConfigureInputPlayer);
        groupConnectedController->setObjectName("groupConnectedController");
        groupConnectedController->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        groupConnectedController->setFlat(false);
        groupConnectedController->setCheckable(true);
        horizontalLayout_3 = new QHBoxLayout(groupConnectedController);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(5, 5, 5, 5);
        comboControllerType = new QComboBox(groupConnectedController);
        comboControllerType->setObjectName("comboControllerType");
        comboControllerType->setMinimumSize(QSize(0, 21));

        horizontalLayout_3->addWidget(comboControllerType);


        top->addWidget(groupConnectedController);

        devicesGroup = new QGroupBox(ConfigureInputPlayer);
        devicesGroup->setObjectName("devicesGroup");
        horizontalLayout_5 = new QHBoxLayout(devicesGroup);
        horizontalLayout_5->setSpacing(3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(5, 5, 5, 5);
        comboDevices = new QComboBox(devicesGroup);
        comboDevices->setObjectName("comboDevices");
        comboDevices->setMinimumContentsLength(60);

        horizontalLayout_5->addWidget(comboDevices);


        top->addWidget(devicesGroup);

        profilesGroup = new QGroupBox(ConfigureInputPlayer);
        profilesGroup->setObjectName("profilesGroup");
        profilesGroup->setMinimumSize(QSize(0, 0));
        horizontalLayout_4 = new QHBoxLayout(profilesGroup);
        horizontalLayout_4->setSpacing(3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(5, 5, 5, 5);
        comboProfiles = new QComboBox(profilesGroup);
        comboProfiles->setObjectName("comboProfiles");
        comboProfiles->setMinimumSize(QSize(0, 21));

        horizontalLayout_4->addWidget(comboProfiles);

        buttonProfilesSave = new QPushButton(profilesGroup);
        buttonProfilesSave->setObjectName("buttonProfilesSave");
        buttonProfilesSave->setMaximumSize(QSize(68, 16777215));
        buttonProfilesSave->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        horizontalLayout_4->addWidget(buttonProfilesSave);

        buttonProfilesNew = new QPushButton(profilesGroup);
        buttonProfilesNew->setObjectName("buttonProfilesNew");
        buttonProfilesNew->setMaximumSize(QSize(68, 16777215));
        buttonProfilesNew->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        horizontalLayout_4->addWidget(buttonProfilesNew);

        buttonProfilesDelete = new QPushButton(profilesGroup);
        buttonProfilesDelete->setObjectName("buttonProfilesDelete");
        buttonProfilesDelete->setMaximumSize(QSize(68, 16777215));
        buttonProfilesDelete->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        horizontalLayout_4->addWidget(buttonProfilesDelete);

        horizontalLayout_4->setStretch(0, 2);

        top->addWidget(profilesGroup);

        top->setStretch(1, 1);
        top->setStretch(2, 2);

        main->addLayout(top);

        bottom = new QFrame(ConfigureInputPlayer);
        bottom->setObjectName("bottom");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bottom->sizePolicy().hasHeightForWidth());
        bottom->setSizePolicy(sizePolicy);
        _2 = new QHBoxLayout(bottom);
        _2->setObjectName("_2");
        _2->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        _2->setContentsMargins(0, 0, 0, 0);
        bottomLeft = new QWidget(bottom);
        bottomLeft->setObjectName("bottomLeft");
        bottomLeftLayout = new QVBoxLayout(bottomLeft);
        bottomLeftLayout->setSpacing(0);
        bottomLeftLayout->setObjectName("bottomLeftLayout");
        bottomLeftLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        bottomLeftLayout->setContentsMargins(0, 0, 0, 0);
        LStick = new QGroupBox(bottomLeft);
        LStick->setObjectName("LStick");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(LStick->sizePolicy().hasHeightForWidth());
        LStick->setSizePolicy(sizePolicy1);
        LStick->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        verticalLayout_3 = new QVBoxLayout(LStick);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(3, 0, 3, 0);
        LStickDirectionsWidget = new QWidget(LStick);
        LStickDirectionsWidget->setObjectName("LStickDirectionsWidget");
        gridLayout = new QGridLayout(LStickDirectionsWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        buttonLStickDownGroup = new QGroupBox(LStickDirectionsWidget);
        buttonLStickDownGroup->setObjectName("buttonLStickDownGroup");
        buttonLStickDownGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonLStickDownVerticalLayout = new QVBoxLayout(buttonLStickDownGroup);
        buttonLStickDownVerticalLayout->setSpacing(0);
        buttonLStickDownVerticalLayout->setObjectName("buttonLStickDownVerticalLayout");
        buttonLStickDownVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonLStickDown = new QPushButton(buttonLStickDownGroup);
        buttonLStickDown->setObjectName("buttonLStickDown");
        buttonLStickDown->setMinimumSize(QSize(70, 0));
        buttonLStickDown->setMaximumSize(QSize(68, 16777215));
        buttonLStickDown->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonLStickDownVerticalLayout->addWidget(buttonLStickDown);


        gridLayout->addWidget(buttonLStickDownGroup, 1, 0, 1, 1);

        buttonLStickRightGroup = new QGroupBox(LStickDirectionsWidget);
        buttonLStickRightGroup->setObjectName("buttonLStickRightGroup");
        buttonLStickRightGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonLStickRightVerticalLayout = new QVBoxLayout(buttonLStickRightGroup);
        buttonLStickRightVerticalLayout->setSpacing(0);
        buttonLStickRightVerticalLayout->setObjectName("buttonLStickRightVerticalLayout");
        buttonLStickRightVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonLStickRight = new QPushButton(buttonLStickRightGroup);
        buttonLStickRight->setObjectName("buttonLStickRight");
        buttonLStickRight->setMinimumSize(QSize(70, 0));
        buttonLStickRight->setMaximumSize(QSize(68, 16777215));
        buttonLStickRight->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonLStickRightVerticalLayout->addWidget(buttonLStickRight);


        gridLayout->addWidget(buttonLStickRightGroup, 1, 1, 1, 1);

        buttonLStickLeftGroup = new QGroupBox(LStickDirectionsWidget);
        buttonLStickLeftGroup->setObjectName("buttonLStickLeftGroup");
        buttonLStickLeftGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonLStickLeftVerticalLayout = new QVBoxLayout(buttonLStickLeftGroup);
        buttonLStickLeftVerticalLayout->setSpacing(0);
        buttonLStickLeftVerticalLayout->setObjectName("buttonLStickLeftVerticalLayout");
        buttonLStickLeftVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonLStickLeft = new QPushButton(buttonLStickLeftGroup);
        buttonLStickLeft->setObjectName("buttonLStickLeft");
        buttonLStickLeft->setMinimumSize(QSize(70, 0));
        buttonLStickLeft->setMaximumSize(QSize(68, 16777215));
        buttonLStickLeft->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonLStickLeftVerticalLayout->addWidget(buttonLStickLeft);


        gridLayout->addWidget(buttonLStickLeftGroup, 0, 0, 1, 1);

        buttonLStickUpGroup = new QGroupBox(LStickDirectionsWidget);
        buttonLStickUpGroup->setObjectName("buttonLStickUpGroup");
        buttonLStickUpGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonLStickUpGroup->setFlat(false);
        buttonLStickUpVerticalLayout = new QVBoxLayout(buttonLStickUpGroup);
        buttonLStickUpVerticalLayout->setSpacing(0);
        buttonLStickUpVerticalLayout->setObjectName("buttonLStickUpVerticalLayout");
        buttonLStickUpVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonLStickUp = new QPushButton(buttonLStickUpGroup);
        buttonLStickUp->setObjectName("buttonLStickUp");
        buttonLStickUp->setMinimumSize(QSize(70, 0));
        buttonLStickUp->setMaximumSize(QSize(68, 16777215));
        buttonLStickUp->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonLStickUpVerticalLayout->addWidget(buttonLStickUp);


        gridLayout->addWidget(buttonLStickUpGroup, 0, 1, 1, 1);


        verticalLayout_3->addWidget(LStickDirectionsWidget);

        buttonLStickPressedModifierHorizontalLayout = new QHBoxLayout();
        buttonLStickPressedModifierHorizontalLayout->setSpacing(3);
        buttonLStickPressedModifierHorizontalLayout->setObjectName("buttonLStickPressedModifierHorizontalLayout");
        buttonLStickPressedGroup = new QGroupBox(LStick);
        buttonLStickPressedGroup->setObjectName("buttonLStickPressedGroup");
        buttonLStickPressedGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonLStickPressedVerticalLayout = new QVBoxLayout(buttonLStickPressedGroup);
        buttonLStickPressedVerticalLayout->setSpacing(0);
        buttonLStickPressedVerticalLayout->setObjectName("buttonLStickPressedVerticalLayout");
        buttonLStickPressedVerticalLayout->setContentsMargins(3, 0, 3, 0);
        buttonLStick = new QPushButton(buttonLStickPressedGroup);
        buttonLStick->setObjectName("buttonLStick");
        buttonLStick->setMinimumSize(QSize(70, 0));
        buttonLStick->setMaximumSize(QSize(68, 16777215));
        buttonLStick->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonLStickPressedVerticalLayout->addWidget(buttonLStick);


        buttonLStickPressedModifierHorizontalLayout->addWidget(buttonLStickPressedGroup, 0, Qt::AlignmentFlag::AlignHCenter);

        buttonLStickModGroup = new QGroupBox(LStick);
        buttonLStickModGroup->setObjectName("buttonLStickModGroup");
        buttonLStickModGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonLStickModVerticalLayout = new QVBoxLayout(buttonLStickModGroup);
        buttonLStickModVerticalLayout->setSpacing(0);
        buttonLStickModVerticalLayout->setObjectName("buttonLStickModVerticalLayout");
        buttonLStickModVerticalLayout->setContentsMargins(3, 0, 3, 0);
        buttonLStickMod = new QPushButton(buttonLStickModGroup);
        buttonLStickMod->setObjectName("buttonLStickMod");
        buttonLStickMod->setMinimumSize(QSize(70, 0));
        buttonLStickMod->setMaximumSize(QSize(68, 16777215));
        buttonLStickMod->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonLStickModVerticalLayout->addWidget(buttonLStickMod);


        buttonLStickPressedModifierHorizontalLayout->addWidget(buttonLStickModGroup, 0, Qt::AlignmentFlag::AlignHCenter);

        buttonLStickRangeGroup = new QGroupBox(LStick);
        buttonLStickRangeGroup->setObjectName("buttonLStickRangeGroup");
        buttonLStickRangeGroupHorizontalLayout = new QHBoxLayout(buttonLStickRangeGroup);
        buttonLStickRangeGroupHorizontalLayout->setSpacing(0);
        buttonLStickRangeGroupHorizontalLayout->setObjectName("buttonLStickRangeGroupHorizontalLayout");
        buttonLStickRangeGroupHorizontalLayout->setContentsMargins(3, 0, 3, 0);
        spinboxLStickRange = new QSpinBox(buttonLStickRangeGroup);
        spinboxLStickRange->setObjectName("spinboxLStickRange");
        spinboxLStickRange->setMinimumSize(QSize(68, 21));
        spinboxLStickRange->setMaximumSize(QSize(68, 16777215));
        spinboxLStickRange->setMinimum(25);
        spinboxLStickRange->setMaximum(150);
        spinboxLStickRange->setValue(95);

        buttonLStickRangeGroupHorizontalLayout->addWidget(spinboxLStickRange);


        buttonLStickPressedModifierHorizontalLayout->addWidget(buttonLStickRangeGroup);


        verticalLayout_3->addLayout(buttonLStickPressedModifierHorizontalLayout);

        sliderLStickDeadzoneModifierRangeVerticalLayout = new QVBoxLayout();
        sliderLStickDeadzoneModifierRangeVerticalLayout->setSpacing(3);
        sliderLStickDeadzoneModifierRangeVerticalLayout->setObjectName("sliderLStickDeadzoneModifierRangeVerticalLayout");
        sliderLStickDeadzoneModifierRangeVerticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        sliderLStickDeadzoneModifierRangeVerticalLayout->setContentsMargins(0, 2, 0, 3);
        sliderLStickDeadzoneHorizontalLayout = new QHBoxLayout();
        sliderLStickDeadzoneHorizontalLayout->setObjectName("sliderLStickDeadzoneHorizontalLayout");
        labelLStickDeadzone = new QLabel(LStick);
        labelLStickDeadzone->setObjectName("labelLStickDeadzone");
        labelLStickDeadzone->setAlignment(Qt::AlignmentFlag::AlignHCenter);

        sliderLStickDeadzoneHorizontalLayout->addWidget(labelLStickDeadzone);


        sliderLStickDeadzoneModifierRangeVerticalLayout->addLayout(sliderLStickDeadzoneHorizontalLayout);

        sliderLStickDeadzone = new QSlider(LStick);
        sliderLStickDeadzone->setObjectName("sliderLStickDeadzone");
        sliderLStickDeadzone->setMaximum(100);
        sliderLStickDeadzone->setOrientation(Qt::Orientation::Horizontal);

        sliderLStickDeadzoneModifierRangeVerticalLayout->addWidget(sliderLStickDeadzone);

        sliderLStickModifierRangeHorizontalLayout = new QHBoxLayout();
        sliderLStickModifierRangeHorizontalLayout->setObjectName("sliderLStickModifierRangeHorizontalLayout");
        labelLStickModifierRange = new QLabel(LStick);
        labelLStickModifierRange->setObjectName("labelLStickModifierRange");
        labelLStickModifierRange->setAlignment(Qt::AlignmentFlag::AlignHCenter);

        sliderLStickModifierRangeHorizontalLayout->addWidget(labelLStickModifierRange);


        sliderLStickDeadzoneModifierRangeVerticalLayout->addLayout(sliderLStickModifierRangeHorizontalLayout);

        sliderLStickModifierRange = new QSlider(LStick);
        sliderLStickModifierRange->setObjectName("sliderLStickModifierRange");
        sliderLStickModifierRange->setMaximum(100);
        sliderLStickModifierRange->setOrientation(Qt::Orientation::Horizontal);

        sliderLStickDeadzoneModifierRangeVerticalLayout->addWidget(sliderLStickModifierRange);


        verticalLayout_3->addLayout(sliderLStickDeadzoneModifierRangeVerticalLayout);


        bottomLeftLayout->addWidget(LStick);

        Dpad = new QGroupBox(bottomLeft);
        Dpad->setObjectName("Dpad");
        sizePolicy1.setHeightForWidth(Dpad->sizePolicy().hasHeightForWidth());
        Dpad->setSizePolicy(sizePolicy1);
        Dpad->setFlat(false);
        Dpad->setCheckable(false);
        verticalLayout_5 = new QVBoxLayout(Dpad);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(3, 0, 3, 0);
        dpadDirectionsWidget = new QWidget(Dpad);
        dpadDirectionsWidget->setObjectName("dpadDirectionsWidget");
        gridLayout_2 = new QGridLayout(dpadDirectionsWidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        buttonDpadDownGroup = new QGroupBox(dpadDirectionsWidget);
        buttonDpadDownGroup->setObjectName("buttonDpadDownGroup");
        buttonDpadDownGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonDpadDownVerticalLayout = new QVBoxLayout(buttonDpadDownGroup);
        buttonDpadDownVerticalLayout->setSpacing(0);
        buttonDpadDownVerticalLayout->setObjectName("buttonDpadDownVerticalLayout");
        buttonDpadDownVerticalLayout->setContentsMargins(3, 0, 3, 0);
        buttonDpadDown = new QPushButton(buttonDpadDownGroup);
        buttonDpadDown->setObjectName("buttonDpadDown");
        buttonDpadDown->setMinimumSize(QSize(70, 0));
        buttonDpadDown->setMaximumSize(QSize(68, 16777215));
        buttonDpadDown->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonDpadDownVerticalLayout->addWidget(buttonDpadDown);


        gridLayout_2->addWidget(buttonDpadDownGroup, 1, 0, 1, 1);

        buttonDpadLeftGroup = new QGroupBox(dpadDirectionsWidget);
        buttonDpadLeftGroup->setObjectName("buttonDpadLeftGroup");
        buttonDpadLeftGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonDpadLeftVerticalLayout = new QVBoxLayout(buttonDpadLeftGroup);
        buttonDpadLeftVerticalLayout->setSpacing(0);
        buttonDpadLeftVerticalLayout->setObjectName("buttonDpadLeftVerticalLayout");
        buttonDpadLeftVerticalLayout->setContentsMargins(3, 0, 3, 0);
        buttonDpadLeft = new QPushButton(buttonDpadLeftGroup);
        buttonDpadLeft->setObjectName("buttonDpadLeft");
        buttonDpadLeft->setMinimumSize(QSize(70, 0));
        buttonDpadLeft->setMaximumSize(QSize(68, 16777215));
        buttonDpadLeft->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonDpadLeftVerticalLayout->addWidget(buttonDpadLeft);


        gridLayout_2->addWidget(buttonDpadLeftGroup, 0, 0, 1, 1);

        buttonDpadRightGroup = new QGroupBox(dpadDirectionsWidget);
        buttonDpadRightGroup->setObjectName("buttonDpadRightGroup");
        buttonDpadRightGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonDpadRightVerticalLayout = new QVBoxLayout(buttonDpadRightGroup);
        buttonDpadRightVerticalLayout->setSpacing(0);
        buttonDpadRightVerticalLayout->setObjectName("buttonDpadRightVerticalLayout");
        buttonDpadRightVerticalLayout->setContentsMargins(3, 0, 3, 0);
        buttonDpadRight = new QPushButton(buttonDpadRightGroup);
        buttonDpadRight->setObjectName("buttonDpadRight");
        buttonDpadRight->setMinimumSize(QSize(70, 0));
        buttonDpadRight->setMaximumSize(QSize(68, 16777215));
        buttonDpadRight->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonDpadRightVerticalLayout->addWidget(buttonDpadRight);


        gridLayout_2->addWidget(buttonDpadRightGroup, 1, 1, 1, 1);

        buttonDpadUpGroup = new QGroupBox(dpadDirectionsWidget);
        buttonDpadUpGroup->setObjectName("buttonDpadUpGroup");
        buttonDpadUpGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonDpadUpVerticalLayout = new QVBoxLayout(buttonDpadUpGroup);
        buttonDpadUpVerticalLayout->setSpacing(0);
        buttonDpadUpVerticalLayout->setObjectName("buttonDpadUpVerticalLayout");
        buttonDpadUpVerticalLayout->setContentsMargins(3, 0, 3, 0);
        buttonDpadUp = new QPushButton(buttonDpadUpGroup);
        buttonDpadUp->setObjectName("buttonDpadUp");
        buttonDpadUp->setMinimumSize(QSize(70, 0));
        buttonDpadUp->setMaximumSize(QSize(68, 16777215));
        buttonDpadUp->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonDpadUpVerticalLayout->addWidget(buttonDpadUp);


        gridLayout_2->addWidget(buttonDpadUpGroup, 0, 1, 1, 1);


        verticalLayout_5->addWidget(dpadDirectionsWidget);


        bottomLeftLayout->addWidget(Dpad);

        verticalSpacerBottomLeft_2 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        bottomLeftLayout->addItem(verticalSpacerBottomLeft_2);


        _2->addWidget(bottomLeft);

        bottomMiddle = new QWidget(bottom);
        bottomMiddle->setObjectName("bottomMiddle");
        bottomMiddleLayout = new QVBoxLayout(bottomMiddle);
        bottomMiddleLayout->setSpacing(6);
        bottomMiddleLayout->setObjectName("bottomMiddleLayout");
        bottomMiddleLayout->setContentsMargins(0, 0, 0, 0);
        shoulderButtons = new QHBoxLayout();
        shoulderButtons->setSpacing(3);
        shoulderButtons->setObjectName("shoulderButtons");
        buttonShoulderButtonsSLSRLeft = new QWidget(bottomMiddle);
        buttonShoulderButtonsSLSRLeft->setObjectName("buttonShoulderButtonsSLSRLeft");
        horizontalLayout = new QHBoxLayout(buttonShoulderButtonsSLSRLeft);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        buttonShoulderButtonsSRLeftGroup = new QGroupBox(buttonShoulderButtonsSLSRLeft);
        buttonShoulderButtonsSRLeftGroup->setObjectName("buttonShoulderButtonsSRLeftGroup");
        buttonShoulderButtonsSRLeftGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonShoulderButtonsSRLeftVerticalLayout = new QVBoxLayout(buttonShoulderButtonsSRLeftGroup);
        buttonShoulderButtonsSRLeftVerticalLayout->setSpacing(3);
        buttonShoulderButtonsSRLeftVerticalLayout->setObjectName("buttonShoulderButtonsSRLeftVerticalLayout");
        buttonShoulderButtonsSRLeftVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonSRLeft = new QPushButton(buttonShoulderButtonsSRLeftGroup);
        buttonSRLeft->setObjectName("buttonSRLeft");
        buttonSRLeft->setMinimumSize(QSize(70, 0));
        buttonSRLeft->setMaximumSize(QSize(68, 16777215));
        buttonSRLeft->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonShoulderButtonsSRLeftVerticalLayout->addWidget(buttonSRLeft);


        horizontalLayout->addWidget(buttonShoulderButtonsSRLeftGroup);

        buttonShoulderButtonsSLLeftGroup = new QGroupBox(buttonShoulderButtonsSLSRLeft);
        buttonShoulderButtonsSLLeftGroup->setObjectName("buttonShoulderButtonsSLLeftGroup");
        buttonShoulderButtonsSLLeftGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonShoulderButtonsSLLeftVerticalLayout = new QVBoxLayout(buttonShoulderButtonsSLLeftGroup);
        buttonShoulderButtonsSLLeftVerticalLayout->setSpacing(3);
        buttonShoulderButtonsSLLeftVerticalLayout->setObjectName("buttonShoulderButtonsSLLeftVerticalLayout");
        buttonShoulderButtonsSLLeftVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonSLLeft = new QPushButton(buttonShoulderButtonsSLLeftGroup);
        buttonSLLeft->setObjectName("buttonSLLeft");
        buttonSLLeft->setMinimumSize(QSize(70, 0));
        buttonSLLeft->setMaximumSize(QSize(68, 16777215));
        buttonSLLeft->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonShoulderButtonsSLLeftVerticalLayout->addWidget(buttonSLLeft);


        horizontalLayout->addWidget(buttonShoulderButtonsSLLeftGroup);


        shoulderButtons->addWidget(buttonShoulderButtonsSLSRLeft);

        horizontalSpacerShoulderButtonsWidget4 = new QWidget(bottomMiddle);
        horizontalSpacerShoulderButtonsWidget4->setObjectName("horizontalSpacerShoulderButtonsWidget4");
        horizontalSpacerShoulderButtonsWidget4Layout = new QHBoxLayout(horizontalSpacerShoulderButtonsWidget4);
        horizontalSpacerShoulderButtonsWidget4Layout->setSpacing(0);
        horizontalSpacerShoulderButtonsWidget4Layout->setObjectName("horizontalSpacerShoulderButtonsWidget4Layout");
        horizontalSpacerShoulderButtonsWidget4Layout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacerShoulderButtons5 = new QSpacerItem(0, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalSpacerShoulderButtonsWidget4Layout->addItem(horizontalSpacerShoulderButtons5);


        shoulderButtons->addWidget(horizontalSpacerShoulderButtonsWidget4);

        buttonShoulderButtonsLeft = new QWidget(bottomMiddle);
        buttonShoulderButtonsLeft->setObjectName("buttonShoulderButtonsLeft");
        horizontalLayout_6 = new QHBoxLayout(buttonShoulderButtonsLeft);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        buttonShoulderButtonsButtonZLGroup = new QGroupBox(buttonShoulderButtonsLeft);
        buttonShoulderButtonsButtonZLGroup->setObjectName("buttonShoulderButtonsButtonZLGroup");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonShoulderButtonsButtonZLGroup->sizePolicy().hasHeightForWidth());
        buttonShoulderButtonsButtonZLGroup->setSizePolicy(sizePolicy2);
        buttonShoulderButtonsButtonZLGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonShoulderButtonsZLVerticalLayout = new QVBoxLayout(buttonShoulderButtonsButtonZLGroup);
        buttonShoulderButtonsZLVerticalLayout->setSpacing(3);
        buttonShoulderButtonsZLVerticalLayout->setObjectName("buttonShoulderButtonsZLVerticalLayout");
        buttonShoulderButtonsZLVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonZL = new QPushButton(buttonShoulderButtonsButtonZLGroup);
        buttonZL->setObjectName("buttonZL");
        buttonZL->setMinimumSize(QSize(70, 0));
        buttonZL->setMaximumSize(QSize(68, 16777215));
        buttonZL->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonShoulderButtonsZLVerticalLayout->addWidget(buttonZL);

        sliderZLThreshold = new QSlider(buttonShoulderButtonsButtonZLGroup);
        sliderZLThreshold->setObjectName("sliderZLThreshold");
        sliderZLThreshold->setMaximumSize(QSize(70, 15));
        sliderZLThreshold->setMaximum(100);
        sliderZLThreshold->setOrientation(Qt::Orientation::Horizontal);

        buttonShoulderButtonsZLVerticalLayout->addWidget(sliderZLThreshold);


        horizontalLayout_6->addWidget(buttonShoulderButtonsButtonZLGroup);

        buttonShoulderButtonsButtonLGroup = new QGroupBox(buttonShoulderButtonsLeft);
        buttonShoulderButtonsButtonLGroup->setObjectName("buttonShoulderButtonsButtonLGroup");
        buttonShoulderButtonsButtonLGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonShoulderButtonsLVerticalLayout = new QVBoxLayout(buttonShoulderButtonsButtonLGroup);
        buttonShoulderButtonsLVerticalLayout->setSpacing(3);
        buttonShoulderButtonsLVerticalLayout->setObjectName("buttonShoulderButtonsLVerticalLayout");
        buttonShoulderButtonsLVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonL = new QPushButton(buttonShoulderButtonsButtonLGroup);
        buttonL->setObjectName("buttonL");
        buttonL->setMinimumSize(QSize(70, 0));
        buttonL->setMaximumSize(QSize(68, 16777215));
        buttonL->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonShoulderButtonsLVerticalLayout->addWidget(buttonL);


        horizontalLayout_6->addWidget(buttonShoulderButtonsButtonLGroup);


        shoulderButtons->addWidget(buttonShoulderButtonsLeft);

        horizontalSpacerShoulderButtonsWidget = new QWidget(bottomMiddle);
        horizontalSpacerShoulderButtonsWidget->setObjectName("horizontalSpacerShoulderButtonsWidget");
        horizontalSpacerShoulderButtonsWidgetLayout = new QHBoxLayout(horizontalSpacerShoulderButtonsWidget);
        horizontalSpacerShoulderButtonsWidgetLayout->setSpacing(0);
        horizontalSpacerShoulderButtonsWidgetLayout->setObjectName("horizontalSpacerShoulderButtonsWidgetLayout");
        horizontalSpacerShoulderButtonsWidgetLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacerShoulderButtons1 = new QSpacerItem(0, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalSpacerShoulderButtonsWidgetLayout->addItem(horizontalSpacerShoulderButtons1);


        shoulderButtons->addWidget(horizontalSpacerShoulderButtonsWidget);

        buttonMiscButtonsMinusGroup = new QGroupBox(bottomMiddle);
        buttonMiscButtonsMinusGroup->setObjectName("buttonMiscButtonsMinusGroup");
        buttonMiscButtonsMinusGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonMiscMinusVerticalLayout = new QVBoxLayout(buttonMiscButtonsMinusGroup);
        buttonMiscMinusVerticalLayout->setSpacing(3);
        buttonMiscMinusVerticalLayout->setObjectName("buttonMiscMinusVerticalLayout");
        buttonMiscMinusVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonMinus = new QPushButton(buttonMiscButtonsMinusGroup);
        buttonMinus->setObjectName("buttonMinus");
        buttonMinus->setMinimumSize(QSize(70, 0));
        buttonMinus->setMaximumSize(QSize(68, 16777215));
        buttonMinus->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonMiscMinusVerticalLayout->addWidget(buttonMinus);


        shoulderButtons->addWidget(buttonMiscButtonsMinusGroup);

        buttonMiscButtonsPlusGroup = new QGroupBox(bottomMiddle);
        buttonMiscButtonsPlusGroup->setObjectName("buttonMiscButtonsPlusGroup");
        buttonMiscButtonsPlusGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonMiscPlusVerticalLayout = new QVBoxLayout(buttonMiscButtonsPlusGroup);
        buttonMiscPlusVerticalLayout->setSpacing(3);
        buttonMiscPlusVerticalLayout->setObjectName("buttonMiscPlusVerticalLayout");
        buttonMiscPlusVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonPlus = new QPushButton(buttonMiscButtonsPlusGroup);
        buttonPlus->setObjectName("buttonPlus");
        buttonPlus->setMinimumSize(QSize(70, 0));
        buttonPlus->setMaximumSize(QSize(68, 16777215));
        buttonPlus->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonMiscPlusVerticalLayout->addWidget(buttonPlus);


        shoulderButtons->addWidget(buttonMiscButtonsPlusGroup);

        horizontalSpacerShoulderButtonsWidget3 = new QWidget(bottomMiddle);
        horizontalSpacerShoulderButtonsWidget3->setObjectName("horizontalSpacerShoulderButtonsWidget3");
        horizontalSpacerShoulderButtonsWidget3Layout = new QHBoxLayout(horizontalSpacerShoulderButtonsWidget3);
        horizontalSpacerShoulderButtonsWidget3Layout->setSpacing(0);
        horizontalSpacerShoulderButtonsWidget3Layout->setObjectName("horizontalSpacerShoulderButtonsWidget3Layout");
        horizontalSpacerShoulderButtonsWidget3Layout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacerShoulderButtons2 = new QSpacerItem(0, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalSpacerShoulderButtonsWidget3Layout->addItem(horizontalSpacerShoulderButtons2);


        shoulderButtons->addWidget(horizontalSpacerShoulderButtonsWidget3);

        buttonShoulderButtonsRight = new QWidget(bottomMiddle);
        buttonShoulderButtonsRight->setObjectName("buttonShoulderButtonsRight");
        horizontalLayout_7 = new QHBoxLayout(buttonShoulderButtonsRight);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        buttonShoulderButtonsZRGroup = new QGroupBox(buttonShoulderButtonsRight);
        buttonShoulderButtonsZRGroup->setObjectName("buttonShoulderButtonsZRGroup");
        sizePolicy2.setHeightForWidth(buttonShoulderButtonsZRGroup->sizePolicy().hasHeightForWidth());
        buttonShoulderButtonsZRGroup->setSizePolicy(sizePolicy2);
        buttonShoulderButtonsZRGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonShoulderButtonsZRVerticalLayout = new QVBoxLayout(buttonShoulderButtonsZRGroup);
        buttonShoulderButtonsZRVerticalLayout->setSpacing(3);
        buttonShoulderButtonsZRVerticalLayout->setObjectName("buttonShoulderButtonsZRVerticalLayout");
        buttonShoulderButtonsZRVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonZR = new QPushButton(buttonShoulderButtonsZRGroup);
        buttonZR->setObjectName("buttonZR");
        buttonZR->setMinimumSize(QSize(70, 0));
        buttonZR->setMaximumSize(QSize(68, 16777215));
        buttonZR->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonShoulderButtonsZRVerticalLayout->addWidget(buttonZR);

        sliderZRThreshold = new QSlider(buttonShoulderButtonsZRGroup);
        sliderZRThreshold->setObjectName("sliderZRThreshold");
        sliderZRThreshold->setMaximumSize(QSize(70, 15));
        sliderZRThreshold->setMaximum(100);
        sliderZRThreshold->setOrientation(Qt::Orientation::Horizontal);

        buttonShoulderButtonsZRVerticalLayout->addWidget(sliderZRThreshold);


        horizontalLayout_7->addWidget(buttonShoulderButtonsZRGroup);

        buttonShoulderButtonsRGroup = new QGroupBox(buttonShoulderButtonsRight);
        buttonShoulderButtonsRGroup->setObjectName("buttonShoulderButtonsRGroup");
        buttonShoulderButtonsRGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonShoulderButtonsRVerticalLayout = new QVBoxLayout(buttonShoulderButtonsRGroup);
        buttonShoulderButtonsRVerticalLayout->setSpacing(3);
        buttonShoulderButtonsRVerticalLayout->setObjectName("buttonShoulderButtonsRVerticalLayout");
        buttonShoulderButtonsRVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonR = new QPushButton(buttonShoulderButtonsRGroup);
        buttonR->setObjectName("buttonR");
        buttonR->setMinimumSize(QSize(70, 0));
        buttonR->setMaximumSize(QSize(68, 16777215));
        buttonR->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonShoulderButtonsRVerticalLayout->addWidget(buttonR);


        horizontalLayout_7->addWidget(buttonShoulderButtonsRGroup);


        shoulderButtons->addWidget(buttonShoulderButtonsRight);

        horizontalSpacerShoulderButtonsWidget2 = new QWidget(bottomMiddle);
        horizontalSpacerShoulderButtonsWidget2->setObjectName("horizontalSpacerShoulderButtonsWidget2");
        horizontalSpacerShoulderButtonsWidget2Layout = new QHBoxLayout(horizontalSpacerShoulderButtonsWidget2);
        horizontalSpacerShoulderButtonsWidget2Layout->setSpacing(0);
        horizontalSpacerShoulderButtonsWidget2Layout->setObjectName("horizontalSpacerShoulderButtonsWidget2Layout");
        horizontalSpacerShoulderButtonsWidget2Layout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacerShoulderButtons3 = new QSpacerItem(0, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalSpacerShoulderButtonsWidget2Layout->addItem(horizontalSpacerShoulderButtons3);


        shoulderButtons->addWidget(horizontalSpacerShoulderButtonsWidget2);

        buttonShoulderButtonsSLSRRight = new QWidget(bottomMiddle);
        buttonShoulderButtonsSLSRRight->setObjectName("buttonShoulderButtonsSLSRRight");
        horizontalLayout_8 = new QHBoxLayout(buttonShoulderButtonsSLSRRight);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        buttonShoulderButtonsSRRightGroup = new QGroupBox(buttonShoulderButtonsSLSRRight);
        buttonShoulderButtonsSRRightGroup->setObjectName("buttonShoulderButtonsSRRightGroup");
        buttonShoulderButtonsSRRightGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonShoulderButtonsSRRightVerticalLayout = new QVBoxLayout(buttonShoulderButtonsSRRightGroup);
        buttonShoulderButtonsSRRightVerticalLayout->setSpacing(3);
        buttonShoulderButtonsSRRightVerticalLayout->setObjectName("buttonShoulderButtonsSRRightVerticalLayout");
        buttonShoulderButtonsSRRightVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonSRRight = new QPushButton(buttonShoulderButtonsSRRightGroup);
        buttonSRRight->setObjectName("buttonSRRight");
        buttonSRRight->setMinimumSize(QSize(70, 0));
        buttonSRRight->setMaximumSize(QSize(68, 16777215));
        buttonSRRight->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonShoulderButtonsSRRightVerticalLayout->addWidget(buttonSRRight);


        horizontalLayout_8->addWidget(buttonShoulderButtonsSRRightGroup);

        buttonShoulderButtonsSLRightGroup = new QGroupBox(buttonShoulderButtonsSLSRRight);
        buttonShoulderButtonsSLRightGroup->setObjectName("buttonShoulderButtonsSLRightGroup");
        buttonShoulderButtonsSLRightGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonShoulderButtonsSLRightVerticalLayout = new QVBoxLayout(buttonShoulderButtonsSLRightGroup);
        buttonShoulderButtonsSLRightVerticalLayout->setSpacing(3);
        buttonShoulderButtonsSLRightVerticalLayout->setObjectName("buttonShoulderButtonsSLRightVerticalLayout");
        buttonShoulderButtonsSLRightVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonSLRight = new QPushButton(buttonShoulderButtonsSLRightGroup);
        buttonSLRight->setObjectName("buttonSLRight");
        buttonSLRight->setMinimumSize(QSize(70, 0));
        buttonSLRight->setMaximumSize(QSize(68, 16777215));
        buttonSLRight->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonShoulderButtonsSLRightVerticalLayout->addWidget(buttonSLRight);


        horizontalLayout_8->addWidget(buttonShoulderButtonsSLRightGroup);


        shoulderButtons->addWidget(buttonShoulderButtonsSLSRRight);


        bottomMiddleLayout->addLayout(shoulderButtons);

        controllerFrame = new PlayerControlPreview(bottomMiddle);
        controllerFrame->setObjectName("controllerFrame");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(controllerFrame->sizePolicy().hasHeightForWidth());
        controllerFrame->setSizePolicy(sizePolicy3);
        QFont font;
        font.setBold(true);
        controllerFrame->setFont(font);
        controllerFrame->setStyleSheet(QString::fromUtf8("image: url(:/controller/pro);"));
        verticalLayout_4 = new QVBoxLayout(controllerFrame);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);

        bottomMiddleLayout->addWidget(controllerFrame);

        miscButtons = new QHBoxLayout();
        miscButtons->setSpacing(3);
        miscButtons->setObjectName("miscButtons");
        miscButtons->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacerMiscButtons1 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        miscButtons->addItem(horizontalSpacerMiscButtons1);

        buttonMotionLeftGroup = new QGroupBox(bottomMiddle);
        buttonMotionLeftGroup->setObjectName("buttonMotionLeftGroup");
        buttonMotionLeftGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonDpadLeftVerticalLayout_2 = new QVBoxLayout(buttonMotionLeftGroup);
        buttonDpadLeftVerticalLayout_2->setSpacing(3);
        buttonDpadLeftVerticalLayout_2->setObjectName("buttonDpadLeftVerticalLayout_2");
        buttonDpadLeftVerticalLayout_2->setContentsMargins(3, 3, 3, 3);
        buttonMotionLeft = new QPushButton(buttonMotionLeftGroup);
        buttonMotionLeft->setObjectName("buttonMotionLeft");
        buttonMotionLeft->setMinimumSize(QSize(70, 0));
        buttonMotionLeft->setMaximumSize(QSize(68, 16777215));
        buttonMotionLeft->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonDpadLeftVerticalLayout_2->addWidget(buttonMotionLeft);


        miscButtons->addWidget(buttonMotionLeftGroup);

        buttonMotionRightGroup = new QGroupBox(bottomMiddle);
        buttonMotionRightGroup->setObjectName("buttonMotionRightGroup");
        buttonMotionRightGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonDpadRightVerticalLayout_2 = new QVBoxLayout(buttonMotionRightGroup);
        buttonDpadRightVerticalLayout_2->setSpacing(3);
        buttonDpadRightVerticalLayout_2->setObjectName("buttonDpadRightVerticalLayout_2");
        buttonDpadRightVerticalLayout_2->setContentsMargins(3, 3, 3, 3);
        buttonMotionRight = new QPushButton(buttonMotionRightGroup);
        buttonMotionRight->setObjectName("buttonMotionRight");
        buttonMotionRight->setMinimumSize(QSize(70, 0));
        buttonMotionRight->setMaximumSize(QSize(68, 16777215));
        buttonMotionRight->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonDpadRightVerticalLayout_2->addWidget(buttonMotionRight);


        miscButtons->addWidget(buttonMotionRightGroup);

        buttonMiscButtonsScreenshotGroup = new QGroupBox(bottomMiddle);
        buttonMiscButtonsScreenshotGroup->setObjectName("buttonMiscButtonsScreenshotGroup");
        buttonMiscButtonsScreenshotGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonMiscScrCapVerticalLayout = new QVBoxLayout(buttonMiscButtonsScreenshotGroup);
        buttonMiscScrCapVerticalLayout->setSpacing(3);
        buttonMiscScrCapVerticalLayout->setObjectName("buttonMiscScrCapVerticalLayout");
        buttonMiscScrCapVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonScreenshot = new QPushButton(buttonMiscButtonsScreenshotGroup);
        buttonScreenshot->setObjectName("buttonScreenshot");
        buttonScreenshot->setMinimumSize(QSize(70, 0));
        buttonScreenshot->setMaximumSize(QSize(68, 16777215));
        buttonScreenshot->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonMiscScrCapVerticalLayout->addWidget(buttonScreenshot);


        miscButtons->addWidget(buttonMiscButtonsScreenshotGroup);

        buttonMiscButtonsHomeGroup = new QGroupBox(bottomMiddle);
        buttonMiscButtonsHomeGroup->setObjectName("buttonMiscButtonsHomeGroup");
        buttonMiscButtonsHomeGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonMiscHomeVerticalLayout = new QVBoxLayout(buttonMiscButtonsHomeGroup);
        buttonMiscHomeVerticalLayout->setSpacing(3);
        buttonMiscHomeVerticalLayout->setObjectName("buttonMiscHomeVerticalLayout");
        buttonMiscHomeVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonHome = new QPushButton(buttonMiscButtonsHomeGroup);
        buttonHome->setObjectName("buttonHome");
        buttonHome->setMinimumSize(QSize(70, 0));
        buttonHome->setMaximumSize(QSize(68, 16777215));
        buttonHome->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonMiscHomeVerticalLayout->addWidget(buttonHome);


        miscButtons->addWidget(buttonMiscButtonsHomeGroup);


        bottomMiddleLayout->addLayout(miscButtons);


        _2->addWidget(bottomMiddle);

        bottomRight = new QWidget(bottom);
        bottomRight->setObjectName("bottomRight");
        bottomRightLayout = new QVBoxLayout(bottomRight);
        bottomRightLayout->setSpacing(0);
        bottomRightLayout->setObjectName("bottomRightLayout");
        bottomRightLayout->setContentsMargins(0, 0, 0, 0);
        faceButtons = new QGroupBox(bottomRight);
        faceButtons->setObjectName("faceButtons");
        sizePolicy1.setHeightForWidth(faceButtons->sizePolicy().hasHeightForWidth());
        faceButtons->setSizePolicy(sizePolicy1);
        faceButtons->setFlat(false);
        faceButtons->setCheckable(false);
        verticalLayout = new QVBoxLayout(faceButtons);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(3, 0, 3, 0);
        faceButtonsWidget = new QWidget(faceButtons);
        faceButtonsWidget->setObjectName("faceButtonsWidget");
        gridLayout_3 = new QGridLayout(faceButtonsWidget);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        buttonFaceButtonsXGroup = new QGroupBox(faceButtonsWidget);
        buttonFaceButtonsXGroup->setObjectName("buttonFaceButtonsXGroup");
        buttonFaceButtonsXGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonFaceButtonsXVerticalLayout = new QVBoxLayout(buttonFaceButtonsXGroup);
        buttonFaceButtonsXVerticalLayout->setSpacing(0);
        buttonFaceButtonsXVerticalLayout->setObjectName("buttonFaceButtonsXVerticalLayout");
        buttonFaceButtonsXVerticalLayout->setContentsMargins(3, 0, 3, 0);
        buttonX = new QPushButton(buttonFaceButtonsXGroup);
        buttonX->setObjectName("buttonX");
        buttonX->setMinimumSize(QSize(70, 0));
        buttonX->setMaximumSize(QSize(68, 16777215));
        buttonX->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonFaceButtonsXVerticalLayout->addWidget(buttonX);


        gridLayout_3->addWidget(buttonFaceButtonsXGroup, 0, 1, 1, 1);

        buttonFaceButtonsBWidget_2 = new QGroupBox(faceButtonsWidget);
        buttonFaceButtonsBWidget_2->setObjectName("buttonFaceButtonsBWidget_2");
        buttonFaceButtonsBWidget_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonFaceButtonsBVerticalLayout = new QVBoxLayout(buttonFaceButtonsBWidget_2);
        buttonFaceButtonsBVerticalLayout->setSpacing(0);
        buttonFaceButtonsBVerticalLayout->setObjectName("buttonFaceButtonsBVerticalLayout");
        buttonFaceButtonsBVerticalLayout->setContentsMargins(3, 0, 3, 0);
        buttonB = new QPushButton(buttonFaceButtonsBWidget_2);
        buttonB->setObjectName("buttonB");
        buttonB->setMinimumSize(QSize(70, 0));
        buttonB->setMaximumSize(QSize(68, 16777215));
        buttonB->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonFaceButtonsBVerticalLayout->addWidget(buttonB);


        gridLayout_3->addWidget(buttonFaceButtonsBWidget_2, 2, 2, 1, 1);

        buttonFaceButtonsAGroup = new QGroupBox(faceButtonsWidget);
        buttonFaceButtonsAGroup->setObjectName("buttonFaceButtonsAGroup");
        buttonFaceButtonsAGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonFaceButtonsAVerticalLayout = new QVBoxLayout(buttonFaceButtonsAGroup);
        buttonFaceButtonsAVerticalLayout->setSpacing(0);
        buttonFaceButtonsAVerticalLayout->setObjectName("buttonFaceButtonsAVerticalLayout");
        buttonFaceButtonsAVerticalLayout->setContentsMargins(3, 0, 3, 0);
        buttonA = new QPushButton(buttonFaceButtonsAGroup);
        buttonA->setObjectName("buttonA");
        buttonA->setMinimumSize(QSize(70, 0));
        buttonA->setMaximumSize(QSize(68, 16777215));
        buttonA->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonFaceButtonsAVerticalLayout->addWidget(buttonA);


        gridLayout_3->addWidget(buttonFaceButtonsAGroup, 0, 2, 1, 1);

        buttonFaceButtonsYGroup = new QGroupBox(faceButtonsWidget);
        buttonFaceButtonsYGroup->setObjectName("buttonFaceButtonsYGroup");
        buttonFaceButtonsYGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonFaceButtonsYVerticalLayout = new QVBoxLayout(buttonFaceButtonsYGroup);
        buttonFaceButtonsYVerticalLayout->setSpacing(0);
        buttonFaceButtonsYVerticalLayout->setObjectName("buttonFaceButtonsYVerticalLayout");
        buttonFaceButtonsYVerticalLayout->setContentsMargins(3, 0, 3, 0);
        buttonY = new QPushButton(buttonFaceButtonsYGroup);
        buttonY->setObjectName("buttonY");
        buttonY->setMinimumSize(QSize(70, 0));
        buttonY->setMaximumSize(QSize(68, 16777215));
        buttonY->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonFaceButtonsYVerticalLayout->addWidget(buttonY);


        gridLayout_3->addWidget(buttonFaceButtonsYGroup, 2, 1, 1, 1);


        verticalLayout->addWidget(faceButtonsWidget);


        bottomRightLayout->addWidget(faceButtons);

        RStick = new QGroupBox(bottomRight);
        RStick->setObjectName("RStick");
        sizePolicy1.setHeightForWidth(RStick->sizePolicy().hasHeightForWidth());
        RStick->setSizePolicy(sizePolicy1);
        RStick->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        RStick->setFlat(false);
        RStick->setCheckable(false);
        verticalLayout_2 = new QVBoxLayout(RStick);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(3, 0, 3, 0);
        RStickDirectionsWidget = new QWidget(RStick);
        RStickDirectionsWidget->setObjectName("RStickDirectionsWidget");
        gridLayout_4 = new QGridLayout(RStickDirectionsWidget);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        buttonRStickRightGroup = new QGroupBox(RStickDirectionsWidget);
        buttonRStickRightGroup->setObjectName("buttonRStickRightGroup");
        buttonRStickRightGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonRStickRightVerticalLayout = new QVBoxLayout(buttonRStickRightGroup);
        buttonRStickRightVerticalLayout->setSpacing(0);
        buttonRStickRightVerticalLayout->setObjectName("buttonRStickRightVerticalLayout");
        buttonRStickRightVerticalLayout->setContentsMargins(3, 0, 3, 0);
        buttonRStickRight = new QPushButton(buttonRStickRightGroup);
        buttonRStickRight->setObjectName("buttonRStickRight");
        buttonRStickRight->setMinimumSize(QSize(70, 0));
        buttonRStickRight->setMaximumSize(QSize(68, 16777215));
        buttonRStickRight->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonRStickRightVerticalLayout->addWidget(buttonRStickRight);


        gridLayout_4->addWidget(buttonRStickRightGroup, 1, 1, 1, 1);

        buttonRStickDownGroup = new QGroupBox(RStickDirectionsWidget);
        buttonRStickDownGroup->setObjectName("buttonRStickDownGroup");
        buttonRStickDownGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonRStickDownVerticalLayout = new QVBoxLayout(buttonRStickDownGroup);
        buttonRStickDownVerticalLayout->setSpacing(0);
        buttonRStickDownVerticalLayout->setObjectName("buttonRStickDownVerticalLayout");
        buttonRStickDownVerticalLayout->setContentsMargins(3, 0, 3, 0);
        buttonRStickDown = new QPushButton(buttonRStickDownGroup);
        buttonRStickDown->setObjectName("buttonRStickDown");
        buttonRStickDown->setMinimumSize(QSize(70, 0));
        buttonRStickDown->setMaximumSize(QSize(68, 16777215));
        buttonRStickDown->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonRStickDownVerticalLayout->addWidget(buttonRStickDown);


        gridLayout_4->addWidget(buttonRStickDownGroup, 1, 0, 1, 1);

        buttonRStickLeftGroup = new QGroupBox(RStickDirectionsWidget);
        buttonRStickLeftGroup->setObjectName("buttonRStickLeftGroup");
        buttonRStickLeftGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonRStickLeftVerticalLayout = new QVBoxLayout(buttonRStickLeftGroup);
        buttonRStickLeftVerticalLayout->setSpacing(0);
        buttonRStickLeftVerticalLayout->setObjectName("buttonRStickLeftVerticalLayout");
        buttonRStickLeftVerticalLayout->setContentsMargins(3, 0, 3, 0);
        buttonRStickLeft = new QPushButton(buttonRStickLeftGroup);
        buttonRStickLeft->setObjectName("buttonRStickLeft");
        buttonRStickLeft->setMinimumSize(QSize(70, 0));
        buttonRStickLeft->setMaximumSize(QSize(68, 16777215));
        buttonRStickLeft->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonRStickLeftVerticalLayout->addWidget(buttonRStickLeft);


        gridLayout_4->addWidget(buttonRStickLeftGroup, 0, 0, 1, 1);

        buttonRStickUpGroup = new QGroupBox(RStickDirectionsWidget);
        buttonRStickUpGroup->setObjectName("buttonRStickUpGroup");
        buttonRStickUpGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonRStickUpVerticalLayout = new QVBoxLayout(buttonRStickUpGroup);
        buttonRStickUpVerticalLayout->setSpacing(3);
        buttonRStickUpVerticalLayout->setObjectName("buttonRStickUpVerticalLayout");
        buttonRStickUpVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonRStickUp = new QPushButton(buttonRStickUpGroup);
        buttonRStickUp->setObjectName("buttonRStickUp");
        buttonRStickUp->setMinimumSize(QSize(70, 0));
        buttonRStickUp->setMaximumSize(QSize(68, 16777215));
        buttonRStickUp->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonRStickUpVerticalLayout->addWidget(buttonRStickUp);


        gridLayout_4->addWidget(buttonRStickUpGroup, 0, 1, 1, 1);


        verticalLayout_2->addWidget(RStickDirectionsWidget);

        buttonRStickDownWidget = new QWidget(RStick);
        buttonRStickDownWidget->setObjectName("buttonRStickDownWidget");
        horizontalLayout_11 = new QHBoxLayout(buttonRStickDownWidget);
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);

        verticalLayout_2->addWidget(buttonRStickDownWidget);

        buttonRStickPressedModifierHorizontalLayout = new QHBoxLayout();
        buttonRStickPressedModifierHorizontalLayout->setSpacing(3);
        buttonRStickPressedModifierHorizontalLayout->setObjectName("buttonRStickPressedModifierHorizontalLayout");
        groupRStickPressed = new QGroupBox(RStick);
        groupRStickPressed->setObjectName("groupRStickPressed");
        groupRStickPressed->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonRStickPressedVerticalLayout = new QVBoxLayout(groupRStickPressed);
        buttonRStickPressedVerticalLayout->setSpacing(0);
        buttonRStickPressedVerticalLayout->setObjectName("buttonRStickPressedVerticalLayout");
        buttonRStickPressedVerticalLayout->setContentsMargins(3, 0, 3, 0);
        buttonRStick = new QPushButton(groupRStickPressed);
        buttonRStick->setObjectName("buttonRStick");
        buttonRStick->setMinimumSize(QSize(70, 0));
        buttonRStick->setMaximumSize(QSize(68, 16777215));
        buttonRStick->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonRStickPressedVerticalLayout->addWidget(buttonRStick);


        buttonRStickPressedModifierHorizontalLayout->addWidget(groupRStickPressed, 0, Qt::AlignmentFlag::AlignHCenter);

        buttonRStickModGroup = new QGroupBox(RStick);
        buttonRStickModGroup->setObjectName("buttonRStickModGroup");
        buttonRStickModGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buttonRStickModVerticalLayout = new QVBoxLayout(buttonRStickModGroup);
        buttonRStickModVerticalLayout->setSpacing(0);
        buttonRStickModVerticalLayout->setObjectName("buttonRStickModVerticalLayout");
        buttonRStickModVerticalLayout->setContentsMargins(3, 0, 3, 0);
        buttonRStickMod = new QPushButton(buttonRStickModGroup);
        buttonRStickMod->setObjectName("buttonRStickMod");
        buttonRStickMod->setMinimumSize(QSize(70, 0));
        buttonRStickMod->setMaximumSize(QSize(68, 16777215));
        buttonRStickMod->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonRStickModVerticalLayout->addWidget(buttonRStickMod);


        buttonRStickPressedModifierHorizontalLayout->addWidget(buttonRStickModGroup, 0, Qt::AlignmentFlag::AlignHCenter);

        buttonRStickRangeGroup = new QGroupBox(RStick);
        buttonRStickRangeGroup->setObjectName("buttonRStickRangeGroup");
        buttonRStickRangeGroupHorizontalLayout = new QHBoxLayout(buttonRStickRangeGroup);
        buttonRStickRangeGroupHorizontalLayout->setSpacing(0);
        buttonRStickRangeGroupHorizontalLayout->setObjectName("buttonRStickRangeGroupHorizontalLayout");
        buttonRStickRangeGroupHorizontalLayout->setContentsMargins(3, 0, 3, 0);
        spinboxRStickRange = new QSpinBox(buttonRStickRangeGroup);
        spinboxRStickRange->setObjectName("spinboxRStickRange");
        spinboxRStickRange->setMinimumSize(QSize(68, 21));
        spinboxRStickRange->setMaximumSize(QSize(68, 16777215));
        spinboxRStickRange->setMinimum(25);
        spinboxRStickRange->setMaximum(150);
        spinboxRStickRange->setValue(95);

        buttonRStickRangeGroupHorizontalLayout->addWidget(spinboxRStickRange);


        buttonRStickPressedModifierHorizontalLayout->addWidget(buttonRStickRangeGroup);


        verticalLayout_2->addLayout(buttonRStickPressedModifierHorizontalLayout);

        sliderRStickDeadzoneModifierRangeVerticalLayout = new QVBoxLayout();
        sliderRStickDeadzoneModifierRangeVerticalLayout->setSpacing(3);
        sliderRStickDeadzoneModifierRangeVerticalLayout->setObjectName("sliderRStickDeadzoneModifierRangeVerticalLayout");
        sliderRStickDeadzoneModifierRangeVerticalLayout->setContentsMargins(0, 2, 0, 3);
        sliderRStickDeadzoneHorizontalLayout = new QHBoxLayout();
        sliderRStickDeadzoneHorizontalLayout->setObjectName("sliderRStickDeadzoneHorizontalLayout");
        labelRStickDeadzone = new QLabel(RStick);
        labelRStickDeadzone->setObjectName("labelRStickDeadzone");
        labelRStickDeadzone->setAlignment(Qt::AlignmentFlag::AlignHCenter);

        sliderRStickDeadzoneHorizontalLayout->addWidget(labelRStickDeadzone);


        sliderRStickDeadzoneModifierRangeVerticalLayout->addLayout(sliderRStickDeadzoneHorizontalLayout);

        sliderRStickDeadzone = new QSlider(RStick);
        sliderRStickDeadzone->setObjectName("sliderRStickDeadzone");
        sliderRStickDeadzone->setMaximum(100);
        sliderRStickDeadzone->setOrientation(Qt::Orientation::Horizontal);

        sliderRStickDeadzoneModifierRangeVerticalLayout->addWidget(sliderRStickDeadzone);

        sliderRStickModifierRangeHorizontalLayout = new QHBoxLayout();
        sliderRStickModifierRangeHorizontalLayout->setObjectName("sliderRStickModifierRangeHorizontalLayout");
        labelRStickModifierRange = new QLabel(RStick);
        labelRStickModifierRange->setObjectName("labelRStickModifierRange");
        labelRStickModifierRange->setAlignment(Qt::AlignmentFlag::AlignHCenter);

        sliderRStickModifierRangeHorizontalLayout->addWidget(labelRStickModifierRange);


        sliderRStickDeadzoneModifierRangeVerticalLayout->addLayout(sliderRStickModifierRangeHorizontalLayout);

        sliderRStickModifierRange = new QSlider(RStick);
        sliderRStickModifierRange->setObjectName("sliderRStickModifierRange");
        sliderRStickModifierRange->setMaximum(100);
        sliderRStickModifierRange->setOrientation(Qt::Orientation::Horizontal);

        sliderRStickDeadzoneModifierRangeVerticalLayout->addWidget(sliderRStickModifierRange);


        verticalLayout_2->addLayout(sliderRStickDeadzoneModifierRangeVerticalLayout);

        mousePanningWidget = new QWidget(RStick);
        mousePanningWidget->setObjectName("mousePanningWidget");
        mousePanningHorizontalLayout = new QHBoxLayout(mousePanningWidget);
        mousePanningHorizontalLayout->setSpacing(0);
        mousePanningHorizontalLayout->setObjectName("mousePanningHorizontalLayout");
        mousePanningHorizontalLayout->setContentsMargins(0, 0, 0, 3);
        mousePanningHorizontalSpacerLeft = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        mousePanningHorizontalLayout->addItem(mousePanningHorizontalSpacerLeft);

        mousePanningGroup = new QGroupBox(mousePanningWidget);
        mousePanningGroup->setObjectName("mousePanningGroup");
        mousePanningGroup->setAlignment(Qt::AlignmentFlag::AlignCenter);
        mousePanningVerticalLayout = new QVBoxLayout(mousePanningGroup);
        mousePanningVerticalLayout->setSpacing(0);
        mousePanningVerticalLayout->setObjectName("mousePanningVerticalLayout");
        mousePanningVerticalLayout->setContentsMargins(0, 0, 0, 0);
        mousePanningButton = new QPushButton(mousePanningGroup);
        mousePanningButton->setObjectName("mousePanningButton");

        mousePanningVerticalLayout->addWidget(mousePanningButton);


        mousePanningHorizontalLayout->addWidget(mousePanningGroup);

        mousePanningHorizontalSpacerRight = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        mousePanningHorizontalLayout->addItem(mousePanningHorizontalSpacerRight);


        verticalLayout_2->addWidget(mousePanningWidget);


        bottomRightLayout->addWidget(RStick);

        verticalSpacerBottomRight_2 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        bottomRightLayout->addItem(verticalSpacerBottomRight_2);


        _2->addWidget(bottomRight);


        main->addWidget(bottom);


        horizontalLayout_2->addLayout(main);


        retranslateUi(ConfigureInputPlayer);

        QMetaObject::connectSlotsByName(ConfigureInputPlayer);
    } // setupUi

    void retranslateUi(QWidget *ConfigureInputPlayer)
    {
        ConfigureInputPlayer->setWindowTitle(QCoreApplication::translate("ConfigureInputPlayer", "Configure Input", nullptr));
        groupConnectedController->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Connect Controller", nullptr));
        devicesGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Input Device", nullptr));
        profilesGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Profile", nullptr));
        buttonProfilesSave->setText(QCoreApplication::translate("ConfigureInputPlayer", "Save", nullptr));
        buttonProfilesNew->setText(QCoreApplication::translate("ConfigureInputPlayer", "New", nullptr));
        buttonProfilesDelete->setText(QCoreApplication::translate("ConfigureInputPlayer", "Delete", nullptr));
        LStick->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Left Stick", nullptr));
        buttonLStickDownGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Down", nullptr));
        buttonLStickDown->setText(QCoreApplication::translate("ConfigureInputPlayer", "Down", nullptr));
        buttonLStickRightGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Right", nullptr));
        buttonLStickRight->setText(QCoreApplication::translate("ConfigureInputPlayer", "Right", nullptr));
        buttonLStickLeftGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Left", nullptr));
        buttonLStickLeft->setText(QCoreApplication::translate("ConfigureInputPlayer", "Left", nullptr));
        buttonLStickUpGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Up", nullptr));
        buttonLStickUp->setText(QCoreApplication::translate("ConfigureInputPlayer", "Up", nullptr));
        buttonLStickPressedGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Pressed", nullptr));
        buttonLStick->setText(QCoreApplication::translate("ConfigureInputPlayer", "Pressed", nullptr));
        buttonLStickModGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Modifier", nullptr));
        buttonLStickMod->setText(QCoreApplication::translate("ConfigureInputPlayer", "Modifier", nullptr));
        buttonLStickRangeGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Range", nullptr));
        spinboxLStickRange->setSuffix(QCoreApplication::translate("ConfigureInputPlayer", "%", nullptr));
        labelLStickDeadzone->setText(QCoreApplication::translate("ConfigureInputPlayer", "Deadzone: 0%", nullptr));
        labelLStickModifierRange->setText(QCoreApplication::translate("ConfigureInputPlayer", "Modifier Range: 0%", nullptr));
        Dpad->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "D-Pad", nullptr));
        buttonDpadDownGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Down", nullptr));
        buttonDpadDown->setText(QCoreApplication::translate("ConfigureInputPlayer", "Down", nullptr));
        buttonDpadLeftGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Left", nullptr));
        buttonDpadLeft->setText(QCoreApplication::translate("ConfigureInputPlayer", "Left", nullptr));
        buttonDpadRightGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Right", nullptr));
        buttonDpadRight->setText(QCoreApplication::translate("ConfigureInputPlayer", "Right", nullptr));
        buttonDpadUpGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Up", nullptr));
        buttonDpadUp->setText(QCoreApplication::translate("ConfigureInputPlayer", "Up", nullptr));
        buttonShoulderButtonsSRLeftGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "SR", nullptr));
        buttonSRLeft->setText(QCoreApplication::translate("ConfigureInputPlayer", "SR", nullptr));
        buttonShoulderButtonsSLLeftGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "SL", nullptr));
        buttonSLLeft->setText(QCoreApplication::translate("ConfigureInputPlayer", "SL", nullptr));
        buttonShoulderButtonsButtonZLGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "ZL", nullptr));
        buttonZL->setText(QCoreApplication::translate("ConfigureInputPlayer", "ZL", nullptr));
        buttonShoulderButtonsButtonLGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "L", nullptr));
        buttonL->setText(QCoreApplication::translate("ConfigureInputPlayer", "L", nullptr));
        buttonMiscButtonsMinusGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Minus", nullptr));
        buttonMinus->setText(QCoreApplication::translate("ConfigureInputPlayer", "Minus", nullptr));
        buttonMiscButtonsPlusGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Plus", nullptr));
        buttonPlus->setText(QCoreApplication::translate("ConfigureInputPlayer", "Plus", nullptr));
        buttonShoulderButtonsZRGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "ZR", nullptr));
        buttonZR->setText(QCoreApplication::translate("ConfigureInputPlayer", "ZR", nullptr));
        buttonShoulderButtonsRGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "R", nullptr));
        buttonR->setText(QCoreApplication::translate("ConfigureInputPlayer", "R", nullptr));
        buttonShoulderButtonsSRRightGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "SR", nullptr));
        buttonSRRight->setText(QCoreApplication::translate("ConfigureInputPlayer", "SR", nullptr));
        buttonShoulderButtonsSLRightGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "SL", nullptr));
        buttonSLRight->setText(QCoreApplication::translate("ConfigureInputPlayer", "SL", nullptr));
        buttonMotionLeftGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Motion 1", nullptr));
        buttonMotionLeft->setText(QCoreApplication::translate("ConfigureInputPlayer", "Left", nullptr));
        buttonMotionRightGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Motion 2", nullptr));
        buttonMotionRight->setText(QCoreApplication::translate("ConfigureInputPlayer", "Right", nullptr));
        buttonMiscButtonsScreenshotGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Capture", nullptr));
        buttonScreenshot->setText(QCoreApplication::translate("ConfigureInputPlayer", "Capture", nullptr));
        buttonMiscButtonsHomeGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Home", nullptr));
        buttonHome->setText(QCoreApplication::translate("ConfigureInputPlayer", "Home", nullptr));
        faceButtons->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Face Buttons", nullptr));
        buttonFaceButtonsXGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "X", nullptr));
        buttonX->setText(QCoreApplication::translate("ConfigureInputPlayer", "X", nullptr));
        buttonFaceButtonsBWidget_2->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "B", nullptr));
        buttonB->setText(QCoreApplication::translate("ConfigureInputPlayer", "B", nullptr));
        buttonFaceButtonsAGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "A", nullptr));
        buttonA->setText(QCoreApplication::translate("ConfigureInputPlayer", "A", nullptr));
        buttonFaceButtonsYGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Y", nullptr));
        buttonY->setText(QCoreApplication::translate("ConfigureInputPlayer", "Y", nullptr));
        RStick->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Right Stick", nullptr));
        buttonRStickRightGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Right", nullptr));
        buttonRStickRight->setText(QCoreApplication::translate("ConfigureInputPlayer", "Right", nullptr));
        buttonRStickDownGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Down", nullptr));
        buttonRStickDown->setText(QCoreApplication::translate("ConfigureInputPlayer", "Down", nullptr));
        buttonRStickLeftGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Left", nullptr));
        buttonRStickLeft->setText(QCoreApplication::translate("ConfigureInputPlayer", "Left", nullptr));
        buttonRStickUpGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Up", nullptr));
        buttonRStickUp->setText(QCoreApplication::translate("ConfigureInputPlayer", "Up", nullptr));
        groupRStickPressed->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Pressed", nullptr));
        buttonRStick->setText(QCoreApplication::translate("ConfigureInputPlayer", "Pressed", nullptr));
        buttonRStickModGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Modifier", nullptr));
        buttonRStickMod->setText(QCoreApplication::translate("ConfigureInputPlayer", "Modifier", nullptr));
        buttonRStickRangeGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Range", nullptr));
        spinboxRStickRange->setSuffix(QCoreApplication::translate("ConfigureInputPlayer", "%", nullptr));
        labelRStickDeadzone->setText(QCoreApplication::translate("ConfigureInputPlayer", "Deadzone: 0%", nullptr));
        labelRStickModifierRange->setText(QCoreApplication::translate("ConfigureInputPlayer", "Modifier Range: 0%", nullptr));
        mousePanningGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Mouse panning", nullptr));
        mousePanningButton->setText(QCoreApplication::translate("ConfigureInputPlayer", "Configure", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureInputPlayer: public Ui_ConfigureInputPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_INPUT_PLAYER_H
