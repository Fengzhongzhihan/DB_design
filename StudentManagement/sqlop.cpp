#include "sqlop.h"
#include "qmessagebox.h"

sqlOP::sqlOP()
{

}
sqlOP* sqlOP::instance =nullptr;

void sqlOP::init()
{
    db = QSqlDatabase::addDatabase("QMYSQL");

    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");//数据库服务器ip
    db.setUserName("root");//数据库用户名
    db.setPassword("123456");//数据库密码
    db.setDatabaseName("fzzh_base");//使用哪个数据库
    //端口号就使用默认的3306吧,因为在本地

    if( !db.open() )//打开数据库,如果返回false表示打开失败
    {
        QMessageBox::information(NULL,"错误","连接失败");//打开失败,显示错误信息
        return;
    }
    else
    {
        QMessageBox::warning(NULL,"恭喜~~~","Mysql连接成功！");
    }
}

QVector<QStringList> sqlOP::getStudentInfos(QString strCondition)
{
    QSqlQuery q(db);
    QString strSql =
            QString("select student_id, student_name, age,grade,classes ,"
                    "identity_id, sex ,college_name,major_name  from student "
                    "natural join collegemajor natural join college %1").arg(strCondition);
    QVector<QStringList> vec;
    bool ret = q.exec(strSql);
    if(!ret)
    {
       qDebug()<< q.lastError().text();
    }
    else
    {
        //一共多少列
        int iCols = q.record().count();
        //每次都读取一行数据
        QStringList l;
        while(q.next())
        {
            l.clear();
            for(int i =0;i<iCols;i++)
            {
                l<<q.value(i).toString();
            }
            vec.push_back(l);
        }
    }

    return vec;
}

void sqlOP::updateStudentInfos(QStringList stuInfo)
{
    QSqlQuery q(db);
    QString strSql = QString("update student set student_name = '%1',age='%2' ,grade='%3', classes ='%4', identity_id='%5', sex='%6', "
                             "major_id= (select major_id from collegemajor where major_name ='%7' )"
                             "where student_id ='%8' ").arg(stuInfo[0],stuInfo[1],stuInfo[2],stuInfo[3],stuInfo[4],stuInfo[5],stuInfo[6],stuInfo[7]);

    if(q.exec(strSql))
    {
        QMessageBox::information(NULL,"成功","修改学生信息成功!");
    }
    else
    {
        qDebug()<<q.lastError().text();
    }
}

QVector<QStringList> sqlOP::getCourseSetInfos(QString strCondition)
{
    QSqlQuery q(db);
    QString strSql =
            QString("select  courseSet_id,college_name,  course_name  , credit,classification, teacher_name, address_name, campus_name ,startWeek, endWeek, "
                    "DayOfWeek, section from (courseSet cs natural join college natural join course natural join time) join teacher t on t.teacher_id =cs.teacher_id %1").arg(strCondition);
    QVector<QStringList> vec;
    bool ret = q.exec(strSql);
    if(!ret)
    {
       qDebug()<< q.lastError().text();
    }
    else
    {
        //一共多少列
        int iCols = q.record().count();
        //每次都读取一行数据
        QStringList l;
        while(q.next())
        {
            l.clear();
            for(int i =0;i<iCols;i++)
            {
                l<<q.value(i).toString();
            }
            vec.push_back(l);
        }
    }
    return vec;
}

void sqlOP::selectCourse(QString sid, QString courseSet_id)
{
    QSqlQuery q(db);
    QString strSql=
            QString ("insert into takes values ('%1','%2','0'); ").arg(sid).arg(courseSet_id);
    if(q.exec(strSql))
    {
        QMessageBox::information(NULL,"成功","选课成功");
    }
    else
    {
       QMessageBox::warning(NULL,"错误","该课程已经选过了!");
    }
}

void sqlOP::quitCourse(QString sid, QString courseSet_id)
{
    QSqlQuery q(db);
    QString strSql=
            QString ("delete from takes where student_id='%1' and courseSet_id ='%2' ").arg(sid).arg(courseSet_id);
    if(q.exec(strSql))
    {
        QMessageBox::information(NULL,"成功","退课成功");
    }
    else
    {
       qDebug()<<q.lastError().text();
    }
}

