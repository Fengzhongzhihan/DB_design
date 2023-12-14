/********************************************************************************
** Form generated from reading UI file 'teacell_stuinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACELL_STUINFO_H
#define UI_TEACELL_STUINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_teacell_stuInfo
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableView *tableView;

    void setupUi(QDialog *teacell_stuInfo)
    {
        if (teacell_stuInfo->objectName().isEmpty())
            teacell_stuInfo->setObjectName(QString::fromUtf8("teacell_stuInfo"));
        teacell_stuInfo->resize(606, 556);
        gridLayout = new QGridLayout(teacell_stuInfo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit = new QLineEdit(teacell_stuInfo);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(teacell_stuInfo);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 0, 1, 1, 1);

        pushButton = new QPushButton(teacell_stuInfo);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 2, 1, 1);

        pushButton_2 = new QPushButton(teacell_stuInfo);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 3, 1, 1);

        tableView = new QTableView(teacell_stuInfo);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 1, 0, 1, 4);


        retranslateUi(teacell_stuInfo);

        QMetaObject::connectSlotsByName(teacell_stuInfo);
    } // setupUi

    void retranslateUi(QDialog *teacell_stuInfo)
    {
        teacell_stuInfo->setWindowTitle(QCoreApplication::translate("teacell_stuInfo", "Dialog", nullptr));
        pushButton_3->setText(QCoreApplication::translate("teacell_stuInfo", "\346\237\245\350\257\242\345\255\246\347\224\237", nullptr));
        pushButton->setText(QCoreApplication::translate("teacell_stuInfo", "\346\237\245\347\234\213\344\270\252\344\272\272\346\225\231\345\255\246\350\257\276\347\250\213", nullptr));
        pushButton_2->setText(QCoreApplication::translate("teacell_stuInfo", "\346\237\245\347\234\213\351\200\211\350\257\276\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teacell_stuInfo: public Ui_teacell_stuInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACELL_STUINFO_H
