#include <QApplication>
#include <QMessageBox>
#include <sys/socket.h>
#include <arpa/inet.h>
#include "loginwindow.h"
#include "login.h"

int main(int argc, char *argv[])
{
    int sock = 0;
    struct sockaddr_in serv_addr;
    QApplication a(argc, argv);

    sock = socket(AF_INET, SOCK_STREAM, 0);
    memset(&serv_addr, 0, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    serv_addr.sin_port = htons(atoi("9000"));

    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) == -1)
    {
        QMessageBox msgBox;
        msgBox.setText("Connect Error");
        msgBox.exec();
        exit(1);
    }

    MainWindow w(sock);
    w.show();
    return a.exec();
}
