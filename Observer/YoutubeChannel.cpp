
#include "YoutubeChannel.h"
#include "Suscriber.h"
using namespace std;

YoutubeChannel::YoutubeChannel(string _name){
    name = _name;
}

void YoutubeChannel::addVideo(string video){
    videos.push_back(video);
}

vector <string> YoutubeChannel::getVideos(){
    return videos;
}

string YoutubeChannel::toString(){
    return "I'm YoutubeChannel";
}

void YoutubeChannel::registerObserver(Observer* observer){
    list_observers.push_back(observer);
}

void YoutubeChannel::removeObserver(Observer* _observer){
    int index = 0;
    for (auto &&observer : list_observers){                 
        if (dynamic_cast<Suscriber*>(observer)->getName() == dynamic_cast<Suscriber*>(_observer)->getName()){
            list_observers.erase(list_observers.begin() + index); 
        }    
        index++;    
    }
    delete _observer;
}


void YoutubeChannel::notifyAllObservers(){
    for (auto &&observer : list_observers){
        observer->update(this);
    }
}

YoutubeChannel::~YoutubeChannel(){

}
