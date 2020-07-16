/********************************************************************************
** Form generated from reading UI file 'passengers_view.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSENGERS_VIEW_H
#define UI_PASSENGERS_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_passengers_view
{
public:
    QFrame *line;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QComboBox *comboBox;
    QTableView *tableView;

    void setupUi(QDialog *passengers_view)
    {
        if (passengers_view->objectName().isEmpty())
            passengers_view->setObjectName(QString::fromUtf8("passengers_view"));
        passengers_view->resize(754, 729);
        line = new QFrame(passengers_view);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 160, 751, 20));
        line->setStyleSheet(QString::fromUtf8(""));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(passengers_view);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 30, 520, 111));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("color: Green;\n"
"font-size:30px;\n"
"font-weight:bold;\n"
"\n"
""));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        widget = new QWidget(passengers_view);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 180, 711, 501));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);


        verticalLayout_2->addLayout(formLayout);

        tableView = new QTableView(widget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout_2->addWidget(tableView);


        retranslateUi(passengers_view);

        QMetaObject::connectSlotsByName(passengers_view);
    } // setupUi

    void retranslateUi(QDialog *passengers_view)
    {
        passengers_view->setWindowTitle(QCoreApplication::translate("passengers_view", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("passengers_view", "Enhanced Bus Reservation System", nullptr));
        label_2->setText(QCoreApplication::translate("passengers_view", "Select Bus No.", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("passengers_view", "0001", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("passengers_view", "0002", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("passengers_view", "0003", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("passengers_view", "0004", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("passengers_view", "0005", nullptr));

    } // retranslateUi

};

namespace Ui {
    class passengers_view: public Ui_passengers_view {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSENGERS_VIEW_H
