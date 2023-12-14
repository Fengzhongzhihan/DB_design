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
    QPushButton *countScore;
    QPushButton *printScore;
    QTableView *tableView;
    QPushButton *showScore;
    QPushButton *myCourse;
    QPushButton *updateScore;

    void setupUi(QDialog *teacell_score)
    {
        if (teacell_score->objectName().isEmpty())
            teacell_score->setObjectName(QString::fromUtf8("teacell_score"));
        teacell_score->resize(733, 638);
        gridLayout = new QGridLayout(teacell_score);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        countScore = new QPushButton(teacell_score);
        countScore->setObjectName(QString::fromUtf8("countScore"));

        gridLayout->addWidget(countScore, 0, 3, 1, 1);

        printScore = new QPushButton(teacell_score);
        printScore->setObjectName(QString::fromUtf8("printScore"));

        gridLayout->addWidget(printScore, 0, 4, 1, 1);

        tableView = new QTableView(teacell_score);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 1, 0, 1, 5);

        showScore = new QPushButton(teacell_score);
        showScore->setObjectName(QString::fromUtf8("showScore"));

        gridLayout->addWidget(showScore, 0, 1, 1, 1);

        myCourse = new QPushButton(teacell_score);
        myCourse->setObjectName(QString::fromUtf8("myCourse"));

        gridLayout->addWidget(myCourse, 0, 0, 1, 1);

        updateScore = new QPushButton(teacell_score);
        updateScore->setObjectName(QString::fromUtf8("updateScore"));

        gridLayout->addWidget(updateScore, 0, 2, 1, 1);


        retranslateUi(teacell_score);

        QMetaObject::connectSlotsByName(teacell_score);
    } // setupUi

    void retranslateUi(QDialog *teacell_score)
    {
        teacell_score->setWindowTitle(QCoreApplication::translate("teacell_score", "Dialog", nullptr));
        countScore->setText(QCoreApplication::translate("teacell_score", "\347\273\237\350\256\241\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        printScore->setText(QCoreApplication::translate("teacell_score", "\346\211\223\345\215\260\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        showScore->setText(QCoreApplication::translate("teacell_score", "\346\230\276\347\244\272\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        myCourse->setText(QCoreApplication::translate("teacell_score", "\346\237\245\347\234\213\344\270\252\344\272\272\346\225\231\345\255\246\350\257\276\347\250\213", nullptr));
        updateScore->setText(QCoreApplication::translate("teacell_score", "\344\277\256\346\224\271\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teacell_score: public Ui_teacell_score {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACELL_SCORE_H
