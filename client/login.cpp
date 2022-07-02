#include "login.h"

login::login(int sock, QWidget *parent) : QMainWindow(parent)
{
    this->sock = sock;
    ui->setupUi(this);
}
