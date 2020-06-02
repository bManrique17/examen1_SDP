
#pragma once

#include "File.h"

class LicenseState{    
    public:        
        virtual void saveFile(File*) = 0;
        virtual void uploadFile(File*) = 0;
        virtual void shareFile(File*) = 0;
};
