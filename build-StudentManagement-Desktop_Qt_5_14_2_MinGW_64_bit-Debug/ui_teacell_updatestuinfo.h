/********************************************************************************
** Form generated from reading UI file 'teacell_updatestuinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACELL_UPDATESTUINFO_H
#define UI_TEACELL_UPDATESTUINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_teacell_updateStuInfo
{
public:
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLineEdit *courseSet;
    QLabel *label_4;
    QLineEdit *course;
    QLabel *label;
    QLineEdit *sid;
    QLabel *label_2;
    QLineEdit *name;
    QLabel *label_3;
    QLineEdit *score;
    QPushButton *commitBtn;
    QPushButton *cancelBtn;

    void setupUi(QDialog *teacell_updateStuInfo)
    {
        if (teacell_updateStuInfo->objectName().isEmpty())
            teacell_updateStuInfo->setObjectName(QString::fromUtf8("teacell_updateStuInfo"));
        teacell_updateStuInfo->resize(400, 300);
        gridLayout = new QGridLayout(teacell_updateStuInfo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(teacell_updateStuInfo);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        courseSet = new QLineEdit(teacell_updateStuInfo);
        courseSet->setObjectName(QString::fromUtf8("courseSet"));

        gridLayout->addWidget(courseSet, 0, 1, 1, 1);

        label_4 = new QLabel(teacell_updateStuInfo);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        course = new QLineEdit(teacell_updateStuInfo);
        course->setObjectName(QString::fromUtf8("course"));

        gridLayout->addWidget(course, 1, 1, 1, 1);

        label = new QLabel(teacell_updateStuInfo);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        sid = new QLineEdit(teacell_updateStuInfo);
        sid->setObjectName(QString::fromUtf8("sid"));

        gridLayout->addWidget(sid, 2, 1, 1, 1);

        label_2 = new QLabel(teacell_updateStuInfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        name = new QLineEdit(teacell_updateStuInfo);
        name->setObjectName(QString::fromUtf8("name"));

        gridLayout->addWidget(name, 3, 1, 1, 1);

        label_3 = new QLabel(teacell_updateStuInfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        score = new QLineEdit(teacell_updateStuInfo);
        score->setObjectName(QString::fromUtf8("score"));

        gridLayout->addWidget(score, 4, 1, 1, 1);

        commitBtn = new QPushButton(teacell_updateStuInfo);
        commitBtn->setObjectName(QString::fromUtf8("commitBtn"));

        gridLayout->addWidget(commitBtn, 5, 0, 1, 1);

        cancelBtn = new QPushButton(teacell_updateStuInfo);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));

        gridLayout->addWidget(cancelBtn, 5, 1, 1, 1);


        retranslateUi(teacell_updateStuInfo);

        QMetaObject::connectSlotsByName(teacell_updateStuInfo);
    } // setupUi

    void retranslateUi(QDialog *teacell_updateStuInfo)
    {
        teacell_updateStuInfo->setWindowTitle(QCoreApplication::translate("teacell_updateStuInfo", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("teacell_updateStuInfo", "\350\257\276\347\250\213\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("teacell_updateStuInfo", "\350\257\276\347\250\213", nullptr));
        label->setText(QCoreApplication::translate("teacell_updateStuInfo", "\345\255\246\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("teacell_updateStuInfo", "\345\247\223\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("teacell_updateStuInfo", "\346\210\220\347\273\251", nullptr));
        commitBtn->setText(QCoreApplication::translate("teacell_updateStuInfo", "\347\241\256\345\256\232", nullptr));
        cancelBtn->setText(QCoreApplication::translate("teacell_updateStuInfo", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teacell_updateStuInfo: public Ui_teacell_updateStuInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACELL_UPDATESTUINFO_H
