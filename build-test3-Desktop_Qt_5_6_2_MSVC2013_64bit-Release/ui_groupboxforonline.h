/********************************************************************************
** Form generated from reading UI file 'groupboxforonline.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPBOXFORONLINE_H
#define UI_GROUPBOXFORONLINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GroupBoxForOnline
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *connectPushButton;
    QPushButton *disConnectPushButton;

    void setupUi(QGroupBox *GroupBoxForOnline)
    {
        if (GroupBoxForOnline->objectName().isEmpty())
            GroupBoxForOnline->setObjectName(QStringLiteral("GroupBoxForOnline"));
        GroupBoxForOnline->resize(343, 97);
        horizontalLayout_2 = new QHBoxLayout(GroupBoxForOnline);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        connectPushButton = new QPushButton(GroupBoxForOnline);
        connectPushButton->setObjectName(QStringLiteral("connectPushButton"));

        horizontalLayout->addWidget(connectPushButton);

        disConnectPushButton = new QPushButton(GroupBoxForOnline);
        disConnectPushButton->setObjectName(QStringLiteral("disConnectPushButton"));

        horizontalLayout->addWidget(disConnectPushButton);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(GroupBoxForOnline);

        QMetaObject::connectSlotsByName(GroupBoxForOnline);
    } // setupUi

    void retranslateUi(QGroupBox *GroupBoxForOnline)
    {
        GroupBoxForOnline->setWindowTitle(QApplication::translate("GroupBoxForOnline", "GroupBox", 0));
        GroupBoxForOnline->setTitle(QApplication::translate("GroupBoxForOnline", "\345\256\236\346\227\266\350\247\206\351\242\221", 0));
        connectPushButton->setText(QApplication::translate("GroupBoxForOnline", "\350\277\236\346\216\245", 0));
        disConnectPushButton->setText(QApplication::translate("GroupBoxForOnline", "\346\226\255\345\274\200", 0));
    } // retranslateUi

};

namespace Ui {
    class GroupBoxForOnline: public Ui_GroupBoxForOnline {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPBOXFORONLINE_H
