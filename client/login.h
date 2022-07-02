#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>

class login : public QMainWindow
{
    Q_OBJECT
    public:
        login(int sock, QWidget *parent = nullptr);

    private:
        int sock;

    signals:

};

#endif // LOGIN_H
