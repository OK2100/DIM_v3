#ifndef EMULATOR_H
#define EMULATOR_H

#include <QObject>
#include "mydimserver.h"


class Emulator : public QObject
{
    Q_OBJECT

public:
    Emulator(MyDimServer* _serv, QObject *parent = nullptr);
    ~Emulator();
    MyDimServer* serv;
    QString node = "localhost";

    void SetupConnection();
    void FillActRandom();

signals:

    //  These signals used for randomize ACTvalues

    void set_cmnd_ADC_ZERO_requested     (quint16 FEEid, quint8 CHid, qint16 val);
    void set_cmnd_ADC_DELAY_requested    (quint16 FEEid, quint8 CHid, qint16 val);
    void set_cmnd_ADC0_OFFSET_requested  (quint16 FEEid, quint8 CHid, quint16 val);
    void set_cmnd_ADC1_OFFSET_requested  (quint16 FEEid, quint8 CHid, quint16 val);
    void set_cmnd_ADC0_RANGE_requested   (quint16 FEEid, quint8 CHid, quint16 val);
    void set_cmnd_ADC1_RANGE_requested   (quint16 FEEid, quint8 CHid, quint16 val);
    void set_cmnd_TIME_ALIGN_requested    (quint16 FEEid, quint8 CHid, quint16 val);
    void set_cmnd_CFD_THRESHOLD_requested (quint16 FEEid, quint8 CHid, qint16 val);
    void set_cmnd_CFD_ZERO_requested     (quint16 FEEid, quint8 CHid, qint16 val);
    void set_cmnd_THRESHOLD_CALIBR_requested(quint16 FEEid, quint8 CHid, qint16 val);

    void set_cmnd_ADC0_MEANAMPL_requested(quint16 FEEid, quint8 CHid, quint16 val);
    void set_cmnd_ADC1_MEANAMPL_requested(quint16 FEEid, quint8 CHid, quint16 val);
    void set_cmnd_ADC0_ZEROLVL_requested(quint16 FEEid, quint8 CHid, quint16 val);
    void set_cmnd_ADC1_ZEROLVL_requested(quint16 FEEid, quint8 CHid, quint16 val);
    void set_cmnd_RAW_TDC_DATA_requested(quint16 FEEid, quint8 CHid, quint16 val);
    void set_cmnd_CNT_CFD_requested     (quint16 FEEid, quint8 CHid, quint32 val);
    void set_cmnd_CNT_CFD_RATE_requested(quint16 FEEid, quint8 CHid, quint32 val);
    void set_cmnd_CNT_TRG_requested     (quint16 FEEid, quint8 CHid, quint32 val);
    void set_cmnd_CNT_TRG_RATE_requested(quint16 FEEid, quint8 CHid, quint32 val);

    void set_cmnd_OR_GATE_requested  (quint16 FEEid, quint16 val);
    void set_cmnd_CFD_SATR_requested (quint16 FEEid, quint16 val);
    void set_cmnd_CH_MASK_requested  (quint16 FEEid, quint8 val);

    void set_cmnd_LINK_STATUS_requested                   (quint16 FEEid, quint32 val);
    void set_cmnd_BOARD_STATUS_requested                  (quint16 FEEid, quint16 val);
    void set_cmnd_TEMPERATURE_requested                   (quint16 FEEid, quint16 val);
    void set_cmnd_SERIAL_NUM_requested                    (quint16 FEEid, quint16 val);
    void set_cmnd_FW_VERSION_requested                    (quint16 FEEid, quint32 val);

