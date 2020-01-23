#include "train.h"

Train::Train(string trainName)
{
    SetTrainName(trainName);
}

Train::~Train()
{

}

string Train::GetName()
{
    return this->trainName;
}

int Train::GetCapacity()
{
    return this->capacity;
}

vector<TrainSpecificStation> Train::GetSchedule()
{
    return this->schedule;
}

void Train::SetTrainName(string trainName)
{
    this->trainName = trainName;
}

void Train::SetCapacity(int capacity)
{
    this->capacity = capacity;
}

void Train::AddScheduleItem(TrainSpecificStation& station)
{
    schedule.push_back(station);
}
