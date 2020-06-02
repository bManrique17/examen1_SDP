
#include "GunFactory.h"

Gun* GunFactory::buildGun(GunType model){
    Gun* newGun = nullptr;
    switch (model){
        case _SMG:
            newGun = new SMG();
            break;    
        case SHOTGUN:
            newGun = new Shotgun();
            break;
        case RIFLE:
            newGun = new Rifle();
            break;
        default:
            break;
    }              
    return newGun;
}
