#include "emulator.h"

Emulator::Emulator(MyDimServer *_serv, QObject *parent) : QObject(parent)
{
    serv = _serv;
//    serv->startServer();
    SetupConnection();
}

Emulator::~Emulator()
{
//    serv->stopServer();
}

void Emulator::SetupConnection()
{
    //      This block is related to parameters with NEWvalue

    connect(serv,&MyDimServer::set_ADC_ZERO_requested,serv,&MyDimServer::update_new_ADC_ZERO);
    connect(serv,&MyDimServer::set_ADC_DELAY_requested,serv,&MyDimServer::update_new_ADC_DELAY);
    connect(serv,&MyDimServer::set_ADC0_OFFSET_requested,serv,&MyDimServer::update_new_ADC0_OFFSET);
    connect(serv,&MyDimServer::set_ADC1_OFFSET_requested,serv,&MyDimServer::update_new_ADC1_OFFSET);
    connect(serv,&MyDimServer::set_ADC0_RANGE_requested,serv,&MyDimServer::update_new_ADC0_RANGE);
    connect(serv,&MyDimServer::set_ADC1_RANGE_requested,serv,&MyDimServer::update_new_ADC1_RANGE);
    connect(serv,&MyDimServer::set_TIME_ALIGN_requested,serv,&MyDimServer::update_new_TIME_ALIGN);
    connect(serv,&MyDimServer::set_CFD_THRESHOLD_requested,serv,&MyDimServer::update_new_CFD_THRESHOLD);
    connect(serv,&MyDimServer::set_CFD_ZERO_requested,serv,&MyDimServer::update_new_CFD_ZERO);
    connect(serv,&MyDimServer::set_THRESHOLD_CALIBR_requested,serv,&MyDimServer::update_new_THRESHOLD_CALIBR);

    connect(serv,&MyDimServer::set_CH_MASK_requested,serv,&MyDimServer::update_new_CH_MASK);
    connect(serv,&MyDimServer::set_CFD_SATR_requested,serv,&MyDimServer::update_new_CFD_SATR);
    connect(serv,&MyDimServer::set_OR_GATE_requested,serv,&MyDimServer::update_new_OR_GATE);

    connect(serv,&MyDimServer::set_TG_PATTERN_1_requested,serv,&MyDimServer::update_new_TG_PATTERN_1);
    connect(serv,&MyDimServer::set_TG_PATTERN_0_requested,serv,&MyDimServer::update_new_TG_PATTERN_0);
    connect(serv,&MyDimServer::set_TG_CONT_VALUE_requested,serv,&MyDimServer::update_new_TG_CONT_VALUE);

    connect(serv,&MyDimServer::set_TG_BUNCH_FREQ_requested,serv,&MyDimServer::update_new_TG_BUNCH_FREQ);
    connect(serv,&MyDimServer::set_TG_FREQ_OFFSET_requested,serv,&MyDimServer::update_new_TG_FREQ_OFFSET);

    connect(serv,&MyDimServer::set_DG_TRG_RESPOND_MASK_requested,serv,&MyDimServer::update_new_DG_TRG_RESPOND_MASK);
    connect(serv,&MyDimServer::set_DG_BUNCH_PATTERN_requested,serv,&MyDimServer::update_new_DG_BUNCH_PATTERN);
    connect(serv,&MyDimServer::set_DG_BUNCH_FREQ_requested,serv,&MyDimServer::update_new_DG_BUNCH_FREQ);
    connect(serv,&MyDimServer::set_DG_FREQ_OFFSET_requested,serv,&MyDimServer::update_new_DG_FREQ_OFFSET);
    connect(serv,&MyDimServer::set_RDH_FEE_ID_requested,serv,&MyDimServer::update_new_RDH_FEE_ID);
    connect(serv,&MyDimServer::set_RDH_PAR_requested,serv,&MyDimServer::update_new_RDH_PAR);
    connect(serv,&MyDimServer::set_RDH_MAX_PAYLOAD_requested,serv,&MyDimServer::update_new_RDH_MAX_PAYLOAD);
    connect(serv,&MyDimServer::set_RDH_DET_FIELD_requested,serv,&MyDimServer::update_new_RDH_DET_FIELD);
    connect(serv,&MyDimServer::set_CRU_TRG_COMPARE_DELAY_requested,serv,&MyDimServer::update_new_CRU_TRG_COMPARE_DELAY);
    connect(serv,&MyDimServer::set_BCID_DELAY_requested,serv,&MyDimServer::update_new_BCID_DELAY);
    connect(serv,&MyDimServer::set_DATA_SEL_TRG_MASK_requested,serv,&MyDimServer::update_new_DATA_SEL_TRG_MASK);

    //  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    //      This block is related to parameters wit only ACT+APP values

    connect(serv,&MyDimServer::apply_TG_MODE_requested,serv,&MyDimServer::update_act_TG_MODE);
    connect(serv,&MyDimServer::apply_HB_RESPONSE_requested,serv,&MyDimServer::update_act_HB_RESPONSE);
    connect(serv,&MyDimServer::apply_DG_MODE_requested,serv,&MyDimServer::update_act_DG_MODE);

    //  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    //      This block is also related to parameters with NEWvalue

    connect(serv,&MyDimServer::apply_ADC_ZERO_requested,this,&Emulator::update_request_act_ADC_ZERO);
    connect(serv,&MyDimServer::apply_ADC_DELAY_requested,this,&Emulator::update_request_act_ADC_DELAY);
    connect(serv,&MyDimServer::apply_ADC0_OFFSET_requested,this,&Emulator::update_request_act_ADC0_OFFSET);
    connect(serv,&MyDimServer::apply_ADC1_OFFSET_requested,this,&Emulator::update_request_act_ADC1_OFFSET);
    connect(serv,&MyDimServer::apply_ADC0_RANGE_requested,this,&Emulator::update_request_act_ADC0_RANGE);
    connect(serv,&MyDimServer::apply_ADC1_RANGE_requested,this,&Emulator::update_request_act_ADC1_RANGE);
    connect(serv,&MyDimServer::apply_TIME_ALIGN_requested,this,&Emulator::update_request_act_TIME_ALIGN);
    connect(serv,&MyDimServer::apply_CFD_THRESHOLD_requested,this,&Emulator::update_request_act_CFD_THRESHOLD);
    connect(serv,&MyDimServer::apply_CFD_ZERO_requested,this,&Emulator::update_request_act_CFD_ZERO);
    connect(serv,&MyDimServer::apply_THRESHOLD_CALIBR_requested,this,&Emulator::update_request_act_THRESHOLD_CALIBR);

    connect(serv,&MyDimServer::apply_CH_MASK_requested,this,&Emulator::update_request_act_CH_MASK);
    connect(serv,&MyDimServer::apply_CFD_SATR_requested,this,&Emulator::update_request_act_CFD_SATR);
    connect(serv,&MyDimServer::apply_OR_GATE_requested,this,&Emulator::update_request_act_OR_GATE);
    connect(serv,&MyDimServer::apply_TG_PATTERN_1_requested,this,&Emulator::update_request_act_TG_PATTERN_1);
    connect(serv,&MyDimServer::apply_TG_PATTERN_0_requested,this,&Emulator::update_request_act_TG_PATTERN_0);
    connect(serv,&MyDimServer::apply_TG_CONT_VALUE_requested,this,&Emulator::update_request_act_TG_CONT_VALUE);
    connect(serv,&MyDimServer::apply_TG_BUNCH_FREQ_requested,this,&Emulator::update_request_act_TG_BUNCH_FREQ);
    connect(serv,&MyDimServer::apply_TG_FREQ_OFFSET_requested,this,&Emulator::update_request_act_TG_FREQ_OFFSET);
    connect(serv,&MyDimServer::apply_DG_TRG_RESPOND_MASK_requested,this,&Emulator::update_request_act_DG_TRG_RESPOND_MASK);
    connect(serv,&MyDimServer::apply_DG_BUNCH_PATTERN_requested,this,&Emulator::update_request_act_DG_BUNCH_PATTERN);
    connect(serv,&MyDimServer::apply_DG_BUNCH_FREQ_requested,this,&Emulator::update_request_act_DG_BUNCH_FREQ);
    connect(serv,&MyDimServer::apply_DG_FREQ_OFFSET_requested,this,&Emulator::update_request_act_DG_FREQ_OFFSET);
    connect(serv,&MyDimServer::apply_RDH_FEE_ID_requested,this,&Emulator::update_request_act_RDH_FEE_ID);
    connect(serv,&MyDimServer::apply_RDH_PAR_requested,this,&Emulator::update_request_act_RDH_PAR);
    connect(serv,&MyDimServer::apply_RDH_MAX_PAYLOAD_requested,this,&Emulator::update_request_act_RDH_MAX_PAYLOAD);
    connect(serv,&MyDimServer::apply_RDH_DET_FIELD_requested,this,&Emulator::update_request_act_RDH_DET_FIELD);
    connect(serv,&MyDimServer::apply_CRU_TRG_COMPARE_DELAY_requested,this,&Emulator::update_request_act_CRU_TRG_COMPARE_DELAY);
    connect(serv,&MyDimServer::apply_BCID_DELAY_requested,this,&Emulator::update_request_act_BCID_DELAY);
    connect(serv,&MyDimServer::apply_DATA_SEL_TRG_MASK_requested,this,&Emulator::update_request_act_DATA_SEL_TRG_MASK);

    //      Exept tis

    connect(serv,&MyDimServer::apply_ALLtoPM_requested,this,&Emulator::update_request_act_AlltoPM);

    //  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    //3
    connect(this,&Emulator::set_cmnd_OR_GATE_requested,serv,&MyDimServer::update_act_OR_GATE);
    connect(this,&Emulator::set_cmnd_CFD_SATR_requested,serv,&MyDimServer::update_act_CFD_SATR);
    connect(this,&Emulator::set_cmnd_CH_MASK_requested,serv,&MyDimServer::update_act_CH_MASK);
    //5
    connect(this,&Emulator::set_cmnd_LINK_STATUS_requested,serv,&MyDimServer::update_act_LINK_STATUS);
    connect(this,&Emulator::set_cmnd_BOARD_STATUS_requested,serv,&MyDimServer::update_act_BOARD_STATUS);
    connect(this,&Emulator::set_cmnd_TEMPERATURE_requested,serv,&MyDimServer::update_act_TEMPERATURE);
    connect(this,&Emulator::set_cmnd_SERIAL_NUM_requested,serv,&MyDimServer::update_act_SERIAL_NUM);
    connect(this,&Emulator::set_cmnd_FW_VERSION_requested,serv,&MyDimServer::update_act_FW_VERSION);
    //10
    connect(this,&Emulator::set_cmnd_ADC_ZERO_requested,serv,&MyDimServer::update_act_ADC_ZERO);
    connect(this,&Emulator::set_cmnd_ADC_DELAY_requested,serv,&MyDimServer::update_act_ADC_DELAY);
    connect(this,&Emulator::set_cmnd_ADC0_OFFSET_requested,serv,&MyDimServer::update_act_ADC0_OFFSET);
    connect(this,&Emulator::set_cmnd_ADC1_OFFSET_requested,serv,&MyDimServer::update_act_ADC1_OFFSET);
    connect(this,&Emulator::set_cmnd_ADC0_RANGE_requested,serv,&MyDimServer::update_act_ADC0_RANGE);
    connect(this,&Emulator::set_cmnd_ADC1_RANGE_requested,serv,&MyDimServer::update_act_ADC1_RANGE);
    connect(this,&Emulator::set_cmnd_TIME_ALIGN_requested,serv,&MyDimServer::update_act_TIME_ALIGN);
    connect(this,&Emulator::set_cmnd_CFD_THRESHOLD_requested,serv,&MyDimServer::update_act_CFD_THRESHOLD);
    connect(this,&Emulator::set_cmnd_CFD_ZERO_requested,serv,&MyDimServer::update_act_CFD_ZERO);
    connect(this,&Emulator::set_cmnd_THRESHOLD_CALIBR_requested,serv,&MyDimServer::update_act_THRESHOLD_CALIBR);
    //9
    connect(this,&Emulator::set_cmnd_ADC0_MEANAMPL_requested,serv,&MyDimServer::update_act_ADC0_MEANAMPL);
    connect(this,&Emulator::set_cmnd_ADC1_MEANAMPL_requested,serv,&MyDimServer::update_act_ADC1_MEANAMPL);
    connect(this,&Emulator::set_cmnd_ADC0_ZEROLVL_requested,serv,&MyDimServer::update_act_ADC0_ZEROLVL);
    connect(this,&Emulator::set_cmnd_ADC1_ZEROLVL_requested,serv,&MyDimServer::update_act_ADC1_ZEROLVL);
    connect(this,&Emulator::set_cmnd_RAW_TDC_DATA_requested,serv,&MyDimServer::update_act_RAW_TDC_DATA);
    connect(this,&Emulator::set_cmnd_CNT_CFD_requested,serv,&MyDimServer::update_act_CNT_CFD);
    connect(this,&Emulator::set_cmnd_CNT_CFD_RATE_requested,serv,&MyDimServer::update_act_CNT_CFD_RATE);
    connect(this,&Emulator::set_cmnd_CNT_TRG_requested,serv,&MyDimServer::update_act_CNT_TRG);
    connect(this,&Emulator::set_cmnd_CNT_TRG_RATE_requested,serv,&MyDimServer::update_act_CNT_TRG_RATE);
    //5
    connect(this,&Emulator::set_cmnd_TG_PATTERN_1_requested,serv,&MyDimServer::update_act_TG_PATTERN_1);
    connect(this,&Emulator::set_cmnd_TG_PATTERN_0_requested,serv,&MyDimServer::update_act_TG_PATTERN_0);
    connect(this,&Emulator::set_cmnd_TG_CONT_VALUE_requested,serv,&MyDimServer::update_act_TG_CONT_VALUE);
    connect(this,&Emulator::set_cmnd_TG_BUNCH_FREQ_requested,serv,&MyDimServer::update_act_TG_BUNCH_FREQ);
    connect(this,&Emulator::set_cmnd_TG_FREQ_OFFSET_requested,serv,&MyDimServer::update_act_TG_FREQ_OFFSET);

    connect(this,&Emulator::set_cmnd_TG_MODE_requested,serv,&MyDimServer::update_act_TG_MODE);
    connect(this,&Emulator::set_cmnd_HB_RESPONSE_requested,serv,&MyDimServer::update_act_HB_RESPONSE);
    connect(this,&Emulator::set_cmnd_DG_MODE_requested,serv,&MyDimServer::update_act_DG_MODE);

    //11
    connect(this,&Emulator::set_cmnd_DG_TRG_RESPOND_MASK_requested,serv,&MyDimServer::update_act_DG_TRG_RESPOND_MASK);
    connect(this,&Emulator::set_cmnd_DG_BUNCH_PATTERN_requested,serv,&MyDimServer::update_act_DG_BUNCH_PATTERN);
    connect(this,&Emulator::set_cmnd_DG_BUNCH_FREQ_requested,serv,&MyDimServer::update_act_DG_BUNCH_FREQ);
    connect(this,&Emulator::set_cmnd_DG_FREQ_OFFSET_requested,serv,&MyDimServer::update_act_DG_FREQ_OFFSET);
    connect(this,&Emulator::set_cmnd_RDH_FEE_ID_requested,serv,&MyDimServer::update_act_RDH_FEE_ID);
    connect(this,&Emulator::set_cmnd_RDH_PAR_requested,serv,&MyDimServer::update_act_RDH_PAR);
    connect(this,&Emulator::set_cmnd_RDH_MAX_PAYLOAD_requested,serv,&MyDimServer::update_act_RDH_MAX_PAYLOAD);
    connect(this,&Emulator::set_cmnd_RDH_DET_FIELD_requested,serv,&MyDimServer::update_act_RDH_DET_FIELD);
    connect(this,&Emulator::set_cmnd_CRU_TRG_COMPARE_DELAY_requested,serv,&MyDimServer::update_act_CRU_TRG_COMPARE_DELAY);
    connect(this,&Emulator::set_cmnd_BCID_DELAY_requested,serv,&MyDimServer::update_act_BCID_DELAY);
    connect(this,&Emulator::set_cmnd_DATA_SEL_TRG_MASK_requested,serv,&MyDimServer::update_act_DATA_SEL_TRG_MASK);
    //12
    connect(this,&Emulator::set_cmnd_BITS_requested,serv,&MyDimServer::update_act_BITS);
    connect(this,&Emulator::set_cmnd_READOUT_MODE_requested,serv,&MyDimServer::update_act_READOUT_MODE);
    connect(this,&Emulator::set_cmnd_BCID_SYNC_MODE_requested,serv,&MyDimServer::update_act_BCID_SYNC_MODE);
    connect(this,&Emulator::set_cmnd_RX_PHASE_requested,serv,&MyDimServer::update_act_RX_PHASE);
    connect(this,&Emulator::set_cmnd_CRU_ORBIT_requested,serv,&MyDimServer::update_act_CRU_ORBIT);
    connect(this,&Emulator::set_cmnd_CRU_BC_requested,serv,&MyDimServer::update_act_CRU_BC);
    connect(this,&Emulator::set_cmnd_RAW_FIFO_requested,serv,&MyDimServer::update_act_RAW_FIFO);
    connect(this,&Emulator::set_cmnd_SEL_FIFO_requested,serv,&MyDimServer::update_act_SEL_FIFO);
    connect(this,&Emulator::set_cmnd_SEL_FIRST_HIT_DROPPED_ORBIT_requested,serv,&MyDimServer::update_act_SEL_FIRST_HIT_DROPPED_ORBIT);
    connect(this,&Emulator::set_cmnd_SEL_LAST_HIT_DROPPED_ORBIT_requested,serv,&MyDimServer::update_act_SEL_LAST_HIT_DROPPED_ORBIT);
    connect(this,&Emulator::set_cmnd_SEL_HITS_DROPPED_requested,serv,&MyDimServer::update_act_SEL_HITS_DROPPED);
    connect(this,&Emulator::set_cmnd_READOUT_RATE_requested,serv,&MyDimServer::update_act_READOUT_RATE);


    //  TCM parameters

    //  Parameters with NEW value

    connect(serv,&MyDimServer::set_DELAY_A_requested,serv,&MyDimServer::update_new_DELAY_A);
    connect(serv,&MyDimServer::set_DELAY_C_requested,serv,&MyDimServer::update_new_DELAY_C);
    connect(serv,&MyDimServer::set_VTIME_LOW_requested,serv,&MyDimServer::update_new_VTIME_LOW);
    connect(serv,&MyDimServer::set_VTIME_HIGH_requested,serv,&MyDimServer::update_new_VTIME_HIGH);
    connect(serv,&MyDimServer::set_SC_LEVEL_A_requested,serv,&MyDimServer::update_new_SC_LEVEL_A);
    connect(serv,&MyDimServer::set_SC_LEVEL_C_requested,serv,&MyDimServer::update_new_SC_LEVEL_C);
    connect(serv,&MyDimServer::set_C_LEVEL_A_requested,serv,&MyDimServer::update_new_C_LEVEL_A);
    connect(serv,&MyDimServer::set_C_LEVEL_C_requested,serv,&MyDimServer::update_new_C_LEVEL_C);
    connect(serv,&MyDimServer::set_CH_MASK_A_requested,serv,&MyDimServer::update_new_CH_MASK_A);
    connect(serv,&MyDimServer::set_CH_MASK_C_requested,serv,&MyDimServer::update_new_CH_MASK_C);

    connect(serv,&MyDimServer::set_OR_A_SIGN_requested,serv,&MyDimServer::update_new_OR_A_SIGN);
    connect(serv,&MyDimServer::set_OR_A_RATE_requested,serv,&MyDimServer::update_new_OR_A_RATE);
    connect(serv,&MyDimServer::set_OR_C_SIGN_requested,serv,&MyDimServer::update_new_OR_C_SIGN);
    connect(serv,&MyDimServer::set_OR_C_RATE_requested,serv,&MyDimServer::update_new_OR_C_RATE);
    connect(serv,&MyDimServer::set_SC_SIGN_requested,serv,&MyDimServer::update_new_SC_SIGN);
    connect(serv,&MyDimServer::set_SC_RATE_requested,serv,&MyDimServer::update_new_SC_RATE);
    connect(serv,&MyDimServer::set_C_SIGN_requested,serv,&MyDimServer::update_new_C_SIGN);
    connect(serv,&MyDimServer::set_C_RATE_requested,serv,&MyDimServer::update_new_C_RATE);
    connect(serv,&MyDimServer::set_V_SIGN_requested,serv,&MyDimServer::update_new_V_SIGN);
    connect(serv,&MyDimServer::set_V_RATE_requested,serv,&MyDimServer::update_new_V_RATE);

    connect(serv,&MyDimServer::set_LASER_DIV_requested,serv,&MyDimServer::update_new_LASER_DIV);
    connect(serv,&MyDimServer::set_LASER_DELAY_requested,serv,&MyDimServer::update_new_LASER_DELAY);
    connect(serv,&MyDimServer::set_LASER_PATTERN_1_requested,serv,&MyDimServer::update_new_LASER_PATTERN_1);
    connect(serv,&MyDimServer::set_LASER_PATTERN_0_requested,serv,&MyDimServer::update_new_LASER_PATTERN_0);
    connect(serv,&MyDimServer::set_ATTEN_VALUE_requested,serv,&MyDimServer::update_new_ATTEN_VALUE);

    //  ACT+APP parameters

    connect(serv,&MyDimServer::apply_COUNTERS_UPD_RATE_requested,serv,&MyDimServer::update_act_COUNTERS_UPD_RATE);
    connect(serv,&MyDimServer::apply_EXTENDED_READOUT_requested,serv,&MyDimServer::update_act_EXTENDED_READOUT);
    connect(serv,&MyDimServer::apply_SC_SUM_SIDES_requested,serv,&MyDimServer::update_act_SC_SUM_SIDES);
    connect(serv,&MyDimServer::apply_C_SUM_SIDES_requested,serv,&MyDimServer::update_act_C_SUM_SIDES);
    connect(serv,&MyDimServer::apply_ADD_C_DELAY_requested,serv,&MyDimServer::update_act_ADD_C_DELAY);
    connect(serv,&MyDimServer::apply_RES_SW_1_requested,serv,&MyDimServer::update_act_RES_SW_1);
    connect(serv,&MyDimServer::apply_RES_SW_2_requested,serv,&MyDimServer::update_act_RES_SW_2);
    connect(serv,&MyDimServer::apply_RES_SW_3_requested,serv,&MyDimServer::update_act_RES_SW_3);
    connect(serv,&MyDimServer::apply_RES_SW_4_requested,serv,&MyDimServer::update_act_RES_SW_4);

    connect(serv,&MyDimServer::apply_OR_A_ENABLED_requested,serv,&MyDimServer::update_act_OR_A_ENABLED);
    connect(serv,&MyDimServer::apply_OR_C_ENABLED_requested,serv,&MyDimServer::update_act_OR_C_ENABLED);
    connect(serv,&MyDimServer::apply_SC_ENABLED_requested,serv,&MyDimServer::update_act_SC_ENABLED);
    connect(serv,&MyDimServer::apply_C_ENABLED_requested,serv,&MyDimServer::update_act_C_ENABLED);
    connect(serv,&MyDimServer::apply_V_ENABLED_requested,serv,&MyDimServer::update_act_V_ENABLED);

    connect(serv,&MyDimServer::apply_LASER_ON_requested,serv,&MyDimServer::update_act_LASER_ON);

    //  Parameters with NEW value

    connect(serv,&MyDimServer::apply_DELAY_A_requested,this,&Emulator::update_request_act_DELAY_A);
    connect(serv,&MyDimServer::apply_DELAY_C_requested,this,&Emulator::update_request_act_DELAY_C);
    connect(serv,&MyDimServer::apply_VTIME_LOW_requested,this,&Emulator::update_request_act_VTIME_LOW);
    connect(serv,&MyDimServer::apply_VTIME_HIGH_requested,this,&Emulator::update_request_act_VTIME_HIGH);
    connect(serv,&MyDimServer::apply_SC_LEVEL_A_requested,this,&Emulator::update_request_act_SC_LEVEL_A);
    connect(serv,&MyDimServer::apply_SC_LEVEL_C_requested,this,&Emulator::update_request_act_SC_LEVEL_C);
    connect(serv,&MyDimServer::apply_C_LEVEL_A_requested,this,&Emulator::update_request_act_C_LEVEL_A);
    connect(serv,&MyDimServer::apply_C_LEVEL_C_requested,this,&Emulator::update_request_act_C_LEVEL_C);
    connect(serv,&MyDimServer::apply_CH_MASK_A_requested,this,&Emulator::update_request_act_CH_MASK_A);
    connect(serv,&MyDimServer::apply_CH_MASK_C_requested,this,&Emulator::update_request_act_CH_MASK_C);

    connect(serv,&MyDimServer::apply_OR_A_SIGN_requested,this,&Emulator::update_request_act_OR_A_SIGN);
    connect(serv,&MyDimServer::apply_OR_A_RATE_requested,this,&Emulator::update_request_act_OR_A_RATE);
    connect(serv,&MyDimServer::apply_OR_C_SIGN_requested,this,&Emulator::update_request_act_OR_C_SIGN);
    connect(serv,&MyDimServer::apply_OR_C_RATE_requested,this,&Emulator::update_request_act_OR_C_RATE);
    connect(serv,&MyDimServer::apply_SC_SIGN_requested,this,&Emulator::update_request_act_SC_SIGN);
    connect(serv,&MyDimServer::apply_SC_RATE_requested,this,&Emulator::update_request_act_SC_RATE);
    connect(serv,&MyDimServer::apply_C_SIGN_requested,this,&Emulator::update_request_act_C_SIGN);
    connect(serv,&MyDimServer::apply_C_RATE_requested,this,&Emulator::update_request_act_C_RATE);
    connect(serv,&MyDimServer::apply_V_SIGN_requested,this,&Emulator::update_request_act_V_SIGN);
    connect(serv,&MyDimServer::apply_V_RATE_requested,this,&Emulator::update_request_act_V_RATE);

    connect(serv,&MyDimServer::apply_LASER_DIV_requested,this,&Emulator::update_request_act_LASER_DIV);
    connect(serv,&MyDimServer::apply_LASER_DELAY_requested,this,&Emulator::update_request_act_LASER_DELAY);
    connect(serv,&MyDimServer::apply_LASER_PATTERN_1_requested,this,&Emulator::update_request_act_LASER_PATTERN_1);
    connect(serv,&MyDimServer::apply_LASER_PATTERN_0_requested,this,&Emulator::update_request_act_LASER_PATTERN_0);
    connect(serv,&MyDimServer::apply_ATTEN_VALUE_requested,this,&Emulator::update_request_act_ATTEN_VALUE);

    //  All parameters with ACT values exept 4
    connect(this,&Emulator::set_cmnd_COUNTERS_UPD_RATE_requested,serv,&MyDimServer::update_act_COUNTERS_UPD_RATE);
    connect(this,&Emulator::set_cmnd_EXTENDED_READOUT_requested,serv,&MyDimServer::update_act_EXTENDED_READOUT);
    connect(this,&Emulator::set_cmnd_SC_SUM_SIDES_requested,serv,&MyDimServer::update_act_SC_SUM_SIDES);
    connect(this,&Emulator::set_cmnd_C_SUM_SIDES_requested,serv,&MyDimServer::update_act_C_SUM_SIDES);
    connect(this,&Emulator::set_cmnd_ADD_C_DELAY_requested,serv,&MyDimServer::update_act_ADD_C_DELAY);
    connect(this,&Emulator::set_cmnd_RES_SW_1_requested,serv,&MyDimServer::update_act_RES_SW_1);
    connect(this,&Emulator::set_cmnd_RES_SW_2_requested,serv,&MyDimServer::update_act_RES_SW_2);
    connect(this,&Emulator::set_cmnd_RES_SW_3_requested,serv,&MyDimServer::update_act_RES_SW_3);
    connect(this,&Emulator::set_cmnd_RES_SW_4_requested,serv,&MyDimServer::update_act_RES_SW_4);
    connect(this,&Emulator::set_cmnd_DELAY_A_requested,serv,&MyDimServer::update_act_DELAY_A);
    connect(this,&Emulator::set_cmnd_DELAY_C_requested,serv,&MyDimServer::update_act_DELAY_C);
    connect(this,&Emulator::set_cmnd_VTIME_LOW_requested,serv,&MyDimServer::update_act_VTIME_LOW);
    connect(this,&Emulator::set_cmnd_VTIME_HIGH_requested,serv,&MyDimServer::update_act_VTIME_HIGH);
    connect(this,&Emulator::set_cmnd_SC_LEVEL_A_requested,serv,&MyDimServer::update_act_SC_LEVEL_A);
    connect(this,&Emulator::set_cmnd_SC_LEVEL_C_requested,serv,&MyDimServer::update_act_SC_LEVEL_C);
    connect(this,&Emulator::set_cmnd_C_LEVEL_A_requested,serv,&MyDimServer::update_act_C_LEVEL_A);
    connect(this,&Emulator::set_cmnd_C_LEVEL_C_requested,serv,&MyDimServer::update_act_C_LEVEL_C);
    connect(this,&Emulator::set_cmnd_CH_MASK_A_requested,serv,&MyDimServer::update_act_CH_MASK_A);
    connect(this,&Emulator::set_cmnd_CH_MASK_C_requested,serv,&MyDimServer::update_act_CH_MASK_C);

    connect(this,&Emulator::set_cmnd_SIDE_A_STATUS_requested,serv,&MyDimServer::update_act_SIDE_A_STATUS);
    connect(this,&Emulator::set_cmnd_SIDE_C_STATUS_requested,serv,&MyDimServer::update_act_SIDE_C_STATUS);
    connect(this,&Emulator::set_cmnd_CNT_OR_A_requested,serv,&MyDimServer::update_act_CNT_OR_A);
    connect(this,&Emulator::set_cmnd_CNT_OR_A_RATE_requested,serv,&MyDimServer::update_act_CNT_OR_A_RATE);
    connect(this,&Emulator::set_cmnd_CNT_OR_C_requested,serv,&MyDimServer::update_act_CNT_OR_C);
    connect(this,&Emulator::set_cmnd_CNT_OR_C_RATE_requested,serv,&MyDimServer::update_act_CNT_OR_C_RATE);
    connect(this,&Emulator::set_cmnd_CNT_SC_requested,serv,&MyDimServer::update_act_CNT_SC);
    connect(this,&Emulator::set_cmnd_CNT_SC_RATE_requested,serv,&MyDimServer::update_act_CNT_SC_RATE);
    connect(this,&Emulator::set_cmnd_CNT_C_requested,serv,&MyDimServer::update_act_CNT_C);
    connect(this,&Emulator::set_cmnd_CNT_C_RATE_requested,serv,&MyDimServer::update_act_CNT_C_RATE);
    connect(this,&Emulator::set_cmnd_CNT_V_requested,serv,&MyDimServer::update_act_CNT_V);

    connect(this,&Emulator::set_cmnd_STATUS_OPTIONCODE_requested,serv,&MyDimServer::update_act_STATUS_OPTIONCODE);

    connect(this,&Emulator::set_cmnd_OR_A_SIGN_requested,serv,&MyDimServer::update_act_OR_A_SIGN);
    connect(this,&Emulator::set_cmnd_OR_A_RATE_requested,serv,&MyDimServer::update_act_OR_A_RATE);
    connect(this,&Emulator::set_cmnd_OR_C_SIGN_requested,serv,&MyDimServer::update_act_OR_C_SIGN);
    connect(this,&Emulator::set_cmnd_OR_C_RATE_requested,serv,&MyDimServer::update_act_OR_C_RATE);
    connect(this,&Emulator::set_cmnd_SC_SIGN_requested,serv,&MyDimServer::update_act_SC_SIGN);
    connect(this,&Emulator::set_cmnd_SC_RATE_requested,serv,&MyDimServer::update_act_SC_RATE);
    connect(this,&Emulator::set_cmnd_C_SIGN_requested,serv,&MyDimServer::update_act_C_SIGN);
    connect(this,&Emulator::set_cmnd_C_RATE_requested,serv,&MyDimServer::update_act_C_RATE);
    connect(this,&Emulator::set_cmnd_V_SIGN_requested,serv,&MyDimServer::update_act_V_SIGN);
    connect(this,&Emulator::set_cmnd_V_RATE_requested,serv,&MyDimServer::update_act_V_RATE);
    connect(this,&Emulator::set_cmnd_OR_A_ENABLED_requested,serv,&MyDimServer::update_act_OR_A_ENABLED);
    connect(this,&Emulator::set_cmnd_OR_C_ENABLED_requested,serv,&MyDimServer::update_act_OR_C_ENABLED);
    connect(this,&Emulator::set_cmnd_SC_ENABLED_requested,serv,&MyDimServer::update_act_SC_ENABLED);
    connect(this,&Emulator::set_cmnd_C_ENABLED_requested,serv,&MyDimServer::update_act_C_ENABLED);
    connect(this,&Emulator::set_cmnd_V_ENABLED_requested,serv,&MyDimServer::update_act_V_ENABLED);

    connect(this,&Emulator::set_cmnd_LASER_ON_requested,serv,&MyDimServer::update_act_LASER_ON);
    connect(this,&Emulator::set_cmnd_LASER_DIV_requested,serv,&MyDimServer::update_act_LASER_DIV);
    connect(this,&Emulator::set_cmnd_LASER_DELAY_requested,serv,&MyDimServer::update_act_LASER_DELAY);
    connect(this,&Emulator::set_cmnd_LASER_PATTERN_1_requested,serv,&MyDimServer::update_act_LASER_PATTERN_1);
    connect(this,&Emulator::set_cmnd_LASER_PATTERN_0_requested,serv,&MyDimServer::update_act_LASER_PATTERN_0);
    connect(this,&Emulator::set_cmnd_ATTEN_VALUE_requested,serv,&MyDimServer::update_act_ATTEN_VALUE);
    connect(this,&Emulator::set_cmnd_ATTEN_STATUS_requested,serv,&MyDimServer::update_act_ATTEN_STATUS);
}

