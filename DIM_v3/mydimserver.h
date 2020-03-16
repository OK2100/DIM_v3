#ifndef MYDIMSERVER_H
#define MYDIMSERVER_H


#include "classes.h"
#include "common.h"


class PMPars
{
public:
    PMPars(MyDimServer* _server);
    ~PMPars();

    MyDimServer* pServer;
    quint8 Nchannels = 12;
    quint8 PMid;
    void publish();

    QVector<PMCHfullPar<qint16>*> adczero;
    QVector<PMCHfullPar<qint16>*> adcdelay;
    QVector<PMCHfullPar<quint16>*> adc0offset;
    QVector<PMCHfullPar<quint16>*> adc1offset;
    QVector<PMCHfullPar<quint16>*> adc0range;
    QVector<PMCHfullPar<quint16>*> adc1range;
    QVector<PMCHfullPar<quint16>*> timealign;
    QVector<PMCHfullPar<qint16>*> cfdthreshold;
    QVector<PMCHfullPar<qint16>*> cfdzero;
    QVector<PMCHfullPar<qint16>*>  thresholdcalibr;

    QVector<PMCHonlyAppPar*> alltoch;

    QVector<PMCHonlyActPar<quint16>*> adc0meanampl;
    QVector<PMCHonlyActPar<quint16>*> adc1meanampl;
    QVector<PMCHonlyActPar<quint16>*> adc0zerolvl;
    QVector<PMCHonlyActPar<quint16>*> adc1zerolvl;
    QVector<PMCHonlyActPar<quint32>*> cfdcnt;
    QVector<PMCHonlyActPar<quint32>*> trgcnt;
    QVector<PMCHonlyActPar<quint16>*> rawtdcdata;

    PMfullPar<quint16>* chmask;
    PMfullPar<quint16>* cfdsatr;
    PMfullPar<quint8>* orgate;
    PMonlyAppPar* resetcounters;
    PMonlyAppPar* zerolvlcalibration;

    PMonlyAppPar* resetorbitsync;
    PMonlyAppPar* resetdrophitcnts;
    PMonlyAppPar* resetgenbunchoffset;
    PMonlyAppPar* resetgbterrors;
    PMonlyAppPar* resetgbt;
    PMonlyAppPar* resetrxphaseerror;
    PMonlyValAppPar<quint8>* sendreadoutcommand;
    PMActnValAppPar<quint8>*  tgmode;
    PMfullPar<quint32>* tgpattern1;
    PMfullPar<quint32>* tgpattern0;
    PMfullPar<quint8>*  tgcontvalue;
    PMonlyValAppPar<quint32>* tgsendsingle;
    PMfullPar<quint16>* tgbunchfreq;
    PMfullPar<quint16>* tgfreqoffset;
    PMActnValAppPar<quint8>* dgmode;
    PMfullPar<quint32>* dgtrgrespondmask;
    PMfullPar<quint32>* dgbunchpattern;
    PMfullPar<quint16>* dgbunchfreq;
    PMfullPar<quint16>* dgfreqoffset;
    PMfullPar<quint16>* rdhfeeid;
    PMfullPar<quint16>* rdhpar;
    PMfullPar<quint16>* rdhmaxpayload;
    PMfullPar<quint16>* rdhdetfield;
    PMfullPar<quint16>* crutrgcomparedelay;
    PMfullPar<quint16>* bciddelay;
    PMonlyAppPar* alltopm;

    PMonlyActPar<quint16>* boardstatus;
    PMonlyActPar<quint16>* temperature;
    PMonlyActPar<quint32>* hdmilink;
    PMonlyActPar<quint16>* bits;
    PMonlyActPar<quint8>* readoutmode;
    PMonlyActPar<quint8>* bcidsyncmode;
    PMonlyActPar<quint8>* rxphase;
    PMonlyActPar<quint32>* cruorbit;
    PMonlyActPar<quint16>* crubc;
    PMonlyActPar<quint16>* rawfifo;
    PMonlyActPar<quint16>* selfifo;
    PMonlyActPar<quint32>* selfirsthit;
    PMonlyActPar<quint16>* sellasthit;
    PMonlyActPar<quint16>* selhitsdropped;
    PMonlyActPar<quint16>* readoutrate;

};

