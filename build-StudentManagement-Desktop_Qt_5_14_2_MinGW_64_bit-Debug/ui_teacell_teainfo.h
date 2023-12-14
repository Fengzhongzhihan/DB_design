/********************************************************************************
** Form generated from reading UI file 'teacell_teainfo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACELL_TEAINFO_H
#define UI_TEACELL_TEAINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_teacell_teaInfo
{
public:
    QGridLayout *gridLayout;
    QPushButton *showMyinfo;
    QPushButton *updateMyinfo;
    QTableView *tableView;

    void setupUi(QDialog *teacell_teaInfo)
    {
        if (teacell_teaInfo->objectName().isEmpty())
            teacell_teaInfo->setObjectName(QString::fromUtf8("teacell_teaInfo"));
        teacell_teaInfo->resize(521, 397);
        gridLayout = new QGridLayout(teacell_teaInfo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        showMyinfo = new QPushButton(teacell_teaInfo);
        showMyinfo->setObjectName(QString::fromUtf8("showMyinfo"));

        gridLayout->addWidget(showMyinfo, 0, 0, 1, 1);

        updateMyinfo = new QPushButton(teacell_teaInfo);
        updateMyinfo->setObjectName(QString::fromUtf8("updateMyinfo"));

        gridLayout->addWidget(updateMyinfo, 0, 1, 1, 1);

        tableView = new QTableView(teacell_teaInfo);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 1, 0, 1, 2);


        retranslateUi(teacell_teaInfo);

        QMetaObject::connectSlotsByName(teacell_teaInfo);
    } // setupUi

    void retranslateUi(QDialog *teacell_teaInfo)
    {
        teacell_teaInfo->setWindowTitle(QCoreApplication::translate("teacell_teaInfo", "Dialog", nullptr));
        showMyinfo->setText(QCoreApplication::translate("teacell_teaInfo", "\346\237\245\347\234\213\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        updateMyinfo->setText(QCoreApplication::translate("teacell_teaInfo", "\344\277\256\346\224\271\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teacell_teaInfo: public Ui_teacell_teaInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACELL_TEAINFO_H
