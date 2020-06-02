
#pragma once

#include <string>

using namespace std;

class GamingPC{
    private:
        string processor;
        string RAM;
        string diskCapacity;
        string graphicCard;
        string OS;
    public:
        GamingPC();
        void addProcessor(string);
        void addRAM(string);
        void addDiskCapacity(string);
        void addGraphicCard(string);
        void addOS(string);
        string toString();
        ~GamingPC();
};
