
#include "GamingPCBuilder.h"


GamingPCBuilder::GamingPCBuilder(){
    gamingPC = new GamingPC();
}

void GamingPCBuilder::addProcessor(string param) {
    gamingPC->addProcessor(param);
}

void GamingPCBuilder::addRAM(string param) {
    gamingPC->addRAM(param);
}

void GamingPCBuilder::addDiskCapacity(string param) {
    gamingPC->addDiskCapacity(param);
}

void GamingPCBuilder::addGraphicCard(string param) {
    gamingPC->addGraphicCard(param);
}

void GamingPCBuilder::addOS(string param) {
    gamingPC->addOS(param);
}

GamingPC* GamingPCBuilder::getPC() {
    return gamingPC;
}
      
GamingPCBuilder::~GamingPCBuilder(){
    
}
