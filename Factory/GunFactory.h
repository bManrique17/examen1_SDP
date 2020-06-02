
#pragma once

#include "Gun.h"
#include "SMG.h"
#include "Shotgun.h"
#include "Rifle.h"

class GunFactory{
    public:        
        static Gun* buildGun(GunType);        
};