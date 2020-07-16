#ifndef ADD_BUS_H
#define ADD_BUS_H

#include <QDialog>

namespace Ui {
class add_bus;
}

class add_bus : public QDialog
{
    Q_OBJECT

public:
    explicit add_bus(QWidget *parent = nullptr);
    ~add_bus();

private:
    Ui::add_bus *ui;
};

#endif // ADD_BUS_H
