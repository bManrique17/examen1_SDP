
#pragma once

#include "LicenseState.h"

class SoftwareManager{
    private:
        LicenseState* licenseState;
    public:
        SoftwareManager();
        void saveFile(File*);
        void uploadFile(File*);
        void shareFile(File*);
        void setLicense(LicenseState*);
        LicenseState* getLicense();
        ~SoftwareManager();
};
