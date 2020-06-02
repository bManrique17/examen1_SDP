
#pragma once

#include <string>
#include "File.h"
#include "SoftwareManager.h"

class ClientAccount{
    private:
        std::string name;
        SoftwareManager* software_manager;
        File* file;
    public:
        ClientAccount(std::string);
        File* getFile();
        SoftwareManager* getSoftwareManager();
        ~ClientAccount();
};

