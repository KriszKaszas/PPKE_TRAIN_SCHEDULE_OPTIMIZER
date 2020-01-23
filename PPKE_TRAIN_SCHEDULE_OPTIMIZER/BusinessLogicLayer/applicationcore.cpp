#include "applicationcore.h"

ApplicationCore::ApplicationCore()
{
    dataManager = new DataManager();
    uiManager = new UIManager();
    outputManager = new OutputManager();
    dataManager->ReadTrainsFromFile("C:/Users/krisz/Desktop/TestVectors/vonat_t1.txt");
    dataManager->ReadFreightCarFromFile("C:/Users/krisz/Desktop/TestVectors/kocsi_t1.txt");
    dataManager->ReadProductFromFile("C:/Users/krisz/Desktop/TestVectors/aru_t1.txt");
    OutputRawTrains();
    OutputRawFreightCars();
    OutputRawProducsts();
}

ApplicationCore::~ApplicationCore()
{
    delete(dataManager);
    delete(uiManager);
    delete(outputManager);
}

void ApplicationCore::OutputRawTrains()
{
    uiManager->DisplayRawData(outputManager->TransformTrainToOutputFormat(dataManager->GetTrains()));
}

void ApplicationCore::OutputRawFreightCars()
{
    uiManager->DisplayRawData(outputManager->TransformFreightCarToOutputFormat(dataManager->GetFreightCars()));
}

void ApplicationCore::OutputRawProducsts()
{
    uiManager->DisplayRawData(outputManager->TransformProductToOutputFormat(dataManager->GetProducts()));
}
