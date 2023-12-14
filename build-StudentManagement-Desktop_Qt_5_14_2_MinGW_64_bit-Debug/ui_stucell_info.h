/********************************************************************************
** Form generated from reading UI file 'stucell_info.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUCELL_INFO_H
#define UI_STUCELL_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_stucell_info
{
public:
    QGridLayout *gridLayout;
    QPushButton *SelectInfo;
    QPushButton *UpdateInfo;
    QTableView *tableView;

    void setupUi(QDialog *stucell_info)
    {
        if (stucell_info->objectName().isEmpty())
            stucell_info->setObjectName(QString::fromUtf8("stucell_info"));
        stucell_info->resize(311, 254);
        gridLayout = new QGridLayout(stucell_info);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        SelectInfo = new QPushButton(stucell_info);
        SelectInfo->setObjectName(QString::fromUtf8("SelectInfo"));

        gridLayout->addWidget(SelectInfo, 0, 0, 1, 1);

        UpdateInfo = new QPushButton(stucell_info);
        UpdateInfo->setObjectName(QString::fromUtf8("UpdateInfo"));

        gridLayout->addWidget(UpdateInfo, 0, 1, 1, 1);

        tableView = new QTableView(stucell_info);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 1, 0, 1, 2);


        retranslateUi(stucell_info);

        QMetaObject::connectSlotsByName(stucell_info);
    } // setupUi

    void retranslateUi(QDialog *stucell_info)
    {
        stucell_info->setWindowTitle(QCoreApplication::translate("stucell_info", "Dialog", nullptr));
        SelectInfo->setText(QCoreApplication::translate("stucell_info", "\346\237\245\347\234\213\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        UpdateInfo->setText(QCoreApplication::translate("stucell_info", "\344\277\256\346\224\271\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stucell_info: public Ui_stucell_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUCELL_INFO_H
