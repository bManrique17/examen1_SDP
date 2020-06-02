
#include "PCDirector.h"
#include "PCBuilder.h"

PCDirector::PCDirector(){

}

void PCDirector::makePC(PCBuilder* _PCBuilder){
    pCBuilder = _PCBuilder;
}

PCDirector::~PCDirector(){
    delete pCBuilder;
}
