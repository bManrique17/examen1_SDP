
#include "FreeLicense.h"

#include <iostream>

using std::cout;
using std::endl;

FreeLicense::FreeLicense(){

}

void FreeLicense::saveFile(File* file){
    cout<<"Guardando "<<file->getName()<<" como licencia gratutita"<<endl;
}

void FreeLicense::uploadFile(File* file){   
    cout<<"Subiendo "<<file->getName()<<" como licencia gratutita"<<endl;
}

void FreeLicense::shareFile(File* file){
    cout<<"Compartiendo "<<file->getName()<<" como licencia gratutita"<<endl;
}

FreeLicense::~FreeLicense(){

}