    void set_cmnd_TG_PATTERN_1_requested      (quint16 FEEid, quint32 val);
    void set_cmnd_TG_PATTERN_0_requested      (quint16 FEEid, quint32 val);
    void set_cmnd_TG_CONT_VALUE_requested    (quint16 FEEid, quint8 val);
    void set_cmnd_TG_BUNCH_FREQ_requested    (quint16 FEEid, quint16 val);
    void set_cmnd_TG_FREQ_OFFSET_requested   (quint16 FEEid, quint16 val);
    void set_cmnd_TG_MODE_requested          (quint16 FEEid, quint8 val);
    void set_cmnd_HB_RESPONSE_requested      (quint16 FEEid, quint8 val);
    void set_cmnd_DG_MODE_requested          (quint16 FEEid, quint8 val);


    void set_cmnd_DG_TRG_RESPOND_MASK_requested  (quint16 FEEid, quint32 val);
    void set_cmnd_DG_BUNCH_PATTERN_requested     (quint16 FEEid, quint32 val);
    void set_cmnd_DG_BUNCH_FREQ_requested        (quint16 FEEid, quint16 val);
    void set_cmnd_DG_FREQ_OFFSET_requested       (quint16 FEEid, quint16 val);
    void set_cmnd_RDH_FEE_ID_requested           (quint16 FEEid, quint16 val);
    void set_cmnd_RDH_PAR_requested              (quint16 FEEid, quint16 val);
    void set_cmnd_RDH_MAX_PAYLOAD_requested      (quint16 FEEid, quint16 val);
    void set_cmnd_RDH_DET_FIELD_requested        (quint16 FEEid, quint16 val);
    void set_cmnd_CRU_TRG_COMPARE_DELAY_requested(quint16 FEEid, quint16 val);
    void set_cmnd_BCID_DELAY_requested           (quint16 FEEid, quint16 val);
    void set_cmnd_DATA_SEL_TRG_MASK_requested    (quint16 FEEid, quint32 val);

    void set_cmnd_BITS_requested                          (quint16 FEEid, quint16 val);
    void set_cmnd_READOUT_MODE_requested                  (quint16 FEEid, quint8 val);
    void set_cmnd_BCID_SYNC_MODE_requested                (quint16 FEEid, quint8 val);
    void set_cmnd_RX_PHASE_requested                      (quint16 FEEid, quint8 val);
    void set_cmnd_CRU_ORBIT_requested                     (quint16 FEEid, quint32 val);
    void set_cmnd_CRU_BC_requested                        (quint16 FEEid, quint16 val);
    void set_cmnd_RAW_FIFO_requested                      (quint16 FEEid, quint16 val);
    void set_cmnd_SEL_FIFO_requested                      (quint16 FEEid, quint16 val);
    void set_cmnd_SEL_FIRST_HIT_DROPPED_ORBIT_requested   (quint16 FEEid, quint32 val);
    void set_cmnd_SEL_LAST_HIT_DROPPED_ORBIT_requested    (quint16 FEEid, quint32 val);
    void set_cmnd_SEL_HITS_DROPPED_requested              (quint16 FEEid, quint32 val);
    void set_cmnd_READOUT_RATE_requested                  (quint16 FEEid, quint16 val);


public slots:
    //      Slot update_requested_act<> called when apply_<> signal arrived from DIMserver;
    //      Emulator gets new value from server with function GetNewValue(); Real server will not do it;
    //      It will store NEWvalues inside;
    //      Emulator sends signal set_cmnd_<>; This signal is connected with update_act_<> slot of DIMserver;

    //      Exeption - parameters without NEWvalue (f.e. TG_MODE and DG_MODE); These parameters are connected
    //      directly apply_<>_requested -> update_act_<>

