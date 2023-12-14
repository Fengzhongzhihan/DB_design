/********************************************************************************
** Form generated from reading UI file 'teacheruser.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERUSER_H
#define UI_TEACHERUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teacherUser
{
public:
    QGridLayout *gridLayout;
    QWidget *tool;
    QGridLayout *gridLayout_3;
    QPushButton *btn_stuInfo;
    QPushButton *btn_course;
    QSpacerItem *verticalSpacer_3;
    QPushButton *btn_score;
    QPushButton *btn_teaInfo;
    QStackedWidget *stackedWidget;

    void setupUi(QDialog *teacherUser)
    {
        if (teacherUser->objectName().isEmpty())
            teacherUser->setObjectName(QString::fromUtf8("teacherUser"));
        teacherUser->resize(695, 653);
        gridLayout = new QGridLayout(teacherUser);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tool = new QWidget(teacherUser);
        tool->setObjectName(QString::fromUtf8("tool"));
        tool->setMinimumSize(QSize(120, 55));
        tool->setMaximumSize(QSize(120, 16777215));
        tool->setStyleSheet(QString::fromUtf8("min-height:55px;\n"
"background-color: rgb(170, 255, 255);\n"
"QWidget#tool QPushButton{border:none ;background-color: rgb(255, 170, 0)}\n"
""));
        gridLayout_3 = new QGridLayout(tool);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        btn_stuInfo = new QPushButton(tool);
        btn_stuInfo->setObjectName(QString::fromUtf8("btn_stuInfo"));

        gridLayout_3->addWidget(btn_stuInfo, 4, 0, 1, 1);

        btn_course = new QPushButton(tool);
        btn_course->setObjectName(QString::fromUtf8("btn_course"));

        gridLayout_3->addWidget(btn_course, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(117, 37, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 5, 0, 1, 1);

        btn_score = new QPushButton(tool);
        btn_score->setObjectName(QString::fromUtf8("btn_score"));

        gridLayout_3->addWidget(btn_score, 3, 0, 1, 1);

        btn_teaInfo = new QPushButton(tool);
        btn_teaInfo->setObjectName(QString::fromUtf8("btn_teaInfo"));

        gridLayout_3->addWidget(btn_teaInfo, 0, 0, 1, 1);


        gridLayout->addWidget(tool, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(teacherUser);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));

        gridLayout->addWidget(stackedWidget, 0, 1, 1, 1);


        retranslateUi(teacherUser);

        QMetaObject::connectSlotsByName(teacherUser);
    } // setupUi

    void retranslateUi(QDialog *teacherUser)
    {
        teacherUser->setWindowTitle(QCoreApplication::translate("teacherUser", "Dialog", nullptr));
        btn_stuInfo->setText(QCoreApplication::translate("teacherUser", "\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        btn_course->setText(QCoreApplication::translate("teacherUser", "\350\257\276\347\250\213\347\256\241\347\220\206", nullptr));
        btn_score->setText(QCoreApplication::translate("teacherUser", "\346\210\220\347\273\251\347\256\241\347\220\206", nullptr));
        btn_teaInfo->setText(QCoreApplication::translate("teacherUser", "\346\225\231\345\270\210\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teacherUser: public Ui_teacherUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERUSER_H
