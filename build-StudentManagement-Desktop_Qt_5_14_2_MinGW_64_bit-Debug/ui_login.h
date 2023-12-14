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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLineEdit *userId;
    QLineEdit *passWord;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *loginButton;
    QPushButton *cancelButton;
    QMenuBar *menubar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(524, 395);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 140, 250, 60));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        userId = new QLineEdit(layoutWidget);
        userId->setObjectName(QString::fromUtf8("userId"));

        verticalLayout->addWidget(userId);

        passWord = new QLineEdit(layoutWidget);
        passWord->setObjectName(QString::fromUtf8("passWord"));

        verticalLayout->addWidget(passWord);


        gridLayout->addLayout(verticalLayout, 0, 1, 2, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 50, 261, 101));
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(150, 250, 194, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        loginButton = new QPushButton(layoutWidget_2);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));

        horizontalLayout->addWidget(loginButton);

        cancelButton = new QPushButton(layoutWidget_2);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(20, 20));

        horizontalLayout->addWidget(cancelButton);

        login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 524, 26));
        login->setMenuBar(menubar);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "login", nullptr));
        label->setText(QCoreApplication::translate("login", "<html><head/><body><p><span style=\" font-size:14pt;\">\347\224\250\346\210\267\345\220\215</span></p></body></html>", nullptr));
        userId->setText(QString());
        passWord->setText(QString());
        label_2->setText(QCoreApplication::translate("login", "<html><head/><body><p><span style=\" font-size:14pt;\">\345\257\206\347\240\201</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("login", "<html><head/><body><p><span style=\" font-size:14pt;\">\346\254\242\350\277\216\346\235\245\345\210\260\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237</span></p></body></html>", nullptr));
        loginButton->setText(QCoreApplication::translate("login", "\347\231\273\345\275\225", nullptr));
        cancelButton->setText(QCoreApplication::translate("login", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
