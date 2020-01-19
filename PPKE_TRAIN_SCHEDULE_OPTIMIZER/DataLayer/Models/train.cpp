#include "train.h"

Train::Train(string trainName)
{
    setTrainName(trainName);
}

Train::~Train()
{

}

string Train::getTrainName()
{
    return this->trainName;
}

vector<TrainSpecificStation> Train::getSchedule()
{
    return this->schedule;
}

void Train::setTrainName(string trainName)
{
    this->trainName = trainName;
}

void Train::AddScheduleItem(string stationName, int timeUntilDeparture)
{
    TrainSpecificStation* station = new TrainSpecificStation(stationName, timeUntilDeparture);
    schedule.push_back(*station);
}
