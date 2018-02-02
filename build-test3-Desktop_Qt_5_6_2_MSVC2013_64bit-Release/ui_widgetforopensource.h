/********************************************************************************
** Form generated from reading UI file 'widgetforopensource.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETFOROPENSOURCE_H
#define UI_WIDGETFOROPENSOURCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetForOpenSource
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *openSourceLineEdit;
    QToolButton *openSourceToolButton;

    void setupUi(QWidget *WidgetForOpenSource)
    {
        if (WidgetForOpenSource->objectName().isEmpty())
            WidgetForOpenSource->setObjectName(QStringLiteral("WidgetForOpenSource"));
        WidgetForOpenSource->resize(314, 22);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WidgetForOpenSource->sizePolicy().hasHeightForWidth());
        WidgetForOpenSource->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(WidgetForOpenSource);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(9, 0, 9, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        label = new QLabel(WidgetForOpenSource);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        openSourceLineEdit = new QLineEdit(WidgetForOpenSource);
        openSourceLineEdit->setObjectName(QStringLiteral("openSourceLineEdit"));

        horizontalLayout->addWidget(openSourceLineEdit);

        openSourceToolButton = new QToolButton(WidgetForOpenSource);
        openSourceToolButton->setObjectName(QStringLiteral("openSourceToolButton"));

        horizontalLayout->addWidget(openSourceToolButton);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(WidgetForOpenSource);

        QMetaObject::connectSlotsByName(WidgetForOpenSource);
    } // setupUi

    void retranslateUi(QWidget *WidgetForOpenSource)
    {
        WidgetForOpenSource->setWindowTitle(QApplication::translate("WidgetForOpenSource", "Form", 0));
        label->setText(QApplication::translate("WidgetForOpenSource", "  \346\211\223\345\274\200  ", 0));
        openSourceToolButton->setText(QApplication::translate("WidgetForOpenSource", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class WidgetForOpenSource: public Ui_WidgetForOpenSource {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETFOROPENSOURCE_H
