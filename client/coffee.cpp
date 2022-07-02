#include "coffee.h"
#include "ui_coffee.h"

coffee::coffee(int sock, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::coffee)
{
    ui->setupUi(this);
}

coffee::~coffee()
{
    delete ui;
}
