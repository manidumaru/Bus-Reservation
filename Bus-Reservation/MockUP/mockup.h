#ifndef MOCKUP_H
#define MOCKUP_H
#include "reserve.h"
#include "bus_info.h"
#include "passengers_view.h"
#include "add_bus.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MockUp; }
QT_END_NAMESPACE

class MockUp : public QMainWindow
{
    Q_OBJECT

public:
    MockUp(QWidget *parent = nullptr);
    ~MockUp();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MockUp *ui;
    Reserve *reserve;
    bus_info *businfo;
    passengers_view *passengers;
    add_bus *addbus;
};
#endif // MOCKUP_H
