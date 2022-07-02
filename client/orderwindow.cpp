#include "orderwindow.h"
#include "orderwindow2.h"
#include "listwindow.h"
#include "ui_orderwindow.h"
#include "ui_orderwindow2.h"
#include <QPixmap>
#include <QLabel>
#include <QMessageBox>
#include <QDebug>
#include <cstring>
#include <unistd.h>
#include <sys/types.h>
using namespace std;

orderwindow::orderwindow(int sock, string user, string menuImfor, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::orderwindow)
{
    this->sock=sock;
    this->i=0;
    this->user=user;
    this->menuImfor=menuImfor;
    ui->setupUi(this);
    QPixmap pix("/home/iot/바탕화면/pro/client/img/logo1.png");
    ui->label->setPixmap(pix);
    string setImg = "/home/iot/바탕화면/pro/client/img/coffee"+to_string(i+1)+".jpg";
    ui->imgLabel->setPixmap(QPixmap(setImg.c_str()));    
    menu={"아이스 카페 아메리카노","에스프레소 콘 파나","아이스 카라멜 마키아또","아이스 스타벅스 돌체 라떼","카페 모카"};
    content={"진한 에스프레소에 시원한 정수물과\n얼음을 더하여 스타벅스의 깔끔하고 강렬한\n에스프레소를 가장 부드럽고 시원하게 즐길 수 있는 커피",
             "신선한 에스프레소 샷에 풍부한 휘핑크림을 얹은\n커피 음료로서, 뜨거운 커피의 맛과 차갑고 달콤한\n생크림의 맛을 같이 즐길 수 있는 커피 음료",
             "향긋한 바닐라 시럽과 시원한 우유와 얼음을 넣고\n점을 찍듯이 에스프레소를 부은 후\n벌집 모양으로 카라멜 드리즐을 올린 달콤한 커피 음료",
             "스타벅스의 다른 커피 음료보다 더욱 깊은 커피의 맛과\n향에 깔끔한 무지방 우유와 부드러운 돌체 시럽이 들어간\n음료로 달콤하고 진한 커피 라떼",
             "진한 초콜릿 모카 시럽과 풍부한 에스프레소를\n스팀 밀크와 섞어 휘핑크림으로 마무리한 음료로\n진한 에스프레소와 초콜릿 맛이 어우러진 커피"};
    ui->menuLabel->setText(menu[i].c_str());
    ui->contentLabel->setText(content[i].c_str());
}

orderwindow::~orderwindow()
{
    delete ui;
}

void orderwindow::on_rightButton_clicked()
{
    if(i<4) ++i;
    string setImg = "/home/iot/바탕화면/pro/client/img/coffee"+to_string(i+1)+".jpg";
    ui->imgLabel->setPixmap(QPixmap(setImg.c_str()));
    ui->menuLabel->setText(menu[i].c_str());
    ui->contentLabel->setText(content[i].c_str());
}

void orderwindow::on_leftButton_clicked()
{
    if(i>0) --i;
    string setImg = "/home/iot/바탕화면/pro/client/img/coffee"+to_string(i+1)+".jpg";
    ui->imgLabel->setPixmap(QPixmap(setImg.c_str()));
    ui->menuLabel->setText(menu[i].c_str());
    ui->contentLabel->setText(content[i].c_str());
}

void orderwindow::on_coffeeButton_clicked()
{
    this->hide();
    orderwindow coffee(sock,user,menuImfor);
    coffee.setModal(true);
    coffee.exec();
    this->show();
}

void orderwindow::on_teaButton_clicked()
{
    this->hide();
    orderwindow2 tea(sock,user,menuImfor);
    tea.setModal(true);
    tea.exec();
    this->show();
}

void orderwindow::on_listButton_clicked()
{
    menuImfor += menu[i]+"|";
    string menuMsg = "["+menu[i]+"]\n주문리스트에 추가되었습니다";
    QMessageBox::information(this, "OK", menuMsg.c_str());
}

void orderwindow::on_orderButton_clicked()
{
    this->hide();
    listwindow list(sock,user,menuImfor);
    list.setModal(true);
    list.exec();
    this->show();
}