//  #####################################################################################

class MyDimServer   :  public  QObject, public DimServer
{
    Q_OBJECT
public:
    MyDimServer(QString dns_node, QString server_name="FIT DIM SERVER");
    ~MyDimServer();

//    QFile* DimServicesFile;
//    QFile* DimCommandsFile;


    QString serverName;
    QString dnsNode;
    quint8 Npms = 1;
    PMPars* pm[20];

    void startServer();
    void stopServer();

    void OpenOutFile();
    void CloseOutFile();

    void setNChannels(quint8 nch);

    template<class Y>
    void emitSignal(pmch_pValSignal<Y> pSignal,quint8 PMid,quint8 Chid, Y val);
    void emitSignal(pmch_pNonValSignal pSignal,quint8 PMid,quint8 Chid);

    template<class Y>
    void emitSignal(pm_pValSignal<Y> pSignal,quint8 PMid, Y val);
    void emitSignal(pm_pNonValSignal pSignal,quint8 PMid);

signals:
    void set_ADC_ZERO_requested     (quint8 PMid, quint8 CHid, qint16 val);
    void set_ADC_DELAY_requested    (quint8 PMid, quint8 CHid, qint16 val);
    void set_ADC0_OFFSET_requested  (quint8 PMid, quint8 CHid, quint16 val);
    void set_ADC1_OFFSET_requested  (quint8 PMid, quint8 CHid, quint16 val);
    void set_ADC0_RANGE_requested   (quint8 PMid, quint8 CHid, quint16 val);
    void set_ADC1_RANGE_requested   (quint8 PMid, quint8 CHid, quint16 val);
    void set_TIME_ALIGN_requested    (quint8 PMid, quint8 CHid, quint16 val);
    void set_CFD_THRESHOLD_requested (quint8 PMid, quint8 CHid, qint16 val);
    void set_CFD_ZERO_requested     (quint8 PMid, quint8 CHid, qint16 val);
    void set_THRESHOLD_CALIBR_requested(quint8 PMid, quint8 CHid, qint16 val);

    void apply_ADC_ZERO_requested       (quint8 PMid,quint8 CHid);
    void apply_ADC_DELAY_requested      (quint8 PMid,quint8 CHid);
    void apply_ADC0_OFFSET_requested    (quint8 PMid,quint8 CHid);
    void apply_ADC1_OFFSET_requested    (quint8 PMid,quint8 CHid);
    void apply_ADC0_RANGE_requested     (quint8 PMid,quint8 CHid);
    void apply_ADC1_RANGE_requested     (quint8 PMid,quint8 CHid);
    void apply_TIME_ALIGN_requested      (quint8 PMid,quint8 CHid);
    void apply_CFD_THRESHOLD_requested   (quint8 PMid,quint8 CHid);
    void apply_CFD_ZERO_requested       (quint8 PMid,quint8 CHid);
    void apply_THRESHOLD_CALIBR_requested(quint8 PMid,quint8 CHid);
    void apply_ALLtoCh_requested        (quint8 PMid,quint8 CHid);

    void set_CH_MASK_requested  (quint8 PMid, quint16 val);
    void set_CFD_SATR_requested (quint8 PMid, quint16 val);
    void set_OR_GATE_requested  (quint8 PMid, quint8 val);

    void apply_CH_MASK_requested        (quint8 PMid);
    void apply_CFD_SATR_requested       (quint8 PMid);
    void apply_OR_GATE_requested        (quint8 PMid);
    void apply_RESET_COUNTERS_requested (quint8 PMid);
    void apply_ZERO_LVL_CALIBR_requested(quint8 PMid);

//    /////////////////////////////////////////////////////////////

