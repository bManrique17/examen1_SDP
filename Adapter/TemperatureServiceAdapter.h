
#pragma once

#include "TemperatureService.h"
#include <string>


class TemperatureServiceAdapter : public TemperatureService{
    private:
        /* data */
    public:
        TemperatureServiceAdapter(/* args */);
        int getTemperatureAt(std::string, int);        
        ~TemperatureServiceAdapter();
};
