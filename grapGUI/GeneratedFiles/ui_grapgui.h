/********************************************************************************
** Form generated from reading UI file 'grapgui.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPGUI_H
#define UI_GRAPGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mywidget.h"

QT_BEGIN_NAMESPACE

class Ui_grapGUIClass
{
public:
    QWidget *centralWidget;
    QPlainTextEdit *plainTextEdit;
    MyWidget *frame;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Start_point;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLineEdit *End_point;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Button_Add;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *Soure_point;
    QLabel *label_4;
    QLineEdit *Aim_point;
    QComboBox *comboBox;
    QPushButton *Button_finish;
    QLabel *label_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *grapGUIClass)
    {
        if (grapGUIClass->objectName().isEmpty())
            grapGUIClass->setObjectName(QStringLiteral("grapGUIClass"));
        grapGUIClass->resize(644, 456);
        centralWidget = new QWidget(grapGUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(460, 30, 161, 301));
        plainTextEdit->setReadOnly(true);
        frame = new MyWidget(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 11, 441, 311));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(22, 333, 601, 58));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        Start_point = new QLineEdit(layoutWidget);
        Start_point->setObjectName(QStringLiteral("Start_point"));

        horizontalLayout->addWidget(Start_point);

        horizontalSpacer = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        End_point = new QLineEdit(layoutWidget);
        End_point->setObjectName(QStringLiteral("End_point"));

        horizontalLayout->addWidget(End_point);

        horizontalSpacer_2 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        Button_Add = new QPushButton(layoutWidget);
        Button_Add->setObjectName(QStringLiteral("Button_Add"));

        horizontalLayout->addWidget(Button_Add);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        Soure_point = new QLineEdit(layoutWidget);
        Soure_point->setObjectName(QStringLiteral("Soure_point"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Soure_point->sizePolicy().hasHeightForWidth());
        Soure_point->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(Soure_point);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        Aim_point = new QLineEdit(layoutWidget);
        Aim_point->setObjectName(QStringLiteral("Aim_point"));
        sizePolicy.setHeightForWidth(Aim_point->sizePolicy().hasHeightForWidth());
        Aim_point->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(Aim_point);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        Button_finish = new QPushButton(layoutWidget);
        Button_finish->setObjectName(QStringLiteral("Button_finish"));

        horizontalLayout_2->addWidget(Button_finish);


        verticalLayout->addLayout(horizontalLayout_2);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(470, 10, 54, 12));
        grapGUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(grapGUIClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 644, 23));
        grapGUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(grapGUIClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        grapGUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(grapGUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        grapGUIClass->setStatusBar(statusBar);

        retranslateUi(grapGUIClass);

        QMetaObject::connectSlotsByName(grapGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *grapGUIClass)
    {
        grapGUIClass->setWindowTitle(QApplication::translate("grapGUIClass", "grapGUI", 0));
        label->setText(QApplication::translate("grapGUIClass", "\350\265\267\345\247\213\347\202\271\357\274\232", 0));
        label_2->setText(QApplication::translate("grapGUIClass", "\347\273\210\346\255\242\347\202\271:", 0));
        Button_Add->setText(QApplication::translate("grapGUIClass", "\346\267\273\345\212\240", 0));
        label_3->setText(QApplication::translate("grapGUIClass", "\346\272\220\347\202\271\357\274\232", 0));
        label_4->setText(QApplication::translate("grapGUIClass", "\347\233\256\346\240\207\347\202\271\357\274\232", 0));
        Button_finish->setText(QApplication::translate("grapGUIClass", "\345\256\214\346\210\220", 0));
        label_5->setText(QApplication::translate("grapGUIClass", "\350\276\223\345\207\272\344\277\241\346\201\257\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class grapGUIClass: public Ui_grapGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPGUI_H
