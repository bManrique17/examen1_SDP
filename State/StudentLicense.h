
#pragma once

#include "LicenseState.h"

class StudentLicense : public LicenseState{
    public:
        StudentLicense();
        void saveFile(File*) override;
        void uploadFile(File*) override;
        void shareFile(File*) override;
        ~StudentLicense();
};