    void update_request_act_OR_GATE(quint16 FEEid){ emit set_cmnd_OR_GATE_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->orgate->GetNewValue());}
    void update_request_act_CFD_SATR(quint16 FEEid){ emit set_cmnd_CFD_SATR_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->cfdsatr->GetNewValue());}
    void update_request_act_CH_MASK(quint16 FEEid){ emit set_cmnd_CH_MASK_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->chmask->GetNewValue());}

    void update_request_act_ADC_ZERO(quint16 FEEid,quint8 CHid){ emit set_cmnd_ADC_ZERO_requested(FEEid,CHid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->adczero[CHid-1]->GetNewValue());}
    void update_request_act_ADC_DELAY(quint16 FEEid,quint8 CHid){ emit set_cmnd_ADC_DELAY_requested(FEEid,CHid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->adcdelay[CHid-1]->GetNewValue());}
    void update_request_act_ADC0_OFFSET(quint16 FEEid,quint8 CHid){ emit set_cmnd_ADC0_OFFSET_requested(FEEid,CHid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->adc0offset[CHid-1]->GetNewValue());}
    void update_request_act_ADC1_OFFSET(quint16 FEEid,quint8 CHid){ emit set_cmnd_ADC1_OFFSET_requested(FEEid,CHid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->adc1offset[CHid-1]->GetNewValue());}
    void update_request_act_ADC0_RANGE(quint16 FEEid,quint8 CHid){ emit set_cmnd_ADC0_RANGE_requested(FEEid,CHid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->adc0range[CHid-1]->GetNewValue());}
    void update_request_act_ADC1_RANGE(quint16 FEEid,quint8 CHid){ emit set_cmnd_ADC1_RANGE_requested(FEEid,CHid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->adc1range[CHid-1]->GetNewValue());}
    void update_request_act_TIME_ALIGN(quint16 FEEid,quint8 CHid){ emit set_cmnd_TIME_ALIGN_requested(FEEid,CHid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->timealign[CHid-1]->GetNewValue());}
    void update_request_act_CFD_THRESHOLD(quint16 FEEid,quint8 CHid){ emit set_cmnd_CFD_THRESHOLD_requested(FEEid,CHid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->cfdthreshold[CHid-1]->GetNewValue());}
    void update_request_act_CFD_ZERO(quint16 FEEid,quint8 CHid){ emit set_cmnd_CFD_ZERO_requested(FEEid,CHid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->cfdzero[CHid-1]->GetNewValue());}
    void update_request_act_THRESHOLD_CALIBR(quint16 FEEid,quint8 CHid){ emit set_cmnd_THRESHOLD_CALIBR_requested(FEEid,CHid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->thresholdcalibr[CHid-1]->GetNewValue());}

    void update_request_act_TG_PATTERN_1(quint16 FEEid){ if(FEEid == 0xF000) emit set_cmnd_TG_PATTERN_1_requested(FEEid,serv->tcm->tgpattern1->GetNewValue()); else emit set_cmnd_TG_PATTERN_1_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->tgpattern1->GetNewValue());}
    void update_request_act_TG_PATTERN_0(quint16 FEEid){ if(FEEid == 0xF000) emit set_cmnd_TG_PATTERN_0_requested(FEEid,serv->tcm->tgpattern0->GetNewValue()); else emit set_cmnd_TG_PATTERN_0_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->tgpattern0->GetNewValue());}
    void update_request_act_TG_CONT_VALUE(quint16 FEEid){ if(FEEid == 0xF000) emit set_cmnd_TG_CONT_VALUE_requested(FEEid,serv->tcm->tgcontvalue->GetNewValue()); else emit set_cmnd_TG_CONT_VALUE_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->tgcontvalue->GetNewValue());}
    void update_request_act_TG_BUNCH_FREQ(quint16 FEEid){ if(FEEid == 0xF000) emit set_cmnd_TG_BUNCH_FREQ_requested(FEEid,serv->tcm->tgbunchfreq->GetNewValue()); else emit set_cmnd_TG_BUNCH_FREQ_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->tgbunchfreq->GetNewValue());}
    void update_request_act_TG_FREQ_OFFSET(quint16 FEEid){ if(FEEid == 0xF000) emit set_cmnd_TG_FREQ_OFFSET_requested(FEEid,serv->tcm->tgfreqoffset->GetNewValue()); else emit set_cmnd_TG_FREQ_OFFSET_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->tgfreqoffset->GetNewValue());}

    void update_request_act_DG_TRG_RESPOND_MASK(quint16 FEEid){ if(FEEid == 0xF000) emit set_cmnd_DG_TRG_RESPOND_MASK_requested(FEEid,serv->tcm->dgtrgrespondmask->GetNewValue()); else emit set_cmnd_DG_TRG_RESPOND_MASK_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->dgtrgrespondmask->GetNewValue());}
    void update_request_act_DG_BUNCH_PATTERN(quint16 FEEid){ if(FEEid == 0xF000) emit set_cmnd_DG_BUNCH_PATTERN_requested(FEEid,serv->tcm->dgbunchpattern->GetNewValue()); else emit set_cmnd_DG_BUNCH_PATTERN_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->dgbunchpattern->GetNewValue());}
    void update_request_act_DG_BUNCH_FREQ(quint16 FEEid){ if(FEEid == 0xF000) emit set_cmnd_DG_BUNCH_FREQ_requested(FEEid,serv->tcm->dgbunchfreq->GetNewValue()); else emit set_cmnd_DG_BUNCH_FREQ_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->dgbunchfreq->GetNewValue());}
    void update_request_act_DG_FREQ_OFFSET(quint16 FEEid){ if(FEEid == 0xF000) emit set_cmnd_DG_FREQ_OFFSET_requested(FEEid,serv->tcm->dgfreqoffset->GetNewValue()); else emit set_cmnd_DG_FREQ_OFFSET_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->dgfreqoffset->GetNewValue());}
    void update_request_act_RDH_FEE_ID(quint16 FEEid){ if(FEEid == 0xF000) emit set_cmnd_RDH_FEE_ID_requested(FEEid,serv->tcm->rdhfeeid->GetNewValue()); else emit set_cmnd_RDH_FEE_ID_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->rdhfeeid->GetNewValue());}
    void update_request_act_RDH_PAR(quint16 FEEid){ if(FEEid == 0xF000) emit set_cmnd_RDH_PAR_requested(FEEid,serv->tcm->rdhpar->GetNewValue()); else emit set_cmnd_RDH_PAR_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->rdhpar->GetNewValue());}
    void update_request_act_RDH_MAX_PAYLOAD(quint16 FEEid){ if(FEEid == 0xF000) emit set_cmnd_RDH_MAX_PAYLOAD_requested(FEEid,serv->tcm->rdhmaxpayload->GetNewValue()); else emit set_cmnd_RDH_MAX_PAYLOAD_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->rdhmaxpayload->GetNewValue());}
    void update_request_act_RDH_DET_FIELD(quint16 FEEid){ if(FEEid == 0xF000) emit set_cmnd_RDH_DET_FIELD_requested(FEEid,serv->tcm->rdhdetfield->GetNewValue()); else emit set_cmnd_RDH_DET_FIELD_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->rdhdetfield->GetNewValue());}
    void update_request_act_CRU_TRG_COMPARE_DELAY(quint16 FEEid){ if(FEEid == 0xF000) emit set_cmnd_CRU_TRG_COMPARE_DELAY_requested(FEEid,serv->tcm->crutrgcomparedelay->GetNewValue()); else emit set_cmnd_CRU_TRG_COMPARE_DELAY_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->crutrgcomparedelay->GetNewValue());}
    void update_request_act_BCID_DELAY(quint16 FEEid){ if(FEEid == 0xF000) emit set_cmnd_BCID_DELAY_requested(FEEid,serv->tcm->bciddelay->GetNewValue()); else emit set_cmnd_BCID_DELAY_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->bciddelay->GetNewValue());}
    void update_request_act_DATA_SEL_TRG_MASK(quint16 FEEid){ if(FEEid == 0xF000) emit set_cmnd_DATA_SEL_TRG_MASK_requested(FEEid,serv->tcm->dataseltrgmask->GetNewValue()); else emit set_cmnd_DATA_SEL_TRG_MASK_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->dataseltrgmask->GetNewValue());}

    void update_request_act_AlltoPM(quint16 FEEid){

        serv->emitSignal(&MyDimServer::apply_OR_GATE_requested,FEEid);
        serv->emitSignal(&MyDimServer::apply_CFD_SATR_requested,FEEid);
        serv->emitSignal(&MyDimServer::apply_CH_MASK_requested,FEEid);


        for(quint8 i=0; i<serv->pm[FT0_FEE_ID.key(FEEid)-1]->Nchannels;i++){
            serv->emitSignal(&MyDimServer::apply_ADC_ZERO_requested,FEEid,i+1);
            serv->emitSignal(&MyDimServer::apply_ADC_DELAY_requested,FEEid,i+1);
            serv->emitSignal(&MyDimServer::apply_ADC0_OFFSET_requested,FEEid,i+1);
            serv->emitSignal(&MyDimServer::apply_ADC1_OFFSET_requested,FEEid,i+1);
            serv->emitSignal(&MyDimServer::apply_ADC0_RANGE_requested,FEEid,i+1);
            serv->emitSignal(&MyDimServer::apply_ADC1_RANGE_requested,FEEid,i+1);
            serv->emitSignal(&MyDimServer::apply_TIME_ALIGN_requested,FEEid,i+1);
            serv->emitSignal(&MyDimServer::apply_CFD_THRESHOLD_requested,FEEid,i+1);
            serv->emitSignal(&MyDimServer::apply_CFD_ZERO_requested,FEEid,i+1);
            serv->emitSignal(&MyDimServer::apply_THRESHOLD_CALIBR_requested,FEEid,i+1);
        }
        serv->emitSignal(&MyDimServer::apply_TG_PATTERN_1_requested,FEEid);
        serv->emitSignal(&MyDimServer::apply_TG_PATTERN_0_requested,FEEid);
        serv->emitSignal(&MyDimServer::apply_TG_CONT_VALUE_requested,FEEid);
        serv->emitSignal(&MyDimServer::apply_TG_BUNCH_FREQ_requested,FEEid);
        serv->emitSignal(&MyDimServer::apply_TG_FREQ_OFFSET_requested,FEEid);
        serv->emitSignal(&MyDimServer::apply_DG_TRG_RESPOND_MASK_requested,FEEid);
        serv->emitSignal(&MyDimServer::apply_DG_BUNCH_PATTERN_requested,FEEid);
        serv->emitSignal(&MyDimServer::apply_DG_BUNCH_FREQ_requested,FEEid);
        serv->emitSignal(&MyDimServer::apply_DG_FREQ_OFFSET_requested,FEEid);
        serv->emitSignal(&MyDimServer::apply_RDH_FEE_ID_requested,FEEid);
        serv->emitSignal(&MyDimServer::apply_RDH_PAR_requested,FEEid);
        serv->emitSignal(&MyDimServer::apply_RDH_MAX_PAYLOAD_requested,FEEid);
        serv->emitSignal(&MyDimServer::apply_RDH_DET_FIELD_requested,FEEid);
        serv->emitSignal(&MyDimServer::apply_CRU_TRG_COMPARE_DELAY_requested,FEEid);
        serv->emitSignal(&MyDimServer::apply_BCID_DELAY_requested,FEEid);
        serv->emitSignal(&MyDimServer::apply_DATA_SEL_TRG_MASK_requested,FEEid);

    }

            //  TCM
