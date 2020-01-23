#ifndef FREIGHTCAR_H
#define FREIGHTCAR_H

//Project type includes

//C++ type includes

#include <vector>
#include <string>

//Namespace usings

using namespace std;


class FreightCar
{
public:

    //Init

    FreightCar(string name);
    ~FreightCar();

    //Public Members

    //Public Getters

    string GetName();
    int GetCapacity();
    string GetSation();

    //Public Setters

    void SetName(string name);
    void SetCapacity(int capacity);
    void SetStation(string station);

    //Public Methods

private:

    //Private Members

    string name;
    int capacity;
    string station;

    //Private Getters

    //Private Setters

    //Private Methods

};

#endif // FREIGHTCAR_H
