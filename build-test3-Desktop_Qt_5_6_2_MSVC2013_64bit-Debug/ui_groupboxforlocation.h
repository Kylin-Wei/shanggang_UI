/********************************************************************************
** Form generated from reading UI file 'groupboxforlocation.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPBOXFORLOCATION_H
#define UI_GROUPBOXFORLOCATION_H

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

class Ui_GroupBoxForLocation
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *beginPushButton;
    QPushButton *pausePushButton;
    QPushButton *endPushButton;

    void setupUi(QGroupBox *GroupBoxForLocation)
    {
        if (GroupBoxForLocation->objectName().isEmpty())
            GroupBoxForLocation->setObjectName(QStringLiteral("GroupBoxForLocation"));
        GroupBoxForLocation->resize(321, 104);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GroupBoxForLocation->sizePolicy().hasHeightForWidth());
        GroupBoxForLocation->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(GroupBoxForLocation);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        beginPushButton = new QPushButton(GroupBoxForLocation);
        beginPushButton->setObjectName(QStringLiteral("beginPushButton"));

        horizontalLayout->addWidget(beginPushButton);

        pausePushButton = new QPushButton(GroupBoxForLocation);
        pausePushButton->setObjectName(QStringLiteral("pausePushButton"));

        horizontalLayout->addWidget(pausePushButton);

        endPushButton = new QPushButton(GroupBoxForLocation);
        endPushButton->setObjectName(QStringLiteral("endPushButton"));

        horizontalLayout->addWidget(endPushButton);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(GroupBoxForLocation);

        QMetaObject::connectSlotsByName(GroupBoxForLocation);
    } // setupUi

    void retranslateUi(QGroupBox *GroupBoxForLocation)
    {
        GroupBoxForLocation->setTitle(QApplication::translate("GroupBoxForLocation", "\346\234\254\345\234\260\350\247\206\351\242\221", 0));
        beginPushButton->setText(QApplication::translate("GroupBoxForLocation", "\345\274\200\345\247\213", 0));
        pausePushButton->setText(QApplication::translate("GroupBoxForLocation", "\346\232\202\345\201\234", 0));
        endPushButton->setText(QApplication::translate("GroupBoxForLocation", "\347\273\210\346\255\242", 0));
    } // retranslateUi

};

namespace Ui {
    class GroupBoxForLocation: public Ui_GroupBoxForLocation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPBOXFORLOCATION_H