void Emulator::FillActRandom()
{

//    for(quint8 iPM=1;iPM<=serv->Npms;iPM++) {
//        for(quint8 iCH=1;iCH<=serv->pm[iPM-1]->Nchannels;iCH++) {
//            emit set_cmnd_ADC_ZERO_requested(FT0_FEE_ID[iPM],iCH,qrand()%1000);
//            emit set_cmnd_ADC_DELAY_requested(FT0_FEE_ID[iPM],iCH,qrand()%1000);
//            emit set_cmnd_ADC0_OFFSET_requested(FT0_FEE_ID[iPM],iCH,qrand()%1000);
//            emit set_cmnd_ADC1_OFFSET_requested(FT0_FEE_ID[iPM],iCH,qrand()%1000);
//            emit set_cmnd_ADC0_RANGE_requested(FT0_FEE_ID[iPM],iCH,qrand()%1000);
//            emit set_cmnd_ADC1_RANGE_requested(FT0_FEE_ID[iPM],iCH,qrand()%1000);
//            emit set_cmnd_TIME_ALIGN_requested(FT0_FEE_ID[iPM],iCH,qrand()%1000);
//            emit set_cmnd_CFD_THRESHOLD_requested(FT0_FEE_ID[iPM],iCH,qrand()%1000);
//            emit set_cmnd_CFD_ZERO_requested(FT0_FEE_ID[iPM],iCH,qrand()%1000);
//            emit set_cmnd_THRESHOLD_CALIBR_requested(FT0_FEE_ID[iPM],iCH,qrand()%1000);

//            emit set_cmnd_ADC0_MEANAMPL_requested(FT0_FEE_ID[iPM],iCH,qrand()%1000);
//            emit set_cmnd_ADC1_MEANAMPL_requested(FT0_FEE_ID[iPM],iCH,qrand()%1000);
//            emit set_cmnd_ADC0_ZEROLVL_requested(FT0_FEE_ID[iPM],iCH,qrand()%1000);
//            emit set_cmnd_ADC1_ZEROLVL_requested(FT0_FEE_ID[iPM],iCH,qrand()%1000);
//            emit set_cmnd_RAW_TDC_DATA_requested(FT0_FEE_ID[iPM],iCH,qrand()%1000);
//            emit set_cmnd_CNT_CFD_requested(FT0_FEE_ID[iPM],iCH,qrand()%1000);
//            emit set_cmnd_CNT_CFD_RATE_requested(FT0_FEE_ID[iPM],iCH,qrand()%1000);
//            emit set_cmnd_CNT_TRG_requested(FT0_FEE_ID[iPM],iCH,qrand()%1000);
//            emit set_cmnd_CNT_TRG_RATE_requested(FT0_FEE_ID[iPM],iCH,qrand()%1000);
//        }

//        emit set_cmnd_OR_GATE_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_CFD_SATR_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_CH_MASK_requested(FT0_FEE_ID[iPM],qrand()%1000);

//        emit set_cmnd_LINK_STATUS_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_BOARD_STATUS_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_TEMPERATURE_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_SERIAL_NUM_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_FW_VERSION_requested(FT0_FEE_ID[iPM],qrand()%1000);

//        emit set_cmnd_TG_PATTERN_1_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_TG_PATTERN_0_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_TG_CONT_VALUE_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_TG_BUNCH_FREQ_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_TG_FREQ_OFFSET_requested(FT0_FEE_ID[iPM],qrand()%1000);

//        emit set_cmnd_TG_MODE_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_HB_RESPONSE_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_DG_MODE_requested(FT0_FEE_ID[iPM],qrand()%1000);

//        emit set_cmnd_DG_TRG_RESPOND_MASK_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_DG_BUNCH_PATTERN_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_DG_BUNCH_FREQ_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_DG_FREQ_OFFSET_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_RDH_FEE_ID_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_RDH_PAR_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_RDH_MAX_PAYLOAD_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_RDH_DET_FIELD_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_CRU_TRG_COMPARE_DELAY_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_BCID_DELAY_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_DATA_SEL_TRG_MASK_requested(FT0_FEE_ID[iPM],qrand()%1000);

//        emit set_cmnd_BITS_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_READOUT_MODE_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_BCID_SYNC_MODE_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_RX_PHASE_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_CRU_ORBIT_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_CRU_BC_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_RAW_FIFO_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_SEL_FIFO_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_SEL_FIRST_HIT_DROPPED_ORBIT_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_SEL_LAST_HIT_DROPPED_ORBIT_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_SEL_HITS_DROPPED_requested(FT0_FEE_ID[iPM],qrand()%1000);
//        emit set_cmnd_READOUT_RATE_requested(FT0_FEE_ID[iPM],qrand()%1000);

        //  TCM
        emit set_cmnd_COUNTERS_UPD_RATE_requested(qrand()%1000);
        emit set_cmnd_EXTENDED_READOUT_requested(qrand()%1000);
        emit set_cmnd_SC_SUM_SIDES_requested(qrand()%1000);
        emit set_cmnd_C_SUM_SIDES_requested(qrand()%1000);
        emit set_cmnd_ADD_C_DELAY_requested(qrand()%1000);
        emit set_cmnd_RES_SW_1_requested(qrand()%1000);
        emit set_cmnd_RES_SW_2_requested(qrand()%1000);
        emit set_cmnd_RES_SW_3_requested(qrand()%1000);
        emit set_cmnd_RES_SW_4_requested(qrand()%1000);
        emit set_cmnd_DELAY_A_requested(qrand()%1000);
        emit set_cmnd_DELAY_C_requested(qrand()%1000);
        emit set_cmnd_VTIME_LOW_requested(qrand()%1000);
        emit set_cmnd_VTIME_HIGH_requested(qrand()%1000);
        emit set_cmnd_SC_LEVEL_A_requested(qrand()%1000);
        emit set_cmnd_SC_LEVEL_C_requested(qrand()%1000);
        emit set_cmnd_C_LEVEL_A_requested(qrand()%1000);
        emit set_cmnd_C_LEVEL_C_requested(qrand()%1000);
        emit set_cmnd_CH_MASK_A_requested(qrand()%1000);
        emit set_cmnd_CH_MASK_C_requested(qrand()%1000);

        emit set_cmnd_SIDE_A_STATUS_requested(qrand()%1000);
        emit set_cmnd_SIDE_C_STATUS_requested(qrand()%1000);
        emit set_cmnd_CNT_OR_A_requested(qrand()%1000);
        emit set_cmnd_CNT_OR_A_RATE_requested(qrand()%1000);
        emit set_cmnd_CNT_OR_C_requested(qrand()%1000);
        emit set_cmnd_CNT_OR_C_RATE_requested(qrand()%1000);
        emit set_cmnd_CNT_SC_requested(qrand()%1000);
        emit set_cmnd_CNT_SC_RATE_requested(qrand()%1000);
        emit set_cmnd_CNT_C_requested(qrand()%1000);
        emit set_cmnd_CNT_C_RATE_requested(qrand()%1000);
        emit set_cmnd_CNT_V_requested(qrand()%1000);

        emit set_cmnd_STATUS_OPTIONCODE_requested("This is check string");

        emit set_cmnd_OR_A_SIGN_requested(qrand()%1000);
        emit set_cmnd_OR_A_RATE_requested(qrand()%1000);
        emit set_cmnd_OR_C_SIGN_requested(qrand()%1000);
        emit set_cmnd_OR_C_RATE_requested(qrand()%1000);
        emit set_cmnd_SC_SIGN_requested(qrand()%1000);
        emit set_cmnd_SC_RATE_requested(qrand()%1000);
        emit set_cmnd_C_SIGN_requested(qrand()%1000);
        emit set_cmnd_C_RATE_requested(qrand()%1000);
        emit set_cmnd_V_SIGN_requested(qrand()%1000);
        emit set_cmnd_V_RATE_requested(qrand()%1000);
        emit set_cmnd_OR_A_ENABLED_requested(qrand()%1000);
        emit set_cmnd_OR_C_ENABLED_requested(qrand()%1000);
        emit set_cmnd_SC_ENABLED_requested(qrand()%1000);
        emit set_cmnd_C_ENABLED_requested(qrand()%1000);
        emit set_cmnd_V_ENABLED_requested(qrand()%1000);

        emit set_cmnd_LASER_ON_requested(qrand()%1000);
        emit set_cmnd_LASER_DIV_requested(qrand()%1000);
        emit set_cmnd_LASER_DELAY_requested(qrand()%1000);
        emit set_cmnd_LASER_PATTERN_1_requested(qrand()%1000);
        emit set_cmnd_LASER_PATTERN_0_requested(qrand()%1000);
        emit set_cmnd_ATTEN_VALUE_requested(qrand()%1000);
        emit set_cmnd_ATTEN_STATUS_requested(qrand()%1000);

    }

//}


//((qrand() % ((h+1)-l))+l)
