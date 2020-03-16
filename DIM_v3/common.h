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
using pm_pValSignal = void(MyDimServer::*)(quint16,T);
using pm_pNonValSignal = void(MyDimServer::*)(quint16);

template <class T>
using pmch_pValSignal = void(MyDimServer::*)(quint16,quint8,T);
using pmch_pNonValSignal = void(MyDimServer::*)(quint16,quint8);

static QTextStream cout(stdout);
static QTextStream cin(stdin);
static QTextStream cerr(stderr);

static QFile DimServicesFile("ServicesList_v1_0.txt");
static QFile DimCommandsFile("CommandsList_v1_0.txt");

//static QTextStream outDSs;
//static QTextStream outDCs;
extern QTextStream outDSs;
extern QTextStream outDCs;


void OpenOutFiles();

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

extern QHash<QString,pm_pNonValSignal> PMNonValHash;
extern void fillPMNonValHash();
pm_pNonValSignal getPMNonValPointerToSignal(QString PARname);

extern QHash<QString,pmch_pNonValSignal> PMCHNonValHash;
extern void fillPMCHNonValHash();
pmch_pNonValSignal getPMCHNonValPointerToSignal(QString PARname);



const QMap<quint16,QString> DIM_name{
                                        {0x0000,"FT0/TCM"},
                                        {0x00A0,"FT0/PMA0"},
                                        {0x00A1,"FT0/PMA1"},
                                        {0x00A2,"FT0/PMA2"},
                                        {0x00A3,"FT0/PMA3"},
                                        {0x00A4,"FT0/PMA4"},
                                        {0x00A5,"FT0/PMA5"},
                                        {0x00A6,"FT0/PMA6"},
                                        {0x00A7,"FT0/PMA7"},
                                        {0x00A8,"FT0/PMA8"},
                                        {0x00A9,"FT0/PMA9"},
                                        {0x00A0,"FT0/PMC0"},
                                        {0x00A1,"FT0/PMC1"},
                                        {0x00A2,"FT0/PMC2"},
                                        {0x00A3,"FT0/PMC3"},
                                        {0x00A4,"FT0/PMC4"},
                                        {0x00A5,"FT0/PMC5"},
                                        {0x00A6,"FT0/PMC6"},
                                        {0x00A7,"FT0/PMC7"},
                                        {0x00A8,"FT0/PMC8"},
                                        {0x00A9,"FT0/PMC9"}
                                    };

const QMap<quint8,quint16> FT0_FEE_ID{  {0,0x0000},
                                        {1,0x00A0},
                                        {2,0x00A1},
                                        {3,0x00A2},
                                        {4,0x00A3},
                                        {5,0x00A4},
                                        {6,0x00A5},
                                        {7,0x00A6},
                                        {8,0x00A7},
                                        {9,0x00C0},
                                        {10,0x00C1},
                                        {11,0x00C2},
                                        {12,0x00C3},
                                        {13,0x00C4},
                                        {14,0x00C5},
                                        {15,0x00C6},
                                        {16,0x00C7},
                                        {17,0x00C8},
                                        {18,0x00C9}
                                     };


#endif // COMMON_H
