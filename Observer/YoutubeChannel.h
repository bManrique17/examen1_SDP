
#pragma once

#include <vector>
#include <string>
#include "Subject.h"
#include "Observer.h"

class YoutubeChannel : public Subject{
    private:
        std::string name;
        std::vector <std::string> videos;
        std::vector <Observer*> list_observers;
    public:
        YoutubeChannel(std::string);
        void registerObserver(Observer*) override;
        void removeObserver(Observer*) override;
        void notifyAllObservers() override; 
        void addVideo(std::string);
        std::vector <std::string> getVideos();
        std::string toString();
        ~YoutubeChannel();
};
