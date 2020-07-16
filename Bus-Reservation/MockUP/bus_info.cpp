#include "bus_info.h"
#include "ui_bus_info.h"

bus_info::bus_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bus_info)
{
    ui->setupUi(this);
}

bus_info::~bus_info()
{
    delete ui;
}
