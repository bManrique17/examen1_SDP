
#include <iostream>
#include <vector>
#include "Singleton/Login.h"

#include "Factory/Gun.h"
#include "Factory/GunFactory.h"
#include "Factory/GunType.h"
#include "Factory/SMG.h"
#include "Factory/Rifle.h"
#include "Factory/Shotgun.h"

#include "Observer/Suscriber.h"
#include "Observer/YoutubeChannel.h"

#include "Builder/PCDirector.h"
#include "Builder/GamingPCBuilder.h"

#include "Adapter/Client.h"
#include "Adapter/TemperatureServiceAdapter.h"

using namespace std;

int menu();
void singleton();
void factory();
void observer();
void builder();
void adapter();


int main(){

    int user_option;
    do{
        user_option = menu();

        cout<<endl;

        switch (user_option){
            case 1:
                singleton();
                break;
            case 2:
                factory();
                break;
            case 3:
                observer();
                break;
            case 4:
                builder();
                break;
            case 5:
                adapter();
                break;
            default:                
                break;
        }
    } while (user_option != 0);
    


    cout<<endl;
    cout<<"Fin del programa."<<endl;
}

int menu(){
    int user_option = 0;

    cout<<"***Examen|Patrones de Diseño de Software***"<<endl;
    cout<<"(1) Singleton"<<endl;
    cout<<"(2) Factory"<<endl;
    cout<<"(3) Observer"<<endl;
    cout<<"(4) Builder"<<endl;
    cout<<"(5) Adapter"<<endl;
    cout<<"(0) Salir"<<endl;
    cout<<"->Ingrese su opcion: ";

    cin>>user_option;

    return user_option;
}


void singleton(){

    Login* instance = Login::getInstance();   

    string user, password; 
    cout<<"***Login***"<<endl;    
    cout<<"->Ingrese su usuario: ";    
    cin>>user;
    cout<<"->Ingrese su contraseña: ";    
    cin>>password;
    
    if (instance->validateInfo(user, password)){
        cout<<" Ha ingresado correctamente"<<endl;
    }else{
        cout<<" Datos incorrectos"<<endl;
    }    
    cout<<endl;

    delete instance;
}

void factory(){

    vector <Gun*> list_guns;    

    int user_option;
    do{
            
        cout<<"***Ammu-Nation***"<<endl;    
        cout<<"-Ingresar en inventario:"<<endl;    
        cout<<"(1) SMG"<<endl;
        cout<<"(2) Shotgun"<<endl;
        cout<<"(3) Rifle"<<endl;
        cout<<"(4) Listar armas"<<endl;
        cout<<"(0) Menu principal"<<endl;
        cout<<"->Indique el tipo de arma a ingresar: ";

        cin>>user_option;        

        string name;
        if(user_option > 0 && user_option < 4){
            
            cout<<"->Indique el nombre del arma a ingresar: ";
            cin>>name;
        }

        switch (user_option){
            case 1:
                list_guns.push_back(GunFactory::buildGun(_SMG));
                cout<<"SMG creado!"<<endl;
                list_guns[list_guns.size()-1]->setName(name);
                break;
            case 2:
                list_guns.push_back(GunFactory::buildGun(SHOTGUN));
                cout<<"Shotgun creado!"<<endl;
                list_guns[list_guns.size()-1]->setName(name);
                break;
            case 3:
                list_guns.push_back(GunFactory::buildGun(RIFLE));
                cout<<"Rifle creado!"<<endl;
                list_guns[list_guns.size()-1]->setName(name);
                break;
            case 4:
                cout<<"-----armas----"<<endl;
                for (size_t i = 1; i <= list_guns.size(); i++){
                    cout<<i<<". "<<list_guns[i-1]->toString()<<endl;                                        
                }                                
                cout<<"-----fin de linea----"<<endl;
                break;
            default:
                break;
        }
    } while (user_option != 0);

    cout<<endl;     
}

