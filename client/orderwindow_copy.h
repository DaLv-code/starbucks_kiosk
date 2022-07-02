#ifndef ORDERWINDOW_H
#define ORDERWINDOW_H
#include <QDialog>
#include <cstring>
#include <vector>
using namespace std;

namespace Ui {
class orderwindow;}

class orderwindow : public QDialog
{
    Q_OBJECT

public:
    explicit orderwindow(int sock, QWidget *parent = nullptr);
    ~orderwindow();

private slots:
    void on_leftButton_clicked();
    void on_rightButton_clicked();

private:
    Ui::orderwindow *ui;
    int sock;
    int i;
    vector<string> menu;
    vector<string> content;
};

#endif // ORDERWINDOW_H
