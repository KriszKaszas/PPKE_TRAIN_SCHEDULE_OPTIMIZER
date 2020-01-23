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

    string GetName();
    int GetCapacity();
    vector<TrainSpecificStation> GetSchedule();

    //Public Setters

    void SetCapacity(int capacity);
    void AddScheduleItem(TrainSpecificStation& station);

    //Public Methods

private:

    //Private Members

    string trainName;
    int capacity;
    vector<TrainSpecificStation> schedule;

    //Private Getters

    //Private Setter

    void SetTrainName(string trainName);


    //Private Methods

};

#endif // TRAIN_H
