/********************************************************************************
** Form generated from reading UI file 'mockup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOCKUP_H
#define UI_MOCKUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MockUp
{
public:
    QWidget *centralwidget;
    QFrame *line;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MockUp)
    {
        if (MockUp->objectName().isEmpty())
            MockUp->setObjectName(QString::fromUtf8("MockUp"));
        MockUp->resize(750, 719);
        centralwidget = new QWidget(MockUp);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 160, 751, 20));
        line->setStyleSheet(QString::fromUtf8(""));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(120, 30, 520, 111));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("color: Green;\n"
"font-size:30px;\n"
"font-weight:bold;\n"
"\n"
""));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(180, 230, 391, 331));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(widget1);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout_2->addWidget(pushButton_5);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);

        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        MockUp->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MockUp);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 750, 26));
        MockUp->setMenuBar(menubar);
        statusbar = new QStatusBar(MockUp);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MockUp->setStatusBar(statusbar);

        retranslateUi(MockUp);

        QMetaObject::connectSlotsByName(MockUp);
    } // setupUi

    void retranslateUi(QMainWindow *MockUp)
    {
        MockUp->setWindowTitle(QCoreApplication::translate("MockUp", "MockUp", nullptr));
        label->setText(QCoreApplication::translate("MockUp", "Enhanced Bus Reservation System", nullptr));
        label_2->setText(QCoreApplication::translate("MockUp", "Please select the action below", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MockUp", "Show Bus Information", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MockUp", "Reserve Seat(s)", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MockUp", "View Passengers", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MockUp", "Add Bus Information", nullptr));
        pushButton->setText(QCoreApplication::translate("MockUp", "Edit Bus or Passenger Info.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MockUp: public Ui_MockUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOCKUP_H
