
#pragma once

#include <string>
#include "GamingPC.h"

class PCBuilder{    
    public:
        virtual void addProcessor(std::string) = 0;
        virtual void addRAM(std::string) = 0;
        virtual void addDiskCapacity(std::string) = 0;
        virtual void addGraphicCard(std::string) = 0;
        virtual void addOS(std::string) = 0;
        virtual GamingPC* getPC() = 0;        
};
