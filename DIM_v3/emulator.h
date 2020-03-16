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
    void set_cmnd_CFD_CNT_requested(quint16 FEEid, quint8 CHid, quint32 val);
    void set_cmnd_TRG_CNT_requested(quint16 FEEid, quint8 CHid, quint32 val);
    void set_cmnd_RAW_TDC_DATA_requested(quint16 FEEid, quint8 CHid, quint16 val);



    void set_cmnd_CH_MASK_requested  (quint16 FEEid, quint16 val);
    void set_cmnd_CFD_SATR_requested (quint16 FEEid, quint16 val);
    void set_cmnd_OR_GATE_requested  (quint16 FEEid, quint8 val);

    void set_cmnd_TG_PATTERN_1_requested      (quint16 FEEid, quint32 val);
    void set_cmnd_TG_PATTERN_0_requested      (quint16 FEEid, quint32 val);
    void set_cmnd_TG_CONT_VALUE_requested    (quint16 FEEid, quint8 val);
    void set_cmnd_TG_BUNCH_FREQ_requested    (quint16 FEEid, quint16 val);
    void set_cmnd_TG_FREQ_OFFSET_requested   (quint16 FEEid, quint16 val);

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

    void set_cmnd_BOARD_STATUS_requested                  (quint16 FEEid, quint16 val);
    void set_cmnd_TEMPERATURE_requested                   (quint16 FEEid, quint16 val);
    void set_cmnd_HDMI_LINK_requested                     (quint16 FEEid, quint32 val);
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

    void update_request_act_AlltoCh(quint16 FEEid,quint8 CHid){
        serv->emitSignal(&MyDimServer::apply_ADC_ZERO_requested,FEEid,CHid);
        serv->emitSignal(&MyDimServer::apply_ADC_DELAY_requested,FEEid,CHid);
        serv->emitSignal(&MyDimServer::apply_ADC0_OFFSET_requested,FEEid,CHid);
        serv->emitSignal(&MyDimServer::apply_ADC1_OFFSET_requested,FEEid,CHid);
        serv->emitSignal(&MyDimServer::apply_ADC0_RANGE_requested,FEEid,CHid);
        serv->emitSignal(&MyDimServer::apply_ADC1_RANGE_requested,FEEid,CHid);
        serv->emitSignal(&MyDimServer::apply_TIME_ALIGN_requested,FEEid,CHid);
        serv->emitSignal(&MyDimServer::apply_CFD_THRESHOLD_requested,FEEid,CHid);
        serv->emitSignal(&MyDimServer::apply_CFD_ZERO_requested,FEEid,CHid);
        serv->emitSignal(&MyDimServer::apply_THRESHOLD_CALIBR_requested,FEEid,CHid);
    }

    void update_request_act_CH_MASK(quint16 FEEid){ emit set_cmnd_CH_MASK_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->chmask->GetNewValue());}
    void update_request_act_CFD_SATR(quint16 FEEid){ emit set_cmnd_CFD_SATR_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->cfdsatr->GetNewValue());}
    void update_request_act_OR_GATE(quint16 FEEid){ emit set_cmnd_OR_GATE_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->orgate->GetNewValue());}
//////////////////////    void update_request_act_TG_MODE(quint16 FEEid){ emit set_cmnd_(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->GetNewValue());}
    void update_request_act_TG_PATTERN_1(quint16 FEEid){ emit set_cmnd_TG_PATTERN_1_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->tgpattern1->GetNewValue());}
    void update_request_act_TG_PATTERN_0(quint16 FEEid){ emit set_cmnd_TG_PATTERN_0_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->tgpattern0->GetNewValue());}
    void update_request_act_TG_CONT_VALUE(quint16 FEEid){ emit set_cmnd_TG_CONT_VALUE_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->tgcontvalue->GetNewValue());}

    void update_request_act_TG_BUNCH_FREQ(quint16 FEEid){ emit set_cmnd_TG_BUNCH_FREQ_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->tgbunchfreq->GetNewValue());}
    void update_request_act_TG_FREQ_OFFSET(quint16 FEEid){ emit set_cmnd_TG_FREQ_OFFSET_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->tgfreqoffset->GetNewValue());}
//////////////////////    void update_request_act_DG_MODE(quint16 FEEid){ emit set_cmnd_(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->GetNewValue());}
    void update_request_act_DG_TRG_RESPOND_MASK(quint16 FEEid){ emit set_cmnd_DG_TRG_RESPOND_MASK_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->dgtrgrespondmask->GetNewValue());}
    void update_request_act_DG_BUNCH_PATTERN(quint16 FEEid){ emit set_cmnd_DG_BUNCH_PATTERN_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->dgbunchpattern->GetNewValue());}
    void update_request_act_DG_BUNCH_FREQ(quint16 FEEid){ emit set_cmnd_DG_BUNCH_FREQ_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->dgbunchfreq->GetNewValue());}
    void update_request_act_DG_FREQ_OFFSET(quint16 FEEid){ emit set_cmnd_DG_FREQ_OFFSET_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->dgfreqoffset->GetNewValue());}
    void update_request_act_RDH_FEE_ID(quint16 FEEid){ emit set_cmnd_RDH_FEE_ID_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->rdhfeeid->GetNewValue());}
    void update_request_act_RDH_PAR(quint16 FEEid){ emit set_cmnd_RDH_PAR_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->rdhpar->GetNewValue());}
    void update_request_act_RDH_MAX_PAYLOAD(quint16 FEEid){ emit set_cmnd_RDH_MAX_PAYLOAD_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->rdhmaxpayload->GetNewValue());}
    void update_request_act_RDH_DET_FIELD(quint16 FEEid){ emit set_cmnd_RDH_DET_FIELD_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->rdhdetfield->GetNewValue());}
    void update_request_act_CRU_TRG_COMPARE_DELAY(quint16 FEEid){ emit set_cmnd_CRU_TRG_COMPARE_DELAY_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->crutrgcomparedelay->GetNewValue());}
    void update_request_act_BCID_DELAY(quint16 FEEid){ emit set_cmnd_BCID_DELAY_requested(FEEid,serv->pm[FT0_FEE_ID.key(FEEid)-1]->bciddelay->GetNewValue());}

    void update_request_act_AlltoPM(quint16 FEEid){
        for(quint8 i=0; i<serv->pm[FT0_FEE_ID.key(FEEid)-1]->Nchannels;i++){ serv->emitSignal(&MyDimServer::apply_ALLtoCh_requested,FEEid,i+1); }
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

    }
};

#endif // EMULATOR_H
