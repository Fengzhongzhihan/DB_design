/********************************************************************************
** Form generated from reading UI file 'stucell_grade.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUCELL_GRADE_H
#define UI_STUCELL_GRADE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_stucell_grade
{
public:
    QGridLayout *gridLayout;
    QPushButton *showGrade;
    QPushButton *printGrade;
    QPushButton *reExam;
    QPushButton *reStudy;
    QTableView *tableView;

    void setupUi(QDialog *stucell_grade)
    {
        if (stucell_grade->objectName().isEmpty())
            stucell_grade->setObjectName(QString::fromUtf8("stucell_grade"));
        stucell_grade->resize(387, 327);
        gridLayout = new QGridLayout(stucell_grade);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        showGrade = new QPushButton(stucell_grade);
        showGrade->setObjectName(QString::fromUtf8("showGrade"));

        gridLayout->addWidget(showGrade, 0, 0, 1, 1);

        printGrade = new QPushButton(stucell_grade);
        printGrade->setObjectName(QString::fromUtf8("printGrade"));

        gridLayout->addWidget(printGrade, 0, 1, 1, 1);

        reExam = new QPushButton(stucell_grade);
        reExam->setObjectName(QString::fromUtf8("reExam"));

        gridLayout->addWidget(reExam, 0, 2, 1, 1);

        reStudy = new QPushButton(stucell_grade);
        reStudy->setObjectName(QString::fromUtf8("reStudy"));

        gridLayout->addWidget(reStudy, 0, 3, 1, 1);

        tableView = new QTableView(stucell_grade);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 1, 0, 1, 4);


        retranslateUi(stucell_grade);

        QMetaObject::connectSlotsByName(stucell_grade);
    } // setupUi

    void retranslateUi(QDialog *stucell_grade)
    {
        stucell_grade->setWindowTitle(QCoreApplication::translate("stucell_grade", "Dialog", nullptr));
        showGrade->setText(QCoreApplication::translate("stucell_grade", "\346\237\245\347\234\213\346\210\220\347\273\251", nullptr));
        printGrade->setText(QCoreApplication::translate("stucell_grade", "\346\211\223\345\215\260\346\210\220\347\273\251", nullptr));
        reExam->setText(QCoreApplication::translate("stucell_grade", "\350\241\245\350\200\203", nullptr));
        reStudy->setText(QCoreApplication::translate("stucell_grade", "\351\207\215\344\277\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stucell_grade: public Ui_stucell_grade {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUCELL_GRADE_H
