/********************************************************************************
** Form generated from reading UI file 'orderwindow2.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERWINDOW2_H
#define UI_ORDERWINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_orderwindow2
{
public:
    QTextBrowser *textBrowser_4;
    QTextBrowser *textBrowser_3;
    QPushButton *coffeeButton;
    QPushButton *teaButton;
    QLabel *label;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser;
    QLabel *imgLabel;
    QPushButton *leftButton;
    QPushButton *rightButton;
    QLabel *contentLabel;
    QLabel *menuLabel;
    QPushButton *listButton;
    QPushButton *orderButton;
    QLabel *label_3;

    void setupUi(QDialog *orderwindow2)
    {
        if (orderwindow2->objectName().isEmpty())
            orderwindow2->setObjectName(QString::fromUtf8("orderwindow2"));
        orderwindow2->resize(798, 461);
        textBrowser_4 = new QTextBrowser(orderwindow2);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(-10, 70, 811, 321));
        textBrowser_4->setStyleSheet(QString::fromUtf8("background-color:#f6f5ef;"));
        textBrowser_3 = new QTextBrowser(orderwindow2);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(0, 0, 801, 71));
        textBrowser_3->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:1px solid #ddd;"));
        coffeeButton = new QPushButton(orderwindow2);
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
        teaButton = new QPushButton(orderwindow2);
        teaButton->setObjectName(QString::fromUtf8("teaButton"));
        teaButton->setEnabled(true);
        teaButton->setGeometry(QRect(670, 15, 101, 41));
        teaButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"font-weight:400;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"}"));
        label = new QLabel(orderwindow2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 171, 51));
        label->setPixmap(QPixmap(QString::fromUtf8("img/logo1.png")));
        label->setScaledContents(true);
        textBrowser_2 = new QTextBrowser(orderwindow2);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(0, 390, 801, 71));
        textBrowser_2->setStyleSheet(QString::fromUtf8("background-color:#2c2a29;"));
        textBrowser = new QTextBrowser(orderwindow2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(-20, 110, 841, 200));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color:#1b3c35;\n"
"border:none;"));
        imgLabel = new QLabel(orderwindow2);
        imgLabel->setObjectName(QString::fromUtf8("imgLabel"));
        imgLabel->setGeometry(QRect(120, 110, 200, 200));
        imgLabel->setPixmap(QPixmap(QString::fromUtf8("img/coffee1.jpg")));
        imgLabel->setScaledContents(true);
        leftButton = new QPushButton(orderwindow2);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(90, 190, 31, 31));
        leftButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgba(255,255,255,0);\n"
"border:1px solid #fff;\n"
"opacity:0.5;\n"
"color:#fff;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgba(255,255,255,0.5);\n"
"}"));
        rightButton = new QPushButton(orderwindow2);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setGeometry(QRect(680, 190, 31, 31));
        rightButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgba(255,255,255,0);\n"
"border:1px solid #fff;\n"
"opacity:0.5;\n"
"color:#fff;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgba(255,255,255,0.5);\n"
"}"));
        contentLabel = new QLabel(orderwindow2);
        contentLabel->setObjectName(QString::fromUtf8("contentLabel"));
        contentLabel->setGeometry(QRect(320, 170, 351, 111));
        contentLabel->setStyleSheet(QString::fromUtf8("color:#fff; font-weight:300; font-size:14px;"));
        menuLabel = new QLabel(orderwindow2);
        menuLabel->setObjectName(QString::fromUtf8("menuLabel"));
        menuLabel->setGeometry(QRect(320, 150, 351, 31));
        menuLabel->setStyleSheet(QString::fromUtf8("color:#fff; font-weight:600"));
        listButton = new QPushButton(orderwindow2);
        listButton->setObjectName(QString::fromUtf8("listButton"));
        listButton->setGeometry(QRect(80, 330, 291, 41));
        listButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border:1px solid #1b3c35;\n"
"opacity:0.5;\n"
"color:#1b3c35;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:#1b3c35;\n"
"color:#fff;\n"
"}"));
        orderButton = new QPushButton(orderwindow2);
        orderButton->setObjectName(QString::fromUtf8("orderButton"));
        orderButton->setGeometry(QRect(420, 330, 291, 41));
        orderButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border:1px solid #1b3c35;\n"
"opacity:0.5;\n"
"color:#1b3c35;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:#1b3c35;\n"
"color:#fff;\n"
"}"));
        label_3 = new QLabel(orderwindow2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(380, 90, 81, 17));
        label_3->setStyleSheet(QString::fromUtf8("color:#006636;\n"
"font-weight:700;font-size:18px;"));

        retranslateUi(orderwindow2);

        QMetaObject::connectSlotsByName(orderwindow2);
    } // setupUi

    void retranslateUi(QDialog *orderwindow2)
    {
        orderwindow2->setWindowTitle(QCoreApplication::translate("orderwindow2", "Dialog", nullptr));
        coffeeButton->setText(QCoreApplication::translate("orderwindow2", "COFFEE", nullptr));
        teaButton->setText(QCoreApplication::translate("orderwindow2", "TEA", nullptr));
        label->setText(QString());
        imgLabel->setText(QString());
        leftButton->setText(QCoreApplication::translate("orderwindow2", "\342\227\200", nullptr));
        rightButton->setText(QCoreApplication::translate("orderwindow2", "\342\226\266", nullptr));
        contentLabel->setText(QCoreApplication::translate("orderwindow2", "\354\247\204\355\225\234 \354\227\220\354\212\244\355\224\204\353\240\210\354\206\214\354\227\220 \354\213\234\354\233\220\355\225\234 \354\240\225\354\210\230\353\254\274\352\263\274\n"
"\354\226\274\354\235\214\354\235\204 \353\215\224\355\225\230\354\227\254 \354\212\244\355\203\200\353\262\205\354\212\244\354\235\230 \352\271\224\353\201\224\355\225\230\352\263\240 \352\260\225\353\240\254\355\225\234\n"
"\354\227\220\354\212\244\355\224\204\353\240\210\354\206\214\353\245\274 \352\260\200\354\236\245 \353\266\200\353\223\234\353\237\275\352\263\240 \354\213\234\354\233\220\355\225\230\352\262\214 \354\246\220\352\270\270 \354\210\230 \354\236\210\353\212\224 \354\273\244\355\224\274", nullptr));
        menuLabel->setText(QCoreApplication::translate("orderwindow2", "\354\225\204\354\235\264\354\212\244 \354\271\264\355\216\230 \354\225\204\353\251\224\353\246\254\354\271\264\353\205\270", nullptr));
        listButton->setText(QCoreApplication::translate("orderwindow2", "\354\243\274\353\254\270 \353\213\264\352\270\260", nullptr));
        orderButton->setText(QCoreApplication::translate("orderwindow2", "\354\243\274\353\254\270 \355\225\230\352\270\260", nullptr));
        label_3->setText(QCoreApplication::translate("orderwindow2", "Tea", nullptr));
    } // retranslateUi

};

namespace Ui {
    class orderwindow2: public Ui_orderwindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERWINDOW2_H
