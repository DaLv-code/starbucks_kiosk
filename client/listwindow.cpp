#include "listwindow.h"
#include "ui_listwindow.h"
#include "orderwindow.h"
#include "orderwindow2.h"
#include "ui_orderwindow.h"
#include "ui_orderwindow2.h"
#include <cstring>
#include <unistd.h>
#include <sys/types.h>
#include <QDebug>
#include <QMessageBox>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

listwindow::listwindow(int sock, string user, string menuImfor, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listwindow)
{
    ui->setupUi(this);
    this->sock=sock;
    this->user=user;
    this->menuImfor=menuImfor;
    QPixmap pix("/home/iot/바탕화면/pro/client/img/logo1.png");
    ui->label->setPixmap(pix);

    qDebug()<<QString::fromStdString(menuImfor);
    vector<string> addImfor = split(menuImfor, '|');

    for(int j = 0; j<addImfor.size(); j++)
    {
       ui->clearBrowser->append(QString::fromStdString(addImfor[j]));
    }
}

listwindow::~listwindow()
{
    delete ui;
}

void listwindow::on_coffeeButton_clicked()
{
    this->hide();
    orderwindow coffee(sock,user,menuImfor);
    coffee.setModal(true);
    coffee.exec();
    this->show();
}

void listwindow::on_teaButton_clicked()
{
    this->hide();
    orderwindow2 tea(sock,user,menuImfor);
    tea.setModal(true);
    tea.exec();
    this->show();
}

void listwindow::on_clearButton_clicked()
{
    string listImfor = "order/"+user+"/"+menuImfor;
    write(sock, listImfor.c_str() ,listImfor.length());
    ui->clearBrowser->clear();
    menuImfor = "";
    QMessageBox::information(this, "OK", "주문이 완료되었습니다.");
}

void listwindow::on_clearButton2_clicked()
{
    menuImfor = "";
    ui->clearBrowser->clear();
}

vector<string> listwindow::split(string str, char Delimiter)
{
    istringstream iss(str);             // istringstream에 str을 담는다.
    string buffer;                      // 구분자를 기준으로 절삭된 문자열이 담겨지는 버퍼
    vector<string> result;

    while (getline(iss, buffer, Delimiter)) {   // istringstream은 istream을 상속받으므로 getline을 사용할 수 있다.
        result.push_back(buffer);               // 절삭된 문자열을 vector에 저장
    }

    return result;
}


