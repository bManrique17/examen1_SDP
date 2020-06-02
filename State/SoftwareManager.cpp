
#include "SoftwareManager.h"

SoftwareManager::SoftwareManager(){
}

void SoftwareManager::saveFile(File* file){
    licenseState->saveFile(file);
}

void SoftwareManager::uploadFile(File* file){
    licenseState->uploadFile(file);
}

void SoftwareManager::shareFile(File* file){
    licenseState->shareFile(file);
}

void SoftwareManager::setLicense(LicenseState* state){
    licenseState = state;
}

LicenseState* SoftwareManager::getLicense(){
    return licenseState;
}

SoftwareManager::~SoftwareManager(){
    delete licenseState;
}
