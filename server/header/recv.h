#ifndef __RECV_H_
#define __RECV_H_

#include <string>
#include <cstring>
#include <vector>
#include <sstream>
#include <unistd.h>
#include "udata.h"
#include "size.h"
#include "database.h"

using namespace std;

class Recv : public Database
{
    public:
        Recv(){}
        ~Recv() {}
        void Recv_main(udata *userdata, string clnt_msg);
        vector<string> split(string str, char Delimiter);
        void login();
        void idCheck();
        void joinUp();        
        void orderUp();   
        void listUp();
        void clearUp();         

    private:
        char query[SIZE_CONST::BUF_SIZE];
        udata* user_data;
        string clnt_msg;
};
#endif