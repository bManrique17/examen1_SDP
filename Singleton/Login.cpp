
#include "Login.h"

Login* Login::instance = nullptr;

Login::Login(){
    
}

Login* Login::getInstance(){
    if (Login::instance != nullptr)
        Login::instance = new Login();        
    return Login::instance;
}

bool Login::validateInfo(string user, string pass){
    //query to a database
    return true;
}

Login::~Login(){
    
}