bool sqlOP::isSelected(QString sid, QString courseSet_id)
{
    QSqlQuery q(db);
    QString strSql=
            QString ("select * from takes where student_id='%1' and courseSet_id= '%2' ").arg(sid).arg(courseSet_id);
    if(q.exec(strSql))
    {
        if(q.size())
           return true;
        else
            return false;
    }
    else
    {
        qDebug()<<q.lastError().text();
        return false;
    }
}

QVector<QStringList> sqlOP::showSelectedCourse(QString strCondition)
{
    QSqlQuery q(db);
    QString strSql =
            QString("select  courseSet_id,college_name,  course_name  , credit,classification, teacher_name, address_name, campus_name ,startWeek, endWeek, "
                    "DayOfWeek, section from (courseSet cs natural join college natural join course natural join time) "
                    "join teacher t on t.teacher_id =cs.teacher_id natural join takes %1").arg(strCondition);
    QVector<QStringList> vec;
    bool ret = q.exec(strSql);
    if(!ret)
    {
       qDebug()<< q.lastError().text();
    }
    else
    {
        //一共多少列
        int iCols = q.record().count();
        //每次都读取一行数据
        QStringList l;
        while(q.next())
        {
            l.clear();
            for(int i =0;i<iCols;i++)
            {
                l<<q.value(i).toString();
            }
            vec.push_back(l);
        }
    }
    return vec;
}

QVector<QStringList> sqlOP::getStuScore(QString strCondition)
{
    QSqlQuery q(db);
    QString strSql =
            QString("select courseSet_id, course_name, student_id, student_name, score "
                    "from student natural join takes natural join courseSet natural join course %1").arg(strCondition);

    QVector <QStringList> vec;
    bool ret = q.exec(strSql);
    if(!ret)
    {
       qDebug()<< q.lastError().text();
    }
    else
    {
        //一共多少列
        int iCols = q.record().count();
        //每次都读取一行数据
        QStringList l;
        while(q.next())
        {
            l.clear();
            for(int i =0;i<iCols;i++)
            {
                l<<q.value(i).toString();
            }
            vec.push_back(l);
        }
    }
    return vec;
}

//重修逻辑
void sqlOP::reStudyCourse(QString sid, QString courseSet_id)
{
    //退课即可
    QSqlQuery q(db);
    QString strSql=
            QString ("delete from takes where student_id='%1' and courseSet_id ='%2' ").arg(sid).arg(courseSet_id);
    if(q.exec(strSql))
    {
        QMessageBox::information(NULL,"成功","重修成功,现在你可以选择对应的课了");
    }
    else
    {
       qDebug()<<q.lastError().text();
    }
}

void sqlOP::reExamCourse(QString sid, QString courseSet_id)
{
    //把成绩置为0即可
    QSqlQuery q(db);
    QString strSql=
            QString ("update takes set score =0 where student_id='%1' and courseSet_id ='%2' ").arg(sid).arg(courseSet_id);
    if(q.exec(strSql))
    {
        QMessageBox::information(NULL,"成功","补考成功,注意关注考试通知哦!");
    }
    else
    {
       qDebug()<<q.lastError().text();
    }
}

QVector<QStringList> sqlOP::getPArecords(QString strCondition)
{
    QSqlQuery q(db);
    QString strSql =
            QString("select * from parecords %1 ").arg(strCondition);
    QVector<QStringList> vec;
    bool ret = q.exec(strSql);
    if(!ret)
    {
       qDebug()<< q.lastError().text();
    }
    else
    {
        //一共多少列
        int iCols = q.record().count();
        //每次都读取一行数据
        QStringList l;
        while(q.next())
        {
            l.clear();
            for(int i =0;i<iCols;i++)
            {
                l<<q.value(i).toString();
            }
            vec.push_back(l);
        }
    }
    return vec;
}

