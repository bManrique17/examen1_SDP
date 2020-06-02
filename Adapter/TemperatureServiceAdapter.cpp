
#include "TemperatureServiceAdapter.h"

using namespace std;


TemperatureServiceAdapter::TemperatureServiceAdapter(/* args */)
{
}

int TemperatureServiceAdapter::getTemperatureAt(string place, int unit){
    int temp = TemperatureService::getTemperatureAt(place);
    //int temp = 0;
    switch (unit){
        case 1:
            return 100;
            break;
        
        case 2:
            return 50;
            break;
        
        case 3:
            return 300;
            break;
        default:
            return 25;
            break;
    }
}


TemperatureServiceAdapter::~TemperatureServiceAdapter()
{
}
