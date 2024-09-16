/********************************************************************************
** Form generated from reading UI file 'newwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWWINDOW_H
#define UI_NEWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewWindow
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *NewWindow)
    {
        if (NewWindow->objectName().isEmpty())
            NewWindow->setObjectName("NewWindow");
        NewWindow->resize(240, 80);
        gridLayout_2 = new QGridLayout(NewWindow);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(NewWindow);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(NewWindow);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(NewWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(75, 24));

        horizontalLayout_2->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(NewWindow);

        QMetaObject::connectSlotsByName(NewWindow);
    } // setupUi

    void retranslateUi(QWidget *NewWindow)
    {
        NewWindow->setWindowTitle(QCoreApplication::translate("NewWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("NewWindow", "\345\274\200\345\217\221\344\272\272\345\221\230\344\277\241\346\201\257\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("NewWindow", "2022414120108\351\273\204\346\226\207\350\275\251", nullptr));
        pushButton->setText(QCoreApplication::translate("NewWindow", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewWindow: public Ui_NewWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWWINDOW_H
