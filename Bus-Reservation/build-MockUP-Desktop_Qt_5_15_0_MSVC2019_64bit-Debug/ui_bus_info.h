/********************************************************************************
** Form generated from reading UI file 'bus_info.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUS_INFO_H
#define UI_BUS_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_bus_info
{
public:
    QLabel *label;
    QFrame *line;
    QTableView *tableView;
    QLabel *label_3;
    QLabel *label_2;

    void setupUi(QDialog *bus_info)
    {
        if (bus_info->objectName().isEmpty())
            bus_info->setObjectName(QString::fromUtf8("bus_info"));
        bus_info->resize(751, 729);
        label = new QLabel(bus_info);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(121, 51, 518, 51));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("color: Green;\n"
"font-size:30px;\n"
"font-weight:bold;\n"
"\n"
""));
        label->setAlignment(Qt::AlignCenter);
        line = new QFrame(bus_info);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 140, 751, 20));
        line->setStyleSheet(QString::fromUtf8(""));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        tableView = new QTableView(bus_info);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(50, 250, 641, 361));
        label_3 = new QLabel(bus_info);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(320, 400, 61, 41));
        label_2 = new QLabel(bus_info);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 180, 641, 31));
        QFont font;
        font.setPointSize(16);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(bus_info);

        QMetaObject::connectSlotsByName(bus_info);
    } // setupUi

    void retranslateUi(QDialog *bus_info)
    {
        bus_info->setWindowTitle(QCoreApplication::translate("bus_info", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("bus_info", "Enhanced Bus Reservation System", nullptr));
        label_3->setText(QCoreApplication::translate("bus_info", "Table here", nullptr));
        label_2->setText(QCoreApplication::translate("bus_info", "Bus Information", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bus_info: public Ui_bus_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUS_INFO_H
