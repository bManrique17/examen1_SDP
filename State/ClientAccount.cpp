

#include "ClientAccount.h"

#include "FreeLicense.h"

ClientAccount::ClientAccount(std::string _name){
    name = _name;
    file = new File("archivo");
    software_manager = new SoftwareManager();
    software_manager->setLicense(new FreeLicense());
}

File* ClientAccount::getFile(){
    return file;
}

SoftwareManager* ClientAccount::getSoftwareManager(){
    return software_manager;
}

ClientAccount::~ClientAccount(){
    delete file;
    delete software_manager;
}

