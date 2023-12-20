#include "adcell1_college.h"
#include "ui_adcell1_college.h"
#include"sqlop.h"
#include<QAxObject>
#include<QFileDialog>
#include <QDesktopServices>
#include<adcell2_addcollege.h>
#include <adcell2_addmajor.h>

adcell1_college::adcell1_college(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adcell1_college)
{
    ui->setupUi(this);
    ui->tableView->setModel(&m_model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

adcell1_college::~adcell1_college()
{
    delete ui;
}

void adcell1_college::on_btn_search_clicked()
{
    QString collegeInfo = ui->collegeInfo->text();
    QString strCondition;
    if(collegeInfo == "")
    {
        strCondition = "";
    }
    else
    {
        strCondition = QString("where college_id REGEXP '%1' or college_name REGEXP '%1'").arg(collegeInfo);
    }
    initPage(strCondition);
}

void adcell1_college::initPage(QString strCondition)
{
    auto l=sqlOP::getInstance()->getCollegeInfos(strCondition);
    m_model.clear();
    m_model.setHorizontalHeaderLabels(QStringList{"学院编号","学院名","专业编号","专业名称"});
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    for(int i=0;i<l.size();i++)
    {
        QList<QStandardItem*> items;
        for(int j=0;j<l[i].size();j++)
            items.append(new QStandardItem(l[i][j]));
        m_model.appendRow(items);
    }
}

void adcell1_college::on_btn_print_clicked()
{
    //获取第一列表头名
   QString firstName= m_model.headerData(0,Qt::Horizontal, Qt::DisplayRole).toString();
   if(firstName!="学院编号")
   {
       QMessageBox::warning(NULL,"错误","请显示出学院界面再进行打印!");
       return;
   }
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save as..."),
                                                         QString(), tr("EXCEL files (*.xls *.xlsx)"));
         if (fileName!="")
         {
             QAxObject *excel = new QAxObject;
             if (excel->setControl("Excel.Application")) //连接Excel控件
             {
                 excel->dynamicCall("SetVisible (bool Visible)","false");//不显示窗体
                 excel->setProperty("DisplayAlerts", false);//不显示任何警告信息。如果为true那么在关闭是会出现类似“文件已修改，是否保存”的提示
                 QAxObject *workbooks = excel->querySubObject("WorkBooks");//获取工作簿集合
                 workbooks->dynamicCall("Add");//新建一个工作簿
                 QAxObject *workbook = excel->querySubObject("ActiveWorkBook");//获取当前工作簿
                 QAxObject *worksheet = workbook->querySubObject("Worksheets(int)", 1);

                 int i,j;
                 //获取数据的列数
                 int colcount=m_model.columnCount();
                  //获取数据的行数
                 int rowcount=m_model.rowCount();

                 QAxObject *cell,*col;
                 //标题行
                 cell=worksheet->querySubObject("Cells(int,int)", 1, 1);
                 cell->dynamicCall("SetValue(const QString&)", "学院记录");
                 cell->querySubObject("Font")->setProperty("Size", 18);
                 //调整行高
                 worksheet->querySubObject("Range(const QString&)", "1:1")->setProperty("RowHeight", 30);
                 //合并标题行
                 QString cellTitle;
                 cellTitle.append("A1:");
                 cellTitle.append(QChar(colcount - 1 + 'A'));
                 cellTitle.append(QString::number(1));
                 QAxObject *range = worksheet->querySubObject("Range(const QString&)", cellTitle);
                 range->setProperty("WrapText", true);
                 range->setProperty("MergeCells", true);
                 range->setProperty("HorizontalAlignment", -4108);//xlCenter
                 range->setProperty("VerticalAlignment", -4108);//xlCenter
                 //列标题
                 for(i=0;i<colcount;i++)
                 {
                     QString columnName;
                     columnName.append(QChar(i  + 'A'));
                     columnName.append(":");
                     columnName.append(QChar(i + 'A'));
                     col = worksheet->querySubObject("Columns(const QString&)", columnName);
                     col->setProperty("ColumnWidth", ui->tableView->columnWidth(i)/6);
                     cell=worksheet->querySubObject("Cells(int,int)", 2, i+1);
                     //QTableWidget 获取表格头部文字信息
                     columnName=m_model.headerData(i,Qt::Horizontal,Qt::DisplayRole).toString();;
                     //QTableView 获取表格头部文字信息
                     // columnName=ui->tableView_right->model()->headerData(i,Qt::Horizontal,Qt::DisplayRole).toString();
                     cell->dynamicCall("SetValue(const QString&)", columnName);
                     cell->querySubObject("Font")->setProperty("Bold", true);
                     cell->querySubObject("Interior")->setProperty("Color",QColor(191, 191, 191));
                     cell->setProperty("HorizontalAlignment", -4108);//xlCenter
                     cell->setProperty("VerticalAlignment", -4108);//xlCenter
                 }

                //数据区

                //QTableWidget 获取表格数据部分
                 for(i=0;i<rowcount;i++){
                     for (j=0;j<colcount;j++)
                     {
                         worksheet->querySubObject("Cells(int,int)", i+3, j+1)->dynamicCall("SetValue(const QString&)",
                        m_model.item(i,j)?m_model.item(i,j)->text():"");
                     }
                 }


    //            QTableView 获取表格数据部分
    //              for(i=0;i<rowcount;i++) //行数
    //                 {
    //                     for (j=0;j<colcount;j++)   //列数
    //                     {
    //                         QModelIndex index = ui->tableView_right->model()->index(i, j);
    //                         QString strdata=ui->tableView_right->model()->data(index).toString();
    //                         worksheet->querySubObject("Cells(int,int)", i+3, j+1)->dynamicCall("SetValue(const QString&)", strdata);
    //                     }
    //                 }


                 //画框线
                 QString lrange;
                 lrange.append("A2:");
                 lrange.append(colcount - 1 + 'A');
                 lrange.append(QString::number(rowcount + 2));
                 range = worksheet->querySubObject("Range(const QString&)", lrange);
                 range->querySubObject("Borders")->setProperty("LineStyle", QString::number(1));
                 range->querySubObject("Borders")->setProperty("Color", QColor(0, 0, 0));
                 //调整数据区行高
                 QString rowsName;
                 rowsName.append("2:");
                 rowsName.append(QString::number(rowcount + 2));
                 range = worksheet->querySubObject("Range(const QString&)", rowsName);
                 range->setProperty("RowHeight", 20);
                 workbook->dynamicCall("SaveAs(const QString&)",QDir::toNativeSeparators(fileName));//保存至fileName
                 workbook->dynamicCall("Close()");//关闭工作簿
                 excel->dynamicCall("Quit()");//关闭excel
                 delete excel;
                 excel=NULL;
                 if (QMessageBox::question(NULL,"完成","文件已经导出，是否现在打开？",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
                 {
                     QDesktopServices::openUrl(QUrl("file:///" + QDir::toNativeSeparators(fileName)));
                 }
             }
             else
             {
                 QMessageBox::warning(NULL,"错误","未能创建 Excel 对象，请安装 Microsoft Excel。",QMessageBox::Apply);
             }
         }
}

void adcell1_college::on_btn_deletemajor_clicked()
{
    int r = ui->tableView->currentIndex().row();
    if(r<0)
    {
        QMessageBox::warning(this,"错误","请选择你想要删除的专业!");
    }
    else
    {
        if(m_model.item(r,2)==NULL)
        {
           QMessageBox::warning(NULL,"错误","专业不存在,请选择你想要删除的专业!");
           return;
        }

        QString major_id=m_model.item(r,2)->text();
        sqlOP::getInstance()->deleteMajorInfos(major_id);
    }
   initPage();
}

void adcell1_college::on_btn_deleteCollege_clicked()
{
    int r = ui->tableView->currentIndex().row();
    if(r<0)
    {
        QMessageBox::warning(this,"错误","请选择你想要删除的学院!");
    }
    else
    {
        QString college_id=m_model.item(r,0)->text();
        sqlOP::getInstance()->deleteCollegeInfos(college_id);
    }
    initPage();
}

void adcell1_college::on_btn_addCollege_clicked()
{
    adcell2_addCollege * addColl = new adcell2_addCollege(this);
    addColl->exec();
    initPage();
}

void adcell1_college::on_btn_addmajor_clicked()
{
    adcell2_addMajor * addMajor =new adcell2_addMajor(this);
    addMajor->exec();
    initPage();
}
