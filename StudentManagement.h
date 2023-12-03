#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;

typedef struct Student
{
	string sid,name,sex,identy_id;
	int age,grade,classes;
}student;

class StudentManagement
{
public:
	StudentManagement()// 构造函数，初始化连接
	{
		if(connectDatabase())
			flag=1;
	}
	~StudentManagement()
	{
		mysql_close(&mysql)	;
		mysql_free_result(res);
	}
public:
	// 单例模式，表示在整个项目中，表示该类只需要有一个实例即可，在实现其他类时直接改名字照搬即可
	static StudentManagement* GetInstance()
	{
		static StudentManagement StudentManagement;
		if(StudentManagement.flag==1)
			return &StudentManagement;
		else 
		{
			cout<<"no access to mysql!!!"<<endl;
		}
	}
public:
	bool insert_student();
	bool update_student();
	bool delete_student();
	bool select_students();// 默认为""表示没有条件，直接全选
	bool connectDatabase();
	void createStudent();

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
	student stu;
};
bool StudentManagement::connectDatabase()
{
    //初始化mysql连接
    mysql_init(&mysql);      
 
    if(!mysql_real_connect(&mysql, host, user, psw, NULL, port, NULL,0))
    {
        //中间分别是主机，用户名，密码，数据库名，端口号(可以写默认0或者3306等)，可以先写成参数再传进去
        cout<<"Error connecting to database:"<<endl<<mysql_error(&mysql)<<endl;
        return false;
    }
    else
    {
        cout<<"Connect success!"<<endl;
    }

//  从新建立一个数据库fzzh_base
    char *drop_db_query = "DROP DATABASE IF EXISTS fzzh_base";
    result=mysql_query(&mysql, drop_db_query);
	if(result)
	{
		cout<<"已有库删除失败"<<endl;
		return false;
	}
    char*  create_db_query= "CREATE DATABASE IF NOT EXISTS fzzh_base";
 
    result=mysql_query(&mysql,create_db_query);
    if(result)
    {
        cout<<"库创建失败！"<<endl;
        return false;
    }
    else
    {
        cout<<"fzzh_base 库创建成功......"<<endl;
    }
 
//选择建立好的数据库
    if (mysql_select_db(&mysql, database_name)) 
    {
        cout<<"选择数据库失败！"<<endl<<mysql_error(&mysql)<<endl;
        return false;
    }
	else 
	{
		cout<<"选择数据库成功!"<<endl;
	}

    //创建学生表
    char *drop_table_query = "DROP TABLE IF EXISTS student";
    result =mysql_query(&mysql, drop_table_query);
    if(result)
    {
        cout<<"student表删除失败"<<endl;
    }
    
    char* create_table_query="CREATE TABLE student( sid VARCHAR(20), name VARCHAR(5), age int, grade int, classes int, sex char(2),identy_id varchar(30))";
 
    if (mysql_query(&mysql, create_table_query))
    {
        cout << "student表创建失败!" << endl<<mysql_error(&mysql) << endl;
        return false;
    }
    else
    {
        cout << "student表创建成功......"<<endl;
    }
	return true;
}

inline void StudentManagement::createStudent()
{
	cin>>stu.sid>>stu.name>>stu.age>>stu.grade>>stu.classes>>stu.sex>>stu.identy_id;
}

inline bool StudentManagement::insert_student()
{
	char sql[1024];
	cout<<"请输入你想要输插入的学生信息:学号,姓名,年龄,年级,班级,性别,身份证号码"<<endl;
	createStudent();
	sprintf(sql,"insert into student values ('%s','%s',%d,%d,%d,'%s','%s')",
	stu.sid.c_str(),stu.name.c_str(),stu.age,stu.grade,stu.classes,stu.sex.c_str(),stu.identy_id.c_str());
    
	if(mysql_query(&mysql,sql))
	{
		fprintf(stderr, "Faild to insert data : Error:%s\n", mysql_error(&mysql));
		return false;
	}
	else
	{
		cout<<"插入学生信息成功!"<<endl;
	}

	return true;
}

inline bool StudentManagement::update_student()
{
	char sql[1024];
	cout<<"请输入你想要修改的学生信息:学号,姓名,年龄,年级,班级,性别,身份证号码"<<endl;
	createStudent();
	sprintf(sql,"update student set name='%s',age=%d, grade=%d, classes=%d, sex='%s',identy_id='%s' where sid='%s'",
	stu.name.c_str(),stu.age,stu.grade,stu.classes,stu.sex.c_str(),stu.identy_id.c_str(),stu.sid.c_str());
    
	if(mysql_query(&mysql,sql))
	{
		fprintf(stderr, "Faild to update data : Error:%s\n", mysql_error(&mysql));
		return false;
	}
	else
	{
		cout<<"修改学生信息成功!"<<endl;
	}

	return true;
}

inline bool StudentManagement::delete_student()
{
	char sql[1024];
	cout<<"请输入你想要删除的学生的学号"<<endl;
	string sid;cin>>sid;
	sprintf(sql,"delete from student where sid='%s'",sid.c_str());
    
	if(mysql_query(&mysql,sql))
	{
		fprintf(stderr, "Faild to delete data : Error:%s\n", mysql_error(&mysql));
		return false;
	}
	else
	{
		cout<<"删除学生信息成功!"<<endl;
	}

	return true;
}

inline bool StudentManagement::select_students()
{
    char sql[1024];
	string condition="";
	int op;
	cout<<"是否全部选择? Yes: 0 No: 1"<<endl;
	cin>>op;
	if(op==1)
	{
		cout<<"请输入你的select sql"<<endl;
			cin>>condition;
	}

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
			for(int i=0;i<7;i++)
				cout<<row[i]<<" ";
			cout<<endl;
		}
	}

	return true;
}
