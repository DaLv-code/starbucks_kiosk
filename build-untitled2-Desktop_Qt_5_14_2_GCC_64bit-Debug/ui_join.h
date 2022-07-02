/********************************************************************************
** Form generated from reading UI file 'join.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOIN_H
#define UI_JOIN_H

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
    QPushButton *joinButton;
    QPushButton *orderButton;
    QPushButton *coffeeButton;
    QLineEdit *repwEdit;
    QPushButton *checkButton;
    QLabel *label_2;
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
        idEdit->setGeometry(QRect(220, 120, 361, 41));
        idEdit->setAlignment(Qt::AlignCenter);
        pwEdit = new QLineEdit(centralwidget);
        pwEdit->setObjectName(QString::fromUtf8("pwEdit"));
        pwEdit->setGeometry(QRect(220, 215, 361, 41));
        pwEdit->setEchoMode(QLineEdit::Password);
        pwEdit->setAlignment(Qt::AlignCenter);
        joinButton = new QPushButton(centralwidget);
        joinButton->setObjectName(QString::fromUtf8("joinButton"));
        joinButton->setGeometry(QRect(220, 330, 361, 41));
        joinButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        orderButton->setEnabled(true);
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
        coffeeButton->setEnabled(true);
        coffeeButton->setGeometry(QRect(560, 15, 101, 41));
        coffeeButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"font-weight:400;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"}"));
        repwEdit = new QLineEdit(centralwidget);
        repwEdit->setObjectName(QString::fromUtf8("repwEdit"));
        repwEdit->setGeometry(QRect(220, 270, 361, 41));
        repwEdit->setEchoMode(QLineEdit::Password);
        repwEdit->setAlignment(Qt::AlignCenter);
        checkButton = new QPushButton(centralwidget);
        checkButton->setObjectName(QString::fromUtf8("checkButton"));
        checkButton->setGeometry(QRect(220, 160, 361, 41));
        checkButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"color:#fff;\n"
"font-weight:600;\n"
"background-color:#2c2a29;\n"
"cursor:pointer;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:#4c4a49;\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(370, 90, 61, 17));
        label_2->setStyleSheet(QString::fromUtf8("color:#006636;\n"
"font-weight:700;"));
        MainWindow->setCentralWidget(centralwidget);
        textBrowser_3->raise();
        textBrowser_2->raise();
        textBrowser_4->raise();
        idEdit->raise();
        pwEdit->raise();
        joinButton->raise();
        orderButton->raise();
        coffeeButton->raise();
        label->raise();
        repwEdit->raise();
        checkButton->raise();
        label_2->raise();
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
        joinButton->setText(QCoreApplication::translate("MainWindow", "\355\232\214\354\233\220\352\260\200\354\236\205", nullptr));
        orderButton->setText(QCoreApplication::translate("MainWindow", "Order List", nullptr));
        coffeeButton->setText(QCoreApplication::translate("MainWindow", "COFFEE", nullptr));
        repwEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "PW \354\236\254\354\236\205\353\240\245", nullptr));
        checkButton->setText(QCoreApplication::translate("MainWindow", "\354\244\221\353\263\265\355\231\225\354\235\270", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\355\232\214\354\233\220\352\260\200\354\236\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOIN_H
