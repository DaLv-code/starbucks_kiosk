#ifndef LISTWINDOW_H
#define LISTWINDOW_H

#include <QDialog>
#include <cstring>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

namespace Ui {
class listwindow;
}

class listwindow : public QDialog
{
    Q_OBJECT

public:
    explicit listwindow(int sock, string user, string menuImfor, QWidget *parent = nullptr);
    ~listwindow();
    vector<string> split(string str, char Delimiter);

private slots:
    void on_coffeeButton_clicked();
    void on_teaButton_clicked();
    void on_clearButton_clicked();

    void on_clearButton2_clicked();

private:
    Ui::listwindow *ui;
    int sock;
    string user;
    string menuImfor;
};

#endif // LISTWINDOW_H
