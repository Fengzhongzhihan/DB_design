#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<mysql.h>
using namespace std;

typedef struct Student
{
	string student_id,student_name;
	int age,grade,classes;
	string identity_id,sex,major_id;
}student;

class StudentOP
{
public:
	StudentOP()// 构造函数，初始化连接
	{
		if(connectDatabase())
			flag=1;
	}
	~StudentOP()
	{
		mysql_close(&mysql)	;
		mysql_free_result(res);
	}
public:
	// 单例模式，表示在整个项目中，表示该类只需要有一个实例即可，在实现其他类时直接改名字照搬即可
	static StudentOP* GetInstance()
	{
		static StudentOP StudentOP;
		if(StudentOP.flag==1)
			return &StudentOP;
		else 
		{
			cout<<"no access to mysql!!!"<<endl;
			return NULL;
		}
	}
public:
	bool insert_student(student &stu);
	bool update_student(student &stu);
	bool delete_student(string theStudentId);
	bool select_students(string condition="");// 默认为""表示没有条件，直接全选
	bool connectDatabase();
private:
	MYSQL mysql;//用于连接
	MYSQL_RES *res;
	const char* host = "localhost";// 本地
	const char* user = "root";// 用户权限
	const char* psw = "WYH040114";// mysql设置的密码
	const char* database_name = "fzzh_base";// 数据库的名称
	const int port = 3306;// mysql端口号，一般使用3306即可
	int result=0; //检验是否成功操作的中间量
	int flag=0; //标志是否成功接入了数据库
};
bool StudentOP::connectDatabase()
{
    //初始化mysql连接
    mysql_init(&mysql);      
 
    if(!mysql_real_connect(&mysql, host, user, psw, database_name, port, NULL,0))
    {
        //中间分别是主机，用户名，密码，数据库名，端口号(可以写默认0或者3306等)，可以先写成参数再传进去
        cout<<"Error connecting to database:"<<endl<<mysql_error(&mysql)<<endl;
        return false;
    }
	return true;
}

inline bool StudentOP::insert_student(student &stu)
{
	char sql[1024];
	sprintf(sql,"insert into student values ('%s','%s',%d,%d,%d,'%s','%s','%s')",
	stu.student_id.c_str(),stu.student_name.c_str(),stu.age,stu.grade,stu.classes,
	stu.sex.c_str(),stu.identity_id.c_str(),stu.major_id.c_str());
    
	if(mysql_query(&mysql,sql))
	{
		fprintf(stderr, "Faild to insert data : Error:%s\n", mysql_error(&mysql));
		return false;
	}
	else
	{
		int affected_rows = mysql_affected_rows(&mysql);
        if (affected_rows > 0) {
            cout<<"insert student inf success!"<<endl;
        } 
		else 
		{
           cout <<"No influence"<<endl;
		}
	}

	return true;
}

inline bool StudentOP::update_student(student &stu)
{
	char sql[1024];
	sprintf(sql,"update student set student_name='%s',age=%d, grade=%d, classes=%d, sex='%s',identity_id='%s' ,major_id='%s' where student_id='%s'",
	stu.student_name.c_str(),stu.age,stu.grade,stu.classes,stu.sex.c_str(),stu.identity_id.c_str(),stu.major_id.c_str(),stu.student_id.c_str());
    
	if(mysql_query(&mysql,sql))
	{
		fprintf(stderr, "Faild to update data : Error:%s\n", mysql_error(&mysql));
		return false;
	}
	else
	{
		// 检查受影响的行数
        int affected_rows = mysql_affected_rows(&mysql);
        if (affected_rows > 0) {
            cout<<"update student inf success!"<<endl;
        } 
		else 
		{
           cout <<"No influence"<<endl;
		}
	}
	return true;
}

inline bool StudentOP::delete_student(string theStudentId)
{
	char sql[1024];
	sprintf(sql,"delete from student where student_id='%s'",theStudentId.c_str());

	if(mysql_query(&mysql,sql))
	{
		fprintf(stderr, "Faild to delete data : Error:%s\n", mysql_error(&mysql));
		return false;
	}
	else
	{
		int affected_rows = mysql_affected_rows(&mysql);
        if (affected_rows > 0) {
            cout<<"delete student inf success!"<<endl;
        } 
		else 
		{
           cout <<"No influence"<<endl;
		}
	}

	return true;
}

inline bool StudentOP::select_students(string condition)
{
    char sql[1024];
	sprintf(sql,"select * from student %s",condition.c_str());

	if(mysql_query(&mysql,sql))
	{
		fprintf(stderr, "Faild to select data : Error:%s\n", mysql_error(&mysql));
		return false;
	}
	else
	{
		MYSQL_RES* res = mysql_store_result(&mysql);
		MYSQL_ROW row;// 可以读取查询结果的一行
		while ((row = mysql_fetch_row(res))!=NULL)// 读取一行并删除一行
		{
			for(int i=0;i<8;i++)
				cout<<row[i]<<" ";
			cout<<endl;
		}
	}
	return true;
}
