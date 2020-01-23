#ifndef APPLICATIONCORE_H
#define APPLICATIONCORE_H

//Project type includes

#include "DataLayer/datamanager.h"
#include <UILayer/uimanager.h>
#include "outputmanager.h"

//C++ type includes

#include <vector>
#include <string>

//Namespace usings

using namespace std;


class ApplicationCore
{
public:

    //Init

    ApplicationCore();
    ~ApplicationCore();

    //Public Members

    //Public Getters

    //Public Setters

    //Public Methods

    void OutputRawTrains();
    void OutputRawFreightCars();
    void OutputRawProducsts();

private:

    //Private Members

    DataManager *dataManager;
    UIManager *uiManager;
    OutputManager *outputManager;

    //Private Getters

    //Private Setters

    //Private Methods


};

#endif // APPLICATIONCORE_H
