
#include "Gun.h"
        
Gun::Gun(){
    
}

GunType Gun::getModel(){
    return model;
}

void Gun::setModel(GunType _model){
    model = _model;
}

void Gun::setName(std::string _name){
    name = _name;
}

std::string Gun::toString(){
    return name;
}

Gun::~Gun(){

}

