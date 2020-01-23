#ifndef OUTPUTMANAGER_H
#define OUTPUTMANAGER_H

//Project type includes

#include <DataLayer/Models/train.h>
#include <DataLayer/Models/freightcar.h>
#include <DataLayer/Models/product.h>

//C++ type includes
#include <iostream>
#include <sstream>
#include <vector>
#include <string>

//Namespace usings

using namespace std;


class OutputManager
{
public:

    //Init

    OutputManager();
    ~OutputManager();

    //Public Members

    //Public Getters

    //Public Setters

    //Public Methods
    vector<vector<string>> TransformTrainToOutputFormat(vector<Train>& trains);
    vector<vector<string>> TransformFreightCarToOutputFormat(vector<FreightCar>& freightCars);
    vector<vector<string>> TransformProductToOutputFormat(vector<Product>& products);

private:

    //Private Members

    //Private Getters

    //Private Setters

    //Private Methods

};

#endif // OUTPUTMANAGER_H
