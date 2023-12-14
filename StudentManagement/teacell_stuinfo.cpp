#include "teacell_stuinfo.h"
#include "ui_teacell_stuinfo.h"
#include "sqlop.h"
teacell_stuInfo::teacell_stuInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::teacell_stuInfo)
{
    ui->setupUi(this);
    ui->tableView->setModel(&m_model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

teacell_stuInfo::~teacell_stuInfo()
{
    delete ui;
}
