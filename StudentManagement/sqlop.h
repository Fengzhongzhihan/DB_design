#ifndef SQLOP_H
#define SQLOP_H
#include <QtDebug>
#include <QSqlDatabase>
#include <QCoreApplication>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QDateTime>
#include <QMessageBox>

class sqlOP
{
public:
    sqlOP();
    static sqlOP* instance;
    static sqlOP* getInstance() {
        if(nullptr == instance ) {
            instance = new sqlOP();
        }
        return instance;
    }

    void init();

    //显示学生信息
    QVector<QStringList> getStudentInfos(QString strCondition="");
    //修改学生信息
    void updateStudentInfos(QStringList stuInfo);
    //显示课程信息
    QVector<QStringList> getCourseSetInfos(QString strCondition="");
    //选取课程
      void selectCourse(QString sid, QString courseSet_id);
      //退课
      void quitCourse(QString sid ,QString courseSet_id);
      //判断是否选过了
      bool isSelected(QString sid, QString courseSet_id);
      //选取学生已选的课程
      QVector<QStringList> showSelectedCourse(QString strCondition="");
      //显示成绩
      QVector<QStringList> getStuScore(QString strCondition="");
      //重修课程
      void reStudyCourse(QString sid, QString courseSet_id);
      //补考课程
      void reExamCourse(QString sid, QString courseSet_id);
      //显示奖惩情况
      QVector<QStringList> getPArecords(QString strCondition="");
      //显示老师信息
      QVector<QStringList> getTeachersInfos(QString strCondition="");
      //修改老师信息
      void updateTeacherInfos(QStringList stuInfo);
      //选择选课的学生
      QVector<QStringList> selectMyStudents(QString strCondition="");
      //判断是否是我的课程
      bool isMyClass(QString tid, QString courseSet_id);
      //设置分数
      bool setScore(QString sid, QString courseSet_id, QString score);
      //统计课程数据
     QVector<QStringList>  countScore(QString courseSet_id);
private:
    QSqlDatabase db;
};

#endif // SQLOP_H
