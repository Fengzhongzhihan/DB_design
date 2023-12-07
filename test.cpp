#include<mysql.h>
#include<iostream>
#include<string>
#include"StudentOP.hpp"
#include"CourseOP.hpp"
#include"CollegeOP.hpp"
#include"TeacherOP.hpp"
#include"TimeOP.hpp"
#include"TakesOP.hpp"
#include"CourseSet.hpp"
#include"PArecords.hpp"
#include"CollegeMajor.hpp"
#include"Stu_User.hpp"

int main()
{
	// student stu1={"202200400053", "wyh",19,2022,2,"341102","男","1"};
	// StudentOP::GetInstance()->insert_student(stu1);
	// StudentOP::GetInstance()->update_student(stu1);
	// StudentOP::GetInstance()->delete_student("20220040005");
	// StudentOP::GetInstance()->select_students();

	// course cou1={"1001","DS",5};
	// course cou2={"1001","DB",5};
	// CourseOP::GetInstance()->insert_course(cou1);
	// CourseOP::GetInstance()->update_course(cou2);
	// CourseOP::GetInstance()->delete_course("100");
	// CourseOP::GetInstance()->select_course();

	// college col1={"112","计算机科学与技术学院"};
	// college col2={"111","微电子学院"};
	// CollegeOP::GetInstance()->insertCollege(col2);
	// // CollegeOP::GetInstance()->updateCollege(col2);
	// // CollegeOP::GetInstance()->deleteCollege("112");
	// CollegeOP::GetInstance()->selectCollege();

	
	// teacher tea={"1","zx","111"};
	// teacher tea2={"1","lw","111"};
	// TeacherOP::GetInstance()->insert_teacher(tea);
	// TeacherOP::GetInstance()->update_teacher(tea2);
	// TeacherOP::GetInstance()->delete_teacher("2");
	// TeacherOP::GetInstance()->select_teachers();

	// mtime t={"1",1,5,3,5};
	// mtime t2={"1",1,5,4,5};
	// TimeOP::GetInstance()->insert_Time(t);
	// TimeOP::GetInstance()->update_Time(t2);
	// // TimeOP::GetInstance()->delete_Time("1");
	// TimeOP::GetInstance()->select_Times();



	// takes t ={"202200400053","1",20};
	// takes t2 ={"202200400053","1",10};
	// TakesOP::GetInstance()->insert_takes(t);
	// TakesOP::GetInstance()->update_takes(t);
	// TakesOP::GetInstance()->delete_takes("10","20");
	// TakesOP::GetInstance()->select_takes();

	// courseSet cs={"1", "1", "1001", "振声院", "1", "111","青岛校区","必修"};
	// courseSet cs2={"1", "1", "1001", "振声院", "1", "111","软件园校区","必修"};
	// CourseSetOP::GetInstance()->insert_courseSet(cs);
	// CourseSetOP::GetInstance()->update_courseSet(cs2);
	// CourseSetOP::GetInstance()->delete_courseSet("2");
	// CourseSetOP::GetInstance()->select_courseSets();

	// PArecords pa={"202200400053","nb奖学金","2022-10-03"};
	// PArecords pa2={"202200400053","nb奖学金","2022-10-04"};
	// PArecordsOP::GetInstance()->insert_PArecords(pa);
	// PArecordsOP::GetInstance()->update_PArecords(pa2);
	// PArecordsOP::GetInstance()->delete_PArecords("202200400053","nb奖学金","2022-10-06");
	// PArecordsOP::GetInstance()->select_PArecords();

	// collegeMajor com={"1","111", "集成电路"};
	// collegeMajor com2={"1","111", "微电子"};
	// CollegeMajorOP::GetInstance()->insert_collegeMajor(com);
	// CollegeMajorOP::GetInstance()->update_collegeMajor(com2);
	// CollegeMajorOP::GetInstance()->delete_collegeMajor("微电");
	// CollegeMajorOP::GetInstance()->select_collegeMajors();

	Stu_User user1("202200400053");
	user1.showPersonalInfo();

}