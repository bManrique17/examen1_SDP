
#pragma once

#include "GunType.h"

#include <string>

class Gun{
    protected:
        GunType model;
        int code;
        double price;
        std::string name ;
    public:
        Gun();
        GunType getModel();
        void setModel(GunType);
        void setName(std::string);
        std::string toString();
        ~Gun();
};


