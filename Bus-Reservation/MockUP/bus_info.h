#ifndef BUS_INFO_H
#define BUS_INFO_H

#include <QDialog>

namespace Ui {
class bus_info;
}

class bus_info : public QDialog
{
    Q_OBJECT

public:
    explicit bus_info(QWidget *parent = nullptr);
    ~bus_info();

private:
    Ui::bus_info *ui;
};

#endif // BUS_INFO_H
