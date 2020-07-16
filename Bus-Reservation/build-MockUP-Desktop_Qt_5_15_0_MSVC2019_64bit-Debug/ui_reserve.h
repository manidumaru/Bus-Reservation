/********************************************************************************
** Form generated from reading UI file 'reserve.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVE_H
#define UI_RESERVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reserve
{
public:
    QLabel *label;
    QFrame *line;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_4;
    QComboBox *comboBox;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QLabel *label_6;

    void setupUi(QDialog *Reserve)
    {
        if (Reserve->objectName().isEmpty())
            Reserve->setObjectName(QString::fromUtf8("Reserve"));
        Reserve->resize(751, 726);
        label = new QLabel(Reserve);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(121, 61, 518, 51));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("color: Green;\n"
"font-size:30px;\n"
"font-weight:bold;\n"
"\n"
""));
        label->setAlignment(Qt::AlignCenter);
        line = new QFrame(Reserve);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 150, 751, 20));
        line->setStyleSheet(QString::fromUtf8(""));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        formLayoutWidget = new QWidget(Reserve);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(140, 250, 471, 121));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        comboBox = new QComboBox(formLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_2);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        lineEdit_3 = new QLineEdit(formLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_3);

        pushButton = new QPushButton(Reserve);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 400, 141, 61));
        label_6 = new QLabel(Reserve);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 600, 731, 31));

        retranslateUi(Reserve);

        QMetaObject::connectSlotsByName(Reserve);
    } // setupUi

    void retranslateUi(QDialog *Reserve)
    {
        Reserve->setWindowTitle(QCoreApplication::translate("Reserve", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Reserve", "Enhanced Bus Reservation System", nullptr));
        label_4->setText(QCoreApplication::translate("Reserve", "Bus No.", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Reserve", "0001", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Reserve", "0002", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Reserve", "0003", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Reserve", "0004", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Reserve", "0005", nullptr));

        label_2->setText(QCoreApplication::translate("Reserve", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("Reserve", "Contact", nullptr));
        label_5->setText(QCoreApplication::translate("Reserve", "No of Seats", nullptr));
        pushButton->setText(QCoreApplication::translate("Reserve", "Book Now", nullptr));
        label_6->setText(QCoreApplication::translate("Reserve", "Status......", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Reserve: public Ui_Reserve {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVE_H
