#include "product.h"

Product::Product(string name)
{
    SetName(name);
}

Product::~Product()
{

}

string Product::GetName()
{
    return this->name;
}

string Product::GetStartingStation()
{
    return this->startingStation;
}

string Product::GetDestinationStation()
{
    return this->destinationStation;
}

int Product::GetAmount()
{
    return this->amount;
}

void Product::SetName(string name)
{
    this->name = name;
}

void Product::SetStartingStation(string startingStation)
{
    this->startingStation = startingStation;
}

void Product::SetDestinationStation(string destinationStation)
{
    this->destinationStation = destinationStation;
}

void Product::SetAmount(int amount)
{
    this->amount = amount;
}
