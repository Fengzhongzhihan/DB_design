#include"StudentOP.hpp"
#include"TakesOP.hpp"
#include"CourseSet.hpp"

class Stu_User
{
public:
    Stu_User(string theSid)
    {
        student_id=theSid;
    }
    //显示个人信息
    void showPersonalInfo();
    //按类型显示课程
    void showAvailableCoursesByClassification();
    //显示已选择的课程
    void showselectedCourses();
    //选课
    void selectTakes();
    //退课
    void deleteTakes();
    //查成绩
    void showMyScore();
    //申请补考
    void applyMakeUp();
    //申请重修
    void applyRebuild();
    //查看奖惩情况
    void showMyPA();
    //打印成绩
    void printMyScore();
private:
        string student_id;
};

void Stu_User::showPersonalInfo()
{
    string condition="where student_id ="+student_id;
    StudentOP::GetInstance()->select_students(condition);
}

inline void Stu_User::showAvailableCoursesByClassification()
{
    cout<<"choose classification you want to show "<<endl;
    cout<<"0. necessary  1. optical    2.all"<<endl;
    int op;cin>>op;
    if(op==2)


}
