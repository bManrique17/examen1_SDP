
#pragma once

#include "LicenseState.h"

class PremiunLicense : public LicenseState{
    public:
        PremiunLicense();
        void saveFile(File*) override;
        void uploadFile(File*) override;
        void shareFile(File*) override;
        ~PremiunLicense();
};
