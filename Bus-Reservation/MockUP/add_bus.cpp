#include "add_bus.h"
#include "ui_add_bus.h"

add_bus::add_bus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_bus)
{
    ui->setupUi(this);
}

add_bus::~add_bus()
{
    delete ui;
}
