#include "classes.h"

pm_APP::pm_APP(QString t_name) : Base(t_name)
{
//////    pAPPSignal = returnPMAppPointerToSignal(name);
}

void pm_APP::publishCommand()
{
/////////    if(pSet != nullptr)
    appCommand = new DimCommand(qPrintable("APP_FT0/PM"+PM_Names[PMid]
                                        +prefix+"/"+name),"C:1",this);
    outDCs << appCommand->getName() << endl;
    SetSignal();
}

void pm_APP::commandHandler()
{
    DimCommand* currCmnd = getCommand();
    if(currCmnd == appCommand) {
        cout << "@APP@ recieved " << currCmnd->getName() << endl;
        emitSignalRequest();
    }
}

void pm_APP::emitSignalRequest()
{
//    pServer->emitSignal(pAPPSignal,PMid);
}

void pm_APP::SetSignal(){ pAPPSignal = getPMNonValPointerToSignal(this->name);}


pmch_APP::pmch_APP(QString t_name) : Base(t_name), pm_APP::pm_APP(t_name)
{
////////////    this->prefix = "/Ch"+QString("%1").arg(CHid,2,10,QLatin1Char('0')) + this->prefix;
    SetSignal();
}

void pmch_APP::emitSignalRequest()
{
//    this->pServer->emitSignal(pAPPSignal,this->PMid,this->CHid);
}

void pmch_APP::SetSignal(){ pAPPSignal = getPMCHNonValPointerToSignal(this->name);}

PMonlyAppPar::PMonlyAppPar(QString t_name, MyDimServer* t_pServer) : Base(t_name,"/control/GBT"), pm_APP(t_name)
{this->SetServer(t_pServer);}

void PMonlyAppPar::publishCommands()
{ pm_APP::publishCommand(); }

PMCHonlyAppPar::PMCHonlyAppPar(QString t_name, MyDimServer* t_pServer) : Base(t_name,"/control"), pmch_APP(t_name)
{this->SetServer(t_pServer);}

void PMCHonlyAppPar::publishCommands()
{ pmch_APP::publishCommand(); }
