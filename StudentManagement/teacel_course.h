#ifndef TEACEL_COURSE_H
#define TEACEL_COURSE_H

#include <QDialog>
#include <QStandardItemModel>
namespace Ui {
class teacel_course;
}

class teacel_course : public QDialog
{
    Q_OBJECT

public:
    explicit teacel_course(QWidget *parent = nullptr);
    ~teacel_course();
void initPage(QString strCondition="");
    void setTid(QString id)
    {
        tid=id;
    }


private slots:
    void on_findCourse_clicked();

    void on_findMyCourse_clicked();

private:
    Ui::teacel_course *ui;
    QStandardItemModel m_model;
    QString tid;
};

#endif // TEACEL_COURSE_H