signals:
    void set_cmnd_COUNTERS_UPD_RATE_requested(quint8 val);
    void set_cmnd_EXTENDED_READOUT_requested(quint8 isOn);
    void set_cmnd_SC_SUM_SIDES_requested(quint8 isOn);
    void set_cmnd_C_SUM_SIDES_requested(quint8 isOn);
    void set_cmnd_ADD_C_DELAY_requested(quint8 isOn);
    void set_cmnd_RES_SW_1_requested(quint8 isOn);
    void set_cmnd_RES_SW_2_requested(quint8 isOn);
    void set_cmnd_RES_SW_3_requested(quint8 isOn);
    void set_cmnd_RES_SW_4_requested(quint8 isOn);
    void set_cmnd_DELAY_A_requested(qint16 val);
    void set_cmnd_DELAY_C_requested(qint16 val);
    void set_cmnd_VTIME_LOW_requested(qint16 val);
    void set_cmnd_VTIME_HIGH_requested(qint16 val);
    void set_cmnd_SC_LEVEL_A_requested(quint16 val);
    void set_cmnd_SC_LEVEL_C_requested(quint16 val);
    void set_cmnd_C_LEVEL_A_requested(quint16 val);
    void set_cmnd_C_LEVEL_C_requested(quint16 val);
    void set_cmnd_CH_MASK_A_requested(quint16 val);
    void set_cmnd_CH_MASK_C_requested(quint16 val);

