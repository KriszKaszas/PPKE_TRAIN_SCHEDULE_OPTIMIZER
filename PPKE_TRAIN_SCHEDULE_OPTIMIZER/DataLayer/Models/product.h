#ifndef PRODUCT_H
#define PRODUCT_H

//Project type includes

//C++ type includes

#include <vector>
#include <string>

//Namespace usings

using namespace std;


class Product
{
public:

    //Init

    Product(string name);
    ~Product();

    //Public Members

    //Public Getters

    string GetName();
    string GetStartingStation();
    string GetDestinationStation();
    int GetAmount();

    //Public Setters

    void SetName(string name);
    void SetStartingStation(string startingStation);
    void SetDestinationStation(string destinationStation);
    void SetAmount(int amount);

    //Public Methods

private:

    //Private Members

    string name;
    string startingStation;
    string destinationStation;
    int amount;

    //Private Getters

    //Private Setters

    //Private Methods

};

#endif // PRODUCT_H
