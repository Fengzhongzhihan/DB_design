#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<mysql.h>
using namespace std;

typedef struct Course
{
    string cid,cname,classification;
    int credit;
};

class CourseManagement
{
public:
	CourseManagement()// 构造函数，初始化连接
	{
		if(connectDatabase())
			flag=1;
	}
	~CourseManagement()
	{
		mysql_close(&mysql)	;
		mysql_free_result(res);
	}
public:
	// 单例模式，表示在整个项目中，表示该类只需要有一个实例即可，在实现其他类时直接改名字照搬即可
	static CourseManagement* GetInstance()
	{
		static CourseManagement courseManagement;
		if(courseManagement.flag==1)
			return &courseManagement;
		else 
		{
			cout<<"no access to mysql!!!"<<endl;
		}
	}
public:
	bool insert_course();
	bool update_course();
	bool delete_course();
	bool select_course();// 默认为""表示没有条件，直接全选
	void createCourse();
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
	Course course;
};

inline void CourseManagement::createCourse()
{
    cin>>course.cid>>course.cname>>course.credit>>course.classification;
}
inline bool CourseManagement::insert_course()
{
    char sql[1024];
	cout<<"请输入你想要插入的课程信息:课程号,课程名,学分,课程类别"<<endl;
	createCourse();
	sprintf(sql,"insert into course values ('%s','%s',%d,'%s')",
    course.cid.c_str(), course.cname.c_str(), course.credit, course.classification.c_str());
    
	if(mysql_query(&mysql,sql))
	{
		fprintf(stderr, "Faild to insert data : Error:%s\n", mysql_error(&mysql));
		return false;
	}
	else
	{
		cout<<"插入课程信息成功!"<<endl;
	}

	return true;
}

inline bool CourseManagement::update_course()
{
    char sql[1024];
	cout<<"请输入你想要修改的课程信息:课程号,课程名,学分,课程类别"<<endl;
	createCourse();
	sprintf(sql,"update course set  cname='%s', credit=%d, classification='%s' where cid='%s'",
     course.cname.c_str(), course.credit, course.classification.c_str(),course.cid.c_str());
    
	if(mysql_query(&mysql,sql))
	{
		fprintf(stderr, "Faild to update data : Error:%s\n", mysql_error(&mysql));
		return false;
	}
	else
	{
		cout<<"修改课程信息成功!"<<endl;
	}

	return true;
}

inline bool CourseManagement::delete_course()
{
    char sql[1024];
	cout<<"请输入你想要删除的课程号"<<endl;
	string cid;cin>>cid;
	sprintf(sql,"delete from course where cid='%s'",cid.c_str());
    
	if(mysql_query(&mysql,sql))
	{
		fprintf(stderr, "Faild to delete data : Error:%s\n", mysql_error(&mysql));
		return false;
	}
	else
	{
		cout<<"删除课程信息成功!"<<endl;
	}

	return true;
}

inline bool CourseManagement::select_course()
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

	sprintf(sql,"select * from course %s",condition.c_str());
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
			for(int i=0;i<4;i++)
				cout<<row[i]<<" ";
			cout<<endl;
		}
	}

	return true;
}


bool CourseManagement::connectDatabase()
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

    //创建课程表
    char *drop_table_query = "DROP TABLE IF EXISTS course";
    result =mysql_query(&mysql, drop_table_query);
    if(result)
    {
        cout<<"course表删除失败"<<endl;
    }
    
    char* create_table_query="CREATE TABLE course(cid varchar(20), cname varchar(10), credit int, classification varchar(10))";
 
    if (mysql_query(&mysql, create_table_query))
    {
        cout << "course表创建失败!" << endl<<mysql_error(&mysql) << endl;
        return false;
    }
    else
    {
        cout << "course表创建成功......"<<endl;
    }
	return true;
}


