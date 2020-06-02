
#pragma once

#include <iostream>

using namespace std;

class Login{
    private:
        static Login* instance;    
        Login();
    public:
        static Login* getInstance();
        bool validateInfo(string,string);        
        ~Login();    
};
