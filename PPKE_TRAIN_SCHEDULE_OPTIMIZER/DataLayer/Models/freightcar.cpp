#include "freightcar.h"

FreightCar::FreightCar(string name)
{

}

FreightCar::~FreightCar()
{

}

string FreightCar::GetName()
{
    return this->name;
}

int FreightCar::GetCapacity()
{
    return this->capacity;
}

string FreightCar::GetSation()
{
    return this->station;
}

void FreightCar::SetName(string name)
{
    this->name = name;
}

void FreightCar::SetCapacity(int capacity)
{
    this->capacity = capacity;
}

void FreightCar::SetStation(string station)
{
    this->station = station;
}
