#include "header/recv.h"
#include "header/database.h"
#include "header/udata.h"
#include "header/size.h"
#include <typeinfo>

using namespace std;

void Recv::Recv_main(udata* userdata, string msg)
{
    clnt_msg = msg;
    user_data = userdata;
    cout<<"첫메세지"<<clnt_msg<<endl;
    if(clnt_msg.find("login") == 0)
    {
        login();
    }
    else if(clnt_msg.find("check") == 0)
    {
        idCheck();
    }
    else if(clnt_msg.find("join") == 0)
    {
        joinUp();
    }    
    else if(clnt_msg.find("order") == 0)
    {
        orderUp();
    }    
}

void Recv::login()
{
    cout<<clnt_msg<<endl;
    vector<string> loginImfor = Recv::split(clnt_msg, '/');
    sprintf(query, "SELECT userPw FROM user where userId='%s'", loginImfor[1].c_str());
    if(mysql_query(&conn, query)!=0)
    {
        write(user_data->fd, "NO", sizeof("NO"));
        puts("database_error");
    }
    else
    {
        sql_result = mysql_store_result(&conn);
        sql_row = mysql_fetch_row(sql_result);
        if(sql_row && strcmp(loginImfor[2].c_str(), sql_row[0])==0)
        {
            write(user_data->fd, "OK", sizeof("OK"));
            puts("login_sucess"); 
        }
        else
        {
            write(user_data->fd, "NO", sizeof("NO"));
            puts("login_error");
        }          
        mysql_free_result(sql_result);
    }
}

void Recv::idCheck()
{
    cout<<clnt_msg<<endl;
    vector<string> check_msg = Recv::split(clnt_msg, '/');    
    sprintf(query, "SELECT * FROM user WHERE userId = '%s'", check_msg[1].c_str());
    if(mysql_query(&conn,query)!=0)
    {
        fprintf(stderr, "Failed to connect to databases: Error: %s\n",
        mysql_error(&conn));        
    } 
    else
    {
        sql_result = mysql_store_result(&conn);  
        if(sql_row = mysql_fetch_row(sql_result))
        {
            write(user_data->fd,"NO",sizeof("NO"));
            cout<<"NO"<<endl;
        }  
        else
        {
            write(user_data->fd,"OK",sizeof("OK"));
            cout<<"OK"<<endl;
        }        
    }   
}

void Recv::joinUp()
{
    sql_result = mysql_store_result(&conn);  
    cout<<clnt_msg<<endl;
    vector<string> sign_msg = Recv::split(clnt_msg, '/');    
   
    sprintf(query, "INSERT INTO user(userId, userPw) VALUES('%s','%s')", sign_msg[1].c_str(), sign_msg[2].c_str());
    if(mysql_query(&conn,query)!=0)
    {  
        fprintf(stderr, "Failed to connect to databases: Error: %s\n",
        mysql_error(&conn));
    }
    else{
        puts("Sign up Success!!");
    }
    mysql_free_result(sql_result);
}

void Recv::orderUp()
{
    sql_result = mysql_store_result(&conn);  
    cout<<clnt_msg<<endl;
    vector<string> order_msg = Recv::split(clnt_msg, '/');   

    sprintf(query, "UPDATE user SET userOrder = '%s' WHERE userId = '%s'", order_msg[2].c_str(), order_msg[1].c_str());

    if(mysql_query(&conn,query)!=0)
    {  
        fprintf(stderr, "Failed to connect to databases: Error: %s\n",
        mysql_error(&conn));
    }
    else{
        puts("Order up Success!!");
    }
    mysql_free_result(sql_result);
}

// void Recv::listUp()
// {
//     sql_result = mysql_store_result(&conn);  
//     cout<<clnt_msg<<endl;
//     vector<string> list_msg = Recv::split(clnt_msg, '/');   

//     sprintf(query, "UPDATE user SET userOrder FROM user WHERE userId = '%s'", list_msg[1].c_str());
//     if(mysql_query(&conn,query)!=0)
//     {
//         fprintf(stderr, "Failed to connect to databases: Error: %s\n",
//         mysql_error(&conn));        
//     } 
//     else
//     {
//         sql_result = mysql_store_result(&conn);  
//         while(sql_row = mysql_fetch_row(sql_result))
//         {            
//             cout<<sql_row[0]<<endl;        
//             string str;
//             str=sql_row[0];
//             write(user_data->fd,str.c_str(),str.length());
//         }               
//     }   
// }


vector<string> Recv::split(string str, char Delimiter)
{
    istringstream iss(str);             // istringstream에 str을 담는다.
    string buffer;                      // 구분자를 기준으로 절삭된 문자열이 담겨지는 버퍼 
    vector<string> result; 
    
    while (getline(iss, buffer, Delimiter)) {   // istringstream은 istream을 상속받으므로 getline을 사용할 수 있다.
        result.push_back(buffer);               // 절삭된 문자열을 vector에 저장
    }
 
    return result;
}