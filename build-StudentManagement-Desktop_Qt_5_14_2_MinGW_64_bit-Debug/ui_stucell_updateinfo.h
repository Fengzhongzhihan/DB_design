/********************************************************************************
** Form generated from reading UI file 'stucell_updateinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUCELL_UPDATEINFO_H
#define UI_STUCELL_UPDATEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_stucell_updateInfo
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *name;
    QLabel *label_4;
    QLineEdit *age;
    QLabel *label_5;
    QLineEdit *grade;
    QLabel *label_6;
    QComboBox *mclass;
    QLabel *label_7;
    QLineEdit *identity_id;
    QLabel *label_2;
    QComboBox *sex;
    QLabel *label_3;
    QComboBox *major;
    QPushButton *commitButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *stucell_updateInfo)
    {
        if (stucell_updateInfo->objectName().isEmpty())
            stucell_updateInfo->setObjectName(QString::fromUtf8("stucell_updateInfo"));
        stucell_updateInfo->resize(324, 294);
        gridLayout = new QGridLayout(stucell_updateInfo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(stucell_updateInfo);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        name = new QLineEdit(stucell_updateInfo);
        name->setObjectName(QString::fromUtf8("name"));

        gridLayout->addWidget(name, 0, 1, 1, 2);

        label_4 = new QLabel(stucell_updateInfo);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        age = new QLineEdit(stucell_updateInfo);
        age->setObjectName(QString::fromUtf8("age"));

        gridLayout->addWidget(age, 1, 1, 1, 2);

        label_5 = new QLabel(stucell_updateInfo);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        grade = new QLineEdit(stucell_updateInfo);
        grade->setObjectName(QString::fromUtf8("grade"));

        gridLayout->addWidget(grade, 2, 1, 1, 2);

        label_6 = new QLabel(stucell_updateInfo);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        mclass = new QComboBox(stucell_updateInfo);
        mclass->addItem(QString());
        mclass->addItem(QString());
        mclass->addItem(QString());
        mclass->addItem(QString());
        mclass->addItem(QString());
        mclass->addItem(QString());
        mclass->addItem(QString());
        mclass->addItem(QString());
        mclass->setObjectName(QString::fromUtf8("mclass"));

        gridLayout->addWidget(mclass, 3, 1, 1, 1);

        label_7 = new QLabel(stucell_updateInfo);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        identity_id = new QLineEdit(stucell_updateInfo);
        identity_id->setObjectName(QString::fromUtf8("identity_id"));

        gridLayout->addWidget(identity_id, 4, 1, 1, 2);

        label_2 = new QLabel(stucell_updateInfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

        sex = new QComboBox(stucell_updateInfo);
        sex->addItem(QString());
        sex->addItem(QString());
        sex->setObjectName(QString::fromUtf8("sex"));

        gridLayout->addWidget(sex, 5, 1, 1, 1);

        label_3 = new QLabel(stucell_updateInfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        major = new QComboBox(stucell_updateInfo);
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->setObjectName(QString::fromUtf8("major"));

        gridLayout->addWidget(major, 6, 1, 1, 2);

        commitButton = new QPushButton(stucell_updateInfo);
        commitButton->setObjectName(QString::fromUtf8("commitButton"));

        gridLayout->addWidget(commitButton, 7, 0, 1, 2);

        cancelButton = new QPushButton(stucell_updateInfo);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        gridLayout->addWidget(cancelButton, 7, 2, 1, 1);


        retranslateUi(stucell_updateInfo);

        QMetaObject::connectSlotsByName(stucell_updateInfo);
    } // setupUi

    void retranslateUi(QDialog *stucell_updateInfo)
    {
        stucell_updateInfo->setWindowTitle(QCoreApplication::translate("stucell_updateInfo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("stucell_updateInfo", "\345\247\223\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("stucell_updateInfo", "\345\271\264\351\276\204", nullptr));
        label_5->setText(QCoreApplication::translate("stucell_updateInfo", "\345\271\264\347\272\247", nullptr));
        grade->setText(QString());
        label_6->setText(QCoreApplication::translate("stucell_updateInfo", "\347\217\255\347\272\247", nullptr));
        mclass->setItemText(0, QCoreApplication::translate("stucell_updateInfo", "1", nullptr));
        mclass->setItemText(1, QCoreApplication::translate("stucell_updateInfo", "2", nullptr));
        mclass->setItemText(2, QCoreApplication::translate("stucell_updateInfo", "3", nullptr));
        mclass->setItemText(3, QCoreApplication::translate("stucell_updateInfo", "4", nullptr));
        mclass->setItemText(4, QCoreApplication::translate("stucell_updateInfo", "5", nullptr));
        mclass->setItemText(5, QCoreApplication::translate("stucell_updateInfo", "6", nullptr));
        mclass->setItemText(6, QCoreApplication::translate("stucell_updateInfo", "7", nullptr));
        mclass->setItemText(7, QCoreApplication::translate("stucell_updateInfo", "8", nullptr));

        label_7->setText(QCoreApplication::translate("stucell_updateInfo", "\350\272\253\344\273\275\350\257\201\345\217\267", nullptr));
        identity_id->setText(QString());
        label_2->setText(QCoreApplication::translate("stucell_updateInfo", "\346\200\247\345\210\253", nullptr));
        sex->setItemText(0, QCoreApplication::translate("stucell_updateInfo", "\347\224\267", nullptr));
        sex->setItemText(1, QCoreApplication::translate("stucell_updateInfo", "\345\245\263", nullptr));

        label_3->setText(QCoreApplication::translate("stucell_updateInfo", "\344\270\223\344\270\232", nullptr));
        major->setItemText(0, QCoreApplication::translate("stucell_updateInfo", "\350\256\241\347\256\227\346\234\272\347\247\221\345\255\246\344\270\216\346\212\200\346\234\257", nullptr));
        major->setItemText(1, QCoreApplication::translate("stucell_updateInfo", "\344\272\272\345\267\245\346\231\272\350\203\275", nullptr));
        major->setItemText(2, QCoreApplication::translate("stucell_updateInfo", "\351\233\206\346\210\220\347\224\265\350\267\257\344\270\216\350\256\276\350\256\241", nullptr));

        commitButton->setText(QCoreApplication::translate("stucell_updateInfo", "\347\241\256\345\256\232", nullptr));
        cancelButton->setText(QCoreApplication::translate("stucell_updateInfo", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stucell_updateInfo: public Ui_stucell_updateInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUCELL_UPDATEINFO_H
