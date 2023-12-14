/********************************************************************************
** Form generated from reading UI file 'stucell_pa.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUCELL_PA_H
#define UI_STUCELL_PA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_stucell_pa
{
public:
    QGridLayout *gridLayout;
    QPushButton *showPA;
    QTableView *tableView;

    void setupUi(QDialog *stucell_pa)
    {
        if (stucell_pa->objectName().isEmpty())
            stucell_pa->setObjectName(QString::fromUtf8("stucell_pa"));
        stucell_pa->resize(400, 300);
        gridLayout = new QGridLayout(stucell_pa);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        showPA = new QPushButton(stucell_pa);
        showPA->setObjectName(QString::fromUtf8("showPA"));

        gridLayout->addWidget(showPA, 0, 0, 1, 1);

        tableView = new QTableView(stucell_pa);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 1, 0, 1, 1);


        retranslateUi(stucell_pa);

        QMetaObject::connectSlotsByName(stucell_pa);
    } // setupUi

    void retranslateUi(QDialog *stucell_pa)
    {
        stucell_pa->setWindowTitle(QCoreApplication::translate("stucell_pa", "Dialog", nullptr));
        showPA->setText(QCoreApplication::translate("stucell_pa", "\346\237\245\347\234\213\344\270\252\344\272\272\345\245\226\346\203\251\346\203\205\345\206\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stucell_pa: public Ui_stucell_pa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUCELL_PA_H