//    void set_cmnd_BOARD_STATUS_requested(quint16 FEEid);
//    void set_cmnd_TEMPERATURE_requested(quint16 FEEid);
//    void set_cmnd_SERIAL_NUM_requested(quint16 FEEid);
//    void set_cmnd_FW_VERSION_requested(quint16 FEEid);
    void set_cmnd_SIDE_A_STATUS_requested(quint16 val);
    void set_cmnd_SIDE_C_STATUS_requested(quint16 val);
    void set_cmnd_CNT_OR_A_requested(quint32 val);
    void set_cmnd_CNT_OR_A_RATE_requested(quint32 val);
    void set_cmnd_CNT_OR_C_requested(quint32 val);
    void set_cmnd_CNT_OR_C_RATE_requested(quint32 val);
    void set_cmnd_CNT_SC_requested(quint32 val);
    void set_cmnd_CNT_SC_RATE_requested(quint32 val);
    void set_cmnd_CNT_C_requested(quint32 val);
    void set_cmnd_CNT_C_RATE_requested(quint32 val);
    void set_cmnd_CNT_V_requested(quint32 val);
    void set_cmnd_CNT_V_RATE_requested(quint32 val);

    void set_cmnd_STATUS_OPTIONCODE_requested(QString mode);

    void set_cmnd_OR_A_SIGN_requested(quint16 val);
    void set_cmnd_OR_A_RATE_requested(quint32 val);
    void set_cmnd_OR_C_SIGN_requested(quint16 val);
    void set_cmnd_OR_C_RATE_requested(quint32 val);
    void set_cmnd_SC_SIGN_requested(quint16 val);
    void set_cmnd_SC_RATE_requested(quint32 val);
    void set_cmnd_C_SIGN_requested(quint16 val);
    void set_cmnd_C_RATE_requested(quint32 val);
    void set_cmnd_V_SIGN_requested(quint16 val);
    void set_cmnd_V_RATE_requested(quint32 val);
    void set_cmnd_OR_A_ENABLED_requested(quint8 isOn);
    void set_cmnd_OR_C_ENABLED_requested(quint8 isOn);
    void set_cmnd_SC_ENABLED_requested(quint8 isOn);
    void set_cmnd_C_ENABLED_requested(quint8 isOn);
    void set_cmnd_V_ENABLED_requested(quint8 isOn);

    void set_cmnd_LASER_ON_requested(quint8 isOn);
    void set_cmnd_LASER_DIV_requested(quint32 val);
    void set_cmnd_LASER_DELAY_requested(qint16 val);
    void set_cmnd_LASER_PATTERN_1_requested(quint32 val);
    void set_cmnd_LASER_PATTERN_0_requested(quint32 val);
    void set_cmnd_ATTEN_VALUE_requested(quint16 val);
    void set_cmnd_ATTEN_STATUS_requested(quint8 val);

