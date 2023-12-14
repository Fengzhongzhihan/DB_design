#include "teacell_score.h"
#include "ui_teacell_score.h"
#include "sqlop.h"
teacell_score::teacell_score(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::teacell_score)
{
    ui->setupUi(this);
    ui->tableView->setModel(&m_model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

teacell_score::~teacell_score()
{
    delete ui;
}
