#include "datamanager.h"

DataManager::DataManager()
{

}

DataManager::~DataManager()
{

}

vector<Train>& DataManager::GetTrains()
{
    return this->trains;
}

vector<FreightCar>& DataManager::GetFreightCars()
{
    return this->freightCars;
}

vector<Product>& DataManager::GetProducts()
{
    return this->products;
}

void DataManager::AddTrain(Train& train)
{
    trains.push_back(train);
}

void DataManager::AddFreightCar(FreightCar &freightCar)
{
    freightCars.push_back(freightCar);
}

void DataManager::AddProduct(Product &product)
{
    products.push_back(product);
}

void DataManager::ReadTrainsFromFile(string filepath)
{
    TrainSpecificStation *station;
    Train *train;
    QString currfilepath = QString::fromStdString(filepath);
    QFile file(currfilepath);

    if(!file.open(QFile::ReadOnly))
    {
        cout<<"HIBA! A FILE NEM ELERHETO!"<<endl;
    }
    QTextStream stream(&file);
    stream.setCodec("UTF-8");
    int previousStationTime = 0;
    QString line;
    while(stream.readLineInto(&line))
    {

        QRegExp rx("(\\:)");
        QStringList query = line.split(rx);

        if(query[0] == "Nev" || query[0] == "nev")
        {
            string name = query[1].toStdString();

            train = new Train(name);
        }
        if(query[0] == "Kapacitas" || query[0] == "kapacitas")
        {
            int capacity = query[1].toInt();
            train->SetCapacity(capacity);
        }
         if(query[0] == "Allomas" || query[0] == "allomas")
        {
            string stationName = query[1].toStdString();
            station = new TrainSpecificStation(stationName);
        }
        if(query[0] == "Ora" || query[0] == "ora")
        {
            int time = query[1].toInt();
            station->SetTimeUntilDeparture(time - previousStationTime);
            previousStationTime = time - previousStationTime;
            train->AddScheduleItem(*station);
        }
        if(query[0] == "-")
        {
            AddTrain(*train);
            previousStationTime = 0;
        }

    }
    AddTrain(*train);

    file.close();
}

void DataManager::ReadFreightCarFromFile(string filepath)
{
    FreightCar *freightCar;
    QString currfilepath = QString::fromStdString(filepath);
    QFile file(currfilepath);

    if(!file.open(QFile::ReadOnly))
    {
        cout<<"HIBA! A FILE NEM ELERHETO!"<<endl;
    }
    QTextStream stream(&file);
    stream.setCodec("UTF-8");
    QString line;
    while(stream.readLineInto(&line))
    {

        QRegExp rx("(\\:)");
        QStringList query = line.split(rx);

        if(query[0] == "Nev" || query[0] == "nev")
        {
            string name = query[1].toStdString();

            freightCar = new FreightCar(name);
        }
        if(query[0] == "Kapacitas" || query[0] == "kapacitas")
        {
            int capacity = query[1].toInt();
            freightCar->SetCapacity(capacity);
        }
        if(query[0] == "Allomas" || query[0] == "allomas")
        {
            string stationName = query[1].toStdString();
            freightCar->SetStation(stationName);
        }
        if(query[0] == "-")
        {
            AddFreightCar(*freightCar);
        }

    }
    AddFreightCar(*freightCar);

    file.close();
}

void DataManager::ReadProductFromFile(string filepath)
{
    Product *product;
    QString currfilepath = QString::fromStdString(filepath);
    QFile file(currfilepath);

    if(!file.open(QFile::ReadOnly))
    {
        cout<<"HIBA! A FILE NEM ELERHETO!"<<endl;
    }
    QTextStream stream(&file);
    stream.setCodec("UTF-8");
    QString line;
    while(stream.readLineInto(&line))
    {

        QRegExp rx("(\\:)");
        QStringList query = line.split(rx);

        if(query[0] == "Nev" || query[0] == "nev")
        {
            string name = query[1].toStdString();

            product = new Product(name);
        }
        if(query[0] == "Kiindulopont" || query[0] == "kiindulopont")
        {
            string startingStation = query[1].toStdString();
            product->SetStartingStation(startingStation);
        }
        if(query[0] == "Vegpont" || query[0] == "vegpont")
        {
            string destinationStation = query[1].toStdString();
            product->SetDestinationStation(destinationStation);
        }
        if(query[0] == "Mennyiseg" || query[0] == "mennyiseg")
        {
            int amount = query[1].toInt();
            product->SetAmount(amount);
        }
        if(query[0] == "-")
        {
            AddProduct(*product);
        }

    }
    AddProduct(*product);

    file.close();
}