    void apply_RESET_ORBIT_SYNC_requested           (quint8 PMid);
    void apply_RESET_DROPPING_HIT_COUNTERS_requested(quint8 PMid);
    void apply_RESET_GEN_BUNCH_OFFSET_requested     (quint8 PMid);
    void apply_RESET_GBT_ERRORS_requested           (quint8 PMid);
    void apply_RESET_GBT_requested                  (quint8 PMid);
    void apply_RESET_RX_PHASE_ERROR_requested       (quint8 PMid);
    void apply_SEND_READOUT_COMMAND_requested               (quint8 PMid, quint8 cmd);
    void apply_TG_MODE_requested            (quint8 PMid, quint8 val);
    void apply_TG_PATTERN_1_requested       (quint8 PMid);
    void apply_TG_PATTERN_0_requested       (quint8 PMid);
    void apply_TG_CONT_VALUE_requested      (quint8 PMid);
    void apply_TG_SEND_SINGLE_requested     (quint8 PMid, quint32 val);
    void apply_TG_BUNCH_FREQ_requested      (quint8 PMid);
    void apply_TG_FREQ_OFFSET_requested     (quint8 PMid);
    void apply_DG_MODE_requested            (quint8 PMid, quint8 val);
    void apply_DG_TRG_RESPOND_MASK_requested(quint8 PMid);
    void apply_DG_BUNCH_PATTERN_requested   (quint8 PMid);
    void apply_DG_BUNCH_FREQ_requested      (quint8 PMid);
    void apply_DG_FREQ_OFFSET_requested     (quint8 PMid);
    void apply_RDH_FEE_ID_requested         (quint8 PMid);
    void apply_RDH_PAR_requested            (quint8 PMid);
    void apply_RDH_MAX_PAYLOAD_requested    (quint8 PMid);
    void apply_RDH_DET_FIELD_requested      (quint8 PMid);
    void apply_CRU_TRG_COMPARE_DELAY_requested  (quint8 PMid);
    void apply_BCID_DELAY_requested             (quint8 PMid);

    void set_TG_PATTERN_1_requested      (quint8 PMid, quint32 val);
    void set_TG_PATTERN_0_requested      (quint8 PMid, quint32 val);
    void set_TG_CONT_VALUE_requested    (quint8 PMid, quint8 val);
    void set_TG_BUNCH_FREQ_requested    (quint8 PMid, quint16 val);
    void set_TG_FREQ_OFFSET_requested   (quint8 PMid, quint16 val);

    void set_DG_TRG_RESPOND_MASK_requested  (quint8 PMid, quint32 val);
    void set_DG_BUNCH_PATTERN_requested     (quint8 PMid, quint32 val);
    void set_DG_BUNCH_FREQ_requested        (quint8 PMid, quint16 val);
    void set_DG_FREQ_OFFSET_requested       (quint8 PMid, quint16 val);
    void set_RDH_FEE_ID_requested           (quint8 PMid, quint16 val);
    void set_RDH_PAR_requested              (quint8 PMid, quint16 val);
    void set_RDH_MAX_PAYLOAD_requested      (quint8 PMid, quint16 val);
    void set_RDH_DET_FIELD_requested        (quint8 PMid, quint16 val);
    void set_CRU_TRG_COMPARE_DELAY_requested(quint8 PMid, quint16 val);
    void set_BCID_DELAY_requested           (quint8 PMid, quint16 val);

