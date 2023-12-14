/********************************************************************************
** Form generated from reading UI file 'studentuser.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTUSER_H
#define UI_STUDENTUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentUser
{
public:
    QGridLayout *gridLayout_4;
    QWidget *tool;
    QGridLayout *gridLayout_3;
    QPushButton *btn_pa;
    QPushButton *btn_course;
    QSpacerItem *verticalSpacer_3;
    QPushButton *btn_grade;
    QPushButton *btn_info;
    QStackedWidget *stackedWidget;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *StudentUser)
    {
        if (StudentUser->objectName().isEmpty())
            StudentUser->setObjectName(QString::fromUtf8("StudentUser"));
        StudentUser->resize(1104, 863);
        gridLayout_4 = new QGridLayout(StudentUser);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tool = new QWidget(StudentUser);
        tool->setObjectName(QString::fromUtf8("tool"));
        tool->setMinimumSize(QSize(120, 55));
        tool->setMaximumSize(QSize(120, 16777215));
        tool->setStyleSheet(QString::fromUtf8("min-height:55px;\n"
"background-color: rgb(170, 255, 255);\n"
"QWidget#tool QPushButton{border:none ;background-color: rgb(255, 170, 0)}\n"
""));
        gridLayout_3 = new QGridLayout(tool);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        btn_pa = new QPushButton(tool);
        buttonGroup = new QButtonGroup(StudentUser);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(btn_pa);
        btn_pa->setObjectName(QString::fromUtf8("btn_pa"));

        gridLayout_3->addWidget(btn_pa, 4, 0, 1, 1);

        btn_course = new QPushButton(tool);
        buttonGroup->addButton(btn_course);
        btn_course->setObjectName(QString::fromUtf8("btn_course"));

        gridLayout_3->addWidget(btn_course, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(117, 37, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 5, 0, 1, 1);

        btn_grade = new QPushButton(tool);
        buttonGroup->addButton(btn_grade);
        btn_grade->setObjectName(QString::fromUtf8("btn_grade"));

        gridLayout_3->addWidget(btn_grade, 3, 0, 1, 1);

        btn_info = new QPushButton(tool);
        buttonGroup->addButton(btn_info);
        btn_info->setObjectName(QString::fromUtf8("btn_info"));

        gridLayout_3->addWidget(btn_info, 0, 0, 1, 1);


        gridLayout_4->addWidget(tool, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(StudentUser);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));

        gridLayout_4->addWidget(stackedWidget, 0, 1, 1, 1);


        retranslateUi(StudentUser);

        QMetaObject::connectSlotsByName(StudentUser);
    } // setupUi

    void retranslateUi(QDialog *StudentUser)
    {
        StudentUser->setWindowTitle(QCoreApplication::translate("StudentUser", "Dialog", nullptr));
        btn_pa->setText(QCoreApplication::translate("StudentUser", "\345\245\226\346\203\251\346\203\205\345\206\265", nullptr));
        btn_course->setText(QCoreApplication::translate("StudentUser", "\351\200\211\350\257\276\347\263\273\347\273\237", nullptr));
        btn_grade->setText(QCoreApplication::translate("StudentUser", "\346\210\220\347\273\251\347\256\241\347\220\206", nullptr));
        btn_info->setText(QCoreApplication::translate("StudentUser", "\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentUser: public Ui_StudentUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTUSER_H
