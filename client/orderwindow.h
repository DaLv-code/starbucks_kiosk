#ifndef ORDERWINDOW_H
#define ORDERWINDOW_H

#include <QDialog>
#include <cstring>
#include <vector>
using namespace std;

namespace Ui {class orderwindow;}

class orderwindow : public QDialog
{
    Q_OBJECT

public:
    explicit orderwindow(int sock, string user, string menuImfor, QWidget *parent = nullptr);
    ~orderwindow();

private slots:
    void on_leftButton_clicked();
    void on_rightButton_clicked();
    void on_coffeeButton_clicked();
    void on_teaButton_clicked();
    void on_listButton_clicked();
    void on_orderButton_clicked();

private:
    Ui::orderwindow *ui;
    int sock;
    int i;
    vector<string> menu;
    vector<string> content;
    string user;
    string menuImfor;
};

#endif // ORDERWINDOW_H
