#include "trainspecificstation.h"

TrainSpecificStation::TrainSpecificStation(string stationName, int timeUntilDeparture)
{
    SetStationName(stationName);
    SetTimeUntilDeparture(timeUntilDeparture);
}

TrainSpecificStation::~TrainSpecificStation()
{

}

string TrainSpecificStation::GetStationName()
{
    return this->stationName;
}

int TrainSpecificStation::GetTimeUntilDeparture()
{
    return this->timeUntilDeparture;
}

void TrainSpecificStation::SetStationName(string stationName)
{
    this->stationName = stationName;
}

void TrainSpecificStation::SetTimeUntilDeparture(int timeUntilDeparture)
{
    this->timeUntilDeparture = timeUntilDeparture;
}
