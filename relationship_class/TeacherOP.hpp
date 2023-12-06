#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<mysql.h>
using namespace std;

typedef struct Teacher
{
	string teacher_id,teacher_name,college_id;
}teacher;

class TeacherOP
{
public:
	TeacherOP()// 构造函数，初始化连接
	{
		if(connectDatabase())
			flag=1;
	}
	~TeacherOP()
	{
		mysql_close(&mysql)	;
		mysql_free_result(res);
	}
public:
	// 单例模式，表示在整个项目中，表示该类只需要有一个实例即可，在实现其他类时直接改名字照搬即可
	static TeacherOP* GetInstance()
	{
		static TeacherOP TeacherOP;
		if(TeacherOP.flag==1)
			return &TeacherOP;
		else 
		{
			cout<<"no access to mysql!!!"<<endl;
			return NULL;
		}
	}
public:
	bool insert_teacher(teacher &tea);
	bool update_teacher(teacher &tea);
	bool delete_teacher(string theteacherId);
	bool select_teachers(string condition="");// 默认为""表示没有条件，直接全选
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
bool TeacherOP::connectDatabase()
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

inline bool TeacherOP::insert_teacher(teacher &tea)
{
	char sql[1024];
	sprintf(sql,"insert into teacher values ('%s','%s','%s')",
	tea.teacher_id.c_str(),tea.teacher_name.c_str(),tea.college_id.c_str());
    
	if(mysql_query(&mysql,sql))
	{
		fprintf(stderr, "Faild to insert data : Error:%s\n", mysql_error(&mysql));
		return false;
	}
	else
	{
        int affected_rows = mysql_affected_rows(&mysql);
        if (affected_rows > 0) {
            cout<<"insert teacher inf success!"<<endl;
        } 
		else 
		{
           cout <<"No influence"<<endl;
		}
	}

	return true;
}

inline bool TeacherOP::update_teacher(teacher &tea)
{
	char sql[1024];
	sprintf(sql,"update teacher set teacher_name='%s',college_id='%s' where teacher_id='%s'",
	tea.teacher_name.c_str(),tea.college_id.c_str(), tea.teacher_id.c_str());
    
	if(mysql_query(&mysql,sql))
	{
		fprintf(stderr, "Faild to update data : Error:%s\n", mysql_error(&mysql));
		return false;
	}
	else
	{
        int affected_rows = mysql_affected_rows(&mysql);
        if (affected_rows > 0) {
            cout<<"update teacher inf success!"<<endl;
        } 
		else 
		{
           cout <<"No influence"<<endl;
		}
	}

	return true;
}

inline bool TeacherOP::delete_teacher(string theteacherId)
{
	char sql[1024];
	sprintf(sql,"delete from teacher where teacher_id='%s'",theteacherId.c_str());

	if(mysql_query(&mysql,sql))
	{
		fprintf(stderr, "Faild to delete data : Error:%s\n", mysql_error(&mysql));
		return false;
	}
	else
	{
        int affected_rows = mysql_affected_rows(&mysql);
        if (affected_rows > 0) {
            cout<<"delete teacher inf success!"<<endl;
        } 
		else 
		{
           cout <<"No influence"<<endl;
		}
	}

	return true;
}

inline bool TeacherOP::select_teachers(string condition)
{
    char sql[1024];
	sprintf(sql,"select * from teacher %s",condition.c_str());

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
			for(int i=0;i<3;i++)
				cout<<row[i]<<" ";
			cout<<endl;
		}
	}
	return true;
}
