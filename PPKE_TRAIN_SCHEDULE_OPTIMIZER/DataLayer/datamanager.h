#ifndef DATAMANAGER_H
#define DATAMANAGER_H

//Project type includes

#include "Models/train.h"
#include "Models/freightcar.h"
#include "Models/product.h"

//C++ type includes

#include <vector>
#include <string>

//Namespace usings

using namespace std;


class DataManager
{
public:

    //Init

    DataManager();
    ~DataManager();

    //Public Members

    //Public Getters

    vector<Train> GetTrains();
    vector<FreightCar> GetFreightCars;
    vector<Product> GetProducts();

    //Public Setters

    //Public Methods

private:

    //Private Members

    vector<Train> trains;
    vector<FreightCar> freightCars;
    vector<Product> products;

    //Private Getters

    //Private Setters

    void AddTrain(Train train);
    void AddFreightCar(FreightCar freightCar);
    void AddProduct(Product product);

    //Private Methods

    void ReadTrainsFromFile(string filepath);
    void ReadFreightCarFromFile(string filepath);
    void ReadProductFromFile(string filepath);

};

#endif // DATAMANAGER_H
