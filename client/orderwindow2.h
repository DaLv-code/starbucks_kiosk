#ifndef ORDERWINDOW2_H
#define ORDERWINDOW2_H

#include <QDialog>
#include <cstring>
#include <vector>
using namespace std;

namespace Ui {class orderwindow2;}

class orderwindow2 : public QDialog
{
    Q_OBJECT

public:
    explicit orderwindow2(int sock, string user, string menuImfor, QWidget *parent = nullptr);
    ~orderwindow2();

private slots:
    void on_leftButton_clicked();
    void on_rightButton_clicked();
    void on_coffeeButton_clicked();
    void on_teaButton_clicked();
    void on_listButton_clicked();
    void on_orderButton_clicked();

private:
    Ui::orderwindow2 *ui;
    string user;
    int sock;
    int i;
    vector<string> menu;
    vector<string> content;
    string menuImfor;
};

#endif // ORDERWINDOW_H
