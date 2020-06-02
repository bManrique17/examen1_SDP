
#pragma once

#include <string>

#include "PCBuilder.h"
#include "GamingPC.h"

class GamingPCBuilder : public PCBuilder{
    private:
        GamingPC* gamingPC;
    public:
        GamingPCBuilder();
        void addProcessor(string) override;
        void addRAM(string) override;
        void addDiskCapacity(string) override;
        void addGraphicCard(string) override;        
        void addOS(string) override;
        GamingPC* getPC() override;   
        ~GamingPCBuilder();     
};
