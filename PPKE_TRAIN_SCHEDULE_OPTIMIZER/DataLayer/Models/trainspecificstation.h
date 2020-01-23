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

    TrainSpecificStation(string stationName);
    ~TrainSpecificStation();

    //Public Members

    //Public Getters

    string GetName();
    int GetTimeUntilDeparture();

    //Public Setters
    void SetTimeUntilDeparture(int timeUntilDeparture);
    //Public Methods

private:

    //Private Members

    string stationName;
    int timeUntilDeparture;

    //Private Getters

    //Private Setters

    void SetName(string stationName);


    //Private Methods

};

#endif // TRAINSPECIFICSTATION_H
