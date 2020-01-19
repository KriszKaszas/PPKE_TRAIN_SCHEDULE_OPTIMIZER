#ifndef TRAIN_H
#define TRAIN_H

//Project type includes

#include "trainspecificstation.h"

//C++ type includes

#include <vector>
#include <string>

//Namespace usings

using namespace std;


class Train
{
public:

    //Init

    Train(string trainName);
    ~Train();

    //Public Members

    //Public Getters

    string getTrainName();
    vector<TrainSpecificStation> getSchedule();

    //Public Setters

    void AddScheduleItem(string stationName, int timeUntilDeparture);

    //Public Methods

private:

    //Private Members

    string trainName;
    vector<TrainSpecificStation> schedule;

    //Private Getters

    //Private Setter

    void setTrainName(string trainName);

    //Private Methods

};

#endif // TRAIN_H
