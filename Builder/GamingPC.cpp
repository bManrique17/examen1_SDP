
#include "GamingPC.h"

GamingPC::GamingPC(){
}

void GamingPC::addProcessor(string _processor){
    processor = _processor;
}

void GamingPC::addRAM(string _RAM){
    RAM = _RAM;
}

void GamingPC::addDiskCapacity(string _diskCapacity){
    diskCapacity = _diskCapacity;
}

void GamingPC::addGraphicCard(string _graphicCard){
    graphicCard = _graphicCard;
}

void GamingPC::addOS(string _OS){
    OS = _OS;
}

string GamingPC::toString(){
    return processor+"|"+RAM+"|"+diskCapacity+"|"+graphicCard+"|"+OS;
}

GamingPC::~GamingPC(){
}
