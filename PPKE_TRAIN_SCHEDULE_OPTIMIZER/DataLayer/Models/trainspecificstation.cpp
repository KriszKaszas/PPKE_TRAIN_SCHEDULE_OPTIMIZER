#include "trainspecificstation.h"

TrainSpecificStation::TrainSpecificStation(string stationName)
{
    SetName(stationName);
}

TrainSpecificStation::~TrainSpecificStation()
{

}

string TrainSpecificStation::GetName()
{
    return this->stationName;
}

int TrainSpecificStation::GetTimeUntilDeparture()
{
    return this->timeUntilDeparture;
}

void TrainSpecificStation::SetName(string stationName)
{
    this->stationName = stationName;
}

void TrainSpecificStation::SetTimeUntilDeparture(int timeUntilDeparture)
{
    this->timeUntilDeparture = timeUntilDeparture;
}
