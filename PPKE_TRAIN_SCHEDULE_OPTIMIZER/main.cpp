#include <QCoreApplication>
#include <BusinessLogicLayer/applicationcore.h>
#include "DataLayer/datamanager.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ApplicationCore *appcore = new ApplicationCore();

    return a.exec();
}
