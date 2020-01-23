#include "outputmanager.h"

OutputManager::OutputManager()
{

}

OutputManager::~OutputManager()
{

}

vector<vector<string>> OutputManager::TransformTrainToOutputFormat(vector<Train>& trains)
{
    vector<vector<string>> trainsOutput;
    vector<string> trainCompiled;
    for(Train train : trains)
    {
        trainCompiled.push_back("Nev: " + train.GetName());

        int capacity = train.GetCapacity();
        stringstream ss;
        ss << capacity;
        string capacityString;
        ss >> capacityString;

        trainCompiled.push_back("Kapacitas: " + capacityString);

        for(TrainSpecificStation station : train.GetSchedule())
        {
            trainCompiled.push_back("Allomas: " + station.GetName());

            int timeUntilDeparture = station.GetTimeUntilDeparture();
            stringstream ss;
            ss << timeUntilDeparture;
            string timeUntilDepartureString;
            ss >> timeUntilDepartureString;

            trainCompiled.push_back("Ora: " + timeUntilDepartureString);
        }
        trainsOutput.push_back(trainCompiled);
        trainCompiled.clear();
    }
    vector<string> successMessage = {"A VONATOK BEOLVASASA SIKERES VOLT!"};
    trainsOutput.push_back(successMessage);

    return trainsOutput;
}

vector<vector<string>> OutputManager::TransformFreightCarToOutputFormat(vector<FreightCar>& freightCars)
{
    vector<vector<string>> freightCarsOutput;
    vector<string> freightCarCompiled;
    for(FreightCar freightCar : freightCars)
    {
        freightCarCompiled.push_back("Nev: " + freightCar.GetName());

        int capacity = freightCar.GetCapacity();
        stringstream ss;
        ss << capacity;
        string capacityString;
        ss >> capacityString;

        freightCarCompiled.push_back("Kapacitas: " + capacityString);

        freightCarCompiled.push_back("Allomas: " + freightCar.GetSation());

        freightCarsOutput.push_back(freightCarCompiled);
        freightCarCompiled.clear();
    }
    vector<string> successMessage = {"A KOCSIK BEOLVASASA SIKERES VOLT!"};
    freightCarsOutput.push_back(successMessage);

    return freightCarsOutput;
}


vector<vector<string>> OutputManager::TransformProductToOutputFormat(vector<Product> &products)
{
    vector<vector<string>> productsOutput;
    vector<string> productCompiled;
    for(Product product : products)
    {
        productCompiled.push_back("Nev: " + product.GetName());

        productCompiled.push_back("Kiindulopont: " + product.GetStartingStation());

        productCompiled.push_back("Vegpont: " + product.GetDestinationStation());

        int amount = product.GetAmount();
        stringstream ss;
        ss << amount;
        string amountString;
        ss >> amountString;

        productCompiled.push_back("Mennyiseg: " + amountString);


        productsOutput.push_back(productCompiled);
        productCompiled.clear();
    }
    vector<string> successMessage = {"AZ ARUK BEOLVASASA SIKERES VOLT!"};
    productsOutput.push_back(successMessage);

    return productsOutput;
}

