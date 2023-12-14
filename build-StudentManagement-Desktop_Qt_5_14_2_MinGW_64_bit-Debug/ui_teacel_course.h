/********************************************************************************
** Form generated from reading UI file 'teacel_course.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACEL_COURSE_H
#define UI_TEACEL_COURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_teacel_course
{
public:
    QGridLayout *gridLayout;
    QLineEdit *courseName;
    QPushButton *findCourse;
    QPushButton *findMyCourse;
    QTableView *tableView;

    void setupUi(QDialog *teacel_course)
    {
        if (teacel_course->objectName().isEmpty())
            teacel_course->setObjectName(QString::fromUtf8("teacel_course"));
        teacel_course->resize(433, 335);
        gridLayout = new QGridLayout(teacel_course);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        courseName = new QLineEdit(teacel_course);
        courseName->setObjectName(QString::fromUtf8("courseName"));

        gridLayout->addWidget(courseName, 0, 0, 1, 1);

        findCourse = new QPushButton(teacel_course);
        findCourse->setObjectName(QString::fromUtf8("findCourse"));

        gridLayout->addWidget(findCourse, 0, 1, 1, 1);

        findMyCourse = new QPushButton(teacel_course);
        findMyCourse->setObjectName(QString::fromUtf8("findMyCourse"));

        gridLayout->addWidget(findMyCourse, 0, 2, 1, 1);

        tableView = new QTableView(teacel_course);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 1, 0, 1, 4);


        retranslateUi(teacel_course);

        QMetaObject::connectSlotsByName(teacel_course);
    } // setupUi

    void retranslateUi(QDialog *teacel_course)
    {
        teacel_course->setWindowTitle(QCoreApplication::translate("teacel_course", "Dialog", nullptr));
        findCourse->setText(QCoreApplication::translate("teacel_course", "\346\237\245\350\257\242\350\257\276\347\250\213", nullptr));
        findMyCourse->setText(QCoreApplication::translate("teacel_course", "\346\237\245\347\234\213\344\270\252\344\272\272\346\225\231\345\255\246\350\257\276\347\250\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teacel_course: public Ui_teacel_course {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACEL_COURSE_H
