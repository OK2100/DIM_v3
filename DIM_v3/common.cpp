#include "common.h"


QTextStream outDSs(&DimServicesFile);
QTextStream outDCs(&DimCommandsFile);

pm_pNonValSignal getPMNonValPointerToSignal(QString PARname){
//    if(PMNonValHash[PARname] == nullptr) qDebug() << "Can't find" << PARname << "in PMNonValHash";
    return PMNonValHash[PARname];
};
pmch_pNonValSignal getPMCHNonValPointerToSignal(QString PARname){
//    if(PMCHNonValHash[PARname] == nullptr) qDebug() << "Can't find" << PARname << "in PMCHNonValHash";
    return PMCHNonValHash[PARname];
};

void OpenOutFiles()
{
    DimServicesFile.open(QIODevice::WriteOnly);
    DimCommandsFile.open(QIODevice::WriteOnly);

}
