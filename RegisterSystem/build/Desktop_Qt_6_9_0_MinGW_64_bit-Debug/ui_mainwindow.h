/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *topPanel;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget1;
    QLabel *label;
    QGroupBox *Registerform;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *username;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *password;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLineEdit *email;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QLineEdit *phone;
    QPushButton *registerBtn;
    QGroupBox *loginform;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QPushButton *loginBtn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(852, 572);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::SystemLockScreen));
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 0, 255);\n"
"background-color: rgb(85, 85, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        topPanel = new QWidget(centralwidget);
        topPanel->setObjectName("topPanel");
        topPanel->setGeometry(QRect(0, 0, 851, 80));
        topPanel->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 127);"));
        widget = new QWidget(topPanel);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 10, 621, 71));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget1 = new QWidget(widget);
        widget1->setObjectName("widget1");
        widget1->setStyleSheet(QString::fromUtf8("image: url(:/padlock-and-key-cartoon-illustration-free-vector.jpg);"));

        horizontalLayout->addWidget(widget1);

        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("#label{\n"
"color:black;\n"
"}"));

        horizontalLayout->addWidget(label);

        Registerform = new QGroupBox(centralwidget);
        Registerform->setObjectName("Registerform");
        Registerform->setGeometry(QRect(0, 100, 261, 421));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        Registerform->setFont(font1);
        Registerform->setStyleSheet(QString::fromUtf8("#Registerform{\n"
"	color: rgb(255, 255, 0);\n"
"	background-color: rgb(85, 0, 127);\n"
"	background-color: rgb(85, 0, 127);\n"
"color:white;\n"
"}"));
        verticalLayout_5 = new QVBoxLayout(Registerform);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(Registerform);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setPointSize(14);
        label_2->setFont(font2);

        verticalLayout->addWidget(label_2);

        username = new QLineEdit(Registerform);
        username->setObjectName("username");
        username->setFont(font2);
        username->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(username);


        verticalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(Registerform);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);

        verticalLayout_2->addWidget(label_3);

        password = new QLineEdit(Registerform);
        password->setObjectName("password");
        password->setFont(font2);
        password->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        password->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_2->addWidget(password);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_4 = new QLabel(Registerform);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);

        verticalLayout_3->addWidget(label_4);

        email = new QLineEdit(Registerform);
        email->setObjectName("email");
        email->setFont(font2);
        email->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(email);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_5 = new QLabel(Registerform);
        label_5->setObjectName("label_5");
        label_5->setFont(font2);

        verticalLayout_4->addWidget(label_5);

        phone = new QLineEdit(Registerform);
        phone->setObjectName("phone");
        phone->setFont(font2);
        phone->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(phone);


        verticalLayout_5->addLayout(verticalLayout_4);

        registerBtn = new QPushButton(Registerform);
        registerBtn->setObjectName("registerBtn");
        registerBtn->setFont(font1);
        registerBtn->setStyleSheet(QString::fromUtf8("#registerBtn{\n"
"\n"
"color:white;\n"
"background-color; yellow;\n"
"border -width:0px;\n"
"border -radius:4px;\n"
"text -color: black;\n"
"\n"
"}"));

        verticalLayout_5->addWidget(registerBtn);

        loginform = new QGroupBox(centralwidget);
        loginform->setObjectName("loginform");
        loginform->setGeometry(QRect(360, 270, 321, 241));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(false);
        loginform->setFont(font3);
        loginform->setStyleSheet(QString::fromUtf8("#loginform{\n"
"	color: rgb(255, 255, 0);\n"
"	background-color: rgb(85, 0, 127);\n"
"	background-color: rgb(85, 0, 127);\n"
"color:white;\n"
"}"));
        verticalLayout_8 = new QVBoxLayout(loginform);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_6 = new QLabel(loginform);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);

        verticalLayout_6->addWidget(label_6);

        lineEdit = new QLineEdit(loginform);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(lineEdit);


        verticalLayout_8->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_7 = new QLabel(loginform);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);

        verticalLayout_7->addWidget(label_7);

        lineEdit_2 = new QLineEdit(loginform);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setFont(font2);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_2->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_7->addWidget(lineEdit_2);


        verticalLayout_8->addLayout(verticalLayout_7);

        loginBtn = new QPushButton(loginform);
        loginBtn->setObjectName("loginBtn");
        loginBtn->setFont(font1);
        loginBtn->setStyleSheet(QString::fromUtf8("#loginBtn{\n"
"\n"
"color:white;\n"
"background-color; yellow;\n"
"border -width:0px;\n"
"border -radius:4px;\n"
"text -color: black;\n"
"\n"
"}"));

        verticalLayout_8->addWidget(loginBtn);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Login And Register System", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Qt6 Login And Register System", nullptr));
        Registerform->setTitle(QCoreApplication::translate("MainWindow", "Please Register", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        username->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Username", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("MainWindow", "Set Password", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        email->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Email", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Phone", nullptr));
        phone->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Phone No", nullptr));
        registerBtn->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        loginform->setTitle(QCoreApplication::translate("MainWindow", "Please Login", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Username", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Password", nullptr));
        loginBtn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
