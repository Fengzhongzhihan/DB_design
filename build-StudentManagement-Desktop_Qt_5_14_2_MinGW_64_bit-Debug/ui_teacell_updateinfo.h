/********************************************************************************
** Form generated from reading UI file 'teacell_updateinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACELL_UPDATEINFO_H
#define UI_TEACELL_UPDATEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_teacell_updateInfo
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *name;
    QPushButton *cancelButton;
    QComboBox *college;
    QPushButton *commitButton;
    QLabel *label;

    void setupUi(QDialog *teacell_updateInfo)
    {
        if (teacell_updateInfo->objectName().isEmpty())
            teacell_updateInfo->setObjectName(QString::fromUtf8("teacell_updateInfo"));
        teacell_updateInfo->resize(400, 300);
        gridLayout = new QGridLayout(teacell_updateInfo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(teacell_updateInfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        name = new QLineEdit(teacell_updateInfo);
        name->setObjectName(QString::fromUtf8("name"));

        gridLayout->addWidget(name, 0, 1, 1, 2);

        cancelButton = new QPushButton(teacell_updateInfo);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        gridLayout->addWidget(cancelButton, 2, 2, 1, 1);

        college = new QComboBox(teacell_updateInfo);
        college->addItem(QString());
        college->addItem(QString());
        college->setObjectName(QString::fromUtf8("college"));

        gridLayout->addWidget(college, 1, 1, 1, 2);

        commitButton = new QPushButton(teacell_updateInfo);
        commitButton->setObjectName(QString::fromUtf8("commitButton"));

        gridLayout->addWidget(commitButton, 2, 0, 1, 2);

        label = new QLabel(teacell_updateInfo);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(teacell_updateInfo);

        QMetaObject::connectSlotsByName(teacell_updateInfo);
    } // setupUi

    void retranslateUi(QDialog *teacell_updateInfo)
    {
        teacell_updateInfo->setWindowTitle(QCoreApplication::translate("teacell_updateInfo", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("teacell_updateInfo", "\345\255\246\351\231\242", nullptr));
        cancelButton->setText(QCoreApplication::translate("teacell_updateInfo", "\345\217\226\346\266\210", nullptr));
        college->setItemText(0, QCoreApplication::translate("teacell_updateInfo", "\350\256\241\347\256\227\346\234\272\347\247\221\345\255\246\344\270\216\346\212\200\346\234\257\345\255\246\351\231\242", nullptr));
        college->setItemText(1, QCoreApplication::translate("teacell_updateInfo", "\351\233\206\346\210\220\347\224\265\350\267\257\345\255\246\351\231\242", nullptr));

        commitButton->setText(QCoreApplication::translate("teacell_updateInfo", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("teacell_updateInfo", "\345\247\223\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teacell_updateInfo: public Ui_teacell_updateInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACELL_UPDATEINFO_H
