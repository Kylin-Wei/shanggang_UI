/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRtv;
    QAction *actionLtv;
    QAction *actionConf;
    QAction *actionExit;
    QAction *toolRtv;
    QAction *toolLtv;
    QAction *toolConf;
    QAction *toolExit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *inputLabel;
    QLabel *resultLabel;
    QHBoxLayout *horizontalLayout;
    QFrame *switchFrame1;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *saveResultCheckBox;
    QLineEdit *saveResultLineEdit;
    QToolButton *saveResultToolButton;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QFrame *switchFrame2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *resultStringLabel;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(940, 637);
        actionRtv = new QAction(MainWindow);
        actionRtv->setObjectName(QStringLiteral("actionRtv"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icon/images/rtv.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionRtv->setIcon(icon);
        actionLtv = new QAction(MainWindow);
        actionLtv->setObjectName(QStringLiteral("actionLtv"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/icon/images/ltv.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionLtv->setIcon(icon1);
        actionConf = new QAction(MainWindow);
        actionConf->setObjectName(QStringLiteral("actionConf"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/icon/images/conf.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionConf->setIcon(icon2);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/icon/images/exit.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon3);
        toolRtv = new QAction(MainWindow);
        toolRtv->setObjectName(QStringLiteral("toolRtv"));
        toolRtv->setIcon(icon);
        toolLtv = new QAction(MainWindow);
        toolLtv->setObjectName(QStringLiteral("toolLtv"));
        toolLtv->setIcon(icon1);
        toolConf = new QAction(MainWindow);
        toolConf->setObjectName(QStringLiteral("toolConf"));
        toolConf->setIcon(icon2);
        toolExit = new QAction(MainWindow);
        toolExit->setObjectName(QStringLiteral("toolExit"));
        toolExit->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        inputLabel = new QLabel(centralWidget);
        inputLabel->setObjectName(QStringLiteral("inputLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(inputLabel->sizePolicy().hasHeightForWidth());
        inputLabel->setSizePolicy(sizePolicy);
        inputLabel->setMinimumSize(QSize(400, 350));
        inputLabel->setFrameShape(QFrame::WinPanel);
        inputLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(inputLabel);

        resultLabel = new QLabel(centralWidget);
        resultLabel->setObjectName(QStringLiteral("resultLabel"));
        sizePolicy.setHeightForWidth(resultLabel->sizePolicy().hasHeightForWidth());
        resultLabel->setSizePolicy(sizePolicy);
        resultLabel->setMinimumSize(QSize(400, 350));
        resultLabel->setFrameShape(QFrame::WinPanel);
        resultLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(resultLabel);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        switchFrame1 = new QFrame(centralWidget);
        switchFrame1->setObjectName(QStringLiteral("switchFrame1"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(switchFrame1->sizePolicy().hasHeightForWidth());
        switchFrame1->setSizePolicy(sizePolicy1);
        switchFrame1->setFrameShape(QFrame::StyledPanel);
        switchFrame1->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(switchFrame1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(9, -1, 9, -1);
        saveResultCheckBox = new QCheckBox(centralWidget);
        saveResultCheckBox->setObjectName(QStringLiteral("saveResultCheckBox"));

        horizontalLayout_2->addWidget(saveResultCheckBox);

        saveResultLineEdit = new QLineEdit(centralWidget);
        saveResultLineEdit->setObjectName(QStringLiteral("saveResultLineEdit"));

        horizontalLayout_2->addWidget(saveResultLineEdit);

        saveResultToolButton = new QToolButton(centralWidget);
        saveResultToolButton->setObjectName(QStringLiteral("saveResultToolButton"));

        horizontalLayout_2->addWidget(saveResultToolButton);


        horizontalLayout->addLayout(horizontalLayout_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        switchFrame2 = new QFrame(centralWidget);
        switchFrame2->setObjectName(QStringLiteral("switchFrame2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(switchFrame2->sizePolicy().hasHeightForWidth());
        switchFrame2->setSizePolicy(sizePolicy2);
        switchFrame2->setFrameShape(QFrame::StyledPanel);
        switchFrame2->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(switchFrame2);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        resultStringLabel = new QLabel(centralWidget);
        resultStringLabel->setObjectName(QStringLiteral("resultStringLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(resultStringLabel->sizePolicy().hasHeightForWidth());
        resultStringLabel->setSizePolicy(sizePolicy3);
        resultStringLabel->setMinimumSize(QSize(202, 60));
        resultStringLabel->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QStringLiteral("Candara"));
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        resultStringLabel->setFont(font);
        resultStringLabel->setAutoFillBackground(false);
        resultStringLabel->setStyleSheet(QLatin1String("color: rgb(255, 170, 0);\n"
"background-color: rgb(0, 0, 127);\n"
"border:4px solid rgb(255, 255, 255)"));
        resultStringLabel->setFrameShape(QFrame::Box);
        resultStringLabel->setFrameShadow(QFrame::Plain);
        resultStringLabel->setTextFormat(Qt::AutoText);
        resultStringLabel->setScaledContents(false);
        resultStringLabel->setAlignment(Qt::AlignCenter);
        resultStringLabel->setMargin(2);
        resultStringLabel->setIndent(2);

        horizontalLayout_4->addWidget(resultStringLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);
        horizontalLayout_4->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_3->setStretch(0, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 1);

        horizontalLayout_5->addLayout(verticalLayout_2);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_4->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(true);
        menuBar->setGeometry(QRect(0, 0, 940, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223"));
        font1.setBold(true);
        font1.setWeight(75);
        mainToolBar->setFont(font1);
        mainToolBar->setMovable(false);
        mainToolBar->setIconSize(QSize(64, 48));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionRtv);
        menu->addAction(actionLtv);
        menu->addAction(actionConf);
        menu->addAction(actionExit);
        mainToolBar->addAction(toolRtv);
        mainToolBar->addAction(toolLtv);
        mainToolBar->addAction(toolConf);
        mainToolBar->addAction(toolExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionRtv->setText(QApplication::translate("MainWindow", "\345\256\236\346\227\266\350\247\206\351\242\221(&R)", 0));
        actionLtv->setText(QApplication::translate("MainWindow", "\346\234\254\345\234\260\350\247\206\351\242\221(&L)", 0));
        actionConf->setText(QApplication::translate("MainWindow", "\351\205\215\347\275\256(&C)", 0));
#ifndef QT_NO_TOOLTIP
        actionConf->setToolTip(QApplication::translate("MainWindow", "\351\205\215\347\275\256(&C)", 0));
#endif // QT_NO_TOOLTIP
        actionExit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272(&E)", 0));
        toolRtv->setText(QApplication::translate("MainWindow", "\345\256\236\346\227\266\350\247\206\351\242\221", 0));
        toolLtv->setText(QApplication::translate("MainWindow", "\346\234\254\345\234\260\350\247\206\351\242\221", 0));
        toolConf->setText(QApplication::translate("MainWindow", "\351\205\215    \347\275\256", 0));
#ifndef QT_NO_TOOLTIP
        toolConf->setToolTip(QApplication::translate("MainWindow", "\351\205\215    \347\275\256", 0));
#endif // QT_NO_TOOLTIP
        toolExit->setText(QApplication::translate("MainWindow", "\351\200\200    \345\207\272", 0));
        inputLabel->setText(QApplication::translate("MainWindow", "\350\247\206\351\242\221\350\276\223\345\205\245", 0));
        resultLabel->setText(QApplication::translate("MainWindow", "\345\244\204\347\220\206\347\273\223\346\236\234", 0));
        saveResultCheckBox->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", 0));
        saveResultToolButton->setText(QApplication::translate("MainWindow", "...", 0));
        resultStringLabel->setText(QApplication::translate("MainWindow", "\350\257\206\345\210\253\347\273\223\346\236\234", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\346\211\200\346\234\211\350\217\234\345\215\225(&M)", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
