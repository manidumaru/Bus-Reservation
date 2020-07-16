#include "mockup.h"
#include "ui_mockup.h"

MockUp::MockUp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MockUp)
{
    ui->setupUi(this);
}

MockUp::~MockUp()
{
    delete ui;
}



void MockUp::on_pushButton_2_clicked()
{
    reserve = new Reserve(this);
    reserve-> show();
}


void MockUp::on_pushButton_5_clicked()
{
    businfo = new bus_info(this);
    businfo-> show();
}

void MockUp::on_pushButton_3_clicked()
{
    passengers = new passengers_view(this);
    passengers-> show();
}

void MockUp::on_pushButton_4_clicked()
{
    addbus = new add_bus(this);
    addbus-> show();
}
