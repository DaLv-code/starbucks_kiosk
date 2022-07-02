#include "orderwindow.h"
#include "orderwindow2.h"
#include "ui_orderwindow.h"
#include "ui_orderwindow2.h"
#include "listwindow.h"
#include <QPixmap>
#include <QLabel>
#include <QMessageBox>
#include <QDebug>
#include <cstring>
#include <unistd.h>
#include <sys/types.h>
using namespace std;

orderwindow2::orderwindow2(int sock, string user, string menuImfor, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::orderwindow2)
{
    this->sock=sock;
    this->i=0;
    this->user=user;
    this->menuImfor=menuImfor;
    ui->setupUi(this);
    QPixmap pix("/home/iot/바탕화면/pro/client/img/logo1.png");
    ui->label->setPixmap(pix);
    string setImg = "/home/iot/바탕화면/pro/client/img/tea"+to_string(i+1)+".jpg";
    ui->imgLabel->setPixmap(QPixmap(setImg.c_str()));    
    menu={"아이스 히비스커스 블렌드 티","아이스 제주 유기 녹차","캐모마일 블렌드 티","제주 키위 오션 그린티","차이 티 라떼"};
    content={"히비스커스, 사과, 파파야, 망고, 레몬그라스 등이\n블렌딩된 상큼한 허브 티",
             "우수한 품질의 제주도 유기농 녹차로 만든 맑은 수색과\n신선한 향, 맛이 뛰어난 녹차",
             "캐모마일과 레몬 그라스, 레몬밤, 히비스커스 등 블렌딩되어\n은은하고 차분한 향이 기분을 좋게하는 허브 티",
             "제주산 키위와 황금향으로 제주의 맑은 바다를 음료 한 잔으로\n마실 수 있는 제주 특화 티 음료",
             "스파이시한 향과 독특한 계피향, 달콤한 차이로 만든 부드러운 티 라떼"};
    ui->menuLabel->setText(menu[i].c_str());
    ui->contentLabel->setText(content[i].c_str());
}

orderwindow2::~orderwindow2()
{
    delete ui;
}

void orderwindow2::on_rightButton_clicked()
{
    if(i<4) ++i;
    string setImg = "/home/iot/바탕화면/pro/client/img/tea"+to_string(i+1)+".jpg";
    ui->imgLabel->setPixmap(QPixmap(setImg.c_str()));
    ui->menuLabel->setText(menu[i].c_str());
    ui->contentLabel->setText(content[i].c_str());
}

void orderwindow2::on_leftButton_clicked()
{
    if(i>0) --i;
    string setImg = "/home/iot/바탕화면/pro/client/img/tea"+to_string(i+1)+".jpg";
    ui->imgLabel->setPixmap(QPixmap(setImg.c_str()));
    ui->menuLabel->setText(menu[i].c_str());
    ui->contentLabel->setText(content[i].c_str());
}

void orderwindow2::on_coffeeButton_clicked()
{
    this->hide();
    orderwindow coffee(sock, user, menuImfor);
    coffee.setModal(true);
    coffee.exec();
    this->show();
}

void orderwindow2::on_teaButton_clicked()
{
    this->hide();
    orderwindow2 tea(sock, user, menuImfor);
    tea.setModal(true);
    tea.exec();
    this->show();
}

void orderwindow2::on_listButton_clicked()
{
    menuImfor += menu[i]+"|";
    string menuMsg = "["+menu[i]+"]\n주문리스트에 추가되었습니다";
    QMessageBox::information(this, "OK", menuMsg.c_str());
}

void orderwindow2::on_orderButton_clicked()
{
    this->hide();
    listwindow list(sock,user,menuImfor);
    list.setModal(true);
    list.exec();
    this->show();
}
