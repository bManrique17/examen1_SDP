
#include "Suscriber.h"
#include "YoutubeChannel.h"
#include <vector>
#include <iostream>

using namespace std;

Suscriber::Suscriber(string _name){
    name = _name;
}

string Suscriber::getName(){
    return name;
}

void Suscriber::update(Subject* subject) {
    vector <string> videos = dynamic_cast<YoutubeChannel*>(subject)->getVideos();
    cout<<"Me llamo "+name+" y he sido notificado"<<endl;
}      

Suscriber::~Suscriber(){

}