    void apply_ALLtoPM_requested    (quint8 PMid);

public slots:
    void test_slot0(quint8 PMid){ cout << "Slot0 is reached " << PMid << endl; }
    void test_slot1(quint8 PMid, quint16 val){ cout << "Slot1 is reached " << PMid << " " << val << endl; }
    void test_slot2(quint8 PMid, quint8 CHid, quint16 val){ cout << "Slot2 is reached " << PMid << " " << CHid << " " << val << endl; }
    void test_slot3(quint8 PMid, quint8 CHid, qint16 val){ cout << "Slot2 is reached " << PMid << " " << CHid << " " << val << endl; }
    void update_act_ADC_ZERO    (quint8 PMid, quint8 CHid, qint16 val){pm[PMid-1]->adczero[CHid-1]->updateAct(val);}
    void update_act_ADC_DELAY   (quint8 PMid, quint8 CHid, qint16 val){pm[PMid-1]->adcdelay[CHid-1]->updateAct(val);}
    void update_act_ADC0_OFFSET (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1]->adc0offset[CHid-1]->updateAct(val);}
    void update_act_ADC1_OFFSET (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1]->adc1offset[CHid-1]->updateAct(val);}
    void update_act_ADC0_RANGE  (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1]->adc0range[CHid-1]->updateAct(val);}
    void update_act_ADC1_RANGE  (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1]->adc1range[CHid-1]->updateAct(val);}
    void update_act_TIME_ALIGN   (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1]->timealign[CHid-1]->updateAct(val);}
    void update_act_CFD_THRESHOLD(quint8 PMid, quint8 CHid, qint16 val){pm[PMid-1]->cfdthreshold[CHid-1]->updateAct(val);}
    void update_act_CFD_ZERO    (quint8 PMid, quint8 CHid, qint16 val){pm[PMid-1]->cfdzero[CHid-1]->updateAct(val);}
    void update_act_THRESHOLD_CALIBR(quint8 PMid, quint8 CHid, qint16 val){pm[PMid-1]->thresholdcalibr[CHid-1]->updateAct(val);}

    void update_new_ADC_ZERO    (quint8 PMid, quint8 CHid, qint16 val){pm[PMid-1]->adczero[CHid-1]->updateNew(val);}
    void update_new_ADC_DELAY   (quint8 PMid, quint8 CHid, qint16 val){pm[PMid-1]->adcdelay[CHid-1]->updateNew(val);}
    void update_new_ADC0_OFFSET (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1]->adc0offset[CHid-1]->updateNew(val);}
    void update_new_ADC1_OFFSET (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1]->adc1offset[CHid-1]->updateNew(val);}
    void update_new_ADC0_RANGE  (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1]->adc0range[CHid-1]->updateNew(val);}
    void update_new_ADC1_RANGE  (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1]->adc1range[CHid-1]->updateNew(val);}
    void update_new_TIME_ALIGN   (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1]->timealign[CHid-1]->updateNew(val);}
    void update_new_CFD_THRESHOLD(quint8 PMid, quint8 CHid, qint16 val){pm[PMid-1]->cfdthreshold[CHid-1]->updateNew(val);}
    void update_new_CFD_ZERO    (quint8 PMid, quint8 CHid, qint16 val){pm[PMid-1]->cfdzero[CHid-1]->updateNew(val);}
    void update_new_THRESHOLD_CALIBR(quint8 PMid, quint8 CHid, qint16 val){pm[PMid-1]->thresholdcalibr[CHid-1]->updateNew(val);}

    void update_act_ADC0_MEANAMPL   (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1]->adc0meanampl[CHid-1]->updateAct(val);}
    void update_act_ADC1_MEANAMPL   (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1]->adc1meanampl[CHid-1]->updateAct(val);}
    void update_act_ADC0_ZEROLVL    (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1]->adc0zerolvl[CHid-1]->updateAct(val);}
    void update_act_ADC1_ZEROLVL    (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1]->adc1zerolvl[CHid-1]->updateAct(val);}
    void update_act_CFD_CNT         (quint8 PMid, quint8 CHid, quint32 val){pm[PMid-1]->cfdcnt[CHid-1]->updateAct(val);}
    void update_act_TRG_CNT         (quint8 PMid, quint8 CHid, quint32 val){pm[PMid-1]->trgcnt[CHid-1]->updateAct(val);}
    void update_act_RAW_TDC_DATA    (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1]->rawtdcdata[CHid-1]->updateAct(val);}

    void update_act_CH_MASK (quint8 PMid, quint16 val){pm[PMid-1]->chmask->updateAct(val);}
    void update_act_CFD_SATR(quint8 PMid, quint16 val){pm[PMid-1]->cfdsatr->updateAct(val);}
    void update_act_OR_GATE (quint8 PMid, quint8 val){pm[PMid-1]->orgate->updateAct(val);}

    void update_new_CH_MASK (quint8 PMid, quint16 val){pm[PMid-1]->chmask->updateNew(val);}
    void update_new_CFD_SATR(quint8 PMid, quint16 val){pm[PMid-1]->cfdsatr->updateNew(val);}
    void update_new_OR_GATE (quint8 PMid, quint8 val){pm[PMid-1]->orgate->updateNew(val);}

    void update_act_TG_MODE                 (quint8 PMid, quint8 val){pm[PMid-1]->tgmode->updateAct(val);}
    void update_act_TG_PATTERN_1             (quint8 PMid, quint32 val){pm[PMid-1]->tgpattern1->updateAct(val);}
    void update_act_TG_PATTERN_0             (quint8 PMid, quint32 val){pm[PMid-1]->tgpattern0->updateAct(val);}
    void update_act_TG_CONT_VALUE           (quint8 PMid, quint8 val){pm[PMid-1]->tgcontvalue->updateAct(val);}
    void update_act_TG_BUNCH_FREQ           (quint8 PMid, quint16 val){pm[PMid-1]->tgbunchfreq->updateAct(val);}
    void update_act_TG_FREQ_OFFSET          (quint8 PMid, quint16 val){pm[PMid-1]->tgfreqoffset->updateAct(val);}
    void update_act_DG_MODE                 (quint8 PMid, quint8 val){pm[PMid-1]->dgmode->updateAct(val);}
    void update_act_DG_TRG_RESPOND_MASK     (quint8 PMid, quint32 val){pm[PMid-1]->dgtrgrespondmask->updateAct(val);}
    void update_act_DG_BUNCH_PATTERN        (quint8 PMid, quint32 val){pm[PMid-1]->dgbunchpattern->updateAct(val);}
    void update_act_DG_BUNCH_FREQ           (quint8 PMid, quint16 val){pm[PMid-1]->dgbunchfreq->updateAct(val);}
    void update_act_DG_FREQ_OFFSET          (quint8 PMid, quint16 val){pm[PMid-1]->dgfreqoffset->updateAct(val);}
    void update_act_RDH_FEE_ID              (quint8 PMid, quint16 val){pm[PMid-1]->rdhfeeid->updateAct(val);}
    void update_act_RDH_PAR                 (quint8 PMid, quint16 val){pm[PMid-1]->rdhpar->updateAct(val);}
    void update_act_RDH_MAX_PAYLOAD         (quint8 PMid, quint16 val){pm[PMid-1]->rdhmaxpayload->updateAct(val);}
    void update_act_RDH_DET_FIELD           (quint8 PMid, quint16 val){pm[PMid-1]->rdhdetfield->updateAct(val);}
    void update_act_CRU_TRG_COMPARE_DELAY   (quint8 PMid, quint16 val){pm[PMid-1]->crutrgcomparedelay->updateAct(val);}
    void update_act_BCID_DELAY              (quint8 PMid, quint16 val){pm[PMid-1]->bciddelay->updateAct(val);}


    void update_new_TG_PATTERN_1             (quint8 PMid, quint32 val){pm[PMid-1]->tgpattern1->updateNew(val);}
    void update_new_TG_PATTERN_0             (quint8 PMid, quint32 val){pm[PMid-1]->tgpattern0->updateNew(val);}
    void update_new_TG_CONT_VALUE           (quint8 PMid, quint8 val){pm[PMid-1]->tgcontvalue->updateNew(val);}
    void update_new_TG_BUNCH_FREQ           (quint8 PMid, quint16 val){pm[PMid-1]->tgbunchfreq->updateNew(val);}
    void update_new_TG_FREQ_OFFSET          (quint8 PMid, quint16 val){pm[PMid-1]->tgfreqoffset->updateNew(val);}

    void update_new_DG_TRG_RESPOND_MASK     (quint8 PMid, quint32 val){pm[PMid-1]->dgtrgrespondmask->updateNew(val);}
    void update_new_DG_BUNCH_PATTERN        (quint8 PMid, quint32 val){pm[PMid-1]->dgbunchpattern->updateNew(val);}
    void update_new_DG_BUNCH_FREQ           (quint8 PMid, quint16 val){pm[PMid-1]->dgbunchfreq->updateNew(val);}
    void update_new_DG_FREQ_OFFSET          (quint8 PMid, quint16 val){pm[PMid-1]->dgfreqoffset->updateNew(val);}
    void update_new_RDH_FEE_ID              (quint8 PMid, quint16 val){pm[PMid-1]->rdhfeeid->updateNew(val);}
    void update_new_RDH_PAR                 (quint8 PMid, quint16 val){pm[PMid-1]->rdhpar->updateNew(val);}
    void update_new_RDH_MAX_PAYLOAD         (quint8 PMid, quint16 val){pm[PMid-1]->rdhmaxpayload->updateNew(val);}
    void update_new_RDH_DET_FIELD           (quint8 PMid, quint16 val){pm[PMid-1]->rdhdetfield->updateNew(val);}
    void update_new_CRU_TRG_COMPARE_DELAY   (quint8 PMid, quint16 val){pm[PMid-1]->crutrgcomparedelay->updateNew(val);}
    void update_new_BCID_DELAY              (quint8 PMid, quint16 val){pm[PMid-1]->bciddelay->updateNew(val);}

    void update_act_BOARD_STATUS                (quint8 PMid, quint16 val){pm[PMid-1]->boardstatus->updateAct(val);}
    void update_act_TEMPERATURE                 (quint8 PMid, quint16 val){pm[PMid-1]->temperature->updateAct(val);}
    void update_act_HDMI_LINK                   (quint8 PMid, quint32 val){pm[PMid-1]->hdmilink->updateAct(val);}
    void update_act_BITS                        (quint8 PMid, quint16 val){pm[PMid-1]->bits->updateAct(val);}
    void update_act_READOUT_MODE                (quint8 PMid, quint8 val){pm[PMid-1]->readoutmode->updateAct(val);}
    void update_act_BCID_SYNC_MODE              (quint8 PMid, quint8 val){pm[PMid-1]->bcidsyncmode->updateAct(val);}
    void update_act_RX_PHASE                    (quint8 PMid, quint8 val){pm[PMid-1]->rxphase->updateAct(val);}
    void update_act_CRU_ORBIT                   (quint8 PMid, quint32 val){pm[PMid-1]->cruorbit->updateAct(val);}
    void update_act_CRU_BC                      (quint8 PMid, quint16 val){pm[PMid-1]->crubc->updateAct(val);}
    void update_act_RAW_FIFO                    (quint8 PMid, quint16 val){pm[PMid-1]->rawfifo->updateAct(val);}
    void update_act_SEL_FIFO                    (quint8 PMid, quint16 val){pm[PMid-1]->selfifo->updateAct(val);}
    void update_act_SEL_FIRST_HIT_DROPPED_ORBIT (quint8 PMid, quint32 val){pm[PMid-1]->selfirsthit->updateAct(val);}
    void update_act_SEL_LAST_HIT_DROPPED_ORBIT  (quint8 PMid, quint16 val){pm[PMid-1]->sellasthit->updateAct(val);}
    void update_act_SEL_HITS_DROPPED            (quint8 PMid, quint16 val){pm[PMid-1]->selhitsdropped->updateAct(val);}
    void update_act_READOUT_RATE                (quint8 PMid, quint16 val){pm[PMid-1]->readoutrate->updateAct(val);}
};


//	@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//	@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

template<class T>
void pm_SET<T>::emitSignalRequest(DimCommand* currCmnd){
    pServer->emitSignal(pSETSignal,PMid,*static_cast<T*>(currCmnd->getData()));
}

template<class T>
void pm_ValAPP<T>::emitSignalRequest(DimCommand* currCmnd){
    pServer->emitSignal(pAPPSignal,PMid,*static_cast<T*>(currCmnd->getData()));
}


#endif // MYDIMSERVER_H
