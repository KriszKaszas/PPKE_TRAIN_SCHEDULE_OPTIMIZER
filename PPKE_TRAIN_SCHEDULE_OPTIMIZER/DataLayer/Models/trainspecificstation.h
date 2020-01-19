#ifndef TRAINSPECIFICSTATION_H
#define TRAINSPECIFICSTATION_H

//Project type includes

//C++ type includes

#include <vector>
#include <string>

//Namespace usings

using namespace std;


class TrainSpecificStation
{
public:

    //Init

    TrainSpecificStation(string stationName, int timeUntilDeparture);
    ~TrainSpecificStation();

    //Public Members

    //Public Getters

    string GetStationName();
    int GetTimeUntilDeparture();

    //Public Setters

    //Public Methods

private:

    //Private Members

    string stationName;
    int timeUntilDeparture;

    //Private Getters

    //Private Setters

    void SetStationName(string stationName);
    void SetTimeUntilDeparture(int timeUntilDeparture);

    //Private Methods

};

#endif // TRAINSPECIFICSTATION_H
