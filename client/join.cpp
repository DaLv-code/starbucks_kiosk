#include "join.h"
#include "ui_join.h"

join::join(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::join)
{
    ui->setupUi(this);
}

join::~join()
{
    delete ui;
}
