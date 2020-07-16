/********************************************************************************
** Form generated from reading UI file 'add_bus.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_BUS_H
#define UI_ADD_BUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_bus
{
public:
    QLabel *label;
    QFrame *line;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLabel *label_7;
    QPushButton *pushButton;

    void setupUi(QDialog *add_bus)
    {
        if (add_bus->objectName().isEmpty())
            add_bus->setObjectName(QString::fromUtf8("add_bus"));
        add_bus->resize(751, 725);
        label = new QLabel(add_bus);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(121, 51, 518, 51));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("color: Green;\n"
"font-size:30px;\n"
"font-weight:bold;\n"
"\n"
""));
        label->setAlignment(Qt::AlignCenter);
        line = new QFrame(add_bus);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 140, 751, 20));
        line->setStyleSheet(QString::fromUtf8(""));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        formLayoutWidget = new QWidget(add_bus);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(110, 220, 531, 181));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        lineEdit_3 = new QLineEdit(formLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        lineEdit_4 = new QLineEdit(formLayoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        lineEdit_5 = new QLineEdit(formLayoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_5);

        lineEdit_6 = new QLineEdit(formLayoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_6);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        pushButton = new QPushButton(add_bus);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 440, 191, 61));

        retranslateUi(add_bus);

        QMetaObject::connectSlotsByName(add_bus);
    } // setupUi

    void retranslateUi(QDialog *add_bus)
    {
        add_bus->setWindowTitle(QCoreApplication::translate("add_bus", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("add_bus", "Enhanced Bus Reservation System", nullptr));
        label_2->setText(QCoreApplication::translate("add_bus", "Bus Number", nullptr));
        label_3->setText(QCoreApplication::translate("add_bus", "Bus Driver", nullptr));
        label_4->setText(QCoreApplication::translate("add_bus", "Origin", nullptr));
        label_5->setText(QCoreApplication::translate("add_bus", "Destination", nullptr));
        label_6->setText(QCoreApplication::translate("add_bus", "Duration", nullptr));
        label_7->setText(QCoreApplication::translate("add_bus", "Seats Available", nullptr));
        pushButton->setText(QCoreApplication::translate("add_bus", "Add Bus", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_bus: public Ui_add_bus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_BUS_H
