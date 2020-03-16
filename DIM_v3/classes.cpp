#include "classes.h"
#include "mydimserver.h"

pm_APP::pm_APP(QString t_name) : Base(t_name)
{
//////    pAPPSignal = returnPMAppPointerToSignal(name);
}

void pm_APP::publishCommand()
{
    appCommand = new DimCommand(qPrintable("APP_"+DIM_name[FEE_id]
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
    this->pServer->emitSignal(pAPPSignal,FEE_id);
}

void pm_APP::SetSignal(){ pAPPSignal = getPMNonValPointerToSignal(this->name);}


pmch_APP::pmch_APP(QString t_name) : Base(t_name), pm_APP::pm_APP(t_name)
{
    SetSignal();
}

void pmch_APP::emitSignalRequest()
{
    this->pServer->emitSignal(pAPPSignal,this->FEE_id,this->CHid);
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
