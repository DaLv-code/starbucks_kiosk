#include "loginwindow.h"
#include "joinwindow.h"
#include "orderwindow.h"
#include "ui_loginwindow.h"
#include <QPixmap>
#include <QMessageBox>
#include <cstring>
#include <unistd.h>
#include <sys/types.h>
using namespace std;

MainWindow::MainWindow(int sock, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->sock=sock;
    QPixmap pix("/home/iot/바탕화면/pro/client/img/logo1.png");
    ui->label->setPixmap(pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_loginButton_clicked()
{
    QString id = ui->idEdit->text();
    QString pw = ui->pwEdit->text();
    string loginImfor = "login/"+id.toStdString()+"/"+pw.toStdString();
    write(sock, loginImfor.c_str(), loginImfor.length());
    char msg[10];
    read(sock, msg, sizeof(msg));
    if(strcmp(msg, "OK")==0)
    {
        QMessageBox::information(this, "OK", "로그인 완료");
        this->close();        
        string user = id.toStdString();
        string menuImfor;
        orderwindow order(sock, user, menuImfor);
        order.setModal(true);
        order.exec();
        this->show();
    }
    else if(strcmp(msg, "NO")==0)
        QMessageBox::information(this, "Error", "로그인에 실패했습니다.");
}

void MainWindow::on_signButton_clicked()
{
    this->hide();
    joinwindow join(sock);
    join.setModal(true);
    join.exec();
    this->show();
}
