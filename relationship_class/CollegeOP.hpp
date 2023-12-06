#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<mysql.h>
using namespace std;

typedef struct  College
{
    string college_id,college_name;
}college;

class CollegeOP
{
	public:

	static CollegeOP* GetInstance()
	{
		static CollegeOP collegeOP;
		if(collegeOP.flag==1)
			return &collegeOP;
		else 
		{
			cout<<"no access to mysql!!!"<<endl;
			return NULL;
		}
	}
    public:
        bool insertCollege(college& col);
        bool updateCollege(college& col);
        bool deleteCollege(string theCollegeName);
        bool selectCollege(string condition="");
        bool connectDatabase();

	CollegeOP()
	{
		if(connectDatabase())
			flag=1;
	}

	~CollegeOP()
	{
		mysql_close(&mysql)	;
		mysql_free_result(res);
	}

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

bool CollegeOP::insertCollege(college& col)
{
    char sql[1024];
	sprintf(sql,"insert into college values ('%s','%s')",
    col.college_id.c_str(),col.college_name.c_str());
    
	if(mysql_query(&mysql,sql))
	{
		fprintf(stderr, "Faild to insert data : Error:%s\n", mysql_error(&mysql));
		return false;
	}
	else
	{
		int affected_rows = mysql_affected_rows(&mysql);
        if (affected_rows > 0) {
            cout<<"insert college inf success!"<<endl;
        } 
		else 
		{
           cout <<"No influence"<<endl;
		}
	}

	return true;
}

inline bool CollegeOP::updateCollege(college &col)
{
    char sql[1024];
	sprintf(sql,"update college set  college_name='%s' where college_id='%s'",
    col.college_name.c_str(),col.college_id.c_str());
    
	if(mysql_query(&mysql,sql))
	{
		fprintf(stderr, "Faild to update data : Error:%s\n", mysql_error(&mysql));
		return false;
	}
	else
	{
		int affected_rows = mysql_affected_rows(&mysql);
        if (affected_rows > 0) {
            cout<<"update college inf success!"<<endl;
        } 
		else 
		{
           cout <<"No influence"<<endl;
		}
	}

	return true;
}

inline bool CollegeOP::deleteCollege(string theCollegeId)
{
	char sql[1024];
	sprintf(sql,"delete from college where college_id='%s'",theCollegeId.c_str());
    
	if(mysql_query(&mysql,sql))
	{
		fprintf(stderr, "Faild to delete data : Error:%s\n", mysql_error(&mysql));
		return false;
	}
	else
	{
		int affected_rows = mysql_affected_rows(&mysql);
        if (affected_rows > 0) {
            cout<<"delete college inf success!"<<endl;
        } 
		else 
		{
           cout <<"No influence"<<endl;
		}
	}

	return true;
}

inline bool CollegeOP::selectCollege(string condition)
{
	char sql[1024];
	sprintf(sql,"select * from college %s",condition.c_str());
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
			for(int i=0;i<2;i++)
				cout<<row[i]<<" ";
			cout<<endl;
		}
	}
}

inline bool CollegeOP::connectDatabase()
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
