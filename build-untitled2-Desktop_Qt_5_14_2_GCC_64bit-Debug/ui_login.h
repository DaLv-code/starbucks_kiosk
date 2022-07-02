/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_4;
    QLineEdit *idEdit;
    QLineEdit *pwEdit;
    QPushButton *loginButton;
    QPushButton *orderButton;
    QPushButton *coffeeButton;
    QPushButton *signButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 506);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 171, 51));
        label->setPixmap(QPixmap(QString::fromUtf8("img/logo1.png")));
        label->setScaledContents(true);
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(0, 390, 801, 71));
        textBrowser_2->setStyleSheet(QString::fromUtf8("background-color:#2c2a29;"));
        textBrowser_3 = new QTextBrowser(centralwidget);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(0, 0, 801, 71));
        textBrowser_3->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:1px solid #ddd;"));
        textBrowser_4 = new QTextBrowser(centralwidget);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(0, 70, 801, 321));
        textBrowser_4->setStyleSheet(QString::fromUtf8("background-color:#f6f5ef;"));
        idEdit = new QLineEdit(centralwidget);
        idEdit->setObjectName(QString::fromUtf8("idEdit"));
        idEdit->setGeometry(QRect(220, 140, 361, 41));
        idEdit->setAlignment(Qt::AlignCenter);
        pwEdit = new QLineEdit(centralwidget);
        pwEdit->setObjectName(QString::fromUtf8("pwEdit"));
        pwEdit->setGeometry(QRect(220, 200, 361, 41));
        pwEdit->setEchoMode(QLineEdit::Password);
        pwEdit->setAlignment(Qt::AlignCenter);
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(220, 255, 361, 41));
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"color:#fff;\n"
"font-weight:600;\n"
"background-color:#006636;\n"
"cursor:pointer;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:#108656;\n"
"}"));
        orderButton = new QPushButton(centralwidget);
        orderButton->setObjectName(QString::fromUtf8("orderButton"));
        orderButton->setGeometry(QRect(670, 15, 101, 41));
        orderButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"font-weight:400;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"}"));
        coffeeButton = new QPushButton(centralwidget);
        coffeeButton->setObjectName(QString::fromUtf8("coffeeButton"));
        coffeeButton->setGeometry(QRect(560, 15, 101, 41));
        coffeeButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"font-weight:400;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"}"));
        signButton = new QPushButton(centralwidget);
        signButton->setObjectName(QString::fromUtf8("signButton"));
        signButton->setGeometry(QRect(220, 305, 361, 20));
        signButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"font-weight:400;\n"
"}\n"
"QPushButton:hover{\n"
"color:#006636;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        textBrowser_3->raise();
        label->raise();
        textBrowser_2->raise();
        textBrowser_4->raise();
        idEdit->raise();
        pwEdit->raise();
        loginButton->raise();
        orderButton->raise();
        coffeeButton->raise();
        signButton->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
#if QT_CONFIG(tooltip)
        idEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        idEdit->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        idEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        pwEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "PW", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "\353\241\234\352\267\270\354\235\270", nullptr));
        orderButton->setText(QCoreApplication::translate("MainWindow", "Order List", nullptr));
        coffeeButton->setText(QCoreApplication::translate("MainWindow", "COFFEE", nullptr));
        signButton->setText(QCoreApplication::translate("MainWindow", "Starbuck\352\260\200 \354\262\230\354\235\214\354\235\264\354\213\240\352\260\200\354\232\224?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
