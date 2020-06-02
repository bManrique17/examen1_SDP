
#include "PremiunLicense.h"

#include <iostream>

using std::cout;
using std::endl;

PremiunLicense::PremiunLicense(){

}

void PremiunLicense::saveFile(File* file){
    cout<<"Guardando "<<file->getName()<<" como premiun"<<endl;
}

void PremiunLicense::uploadFile(File* file){
    cout<<"Subiendo "<<file->getName()<<" como premiun"<<endl;
}

void PremiunLicense::shareFile(File* file){
    cout<<"Compartiendo "<<file->getName()<<" como premiun"<<endl;
}

PremiunLicense::~PremiunLicense(){
    
}