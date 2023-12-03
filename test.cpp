#include<mysql.h>
#include<iostream>
#include<string>
#include"StudentManagement.h"
int main()
{
    StudentManagement::GetInstance()->insert_student();
	StudentManagement::GetInstance()->update_student();
	StudentManagement::GetInstance()->delete_student();// 删除主码为1111的数据
	StudentManagement::GetInstance()->select_students();
	
	return 0;
}