public slots:
    //  TCM parameters with NEW value


    void update_request_act_DELAY_A(){ emit set_cmnd_DELAY_A_requested(serv->tcm->delayA->GetNewValue());}
    void update_request_act_DELAY_C(){ emit set_cmnd_DELAY_C_requested(serv->tcm->delayC->GetNewValue());}
    void update_request_act_VTIME_LOW(){ emit set_cmnd_VTIME_LOW_requested(serv->tcm->vtimelow->GetNewValue());}
    void update_request_act_VTIME_HIGH(){ emit set_cmnd_VTIME_HIGH_requested(serv->tcm->vtimehight->GetNewValue());}
    void update_request_act_SC_LEVEL_A(){ emit set_cmnd_SC_LEVEL_A_requested(serv->tcm->sclevelA->GetNewValue());}
    void update_request_act_SC_LEVEL_C(){ emit set_cmnd_SC_LEVEL_C_requested(serv->tcm->sclevelC->GetNewValue());}
    void update_request_act_C_LEVEL_A(){ emit set_cmnd_C_LEVEL_A_requested(serv->tcm->clevelA->GetNewValue());}
    void update_request_act_C_LEVEL_C(){ emit set_cmnd_C_LEVEL_C_requested(serv->tcm->clevelC->GetNewValue());}
    void update_request_act_CH_MASK_A(){ emit set_cmnd_CH_MASK_A_requested(serv->tcm->chmfskA->GetNewValue());}
    void update_request_act_CH_MASK_C(){ emit set_cmnd_CH_MASK_C_requested(serv->tcm->chmfskC->GetNewValue());}

    void update_request_act_OR_A_SIGN(){ emit set_cmnd_OR_A_SIGN_requested(serv->tcm->orAsign->GetNewValue());}
    void update_request_act_OR_A_RATE(){ emit set_cmnd_OR_A_RATE_requested(serv->tcm->orArate->GetNewValue());}
    void update_request_act_OR_C_SIGN(){ emit set_cmnd_OR_C_SIGN_requested(serv->tcm->orCsign->GetNewValue());}
    void update_request_act_OR_C_RATE(){ emit set_cmnd_OR_C_RATE_requested(serv->tcm->orCrate->GetNewValue());}
    void update_request_act_SC_SIGN(){ emit set_cmnd_SC_SIGN_requested(serv->tcm->scsign->GetNewValue());}
    void update_request_act_SC_RATE(){ emit set_cmnd_SC_RATE_requested(serv->tcm->scrate->GetNewValue());}
    void update_request_act_C_SIGN(){ emit set_cmnd_C_SIGN_requested(serv->tcm->csign->GetNewValue());}
    void update_request_act_C_RATE(){ emit set_cmnd_C_RATE_requested(serv->tcm->crate->GetNewValue());}
    void update_request_act_V_SIGN(){ emit set_cmnd_V_SIGN_requested(serv->tcm->vsign->GetNewValue());}
    void update_request_act_V_RATE(){ emit set_cmnd_V_RATE_requested(serv->tcm->vrate->GetNewValue());}

    void update_request_act_LASER_DIV(){ emit set_cmnd_LASER_DIV_requested(serv->tcm->laserdiv->GetNewValue());}
    void update_request_act_LASER_DELAY(){ emit set_cmnd_LASER_DELAY_requested(serv->tcm->laserdelay->GetNewValue());}
    void update_request_act_LASER_PATTERN_1(){ emit set_cmnd_LASER_PATTERN_1_requested(serv->tcm->laserpattern1->GetNewValue());}
    void update_request_act_LASER_PATTERN_0(){ emit set_cmnd_LASER_PATTERN_0_requested(serv->tcm->laserpattern0->GetNewValue());}
    void update_request_act_ATTEN_VALUE(){ emit set_cmnd_ATTEN_VALUE_requested(serv->tcm->attenvalue->GetNewValue());}

};

#endif // EMULATOR_H
