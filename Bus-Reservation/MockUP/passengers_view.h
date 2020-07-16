#ifndef PASSENGERS_VIEW_H
#define PASSENGERS_VIEW_H

#include <QDialog>

namespace Ui {
class passengers_view;
}

class passengers_view : public QDialog
{
    Q_OBJECT

public:
    explicit passengers_view(QWidget *parent = nullptr);
    ~passengers_view();

private:
    Ui::passengers_view *ui;
};

#endif // PASSENGERS_VIEW_H
