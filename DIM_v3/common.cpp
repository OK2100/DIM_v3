#include "common.h"


QTextStream outDSs(&DimServicesFile);
QTextStream outDCs(&DimCommandsFile);

pm_pNonValSignal getPMNonValPointerToSignal(QString PARname){ return PMNonValHash[PARname]; };
pmch_pNonValSignal getPMCHNonValPointerToSignal(QString PARname){ return PMCHNonValHash[PARname]; };

void OpenOutFiles()
{
    DimServicesFile.open(QIODevice::WriteOnly);
    DimCommandsFile.open(QIODevice::WriteOnly);

}
