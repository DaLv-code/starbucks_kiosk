#ifndef JOINWINDOW_H
#define JOINWINDOW_H

#include <QDialog>

namespace Ui {
class joinwindow;
}

class joinwindow : public QDialog
{
    Q_OBJECT

public:
    joinwindow(int sock, QWidget *parent = nullptr);
    ~joinwindow();

private slots:
    void on_checkButton_clicked();
    void on_joinButton_clicked();

private:
    Ui::joinwindow *ui;
    int sock;
};

#endif // JOINWINDOW_H