QVector<QStringList> sqlOP::getTeachersInfos(QString strCondition)
{
    QSqlQuery q(db);
    QString strSql =
            QString("select teacher_id, teacher_name ,college_name from teacher natural join college %1").arg(strCondition);
    QVector<QStringList> vec;
    bool ret = q.exec(strSql);
    if(!ret)
    {
       qDebug()<< q.lastError().text();
    }
    else
    {
        //一共多少列
        int iCols = q.record().count();
        //每次都读取一行数据
        QStringList l;
        while(q.next())
        {
            l.clear();
            for(int i =0;i<iCols;i++)
            {
                l<<q.value(i).toString();
            }
            vec.push_back(l);
        }
    }

    return vec;
}

void sqlOP::updateTeacherInfos(QStringList stuInfo)
{
    QSqlQuery q(db);
    QString strSql = QString("update teacher set teacher_name = '%1', "
                             "college_id= (select college_id from college where college_name ='%2' )"
                             "where teacher_id ='%3' ").arg(stuInfo[0],stuInfo[1],stuInfo[2]);

    if(q.exec(strSql))
    {
        QMessageBox::information(NULL,"成功","修改老师信息成功!");
    }
    else
    {
        qDebug()<<q.lastError().text();
    }
}

QVector<QStringList> sqlOP::selectMyStudents(QString strCondition)
{
    QSqlQuery q(db);
    QString strSql =
            QString("select student_id, student_name, age,grade,classes ,identity_id, sex ,college_name,major_name  "
                    "from student natural join collegemajor natural join college natural join takes %1").arg(strCondition);
    QVector<QStringList> vec;
    bool ret = q.exec(strSql);
    if(!ret)
    {
       qDebug()<< q.lastError().text();
    }
    else
    {
        //一共多少列
        int iCols = q.record().count();
        //每次都读取一行数据
        QStringList l;
        while(q.next())
        {
            l.clear();
            for(int i =0;i<iCols;i++)
            {
                l<<q.value(i).toString();
            }
            vec.push_back(l);
        }
    }

    return vec;
}

bool sqlOP::isMyClass(QString tid, QString courseSet_id)
{

    QSqlQuery q(db);
    QString strSql =
            QString("select * from  courseSet where teacher_id='%1' and courseSet_id='%2';").arg(tid).arg(courseSet_id);
    bool ret = q.exec(strSql);
    if(!ret)
    {
       qDebug()<< q.lastError().text();
    }
    else
    {
       if(q.size())
           return true;
       else
           return false;
    }
}

bool sqlOP::setScore(QString sid, QString courseSet_id, QString score)
{
    QSqlQuery q(db);
    QString strSql =
            QString("update takes  set score =%1 where student_id='%2' and courseSet_id='%3'").arg(score).arg(sid).arg(courseSet_id);
    bool ret = q.exec(strSql);
    if(!ret)
    {
       qDebug()<< q.lastError().text();
       return false;
    }
    else
    {
      return true;
    }

}

QVector<QStringList> sqlOP::countScore(QString courseSet_id)
{
    QSqlQuery q(db);
    QString strSql =
            QString("select avg_score, max_score, min_score ,count_ok,count_sum, (count_ok/count_sum)as passRate from (select avg(score) as avg_score,"
                    " max(score) as max_score, min(score) as min_score, count(*) as count_sum from takes where courseSet_id='%1' and score>0 )"
                    " as a natural join (select count(*) as count_ok from takes where score>=60)as b ").arg(courseSet_id);
    bool ret = q.exec(strSql);
    QVector<QStringList> vec;

    QStringList l;

    if(!ret)
    {
       qDebug()<< q.lastError().text();
    }
    else
    {
        //一共多少列
        int iCols = q.record().count();
        //每次都读取一行数据
        QStringList l;
        while(q.next())
        {
            l.clear();
            for(int i =0;i<iCols;i++)
            {
                l<<q.value(i).toString();
            }
            vec.push_back(l);
        }
    }
    return vec;
}



