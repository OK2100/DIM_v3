#ifndef COMMON_H
#define COMMON_H

#include <QDebug>
#include <QObject>
#include <QTextStream>
#include <QFile>
#include <QVector>
#include <QObject>

#include "../dim_v20r26/dim/dis.hxx"

class MyDimServer;

template <class T>
using pm_pValSignal = void(MyDimServer::*)(quint8,T);
using pm_pNonValSignal = void(MyDimServer::*)(quint8);

template <class T>
using pmch_pValSignal = void(MyDimServer::*)(quint8,quint8,T);
using pmch_pNonValSignal = void(MyDimServer::*)(quint8,quint8);



static QTextStream cout(stdout);
static QTextStream cin(stdin);
static QTextStream cerr(stderr);

static QFile DimServicesFile("ServicesList_v1_0.txt");
static QFile DimCommandsFile("CommandsList_v1_0.txt");
static QTextStream outDSs(&DimServicesFile);
static QTextStream outDCs(&DimCommandsFile);




template<class T>
QHash<QString,pm_pValSignal<T>> PMValHash;
extern void fillPMValHash();
template<class T>
pm_pValSignal<T> getPMValPointerToSignal(QString PARname){ return PMValHash<T>[PARname]; };

template<class T>
QHash<QString,pmch_pValSignal<T>> PMCHValHash;
extern void fillPMCHValHash();
template<class T>
pmch_pValSignal<T> getPMCHValPointerToSignal(QString PARname){ return PMCHValHash<T>[PARname]; };

static QHash<QString,pm_pNonValSignal> PMNonValHash;
extern void fillPMNonValHash();
pm_pNonValSignal getPMNonValPointerToSignal(QString PARname);

static QHash<QString,pmch_pNonValSignal> PMCHNonValHash;
extern void fillPMCHNonValHash();
pmch_pNonValSignal getPMCHNonValPointerToSignal(QString PARname);






static QString PM_Names[21] = {"XX",
                               "A0","A1","A2","A3","A4","A5","A6","A7","A8","A9",
                               "C0","C1","C2","C3","C4","C5","C6","C7","C8","C9"};


#endif // COMMON_H
