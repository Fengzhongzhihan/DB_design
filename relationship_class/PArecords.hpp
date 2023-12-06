#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<mysql.h>
using namespace std;

typedef struct PArecords
{
	string student_id ,PAsort,time;
}PArecords;

class PArecordsOP
{
public:
	PArecordsOP()// 构造函数，初始化连接
	{
		if(connectDatabase())
			flag=1;
	}
	~PArecordsOP()
	{
		mysql_close(&mysql)	;
		mysql_free_result(res);
	}
public:
	// 单例模式，表示在整个项目中，表示该类只需要有一个实例即可，在实现其他类时直接改名字照搬即可
	static PArecordsOP* GetInstance()
	{
		static PArecordsOP PArecordsOP;
		if(PArecordsOP.flag==1)
			return &PArecordsOP;
		else 
		{
			cout<<"no access to mysql!!!"<<endl;
			return NULL;
		}
	}
public:
	bool insert_PArecords(PArecords &rec);
	bool update_PArecords(PArecords &rec);
	bool delete_PArecords(string theStudentId,string thePASort,string theTime);
	bool select_PArecords(string condition="");// 默认为""表示没有条件，直接全选
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
bool PArecordsOP::connectDatabase()
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

inline bool PArecordsOP::insert_PArecords(PArecords &rec)
{
	char sql[1024];
	sprintf(sql,"insert into PArecords values ('%s','%s','%s')",rec.student_id.c_str(),rec.PAsort.c_str(), rec.time.c_str());


	if(mysql_query(&mysql,sql))
	{
		fprintf(stderr, "Faild to insert data : Error:%s\n", mysql_error(&mysql));
		return false;
	}
	else
	{
		int affected_rows = mysql_affected_rows(&mysql);
        if (affected_rows > 0) {
            cout<<"insert PArecords inf success!"<<endl;
        } 
		else 
		{
           cout <<"No influence"<<endl;
		}
	}

	return true;
}

inline bool PArecordsOP::update_PArecords(PArecords &rec)
{
	char sql[1024];
	sprintf(sql,"update PArecords set time='%s',PAsort= '%s' where student_id='%s'", rec.time.c_str(), rec.PAsort.c_str(), rec.student_id.c_str()); 
    
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
            cout<<"update PArecords inf success!"<<endl;
        } 
		else 
		{
           cout <<"No influence"<<endl;
		}
	}
	return true;
}

inline bool PArecordsOP::delete_PArecords(string theStudentId,string thePASort,string theTime)
{
	char sql[1024];
	sprintf(sql,"delete from PArecords where student_id='%s' and PAsort='%s' and time='%s'",theStudentId.c_str(),thePASort.c_str(),theTime.c_str());

	if(mysql_query(&mysql,sql))
	{
		fprintf(stderr, "Faild to delete data : Error:%s\n", mysql_error(&mysql));
		return false;
	}
	else
	{
		int affected_rows = mysql_affected_rows(&mysql);
        if (affected_rows > 0) {
            cout<<"delete PArecords inf success!"<<endl;
        } 
		else 
		{
           cout <<"No influence"<<endl;
		}
	}

	return true;
}

inline bool PArecordsOP::select_PArecords(string condition)
{
    char sql[1024];
	sprintf(sql,"select * from PArecords %s",condition.c_str());

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
