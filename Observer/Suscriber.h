
#pragma once

#include <string>
#include "Observer.h"
#include "YoutubeChannel.h"
#include <vector>

class Suscriber : public Observer{
    private:
        std::string name;
        std::vector <YoutubeChannel*> myChannels;
    public:
        Suscriber(std::string);
        void update(Subject*) override;        
        std::string getName();
        ~Suscriber();
};

