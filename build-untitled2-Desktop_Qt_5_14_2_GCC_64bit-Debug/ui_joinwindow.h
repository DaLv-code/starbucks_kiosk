/********************************************************************************
** Form generated from reading UI file 'joinwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOINWINDOW_H
#define UI_JOINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_joinwindow
{
public:
    QLineEdit *pwEdit;
    QLabel *label_2;
    QLineEdit *idEdit;
    QLabel *label;
    QPushButton *checkButton;
    QTextBrowser *textBrowser_4;
    QTextBrowser *textBrowser_2;
    QLineEdit *repwEdit;
    QPushButton *joinButton;
    QPushButton *coffeeButton;
    QPushButton *orderButton;
    QTextBrowser *textBrowser_3;

    void setupUi(QDialog *joinwindow)
    {
        if (joinwindow->objectName().isEmpty())
            joinwindow->setObjectName(QString::fromUtf8("joinwindow"));
        joinwindow->resize(800, 460);
        pwEdit = new QLineEdit(joinwindow);
        pwEdit->setObjectName(QString::fromUtf8("pwEdit"));
        pwEdit->setGeometry(QRect(220, 210, 361, 41));
        pwEdit->setEchoMode(QLineEdit::Password);
        pwEdit->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(joinwindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(370, 85, 61, 17));
        label_2->setStyleSheet(QString::fromUtf8("color:#006636;\n"
"font-weight:700;"));
        idEdit = new QLineEdit(joinwindow);
        idEdit->setObjectName(QString::fromUtf8("idEdit"));
        idEdit->setGeometry(QRect(220, 115, 361, 41));
        idEdit->setAlignment(Qt::AlignCenter);
        label = new QLabel(joinwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 171, 51));
        label->setPixmap(QPixmap(QString::fromUtf8("img/logo1.png")));
        label->setScaledContents(true);
        checkButton = new QPushButton(joinwindow);
        checkButton->setObjectName(QString::fromUtf8("checkButton"));
        checkButton->setGeometry(QRect(220, 155, 361, 41));
        checkButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"color:#fff;\n"
"font-weight:600;\n"
"background-color:#2c2a29;\n"
"cursor:pointer;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:#4c4a49;\n"
"}\n"
"\n"
""));
        textBrowser_4 = new QTextBrowser(joinwindow);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(-10, 70, 811, 321));
        textBrowser_4->setStyleSheet(QString::fromUtf8("background-color:#f6f5ef;"));
        textBrowser_2 = new QTextBrowser(joinwindow);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(0, 390, 801, 71));
        textBrowser_2->setStyleSheet(QString::fromUtf8("background-color:#2c2a29;"));
        repwEdit = new QLineEdit(joinwindow);
        repwEdit->setObjectName(QString::fromUtf8("repwEdit"));
        repwEdit->setGeometry(QRect(220, 265, 361, 41));
        repwEdit->setEchoMode(QLineEdit::Password);
        repwEdit->setAlignment(Qt::AlignCenter);
        joinButton = new QPushButton(joinwindow);
        joinButton->setObjectName(QString::fromUtf8("joinButton"));
        joinButton->setEnabled(false);
        joinButton->setGeometry(QRect(220, 325, 361, 41));
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
        coffeeButton = new QPushButton(joinwindow);
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
        orderButton = new QPushButton(joinwindow);
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
        textBrowser_3 = new QTextBrowser(joinwindow);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(0, 0, 801, 71));
        textBrowser_3->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:1px solid #ddd;"));
        textBrowser_4->raise();
        joinButton->raise();
        textBrowser_3->raise();
        label_2->raise();
        label->raise();
        idEdit->raise();
        pwEdit->raise();
        coffeeButton->raise();
        repwEdit->raise();
        orderButton->raise();
        textBrowser_2->raise();
        checkButton->raise();

        retranslateUi(joinwindow);

        QMetaObject::connectSlotsByName(joinwindow);
    } // setupUi

    void retranslateUi(QDialog *joinwindow)
    {
        joinwindow->setWindowTitle(QCoreApplication::translate("joinwindow", "Dialog", nullptr));
        pwEdit->setPlaceholderText(QCoreApplication::translate("joinwindow", "PW", nullptr));
        label_2->setText(QCoreApplication::translate("joinwindow", "\355\232\214\354\233\220\352\260\200\354\236\205", nullptr));
#if QT_CONFIG(tooltip)
        idEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        idEdit->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        idEdit->setPlaceholderText(QCoreApplication::translate("joinwindow", "ID", nullptr));
        label->setText(QString());
        checkButton->setText(QCoreApplication::translate("joinwindow", "\354\244\221\353\263\265\355\231\225\354\235\270", nullptr));
        repwEdit->setPlaceholderText(QCoreApplication::translate("joinwindow", "PW \354\236\254\354\236\205\353\240\245", nullptr));
        joinButton->setText(QCoreApplication::translate("joinwindow", "\355\232\214\354\233\220\352\260\200\354\236\205", nullptr));
        coffeeButton->setText(QCoreApplication::translate("joinwindow", "COFFEE", nullptr));
        orderButton->setText(QCoreApplication::translate("joinwindow", "TEA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class joinwindow: public Ui_joinwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOINWINDOW_H
