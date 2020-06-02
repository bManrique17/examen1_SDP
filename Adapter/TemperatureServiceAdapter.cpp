
#include "TemperatureServiceAdapter.h"


using namespace std;


TemperatureServiceAdapter::TemperatureServiceAdapter(/* args */)
{
}

int TemperatureServiceAdapter::getTemperatureAt(std::string place, int unit){
    int temp = _getTemperatureAt(place);
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
