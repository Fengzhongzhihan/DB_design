/********************************************************************************
** Form generated from reading UI file 'teacell_score.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACELL_SCORE_H
#define UI_TEACELL_SCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_teacell_score
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTableView *tableView;

    void setupUi(QDialog *teacell_score)
    {
        if (teacell_score->objectName().isEmpty())
            teacell_score->setObjectName(QString::fromUtf8("teacell_score"));
        teacell_score->resize(733, 638);
        gridLayout = new QGridLayout(teacell_score);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(teacell_score);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(teacell_score);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 0, 1, 1, 1);

        pushButton_4 = new QPushButton(teacell_score);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 0, 2, 1, 1);

        tableView = new QTableView(teacell_score);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 1, 0, 1, 3);


        retranslateUi(teacell_score);

        QMetaObject::connectSlotsByName(teacell_score);
    } // setupUi

    void retranslateUi(QDialog *teacell_score)
    {
        teacell_score->setWindowTitle(QCoreApplication::translate("teacell_score", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("teacell_score", "\346\237\245\347\234\213\344\270\252\344\272\272\346\225\231\345\255\246\350\257\276\347\250\213", nullptr));
        pushButton_3->setText(QCoreApplication::translate("teacell_score", "\344\277\256\346\224\271\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        pushButton_4->setText(QCoreApplication::translate("teacell_score", "\347\273\237\350\256\241\346\210\220\347\273\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teacell_score: public Ui_teacell_score {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACELL_SCORE_H