void observer(){    
    
    YoutubeChannel* youtubeChannel = new YoutubeChannel("Mi_canal");
    int user_option;
    do{ 
        cout<<"***Mi Canal***"<<endl;
        cout<<"(1) Agregar video"<<endl;
        cout<<"(2) Ingresar subscriptor"<<endl;
        cout<<"(3) Eliminar video"<<endl;
        cout<<"(4) Mostrar videos"<<endl;
        cout<<"(0) Menu principal"<<endl;
        cout<<"->Indique su opcion: ";

        cin>>user_option;

        string video_name;
        string suscriber_name;

        switch (user_option){
            case 1:
                cout<<"->Ingrese el nombre del video: ";
                cin>>video_name;
                youtubeChannel->addVideo(video_name);
                youtubeChannel->notifyAllObservers();
                cout<<"Creado!"<<endl;
                break; 
            case 2:           
                cout<<"->Ingrese su nombre: ";
                cin>>suscriber_name;
                youtubeChannel->registerObserver(new Suscriber(suscriber_name));                
                cout<<"Creado!"<<endl;
                break;
            case 3:           
                cout<<"->Ingrese su nombre: ";
                cin>>suscriber_name;
                youtubeChannel->removeObserver(new Suscriber(suscriber_name));
                cout<<"Eliminado!"<<endl;
                break;
            case 4:           
                cout<<"     Videos: ";
                for (size_t i = 0; i < youtubeChannel->getVideos().size(); i++)
                    cout<<i<<". "<<youtubeChannel->getVideos()[i]<<endl;                                                                
            default:
                break;
        }
        cout<<endl;
    } while (user_option != 0);
    delete youtubeChannel;
}

void builder(){
    PCDirector* pc_director = new PCDirector();
    vector <GamingPC*> pc_s;   
    int user_option = 1;    
    do{ 
        cout<<"***PC's***"<<endl;        
        cout<<"Haciendo una pc gamer..."<<endl;
        GamingPCBuilder* gamingpc_builder = new GamingPCBuilder();
        pc_director->makePC(gamingpc_builder);
        int option;
        do{
            cout<<"(1) Agregar procesador"<<endl;
            cout<<"(2) Agregar RAM"<<endl;
            cout<<"(3) Agregar capacidad de disco"<<endl;
            cout<<"(4) Agregar tarjeta grafica"<<endl;
            cout<<"(5) Indicar OS"<<endl;
            cout<<"(6) Ver PC's"<<endl;
            cout<<"(7) Terminar"<<endl;
            cout<<"(0) Menu principal"<<endl;
            cout<<"->Indique su opcion: ";
            cin>>option;
            
            string temp;            
            switch (option){
            case 1:
                cout<<"->Ingrese: ";
                cin>>temp;
                gamingpc_builder->addProcessor(temp);
                break;
            case 2:
                cout<<"->Ingrese: ";
                cin>>temp;
                gamingpc_builder->addRAM(temp);
                break;
            case 3:
                cout<<"->Ingrese: ";
                cin>>temp;
                gamingpc_builder->addDiskCapacity(temp);
                break;
            case 4:
                cout<<"->Ingrese: ";
                cin>>temp;
                gamingpc_builder->addGraphicCard(temp);
                break;
            case 5:
                cout<<"->Ingrese: ";
                cin>>temp;
                gamingpc_builder->addOS(temp);
                break;  
            case 6:
                cout<<"------PC's-------"<<endl;
                for (size_t i = 1; i <= pc_s.size(); i++){
                    cout<<i<<". "<<pc_s[i-1]->toString()<<endl;
                }                
                cout<<"------Fin de linea-------"<<endl;
                break;                                          
            case 7:
                option = 0;
                break;
            case 0:
                user_option = 0;
                break;
            default:                
                break;
            }
        } while (option != 0);  
        cout<<"CREADO! :: "<< gamingpc_builder->getPC()->toString()<<endl; 
        pc_s.push_back(gamingpc_builder->getPC());        
    } while (user_option != 0);
    delete pc_director;
}

void adapter(){
    Client* client = new Client();
    TemperatureServiceAdapter* service = new TemperatureServiceAdapter();
    int user_option;
    do{
        string city;
        int unit;
        cout<<"*****Ver temperatura en el mundo*****"<<endl;
        cout<<"->Ingrese la ciudad: ";
        cin>>city;
        cout<<"->Ingrese la escala (1. C | 2. F | 3. K): ";
        cin>>unit;
        cout<<"TEMPERATURA: "<<service->getTemperatureAt(city,unit)<<endl;
        cout<<"¿Otra vez? [1 si/0 no]: ";
        cin>>user_option;
    } while (user_option != 0);
    delete client;

}