
#pragma once

#include "PCBuilder.h"

class PCDirector{
    private:
        PCBuilder* pCBuilder;
    public:
        PCDirector();        
        void makePC(PCBuilder*);
        ~PCDirector();
};
