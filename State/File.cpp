
#include "File.h"

File::File(std::string _name){
    name = _name;
}

std::string File::getName(){
    return name;
}

File::~File(){
}