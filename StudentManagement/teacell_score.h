#ifndef TEACELL_SCORE_H
#define TEACELL_SCORE_H

#include <QDialog>
#include <QStandardItemModel>
namespace Ui {
class teacell_score;
}

class teacell_score : public QDialog
{
    Q_OBJECT

public:
    explicit teacell_score(QWidget *parent = nullptr);
    ~teacell_score();
    void initPage(QString strCondition="");
    void setTid(QString id)
    {
        tid=id;
    }
private:
    Ui::teacell_score *ui;
    QStandardItemModel m_model;
    QString tid;
};

#endif // TEACELL_SCORE_H
