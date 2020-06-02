
#include "StudentLicense.h"
#include <iostream>

using std::cout;
using std::endl;

StudentLicense::StudentLicense(){

}

void StudentLicense::saveFile(File* file){
    cout<<"Guardando "<<file->getName()<<" como estudiante"<<endl;
}

void StudentLicense::uploadFile(File* file){
    cout<<"Subiendo "<<file->getName()<<" como estudiante"<<endl;
}

void StudentLicense::shareFile(File* file){
    cout<<"Guardando "<<file->getName()<<" como estudiante"<<endl;
}

StudentLicense::~StudentLicense(){
    
}