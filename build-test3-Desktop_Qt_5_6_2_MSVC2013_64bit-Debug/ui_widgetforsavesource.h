/********************************************************************************
** Form generated from reading UI file 'widgetforsavesource.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETFORSAVESOURCE_H
#define UI_WIDGETFORSAVESOURCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetForSaveSource
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *saveSourceCheckBox;
    QLineEdit *saveSourceLineEdit;
    QToolButton *saveSourceToolButton;

    void setupUi(QWidget *WidgetForSaveSource)
    {
        if (WidgetForSaveSource->objectName().isEmpty())
            WidgetForSaveSource->setObjectName(QStringLiteral("WidgetForSaveSource"));
        WidgetForSaveSource->resize(301, 22);
        horizontalLayout_2 = new QHBoxLayout(WidgetForSaveSource);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        saveSourceCheckBox = new QCheckBox(WidgetForSaveSource);
        saveSourceCheckBox->setObjectName(QStringLiteral("saveSourceCheckBox"));

        horizontalLayout->addWidget(saveSourceCheckBox);

        saveSourceLineEdit = new QLineEdit(WidgetForSaveSource);
        saveSourceLineEdit->setObjectName(QStringLiteral("saveSourceLineEdit"));

        horizontalLayout->addWidget(saveSourceLineEdit);

        saveSourceToolButton = new QToolButton(WidgetForSaveSource);
        saveSourceToolButton->setObjectName(QStringLiteral("saveSourceToolButton"));

        horizontalLayout->addWidget(saveSourceToolButton);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(WidgetForSaveSource);

        QMetaObject::connectSlotsByName(WidgetForSaveSource);
    } // setupUi

    void retranslateUi(QWidget *WidgetForSaveSource)
    {
        WidgetForSaveSource->setWindowTitle(QApplication::translate("WidgetForSaveSource", "Form", 0));
        saveSourceCheckBox->setText(QApplication::translate("WidgetForSaveSource", "\344\277\235\345\255\230", 0));
        saveSourceToolButton->setText(QApplication::translate("WidgetForSaveSource", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class WidgetForSaveSource: public Ui_WidgetForSaveSource {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETFORSAVESOURCE_H
