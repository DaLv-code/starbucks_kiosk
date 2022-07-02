/********************************************************************************
** Form generated from reading UI file 'listwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTWINDOW_H
#define UI_LISTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_listwindow
{
public:
    QTextBrowser *textBrowser_2;
    QPushButton *teaButton;
    QPushButton *coffeeButton;
    QLabel *label;
    QTextBrowser *textBrowser_4;
    QTextBrowser *textBrowser_3;
    QTextBrowser *clearBrowser;
    QPushButton *clearButton;
    QPushButton *clearButton2;

    void setupUi(QDialog *listwindow)
    {
        if (listwindow->objectName().isEmpty())
            listwindow->setObjectName(QString::fromUtf8("listwindow"));
        listwindow->resize(800, 459);
        textBrowser_2 = new QTextBrowser(listwindow);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(0, 390, 801, 71));
        textBrowser_2->setStyleSheet(QString::fromUtf8("background-color:#2c2a29;"));
        teaButton = new QPushButton(listwindow);
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
        coffeeButton = new QPushButton(listwindow);
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
        label = new QLabel(listwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 171, 51));
        label->setPixmap(QPixmap(QString::fromUtf8("img/logo1.png")));
        label->setScaledContents(true);
        textBrowser_4 = new QTextBrowser(listwindow);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(-10, 70, 811, 321));
        textBrowser_4->setStyleSheet(QString::fromUtf8("background-color:#f6f5ef;"));
        textBrowser_3 = new QTextBrowser(listwindow);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(0, 0, 801, 71));
        textBrowser_3->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:1px solid #ddd;"));
        clearBrowser = new QTextBrowser(listwindow);
        clearBrowser->setObjectName(QString::fromUtf8("clearBrowser"));
        clearBrowser->setGeometry(QRect(0, 110, 801, 200));
        clearBrowser->setLayoutDirection(Qt::LeftToRight);
        clearBrowser->setStyleSheet(QString::fromUtf8("background-color:#1b3c35;\n"
"border:none;\n"
"color:#fff;\n"
"text-align:center;"));
        clearBrowser->setLineWrapMode(QTextEdit::WidgetWidth);
        clearButton = new QPushButton(listwindow);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(80, 330, 291, 41));
        clearButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        clearButton2 = new QPushButton(listwindow);
        clearButton2->setObjectName(QString::fromUtf8("clearButton2"));
        clearButton2->setGeometry(QRect(420, 330, 291, 41));
        clearButton2->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        textBrowser_4->raise();
        textBrowser_3->raise();
        textBrowser_2->raise();
        teaButton->raise();
        coffeeButton->raise();
        label->raise();
        clearBrowser->raise();
        clearButton->raise();
        clearButton2->raise();

        retranslateUi(listwindow);

        QMetaObject::connectSlotsByName(listwindow);
    } // setupUi

    void retranslateUi(QDialog *listwindow)
    {
        listwindow->setWindowTitle(QCoreApplication::translate("listwindow", "Dialog", nullptr));
        teaButton->setText(QCoreApplication::translate("listwindow", "TEA", nullptr));
        coffeeButton->setText(QCoreApplication::translate("listwindow", "COFFEE", nullptr));
        label->setText(QString());
        clearButton->setText(QCoreApplication::translate("listwindow", "\353\246\254\354\212\244\355\212\270 \354\243\274\353\254\270", nullptr));
        clearButton2->setText(QCoreApplication::translate("listwindow", "\353\246\254\354\212\244\355\212\270 \353\271\204\354\232\260\352\270\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listwindow: public Ui_listwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTWINDOW_H
