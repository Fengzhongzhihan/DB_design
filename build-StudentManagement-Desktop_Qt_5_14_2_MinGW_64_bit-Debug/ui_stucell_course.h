/********************************************************************************
** Form generated from reading UI file 'stucell_course.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUCELL_COURSE_H
#define UI_STUCELL_COURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_stucell_course
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *findCourse;
    QPushButton *showCourse;
    QPushButton *selectCourse;
    QPushButton *quitCourse;
    QPushButton *myCourse;
    QTableView *tableView;

    void setupUi(QDialog *stucell_course)
    {
        if (stucell_course->objectName().isEmpty())
            stucell_course->setObjectName(QString::fromUtf8("stucell_course"));
        stucell_course->resize(516, 408);
        gridLayout = new QGridLayout(stucell_course);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        findCourse = new QLineEdit(stucell_course);
        findCourse->setObjectName(QString::fromUtf8("findCourse"));

        horizontalLayout->addWidget(findCourse);

        showCourse = new QPushButton(stucell_course);
        showCourse->setObjectName(QString::fromUtf8("showCourse"));

        horizontalLayout->addWidget(showCourse);

        selectCourse = new QPushButton(stucell_course);
        selectCourse->setObjectName(QString::fromUtf8("selectCourse"));

        horizontalLayout->addWidget(selectCourse);

        quitCourse = new QPushButton(stucell_course);
        quitCourse->setObjectName(QString::fromUtf8("quitCourse"));

        horizontalLayout->addWidget(quitCourse);

        myCourse = new QPushButton(stucell_course);
        myCourse->setObjectName(QString::fromUtf8("myCourse"));

        horizontalLayout->addWidget(myCourse);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        tableView = new QTableView(stucell_course);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 1, 0, 1, 1);


        retranslateUi(stucell_course);

        QMetaObject::connectSlotsByName(stucell_course);
    } // setupUi

    void retranslateUi(QDialog *stucell_course)
    {
        stucell_course->setWindowTitle(QCoreApplication::translate("stucell_course", "Dialog", nullptr));
        showCourse->setText(QCoreApplication::translate("stucell_course", "\346\237\245\350\257\242\350\257\276\347\250\213", nullptr));
        selectCourse->setText(QCoreApplication::translate("stucell_course", "\351\200\211\350\257\276", nullptr));
        quitCourse->setText(QCoreApplication::translate("stucell_course", "\351\200\200\350\257\276", nullptr));
        myCourse->setText(QCoreApplication::translate("stucell_course", "\346\237\245\347\234\213\345\267\262\351\200\211\350\257\276\347\250\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stucell_course: public Ui_stucell_course {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUCELL_COURSE_H
