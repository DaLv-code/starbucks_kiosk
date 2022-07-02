#include "joinwindow.h"
#include "ui_joinwindow.h"
#include <QPixmap>
#include <cstring>
#include <unistd.h>
#include <sys/types.h>
#include <cstring>
#include <QMessageBox>
using namespace std;

joinwindow::joinwindow(int sock, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::joinwindow)
{
    ui->setupUi(this);
    this->sock=sock;
    QPixmap pix("/home/iot/바탕화면/pro/client/img/logo1.png");
    ui->label->setPixmap(pix);
}

joinwindow::~joinwindow()
{
    delete ui;
}

void joinwindow::on_checkButton_clicked()
{
    QString id = ui->idEdit->text();
    if(id == "")
        QMessageBox::information(this, "error", "아이디를 입력해주세요");
    else
    {
        string checkImfor = "check/"+id.toStdString();
        write(sock, checkImfor.c_str(), checkImfor.length());
        char msg[10];
        read(sock, msg, sizeof(msg));
        if(strcmp(msg, "OK")==0)
        {
            QMessageBox::information(this, "OK", "사용가능한 아이디입니다");
            ui->joinButton->setEnabled(true);
            ui->idEdit->setEnabled(false);
        }
        else
            QMessageBox::information(this, "Error", "중복된 아이디입니다");
    }
}

void joinwindow::on_joinButton_clicked()
{
    QString id = ui->idEdit->text();
    QString pw = ui->pwEdit->text();
    QString repw = ui->repwEdit->text();
    if(pw.toStdString()!=repw.toStdString())
    {
        QMessageBox::information(this, "Error", "비밀번호가 일치하지 않습니다");
    }
    else
    {
        string joinImfor = "join/"+id.toStdString()+"/"+pw.toStdString();
        write(sock, joinImfor.c_str(), joinImfor.length());
        QMessageBox::information(this, "OK", "회원가입이 완료되었습니다!");
        this->close();
    }
}
