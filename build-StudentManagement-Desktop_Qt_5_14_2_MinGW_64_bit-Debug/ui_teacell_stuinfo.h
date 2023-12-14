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
    QTableView *tableView;
    QLineEdit *stuName;
    QPushButton *printStudent;
    QPushButton *showMyCourse;
    QPushButton *searchStudent;
    QPushButton *findMyStudent;

    void setupUi(QDialog *teacell_stuInfo)
    {
        if (teacell_stuInfo->objectName().isEmpty())
            teacell_stuInfo->setObjectName(QString::fromUtf8("teacell_stuInfo"));
        teacell_stuInfo->resize(758, 734);
        gridLayout = new QGridLayout(teacell_stuInfo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(teacell_stuInfo);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 1, 0, 1, 5);

        stuName = new QLineEdit(teacell_stuInfo);
        stuName->setObjectName(QString::fromUtf8("stuName"));

        gridLayout->addWidget(stuName, 0, 0, 1, 1);

        printStudent = new QPushButton(teacell_stuInfo);
        printStudent->setObjectName(QString::fromUtf8("printStudent"));

        gridLayout->addWidget(printStudent, 0, 4, 1, 1);

        showMyCourse = new QPushButton(teacell_stuInfo);
        showMyCourse->setObjectName(QString::fromUtf8("showMyCourse"));

        gridLayout->addWidget(showMyCourse, 0, 2, 1, 1);

        searchStudent = new QPushButton(teacell_stuInfo);
        searchStudent->setObjectName(QString::fromUtf8("searchStudent"));

        gridLayout->addWidget(searchStudent, 0, 1, 1, 1);

        findMyStudent = new QPushButton(teacell_stuInfo);
        findMyStudent->setObjectName(QString::fromUtf8("findMyStudent"));

        gridLayout->addWidget(findMyStudent, 0, 3, 1, 1);


        retranslateUi(teacell_stuInfo);

        QMetaObject::connectSlotsByName(teacell_stuInfo);
    } // setupUi

    void retranslateUi(QDialog *teacell_stuInfo)
    {
        teacell_stuInfo->setWindowTitle(QCoreApplication::translate("teacell_stuInfo", "Dialog", nullptr));
        printStudent->setText(QCoreApplication::translate("teacell_stuInfo", "\346\211\223\345\215\260\351\200\211\350\257\276\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        showMyCourse->setText(QCoreApplication::translate("teacell_stuInfo", "\346\237\245\347\234\213\344\270\252\344\272\272\346\225\231\345\255\246\350\257\276\347\250\213", nullptr));
        searchStudent->setText(QCoreApplication::translate("teacell_stuInfo", "\346\237\245\350\257\242\345\255\246\347\224\237", nullptr));
        findMyStudent->setText(QCoreApplication::translate("teacell_stuInfo", "\346\237\245\347\234\213\351\200\211\350\257\276\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teacell_stuInfo: public Ui_teacell_stuInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACELL_STUINFO_H
