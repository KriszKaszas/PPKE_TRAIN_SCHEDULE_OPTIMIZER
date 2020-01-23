#ifndef UIMANAGER_H
#define UIMANAGER_H

//Project type includes

//C++ type includes

#include <iostream>
#include <vector>
#include <string>

//Namespace usings

using namespace std;


class UIManager
{
public:

    //Init

    UIManager();
    ~UIManager();

    //Public Members

    //Public Getters

    //Public Setters

    //Public Methods

    ///Data Display Methods

    void DisplayMessage(string message);
    void DisplayRawData(vector<vector<string>> dataSet);
    void DisplayData(vector<string> dataSet);
    void DisplayData(vector<vector<string>> dataSet);

    ///User Input Methods

    string GetUserInput();

private:

    //Private Members

    //Private Getters

    //Private Setters

    //Private Methods

};

#endif // UIMANAGER_H
