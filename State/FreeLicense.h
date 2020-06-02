
#pragma once

#include "LicenseState.h"

class FreeLicense : public LicenseState{
    public:
        FreeLicense();
        void saveFile(File*) override;
        void uploadFile(File*) override;
        void shareFile(File*) override;
        ~FreeLicense();
};
