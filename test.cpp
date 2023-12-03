#include<mysql.h>
#include<iostream>
#include<string>
#include"StudentManagement.hpp"
#include"CourseManagement.hpp"
int main()
{
    // StudentManagement::GetInstance()->insert_student();
	// StudentManagement::GetInstance()->update_student();
	// StudentManagement::GetInstance()->delete_student();// 删除主码为1111的数据
	// StudentManagement::GetInstance()->select_students();

	CourseManagement::GetInstance()->insert_course();
	CourseManagement::GetInstance()->update_course();
	CourseManagement::GetInstance()->delete_course();
	CourseManagement::GetInstance()->select_course();

	return 0;
}