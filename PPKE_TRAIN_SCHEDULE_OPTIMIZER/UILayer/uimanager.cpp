#include "uimanager.h"

UIManager::UIManager()
{

}

UIManager::~UIManager()
{

}

void UIManager::DisplayMessage(string message)
{
    cout << message << endl << endl;
}

void UIManager::DisplayData(vector<string> dataSet)
{
    for(string element : dataSet)
    {
        cout << element << endl;
    }
    cout << endl;
}

void UIManager::DisplayData(vector<vector<string>> dataSet)
{
    for(vector<string> dataRow : dataSet)
    {
        for(string element : dataRow)
        {
            cout << element << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void UIManager::DisplayRawData(vector<vector<string>> dataSet)
{
    for(vector<string> dataRow : dataSet)
    {
        for(string element : dataRow)
        {
            cout << element << " " << endl;
        }
        cout << endl;
    }
    cout << endl;
}

string UIManager::GetUserInput()
{
    string userInput;
    cin >> userInput;
    return userInput;
}
