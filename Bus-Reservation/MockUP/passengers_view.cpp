#include "passengers_view.h"
#include "ui_passengers_view.h"

passengers_view::passengers_view(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::passengers_view)
{
    ui->setupUi(this);
}

passengers_view::~passengers_view()
{
    delete ui;
}
