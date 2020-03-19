/****************************************************************************
** Meta object code from reading C++ file 'emulator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../emulator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'emulator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Emulator_t {
    QByteArrayData data[174];
    char stringdata0[5156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Emulator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Emulator_t qt_meta_stringdata_Emulator = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Emulator"
QT_MOC_LITERAL(1, 9, 27), // "set_cmnd_ADC_ZERO_requested"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "FEEid"
QT_MOC_LITERAL(4, 44, 4), // "CHid"
QT_MOC_LITERAL(5, 49, 3), // "val"
QT_MOC_LITERAL(6, 53, 28), // "set_cmnd_ADC_DELAY_requested"
QT_MOC_LITERAL(7, 82, 30), // "set_cmnd_ADC0_OFFSET_requested"
QT_MOC_LITERAL(8, 113, 30), // "set_cmnd_ADC1_OFFSET_requested"
QT_MOC_LITERAL(9, 144, 29), // "set_cmnd_ADC0_RANGE_requested"
QT_MOC_LITERAL(10, 174, 29), // "set_cmnd_ADC1_RANGE_requested"
QT_MOC_LITERAL(11, 204, 29), // "set_cmnd_TIME_ALIGN_requested"
QT_MOC_LITERAL(12, 234, 32), // "set_cmnd_CFD_THRESHOLD_requested"
QT_MOC_LITERAL(13, 267, 27), // "set_cmnd_CFD_ZERO_requested"
QT_MOC_LITERAL(14, 295, 35), // "set_cmnd_THRESHOLD_CALIBR_req..."
QT_MOC_LITERAL(15, 331, 32), // "set_cmnd_ADC0_MEANAMPL_requested"
QT_MOC_LITERAL(16, 364, 32), // "set_cmnd_ADC1_MEANAMPL_requested"
QT_MOC_LITERAL(17, 397, 31), // "set_cmnd_ADC0_ZEROLVL_requested"
QT_MOC_LITERAL(18, 429, 31), // "set_cmnd_ADC1_ZEROLVL_requested"
QT_MOC_LITERAL(19, 461, 31), // "set_cmnd_RAW_TDC_DATA_requested"
QT_MOC_LITERAL(20, 493, 26), // "set_cmnd_CNT_CFD_requested"
QT_MOC_LITERAL(21, 520, 31), // "set_cmnd_CNT_CFD_RATE_requested"
QT_MOC_LITERAL(22, 552, 26), // "set_cmnd_CNT_TRG_requested"
QT_MOC_LITERAL(23, 579, 31), // "set_cmnd_CNT_TRG_RATE_requested"
QT_MOC_LITERAL(24, 611, 26), // "set_cmnd_OR_GATE_requested"
QT_MOC_LITERAL(25, 638, 27), // "set_cmnd_CFD_SATR_requested"
QT_MOC_LITERAL(26, 666, 26), // "set_cmnd_CH_MASK_requested"
QT_MOC_LITERAL(27, 693, 30), // "set_cmnd_LINK_STATUS_requested"
QT_MOC_LITERAL(28, 724, 31), // "set_cmnd_BOARD_STATUS_requested"
QT_MOC_LITERAL(29, 756, 30), // "set_cmnd_TEMPERATURE_requested"
QT_MOC_LITERAL(30, 787, 29), // "set_cmnd_SERIAL_NUM_requested"
QT_MOC_LITERAL(31, 817, 29), // "set_cmnd_FW_VERSION_requested"
QT_MOC_LITERAL(32, 847, 31), // "set_cmnd_TG_PATTERN_1_requested"
QT_MOC_LITERAL(33, 879, 31), // "set_cmnd_TG_PATTERN_0_requested"
QT_MOC_LITERAL(34, 911, 32), // "set_cmnd_TG_CONT_VALUE_requested"
QT_MOC_LITERAL(35, 944, 32), // "set_cmnd_TG_BUNCH_FREQ_requested"
QT_MOC_LITERAL(36, 977, 33), // "set_cmnd_TG_FREQ_OFFSET_reque..."
QT_MOC_LITERAL(37, 1011, 26), // "set_cmnd_TG_MODE_requested"
QT_MOC_LITERAL(38, 1038, 30), // "set_cmnd_HB_RESPONSE_requested"
QT_MOC_LITERAL(39, 1069, 26), // "set_cmnd_DG_MODE_requested"
QT_MOC_LITERAL(40, 1096, 38), // "set_cmnd_DG_TRG_RESPOND_MASK_..."
QT_MOC_LITERAL(41, 1135, 35), // "set_cmnd_DG_BUNCH_PATTERN_req..."
QT_MOC_LITERAL(42, 1171, 32), // "set_cmnd_DG_BUNCH_FREQ_requested"
QT_MOC_LITERAL(43, 1204, 33), // "set_cmnd_DG_FREQ_OFFSET_reque..."
QT_MOC_LITERAL(44, 1238, 29), // "set_cmnd_RDH_FEE_ID_requested"
QT_MOC_LITERAL(45, 1268, 26), // "set_cmnd_RDH_PAR_requested"
QT_MOC_LITERAL(46, 1295, 34), // "set_cmnd_RDH_MAX_PAYLOAD_requ..."
QT_MOC_LITERAL(47, 1330, 32), // "set_cmnd_RDH_DET_FIELD_requested"
QT_MOC_LITERAL(48, 1363, 40), // "set_cmnd_CRU_TRG_COMPARE_DELA..."
QT_MOC_LITERAL(49, 1404, 29), // "set_cmnd_BCID_DELAY_requested"
QT_MOC_LITERAL(50, 1434, 36), // "set_cmnd_DATA_SEL_TRG_MASK_re..."
QT_MOC_LITERAL(51, 1471, 23), // "set_cmnd_BITS_requested"
QT_MOC_LITERAL(52, 1495, 31), // "set_cmnd_READOUT_MODE_requested"
QT_MOC_LITERAL(53, 1527, 33), // "set_cmnd_BCID_SYNC_MODE_reque..."
QT_MOC_LITERAL(54, 1561, 27), // "set_cmnd_RX_PHASE_requested"
QT_MOC_LITERAL(55, 1589, 28), // "set_cmnd_CRU_ORBIT_requested"
QT_MOC_LITERAL(56, 1618, 25), // "set_cmnd_CRU_BC_requested"
QT_MOC_LITERAL(57, 1644, 27), // "set_cmnd_RAW_FIFO_requested"
QT_MOC_LITERAL(58, 1672, 27), // "set_cmnd_SEL_FIFO_requested"
QT_MOC_LITERAL(59, 1700, 46), // "set_cmnd_SEL_FIRST_HIT_DROPPE..."
QT_MOC_LITERAL(60, 1747, 45), // "set_cmnd_SEL_LAST_HIT_DROPPED..."
QT_MOC_LITERAL(61, 1793, 35), // "set_cmnd_SEL_HITS_DROPPED_req..."
QT_MOC_LITERAL(62, 1829, 31), // "set_cmnd_READOUT_RATE_requested"
QT_MOC_LITERAL(63, 1861, 36), // "set_cmnd_COUNTERS_UPD_RATE_re..."
QT_MOC_LITERAL(64, 1898, 35), // "set_cmnd_EXTENDED_READOUT_req..."
QT_MOC_LITERAL(65, 1934, 4), // "isOn"
QT_MOC_LITERAL(66, 1939, 31), // "set_cmnd_SC_SUM_SIDES_requested"
QT_MOC_LITERAL(67, 1971, 30), // "set_cmnd_C_SUM_SIDES_requested"
QT_MOC_LITERAL(68, 2002, 30), // "set_cmnd_ADD_C_DELAY_requested"
QT_MOC_LITERAL(69, 2033, 27), // "set_cmnd_RES_SW_1_requested"
QT_MOC_LITERAL(70, 2061, 27), // "set_cmnd_RES_SW_2_requested"
QT_MOC_LITERAL(71, 2089, 27), // "set_cmnd_RES_SW_3_requested"
QT_MOC_LITERAL(72, 2117, 27), // "set_cmnd_RES_SW_4_requested"
QT_MOC_LITERAL(73, 2145, 26), // "set_cmnd_DELAY_A_requested"
QT_MOC_LITERAL(74, 2172, 26), // "set_cmnd_DELAY_C_requested"
QT_MOC_LITERAL(75, 2199, 28), // "set_cmnd_VTIME_LOW_requested"
QT_MOC_LITERAL(76, 2228, 29), // "set_cmnd_VTIME_HIGH_requested"
QT_MOC_LITERAL(77, 2258, 29), // "set_cmnd_SC_LEVEL_A_requested"
QT_MOC_LITERAL(78, 2288, 29), // "set_cmnd_SC_LEVEL_C_requested"
QT_MOC_LITERAL(79, 2318, 28), // "set_cmnd_C_LEVEL_A_requested"
QT_MOC_LITERAL(80, 2347, 28), // "set_cmnd_C_LEVEL_C_requested"
QT_MOC_LITERAL(81, 2376, 28), // "set_cmnd_CH_MASK_A_requested"
QT_MOC_LITERAL(82, 2405, 28), // "set_cmnd_CH_MASK_C_requested"
QT_MOC_LITERAL(83, 2434, 32), // "set_cmnd_SIDE_A_STATUS_requested"
QT_MOC_LITERAL(84, 2467, 32), // "set_cmnd_SIDE_C_STATUS_requested"
QT_MOC_LITERAL(85, 2500, 27), // "set_cmnd_CNT_OR_A_requested"
QT_MOC_LITERAL(86, 2528, 32), // "set_cmnd_CNT_OR_A_RATE_requested"
QT_MOC_LITERAL(87, 2561, 27), // "set_cmnd_CNT_OR_C_requested"
QT_MOC_LITERAL(88, 2589, 32), // "set_cmnd_CNT_OR_C_RATE_requested"
QT_MOC_LITERAL(89, 2622, 25), // "set_cmnd_CNT_SC_requested"
QT_MOC_LITERAL(90, 2648, 30), // "set_cmnd_CNT_SC_RATE_requested"
QT_MOC_LITERAL(91, 2679, 24), // "set_cmnd_CNT_C_requested"
QT_MOC_LITERAL(92, 2704, 29), // "set_cmnd_CNT_C_RATE_requested"
QT_MOC_LITERAL(93, 2734, 24), // "set_cmnd_CNT_V_requested"
QT_MOC_LITERAL(94, 2759, 29), // "set_cmnd_CNT_V_RATE_requested"
QT_MOC_LITERAL(95, 2789, 36), // "set_cmnd_STATUS_OPTIONCODE_re..."
QT_MOC_LITERAL(96, 2826, 4), // "mode"
QT_MOC_LITERAL(97, 2831, 28), // "set_cmnd_OR_A_SIGN_requested"
QT_MOC_LITERAL(98, 2860, 28), // "set_cmnd_OR_A_RATE_requested"
QT_MOC_LITERAL(99, 2889, 28), // "set_cmnd_OR_C_SIGN_requested"
QT_MOC_LITERAL(100, 2918, 28), // "set_cmnd_OR_C_RATE_requested"
QT_MOC_LITERAL(101, 2947, 26), // "set_cmnd_SC_SIGN_requested"
QT_MOC_LITERAL(102, 2974, 26), // "set_cmnd_SC_RATE_requested"
QT_MOC_LITERAL(103, 3001, 25), // "set_cmnd_C_SIGN_requested"
QT_MOC_LITERAL(104, 3027, 25), // "set_cmnd_C_RATE_requested"
QT_MOC_LITERAL(105, 3053, 25), // "set_cmnd_V_SIGN_requested"
QT_MOC_LITERAL(106, 3079, 25), // "set_cmnd_V_RATE_requested"
QT_MOC_LITERAL(107, 3105, 31), // "set_cmnd_OR_A_ENABLED_requested"
QT_MOC_LITERAL(108, 3137, 31), // "set_cmnd_OR_C_ENABLED_requested"
QT_MOC_LITERAL(109, 3169, 29), // "set_cmnd_SC_ENABLED_requested"
QT_MOC_LITERAL(110, 3199, 28), // "set_cmnd_C_ENABLED_requested"
QT_MOC_LITERAL(111, 3228, 28), // "set_cmnd_V_ENABLED_requested"
QT_MOC_LITERAL(112, 3257, 27), // "set_cmnd_LASER_ON_requested"
QT_MOC_LITERAL(113, 3285, 28), // "set_cmnd_LASER_DIV_requested"
QT_MOC_LITERAL(114, 3314, 30), // "set_cmnd_LASER_DELAY_requested"
QT_MOC_LITERAL(115, 3345, 34), // "set_cmnd_LASER_PATTERN_1_requ..."
QT_MOC_LITERAL(116, 3380, 34), // "set_cmnd_LASER_PATTERN_0_requ..."
QT_MOC_LITERAL(117, 3415, 30), // "set_cmnd_ATTEN_VALUE_requested"
QT_MOC_LITERAL(118, 3446, 31), // "set_cmnd_ATTEN_STATUS_requested"
QT_MOC_LITERAL(119, 3478, 26), // "update_request_act_OR_GATE"
QT_MOC_LITERAL(120, 3505, 27), // "update_request_act_CFD_SATR"
QT_MOC_LITERAL(121, 3533, 26), // "update_request_act_CH_MASK"
QT_MOC_LITERAL(122, 3560, 27), // "update_request_act_ADC_ZERO"
QT_MOC_LITERAL(123, 3588, 28), // "update_request_act_ADC_DELAY"
QT_MOC_LITERAL(124, 3617, 30), // "update_request_act_ADC0_OFFSET"
QT_MOC_LITERAL(125, 3648, 30), // "update_request_act_ADC1_OFFSET"
QT_MOC_LITERAL(126, 3679, 29), // "update_request_act_ADC0_RANGE"
QT_MOC_LITERAL(127, 3709, 29), // "update_request_act_ADC1_RANGE"
QT_MOC_LITERAL(128, 3739, 29), // "update_request_act_TIME_ALIGN"
QT_MOC_LITERAL(129, 3769, 32), // "update_request_act_CFD_THRESHOLD"
QT_MOC_LITERAL(130, 3802, 27), // "update_request_act_CFD_ZERO"
QT_MOC_LITERAL(131, 3830, 35), // "update_request_act_THRESHOLD_..."
QT_MOC_LITERAL(132, 3866, 31), // "update_request_act_TG_PATTERN_1"
QT_MOC_LITERAL(133, 3898, 31), // "update_request_act_TG_PATTERN_0"
QT_MOC_LITERAL(134, 3930, 32), // "update_request_act_TG_CONT_VALUE"
QT_MOC_LITERAL(135, 3963, 32), // "update_request_act_TG_BUNCH_FREQ"
QT_MOC_LITERAL(136, 3996, 33), // "update_request_act_TG_FREQ_OF..."
QT_MOC_LITERAL(137, 4030, 38), // "update_request_act_DG_TRG_RES..."
QT_MOC_LITERAL(138, 4069, 35), // "update_request_act_DG_BUNCH_P..."
QT_MOC_LITERAL(139, 4105, 32), // "update_request_act_DG_BUNCH_FREQ"
QT_MOC_LITERAL(140, 4138, 33), // "update_request_act_DG_FREQ_OF..."
QT_MOC_LITERAL(141, 4172, 29), // "update_request_act_RDH_FEE_ID"
QT_MOC_LITERAL(142, 4202, 26), // "update_request_act_RDH_PAR"
QT_MOC_LITERAL(143, 4229, 34), // "update_request_act_RDH_MAX_PA..."
QT_MOC_LITERAL(144, 4264, 32), // "update_request_act_RDH_DET_FIELD"
QT_MOC_LITERAL(145, 4297, 40), // "update_request_act_CRU_TRG_CO..."
QT_MOC_LITERAL(146, 4338, 29), // "update_request_act_BCID_DELAY"
QT_MOC_LITERAL(147, 4368, 36), // "update_request_act_DATA_SEL_T..."
QT_MOC_LITERAL(148, 4405, 26), // "update_request_act_AlltoPM"
QT_MOC_LITERAL(149, 4432, 26), // "update_request_act_DELAY_A"
QT_MOC_LITERAL(150, 4459, 26), // "update_request_act_DELAY_C"
QT_MOC_LITERAL(151, 4486, 28), // "update_request_act_VTIME_LOW"
QT_MOC_LITERAL(152, 4515, 29), // "update_request_act_VTIME_HIGH"
QT_MOC_LITERAL(153, 4545, 29), // "update_request_act_SC_LEVEL_A"
QT_MOC_LITERAL(154, 4575, 29), // "update_request_act_SC_LEVEL_C"
QT_MOC_LITERAL(155, 4605, 28), // "update_request_act_C_LEVEL_A"
QT_MOC_LITERAL(156, 4634, 28), // "update_request_act_C_LEVEL_C"
QT_MOC_LITERAL(157, 4663, 28), // "update_request_act_CH_MASK_A"
QT_MOC_LITERAL(158, 4692, 28), // "update_request_act_CH_MASK_C"
QT_MOC_LITERAL(159, 4721, 28), // "update_request_act_OR_A_SIGN"
QT_MOC_LITERAL(160, 4750, 28), // "update_request_act_OR_A_RATE"
QT_MOC_LITERAL(161, 4779, 28), // "update_request_act_OR_C_SIGN"
QT_MOC_LITERAL(162, 4808, 28), // "update_request_act_OR_C_RATE"
QT_MOC_LITERAL(163, 4837, 26), // "update_request_act_SC_SIGN"
QT_MOC_LITERAL(164, 4864, 26), // "update_request_act_SC_RATE"
QT_MOC_LITERAL(165, 4891, 25), // "update_request_act_C_SIGN"
QT_MOC_LITERAL(166, 4917, 25), // "update_request_act_C_RATE"
QT_MOC_LITERAL(167, 4943, 25), // "update_request_act_V_SIGN"
QT_MOC_LITERAL(168, 4969, 25), // "update_request_act_V_RATE"
QT_MOC_LITERAL(169, 4995, 28), // "update_request_act_LASER_DIV"
QT_MOC_LITERAL(170, 5024, 30), // "update_request_act_LASER_DELAY"
QT_MOC_LITERAL(171, 5055, 34), // "update_request_act_LASER_PATT..."
QT_MOC_LITERAL(172, 5090, 34), // "update_request_act_LASER_PATT..."
QT_MOC_LITERAL(173, 5125, 30) // "update_request_act_ATTEN_VALUE"

    },
    "Emulator\0set_cmnd_ADC_ZERO_requested\0"
    "\0FEEid\0CHid\0val\0set_cmnd_ADC_DELAY_requested\0"
    "set_cmnd_ADC0_OFFSET_requested\0"
    "set_cmnd_ADC1_OFFSET_requested\0"
    "set_cmnd_ADC0_RANGE_requested\0"
    "set_cmnd_ADC1_RANGE_requested\0"
    "set_cmnd_TIME_ALIGN_requested\0"
    "set_cmnd_CFD_THRESHOLD_requested\0"
    "set_cmnd_CFD_ZERO_requested\0"
    "set_cmnd_THRESHOLD_CALIBR_requested\0"
    "set_cmnd_ADC0_MEANAMPL_requested\0"
    "set_cmnd_ADC1_MEANAMPL_requested\0"
    "set_cmnd_ADC0_ZEROLVL_requested\0"
    "set_cmnd_ADC1_ZEROLVL_requested\0"
    "set_cmnd_RAW_TDC_DATA_requested\0"
    "set_cmnd_CNT_CFD_requested\0"
    "set_cmnd_CNT_CFD_RATE_requested\0"
    "set_cmnd_CNT_TRG_requested\0"
    "set_cmnd_CNT_TRG_RATE_requested\0"
    "set_cmnd_OR_GATE_requested\0"
    "set_cmnd_CFD_SATR_requested\0"
    "set_cmnd_CH_MASK_requested\0"
    "set_cmnd_LINK_STATUS_requested\0"
    "set_cmnd_BOARD_STATUS_requested\0"
    "set_cmnd_TEMPERATURE_requested\0"
    "set_cmnd_SERIAL_NUM_requested\0"
    "set_cmnd_FW_VERSION_requested\0"
    "set_cmnd_TG_PATTERN_1_requested\0"
    "set_cmnd_TG_PATTERN_0_requested\0"
    "set_cmnd_TG_CONT_VALUE_requested\0"
    "set_cmnd_TG_BUNCH_FREQ_requested\0"
    "set_cmnd_TG_FREQ_OFFSET_requested\0"
    "set_cmnd_TG_MODE_requested\0"
    "set_cmnd_HB_RESPONSE_requested\0"
    "set_cmnd_DG_MODE_requested\0"
    "set_cmnd_DG_TRG_RESPOND_MASK_requested\0"
    "set_cmnd_DG_BUNCH_PATTERN_requested\0"
    "set_cmnd_DG_BUNCH_FREQ_requested\0"
    "set_cmnd_DG_FREQ_OFFSET_requested\0"
    "set_cmnd_RDH_FEE_ID_requested\0"
    "set_cmnd_RDH_PAR_requested\0"
    "set_cmnd_RDH_MAX_PAYLOAD_requested\0"
    "set_cmnd_RDH_DET_FIELD_requested\0"
    "set_cmnd_CRU_TRG_COMPARE_DELAY_requested\0"
    "set_cmnd_BCID_DELAY_requested\0"
    "set_cmnd_DATA_SEL_TRG_MASK_requested\0"
    "set_cmnd_BITS_requested\0"
    "set_cmnd_READOUT_MODE_requested\0"
    "set_cmnd_BCID_SYNC_MODE_requested\0"
    "set_cmnd_RX_PHASE_requested\0"
    "set_cmnd_CRU_ORBIT_requested\0"
    "set_cmnd_CRU_BC_requested\0"
    "set_cmnd_RAW_FIFO_requested\0"
    "set_cmnd_SEL_FIFO_requested\0"
    "set_cmnd_SEL_FIRST_HIT_DROPPED_ORBIT_requested\0"
    "set_cmnd_SEL_LAST_HIT_DROPPED_ORBIT_requested\0"
    "set_cmnd_SEL_HITS_DROPPED_requested\0"
    "set_cmnd_READOUT_RATE_requested\0"
    "set_cmnd_COUNTERS_UPD_RATE_requested\0"
    "set_cmnd_EXTENDED_READOUT_requested\0"
    "isOn\0set_cmnd_SC_SUM_SIDES_requested\0"
    "set_cmnd_C_SUM_SIDES_requested\0"
    "set_cmnd_ADD_C_DELAY_requested\0"
    "set_cmnd_RES_SW_1_requested\0"
    "set_cmnd_RES_SW_2_requested\0"
    "set_cmnd_RES_SW_3_requested\0"
    "set_cmnd_RES_SW_4_requested\0"
    "set_cmnd_DELAY_A_requested\0"
    "set_cmnd_DELAY_C_requested\0"
    "set_cmnd_VTIME_LOW_requested\0"
    "set_cmnd_VTIME_HIGH_requested\0"
    "set_cmnd_SC_LEVEL_A_requested\0"
    "set_cmnd_SC_LEVEL_C_requested\0"
    "set_cmnd_C_LEVEL_A_requested\0"
    "set_cmnd_C_LEVEL_C_requested\0"
    "set_cmnd_CH_MASK_A_requested\0"
    "set_cmnd_CH_MASK_C_requested\0"
    "set_cmnd_SIDE_A_STATUS_requested\0"
    "set_cmnd_SIDE_C_STATUS_requested\0"
    "set_cmnd_CNT_OR_A_requested\0"
    "set_cmnd_CNT_OR_A_RATE_requested\0"
    "set_cmnd_CNT_OR_C_requested\0"
    "set_cmnd_CNT_OR_C_RATE_requested\0"
    "set_cmnd_CNT_SC_requested\0"
    "set_cmnd_CNT_SC_RATE_requested\0"
    "set_cmnd_CNT_C_requested\0"
    "set_cmnd_CNT_C_RATE_requested\0"
    "set_cmnd_CNT_V_requested\0"
    "set_cmnd_CNT_V_RATE_requested\0"
    "set_cmnd_STATUS_OPTIONCODE_requested\0"
    "mode\0set_cmnd_OR_A_SIGN_requested\0"
    "set_cmnd_OR_A_RATE_requested\0"
    "set_cmnd_OR_C_SIGN_requested\0"
    "set_cmnd_OR_C_RATE_requested\0"
    "set_cmnd_SC_SIGN_requested\0"
    "set_cmnd_SC_RATE_requested\0"
    "set_cmnd_C_SIGN_requested\0"
    "set_cmnd_C_RATE_requested\0"
    "set_cmnd_V_SIGN_requested\0"
    "set_cmnd_V_RATE_requested\0"
    "set_cmnd_OR_A_ENABLED_requested\0"
    "set_cmnd_OR_C_ENABLED_requested\0"
    "set_cmnd_SC_ENABLED_requested\0"
    "set_cmnd_C_ENABLED_requested\0"
    "set_cmnd_V_ENABLED_requested\0"
    "set_cmnd_LASER_ON_requested\0"
    "set_cmnd_LASER_DIV_requested\0"
    "set_cmnd_LASER_DELAY_requested\0"
    "set_cmnd_LASER_PATTERN_1_requested\0"
    "set_cmnd_LASER_PATTERN_0_requested\0"
    "set_cmnd_ATTEN_VALUE_requested\0"
    "set_cmnd_ATTEN_STATUS_requested\0"
    "update_request_act_OR_GATE\0"
    "update_request_act_CFD_SATR\0"
    "update_request_act_CH_MASK\0"
    "update_request_act_ADC_ZERO\0"
    "update_request_act_ADC_DELAY\0"
    "update_request_act_ADC0_OFFSET\0"
    "update_request_act_ADC1_OFFSET\0"
    "update_request_act_ADC0_RANGE\0"
    "update_request_act_ADC1_RANGE\0"
    "update_request_act_TIME_ALIGN\0"
    "update_request_act_CFD_THRESHOLD\0"
    "update_request_act_CFD_ZERO\0"
    "update_request_act_THRESHOLD_CALIBR\0"
    "update_request_act_TG_PATTERN_1\0"
    "update_request_act_TG_PATTERN_0\0"
    "update_request_act_TG_CONT_VALUE\0"
    "update_request_act_TG_BUNCH_FREQ\0"
    "update_request_act_TG_FREQ_OFFSET\0"
    "update_request_act_DG_TRG_RESPOND_MASK\0"
    "update_request_act_DG_BUNCH_PATTERN\0"
    "update_request_act_DG_BUNCH_FREQ\0"
    "update_request_act_DG_FREQ_OFFSET\0"
    "update_request_act_RDH_FEE_ID\0"
    "update_request_act_RDH_PAR\0"
    "update_request_act_RDH_MAX_PAYLOAD\0"
    "update_request_act_RDH_DET_FIELD\0"
    "update_request_act_CRU_TRG_COMPARE_DELAY\0"
    "update_request_act_BCID_DELAY\0"
    "update_request_act_DATA_SEL_TRG_MASK\0"
    "update_request_act_AlltoPM\0"
    "update_request_act_DELAY_A\0"
    "update_request_act_DELAY_C\0"
    "update_request_act_VTIME_LOW\0"
    "update_request_act_VTIME_HIGH\0"
    "update_request_act_SC_LEVEL_A\0"
    "update_request_act_SC_LEVEL_C\0"
    "update_request_act_C_LEVEL_A\0"
    "update_request_act_C_LEVEL_C\0"
    "update_request_act_CH_MASK_A\0"
    "update_request_act_CH_MASK_C\0"
    "update_request_act_OR_A_SIGN\0"
    "update_request_act_OR_A_RATE\0"
    "update_request_act_OR_C_SIGN\0"
    "update_request_act_OR_C_RATE\0"
    "update_request_act_SC_SIGN\0"
    "update_request_act_SC_RATE\0"
    "update_request_act_C_SIGN\0"
    "update_request_act_C_RATE\0"
    "update_request_act_V_SIGN\0"
    "update_request_act_V_RATE\0"
    "update_request_act_LASER_DIV\0"
    "update_request_act_LASER_DELAY\0"
    "update_request_act_LASER_PATTERN_1\0"
    "update_request_act_LASER_PATTERN_0\0"
    "update_request_act_ATTEN_VALUE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Emulator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     167,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
     112,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  849,    2, 0x06 /* Public */,
       6,    3,  856,    2, 0x06 /* Public */,
       7,    3,  863,    2, 0x06 /* Public */,
       8,    3,  870,    2, 0x06 /* Public */,
       9,    3,  877,    2, 0x06 /* Public */,
      10,    3,  884,    2, 0x06 /* Public */,
      11,    3,  891,    2, 0x06 /* Public */,
      12,    3,  898,    2, 0x06 /* Public */,
      13,    3,  905,    2, 0x06 /* Public */,
      14,    3,  912,    2, 0x06 /* Public */,
      15,    3,  919,    2, 0x06 /* Public */,
      16,    3,  926,    2, 0x06 /* Public */,
      17,    3,  933,    2, 0x06 /* Public */,
      18,    3,  940,    2, 0x06 /* Public */,
      19,    3,  947,    2, 0x06 /* Public */,
      20,    3,  954,    2, 0x06 /* Public */,
      21,    3,  961,    2, 0x06 /* Public */,
      22,    3,  968,    2, 0x06 /* Public */,
      23,    3,  975,    2, 0x06 /* Public */,
      24,    2,  982,    2, 0x06 /* Public */,
      25,    2,  987,    2, 0x06 /* Public */,
      26,    2,  992,    2, 0x06 /* Public */,
      27,    2,  997,    2, 0x06 /* Public */,
      28,    2, 1002,    2, 0x06 /* Public */,
      29,    2, 1007,    2, 0x06 /* Public */,
      30,    2, 1012,    2, 0x06 /* Public */,
      31,    2, 1017,    2, 0x06 /* Public */,
      32,    2, 1022,    2, 0x06 /* Public */,
      33,    2, 1027,    2, 0x06 /* Public */,
      34,    2, 1032,    2, 0x06 /* Public */,
      35,    2, 1037,    2, 0x06 /* Public */,
      36,    2, 1042,    2, 0x06 /* Public */,
      37,    2, 1047,    2, 0x06 /* Public */,
      38,    2, 1052,    2, 0x06 /* Public */,
      39,    2, 1057,    2, 0x06 /* Public */,
      40,    2, 1062,    2, 0x06 /* Public */,
      41,    2, 1067,    2, 0x06 /* Public */,
      42,    2, 1072,    2, 0x06 /* Public */,
      43,    2, 1077,    2, 0x06 /* Public */,
      44,    2, 1082,    2, 0x06 /* Public */,
      45,    2, 1087,    2, 0x06 /* Public */,
      46,    2, 1092,    2, 0x06 /* Public */,
      47,    2, 1097,    2, 0x06 /* Public */,
      48,    2, 1102,    2, 0x06 /* Public */,
      49,    2, 1107,    2, 0x06 /* Public */,
      50,    2, 1112,    2, 0x06 /* Public */,
      51,    2, 1117,    2, 0x06 /* Public */,
      52,    2, 1122,    2, 0x06 /* Public */,
      53,    2, 1127,    2, 0x06 /* Public */,
      54,    2, 1132,    2, 0x06 /* Public */,
      55,    2, 1137,    2, 0x06 /* Public */,
      56,    2, 1142,    2, 0x06 /* Public */,
      57,    2, 1147,    2, 0x06 /* Public */,
      58,    2, 1152,    2, 0x06 /* Public */,
      59,    2, 1157,    2, 0x06 /* Public */,
      60,    2, 1162,    2, 0x06 /* Public */,
      61,    2, 1167,    2, 0x06 /* Public */,
      62,    2, 1172,    2, 0x06 /* Public */,
      63,    1, 1177,    2, 0x06 /* Public */,
      64,    1, 1180,    2, 0x06 /* Public */,
      66,    1, 1183,    2, 0x06 /* Public */,
      67,    1, 1186,    2, 0x06 /* Public */,
      68,    1, 1189,    2, 0x06 /* Public */,
      69,    1, 1192,    2, 0x06 /* Public */,
      70,    1, 1195,    2, 0x06 /* Public */,
      71,    1, 1198,    2, 0x06 /* Public */,
      72,    1, 1201,    2, 0x06 /* Public */,
      73,    1, 1204,    2, 0x06 /* Public */,
      74,    1, 1207,    2, 0x06 /* Public */,
      75,    1, 1210,    2, 0x06 /* Public */,
      76,    1, 1213,    2, 0x06 /* Public */,
      77,    1, 1216,    2, 0x06 /* Public */,
      78,    1, 1219,    2, 0x06 /* Public */,
      79,    1, 1222,    2, 0x06 /* Public */,
      80,    1, 1225,    2, 0x06 /* Public */,
      81,    1, 1228,    2, 0x06 /* Public */,
      82,    1, 1231,    2, 0x06 /* Public */,
      83,    1, 1234,    2, 0x06 /* Public */,
      84,    1, 1237,    2, 0x06 /* Public */,
      85,    1, 1240,    2, 0x06 /* Public */,
      86,    1, 1243,    2, 0x06 /* Public */,
      87,    1, 1246,    2, 0x06 /* Public */,
      88,    1, 1249,    2, 0x06 /* Public */,
      89,    1, 1252,    2, 0x06 /* Public */,
      90,    1, 1255,    2, 0x06 /* Public */,
      91,    1, 1258,    2, 0x06 /* Public */,
      92,    1, 1261,    2, 0x06 /* Public */,
      93,    1, 1264,    2, 0x06 /* Public */,
      94,    1, 1267,    2, 0x06 /* Public */,
      95,    1, 1270,    2, 0x06 /* Public */,
      97,    1, 1273,    2, 0x06 /* Public */,
      98,    1, 1276,    2, 0x06 /* Public */,
      99,    1, 1279,    2, 0x06 /* Public */,
     100,    1, 1282,    2, 0x06 /* Public */,
     101,    1, 1285,    2, 0x06 /* Public */,
     102,    1, 1288,    2, 0x06 /* Public */,
     103,    1, 1291,    2, 0x06 /* Public */,
     104,    1, 1294,    2, 0x06 /* Public */,
     105,    1, 1297,    2, 0x06 /* Public */,
     106,    1, 1300,    2, 0x06 /* Public */,
     107,    1, 1303,    2, 0x06 /* Public */,
     108,    1, 1306,    2, 0x06 /* Public */,
     109,    1, 1309,    2, 0x06 /* Public */,
     110,    1, 1312,    2, 0x06 /* Public */,
     111,    1, 1315,    2, 0x06 /* Public */,
     112,    1, 1318,    2, 0x06 /* Public */,
     113,    1, 1321,    2, 0x06 /* Public */,
     114,    1, 1324,    2, 0x06 /* Public */,
     115,    1, 1327,    2, 0x06 /* Public */,
     116,    1, 1330,    2, 0x06 /* Public */,
     117,    1, 1333,    2, 0x06 /* Public */,
     118,    1, 1336,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
     119,    1, 1339,    2, 0x0a /* Public */,
     120,    1, 1342,    2, 0x0a /* Public */,
     121,    1, 1345,    2, 0x0a /* Public */,
     122,    2, 1348,    2, 0x0a /* Public */,
     123,    2, 1353,    2, 0x0a /* Public */,
     124,    2, 1358,    2, 0x0a /* Public */,
     125,    2, 1363,    2, 0x0a /* Public */,
     126,    2, 1368,    2, 0x0a /* Public */,
     127,    2, 1373,    2, 0x0a /* Public */,
     128,    2, 1378,    2, 0x0a /* Public */,
     129,    2, 1383,    2, 0x0a /* Public */,
     130,    2, 1388,    2, 0x0a /* Public */,
     131,    2, 1393,    2, 0x0a /* Public */,
     132,    1, 1398,    2, 0x0a /* Public */,
     133,    1, 1401,    2, 0x0a /* Public */,
     134,    1, 1404,    2, 0x0a /* Public */,
     135,    1, 1407,    2, 0x0a /* Public */,
     136,    1, 1410,    2, 0x0a /* Public */,
     137,    1, 1413,    2, 0x0a /* Public */,
     138,    1, 1416,    2, 0x0a /* Public */,
     139,    1, 1419,    2, 0x0a /* Public */,
     140,    1, 1422,    2, 0x0a /* Public */,
     141,    1, 1425,    2, 0x0a /* Public */,
     142,    1, 1428,    2, 0x0a /* Public */,
     143,    1, 1431,    2, 0x0a /* Public */,
     144,    1, 1434,    2, 0x0a /* Public */,
     145,    1, 1437,    2, 0x0a /* Public */,
     146,    1, 1440,    2, 0x0a /* Public */,
     147,    1, 1443,    2, 0x0a /* Public */,
     148,    1, 1446,    2, 0x0a /* Public */,
     149,    0, 1449,    2, 0x0a /* Public */,
     150,    0, 1450,    2, 0x0a /* Public */,
     151,    0, 1451,    2, 0x0a /* Public */,
     152,    0, 1452,    2, 0x0a /* Public */,
     153,    0, 1453,    2, 0x0a /* Public */,
     154,    0, 1454,    2, 0x0a /* Public */,
     155,    0, 1455,    2, 0x0a /* Public */,
     156,    0, 1456,    2, 0x0a /* Public */,
     157,    0, 1457,    2, 0x0a /* Public */,
     158,    0, 1458,    2, 0x0a /* Public */,
     159,    0, 1459,    2, 0x0a /* Public */,
     160,    0, 1460,    2, 0x0a /* Public */,
     161,    0, 1461,    2, 0x0a /* Public */,
     162,    0, 1462,    2, 0x0a /* Public */,
     163,    0, 1463,    2, 0x0a /* Public */,
     164,    0, 1464,    2, 0x0a /* Public */,
     165,    0, 1465,    2, 0x0a /* Public */,
     166,    0, 1466,    2, 0x0a /* Public */,
     167,    0, 1467,    2, 0x0a /* Public */,
     168,    0, 1468,    2, 0x0a /* Public */,
     169,    0, 1469,    2, 0x0a /* Public */,
     170,    0, 1470,    2, 0x0a /* Public */,
     171,    0, 1471,    2, 0x0a /* Public */,
     172,    0, 1472,    2, 0x0a /* Public */,
     173,    0, 1473,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar, QMetaType::Short,    3,    4,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar, QMetaType::Short,    3,    4,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar, QMetaType::UShort,    3,    4,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar, QMetaType::UShort,    3,    4,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar, QMetaType::UShort,    3,    4,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar, QMetaType::UShort,    3,    4,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar, QMetaType::UShort,    3,    4,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar, QMetaType::Short,    3,    4,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar, QMetaType::Short,    3,    4,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar, QMetaType::Short,    3,    4,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar, QMetaType::UShort,    3,    4,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar, QMetaType::UShort,    3,    4,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar, QMetaType::UShort,    3,    4,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar, QMetaType::UShort,    3,    4,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar, QMetaType::UShort,    3,    4,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar, QMetaType::UInt,    3,    4,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar, QMetaType::UInt,    3,    4,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar, QMetaType::UInt,    3,    4,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar, QMetaType::UInt,    3,    4,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UInt,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UInt,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UInt,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UInt,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UInt,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UInt,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UInt,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UInt,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UInt,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UInt,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UInt,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, QMetaType::UChar,   65,
    QMetaType::Void, QMetaType::UChar,   65,
    QMetaType::Void, QMetaType::UChar,   65,
    QMetaType::Void, QMetaType::UChar,   65,
    QMetaType::Void, QMetaType::UChar,   65,
    QMetaType::Void, QMetaType::UChar,   65,
    QMetaType::Void, QMetaType::UChar,   65,
    QMetaType::Void, QMetaType::UChar,   65,
    QMetaType::Void, QMetaType::Short,    5,
    QMetaType::Void, QMetaType::Short,    5,
    QMetaType::Void, QMetaType::Short,    5,
    QMetaType::Void, QMetaType::Short,    5,
    QMetaType::Void, QMetaType::UShort,    5,
    QMetaType::Void, QMetaType::UShort,    5,
    QMetaType::Void, QMetaType::UShort,    5,
    QMetaType::Void, QMetaType::UShort,    5,
    QMetaType::Void, QMetaType::UShort,    5,
    QMetaType::Void, QMetaType::UShort,    5,
    QMetaType::Void, QMetaType::UShort,    5,
    QMetaType::Void, QMetaType::UShort,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::QString,   96,
    QMetaType::Void, QMetaType::UShort,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UShort,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UShort,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UShort,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UShort,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UChar,   65,
    QMetaType::Void, QMetaType::UChar,   65,
    QMetaType::Void, QMetaType::UChar,   65,
    QMetaType::Void, QMetaType::UChar,   65,
    QMetaType::Void, QMetaType::UChar,   65,
    QMetaType::Void, QMetaType::UChar,   65,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::Short,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UShort,    5,
    QMetaType::Void, QMetaType::UChar,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    4,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    4,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    4,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    4,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    4,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    4,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    4,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    4,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    4,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    4,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Emulator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Emulator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->set_cmnd_ADC_ZERO_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 1: _t->set_cmnd_ADC_DELAY_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 2: _t->set_cmnd_ADC0_OFFSET_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 3: _t->set_cmnd_ADC1_OFFSET_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 4: _t->set_cmnd_ADC0_RANGE_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 5: _t->set_cmnd_ADC1_RANGE_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 6: _t->set_cmnd_TIME_ALIGN_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 7: _t->set_cmnd_CFD_THRESHOLD_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 8: _t->set_cmnd_CFD_ZERO_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 9: _t->set_cmnd_THRESHOLD_CALIBR_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 10: _t->set_cmnd_ADC0_MEANAMPL_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 11: _t->set_cmnd_ADC1_MEANAMPL_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 12: _t->set_cmnd_ADC0_ZEROLVL_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 13: _t->set_cmnd_ADC1_ZEROLVL_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 14: _t->set_cmnd_RAW_TDC_DATA_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 15: _t->set_cmnd_CNT_CFD_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 16: _t->set_cmnd_CNT_CFD_RATE_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 17: _t->set_cmnd_CNT_TRG_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 18: _t->set_cmnd_CNT_TRG_RATE_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 19: _t->set_cmnd_OR_GATE_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 20: _t->set_cmnd_CFD_SATR_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 21: _t->set_cmnd_CH_MASK_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 22: _t->set_cmnd_LINK_STATUS_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 23: _t->set_cmnd_BOARD_STATUS_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 24: _t->set_cmnd_TEMPERATURE_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 25: _t->set_cmnd_SERIAL_NUM_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 26: _t->set_cmnd_FW_VERSION_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 27: _t->set_cmnd_TG_PATTERN_1_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 28: _t->set_cmnd_TG_PATTERN_0_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 29: _t->set_cmnd_TG_CONT_VALUE_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 30: _t->set_cmnd_TG_BUNCH_FREQ_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 31: _t->set_cmnd_TG_FREQ_OFFSET_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 32: _t->set_cmnd_TG_MODE_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 33: _t->set_cmnd_HB_RESPONSE_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 34: _t->set_cmnd_DG_MODE_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 35: _t->set_cmnd_DG_TRG_RESPOND_MASK_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 36: _t->set_cmnd_DG_BUNCH_PATTERN_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 37: _t->set_cmnd_DG_BUNCH_FREQ_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 38: _t->set_cmnd_DG_FREQ_OFFSET_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 39: _t->set_cmnd_RDH_FEE_ID_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 40: _t->set_cmnd_RDH_PAR_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 41: _t->set_cmnd_RDH_MAX_PAYLOAD_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 42: _t->set_cmnd_RDH_DET_FIELD_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 43: _t->set_cmnd_CRU_TRG_COMPARE_DELAY_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 44: _t->set_cmnd_BCID_DELAY_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 45: _t->set_cmnd_DATA_SEL_TRG_MASK_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 46: _t->set_cmnd_BITS_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 47: _t->set_cmnd_READOUT_MODE_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 48: _t->set_cmnd_BCID_SYNC_MODE_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 49: _t->set_cmnd_RX_PHASE_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 50: _t->set_cmnd_CRU_ORBIT_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 51: _t->set_cmnd_CRU_BC_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 52: _t->set_cmnd_RAW_FIFO_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 53: _t->set_cmnd_SEL_FIFO_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 54: _t->set_cmnd_SEL_FIRST_HIT_DROPPED_ORBIT_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 55: _t->set_cmnd_SEL_LAST_HIT_DROPPED_ORBIT_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 56: _t->set_cmnd_SEL_HITS_DROPPED_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 57: _t->set_cmnd_READOUT_RATE_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 58: _t->set_cmnd_COUNTERS_UPD_RATE_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 59: _t->set_cmnd_EXTENDED_READOUT_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 60: _t->set_cmnd_SC_SUM_SIDES_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 61: _t->set_cmnd_C_SUM_SIDES_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 62: _t->set_cmnd_ADD_C_DELAY_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 63: _t->set_cmnd_RES_SW_1_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 64: _t->set_cmnd_RES_SW_2_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 65: _t->set_cmnd_RES_SW_3_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 66: _t->set_cmnd_RES_SW_4_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 67: _t->set_cmnd_DELAY_A_requested((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 68: _t->set_cmnd_DELAY_C_requested((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 69: _t->set_cmnd_VTIME_LOW_requested((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 70: _t->set_cmnd_VTIME_HIGH_requested((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 71: _t->set_cmnd_SC_LEVEL_A_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 72: _t->set_cmnd_SC_LEVEL_C_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 73: _t->set_cmnd_C_LEVEL_A_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 74: _t->set_cmnd_C_LEVEL_C_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 75: _t->set_cmnd_CH_MASK_A_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 76: _t->set_cmnd_CH_MASK_C_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 77: _t->set_cmnd_SIDE_A_STATUS_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 78: _t->set_cmnd_SIDE_C_STATUS_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 79: _t->set_cmnd_CNT_OR_A_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 80: _t->set_cmnd_CNT_OR_A_RATE_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 81: _t->set_cmnd_CNT_OR_C_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 82: _t->set_cmnd_CNT_OR_C_RATE_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 83: _t->set_cmnd_CNT_SC_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 84: _t->set_cmnd_CNT_SC_RATE_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 85: _t->set_cmnd_CNT_C_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 86: _t->set_cmnd_CNT_C_RATE_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 87: _t->set_cmnd_CNT_V_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 88: _t->set_cmnd_CNT_V_RATE_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 89: _t->set_cmnd_STATUS_OPTIONCODE_requested((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 90: _t->set_cmnd_OR_A_SIGN_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 91: _t->set_cmnd_OR_A_RATE_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 92: _t->set_cmnd_OR_C_SIGN_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 93: _t->set_cmnd_OR_C_RATE_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 94: _t->set_cmnd_SC_SIGN_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 95: _t->set_cmnd_SC_RATE_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 96: _t->set_cmnd_C_SIGN_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 97: _t->set_cmnd_C_RATE_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 98: _t->set_cmnd_V_SIGN_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 99: _t->set_cmnd_V_RATE_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 100: _t->set_cmnd_OR_A_ENABLED_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 101: _t->set_cmnd_OR_C_ENABLED_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 102: _t->set_cmnd_SC_ENABLED_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 103: _t->set_cmnd_C_ENABLED_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 104: _t->set_cmnd_V_ENABLED_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 105: _t->set_cmnd_LASER_ON_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 106: _t->set_cmnd_LASER_DIV_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 107: _t->set_cmnd_LASER_DELAY_requested((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 108: _t->set_cmnd_LASER_PATTERN_1_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 109: _t->set_cmnd_LASER_PATTERN_0_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 110: _t->set_cmnd_ATTEN_VALUE_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 111: _t->set_cmnd_ATTEN_STATUS_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 112: _t->update_request_act_OR_GATE((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 113: _t->update_request_act_CFD_SATR((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 114: _t->update_request_act_CH_MASK((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 115: _t->update_request_act_ADC_ZERO((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 116: _t->update_request_act_ADC_DELAY((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 117: _t->update_request_act_ADC0_OFFSET((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 118: _t->update_request_act_ADC1_OFFSET((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 119: _t->update_request_act_ADC0_RANGE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 120: _t->update_request_act_ADC1_RANGE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 121: _t->update_request_act_TIME_ALIGN((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 122: _t->update_request_act_CFD_THRESHOLD((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 123: _t->update_request_act_CFD_ZERO((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 124: _t->update_request_act_THRESHOLD_CALIBR((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 125: _t->update_request_act_TG_PATTERN_1((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 126: _t->update_request_act_TG_PATTERN_0((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 127: _t->update_request_act_TG_CONT_VALUE((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 128: _t->update_request_act_TG_BUNCH_FREQ((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 129: _t->update_request_act_TG_FREQ_OFFSET((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 130: _t->update_request_act_DG_TRG_RESPOND_MASK((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 131: _t->update_request_act_DG_BUNCH_PATTERN((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 132: _t->update_request_act_DG_BUNCH_FREQ((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 133: _t->update_request_act_DG_FREQ_OFFSET((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 134: _t->update_request_act_RDH_FEE_ID((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 135: _t->update_request_act_RDH_PAR((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 136: _t->update_request_act_RDH_MAX_PAYLOAD((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 137: _t->update_request_act_RDH_DET_FIELD((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 138: _t->update_request_act_CRU_TRG_COMPARE_DELAY((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 139: _t->update_request_act_BCID_DELAY((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 140: _t->update_request_act_DATA_SEL_TRG_MASK((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 141: _t->update_request_act_AlltoPM((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 142: _t->update_request_act_DELAY_A(); break;
        case 143: _t->update_request_act_DELAY_C(); break;
        case 144: _t->update_request_act_VTIME_LOW(); break;
        case 145: _t->update_request_act_VTIME_HIGH(); break;
        case 146: _t->update_request_act_SC_LEVEL_A(); break;
        case 147: _t->update_request_act_SC_LEVEL_C(); break;
        case 148: _t->update_request_act_C_LEVEL_A(); break;
        case 149: _t->update_request_act_C_LEVEL_C(); break;
        case 150: _t->update_request_act_CH_MASK_A(); break;
        case 151: _t->update_request_act_CH_MASK_C(); break;
        case 152: _t->update_request_act_OR_A_SIGN(); break;
        case 153: _t->update_request_act_OR_A_RATE(); break;
        case 154: _t->update_request_act_OR_C_SIGN(); break;
        case 155: _t->update_request_act_OR_C_RATE(); break;
        case 156: _t->update_request_act_SC_SIGN(); break;
        case 157: _t->update_request_act_SC_RATE(); break;
        case 158: _t->update_request_act_C_SIGN(); break;
        case 159: _t->update_request_act_C_RATE(); break;
        case 160: _t->update_request_act_V_SIGN(); break;
        case 161: _t->update_request_act_V_RATE(); break;
        case 162: _t->update_request_act_LASER_DIV(); break;
        case 163: _t->update_request_act_LASER_DELAY(); break;
        case 164: _t->update_request_act_LASER_PATTERN_1(); break;
        case 165: _t->update_request_act_LASER_PATTERN_0(); break;
        case 166: _t->update_request_act_ATTEN_VALUE(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Emulator::*)(quint16 , quint8 , qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_ADC_ZERO_requested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 , qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_ADC_DELAY_requested)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_ADC0_OFFSET_requested)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_ADC1_OFFSET_requested)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_ADC0_RANGE_requested)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_ADC1_RANGE_requested)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_TIME_ALIGN_requested)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 , qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_CFD_THRESHOLD_requested)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 , qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_CFD_ZERO_requested)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 , qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_THRESHOLD_CALIBR_requested)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_ADC0_MEANAMPL_requested)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_ADC1_MEANAMPL_requested)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_ADC0_ZEROLVL_requested)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_ADC1_ZEROLVL_requested)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_RAW_TDC_DATA_requested)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_CNT_CFD_requested)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_CNT_CFD_RATE_requested)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_CNT_TRG_requested)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_CNT_TRG_RATE_requested)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_OR_GATE_requested)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_CFD_SATR_requested)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_CH_MASK_requested)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_LINK_STATUS_requested)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_BOARD_STATUS_requested)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_TEMPERATURE_requested)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_SERIAL_NUM_requested)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_FW_VERSION_requested)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_TG_PATTERN_1_requested)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_TG_PATTERN_0_requested)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_TG_CONT_VALUE_requested)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_TG_BUNCH_FREQ_requested)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_TG_FREQ_OFFSET_requested)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_TG_MODE_requested)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_HB_RESPONSE_requested)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_DG_MODE_requested)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_DG_TRG_RESPOND_MASK_requested)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_DG_BUNCH_PATTERN_requested)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_DG_BUNCH_FREQ_requested)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_DG_FREQ_OFFSET_requested)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_RDH_FEE_ID_requested)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_RDH_PAR_requested)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_RDH_MAX_PAYLOAD_requested)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_RDH_DET_FIELD_requested)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_CRU_TRG_COMPARE_DELAY_requested)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_BCID_DELAY_requested)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_DATA_SEL_TRG_MASK_requested)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_BITS_requested)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_READOUT_MODE_requested)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_BCID_SYNC_MODE_requested)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_RX_PHASE_requested)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_CRU_ORBIT_requested)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_CRU_BC_requested)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_RAW_FIFO_requested)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_SEL_FIFO_requested)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_SEL_FIRST_HIT_DROPPED_ORBIT_requested)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_SEL_LAST_HIT_DROPPED_ORBIT_requested)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_SEL_HITS_DROPPED_requested)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_READOUT_RATE_requested)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_COUNTERS_UPD_RATE_requested)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_EXTENDED_READOUT_requested)) {
                *result = 59;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_SC_SUM_SIDES_requested)) {
                *result = 60;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_C_SUM_SIDES_requested)) {
                *result = 61;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_ADD_C_DELAY_requested)) {
                *result = 62;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_RES_SW_1_requested)) {
                *result = 63;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_RES_SW_2_requested)) {
                *result = 64;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_RES_SW_3_requested)) {
                *result = 65;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_RES_SW_4_requested)) {
                *result = 66;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_DELAY_A_requested)) {
                *result = 67;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_DELAY_C_requested)) {
                *result = 68;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_VTIME_LOW_requested)) {
                *result = 69;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_VTIME_HIGH_requested)) {
                *result = 70;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_SC_LEVEL_A_requested)) {
                *result = 71;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_SC_LEVEL_C_requested)) {
                *result = 72;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_C_LEVEL_A_requested)) {
                *result = 73;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_C_LEVEL_C_requested)) {
                *result = 74;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_CH_MASK_A_requested)) {
                *result = 75;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_CH_MASK_C_requested)) {
                *result = 76;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_SIDE_A_STATUS_requested)) {
                *result = 77;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_SIDE_C_STATUS_requested)) {
                *result = 78;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_CNT_OR_A_requested)) {
                *result = 79;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_CNT_OR_A_RATE_requested)) {
                *result = 80;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_CNT_OR_C_requested)) {
                *result = 81;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_CNT_OR_C_RATE_requested)) {
                *result = 82;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_CNT_SC_requested)) {
                *result = 83;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_CNT_SC_RATE_requested)) {
                *result = 84;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_CNT_C_requested)) {
                *result = 85;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_CNT_C_RATE_requested)) {
                *result = 86;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_CNT_V_requested)) {
                *result = 87;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_CNT_V_RATE_requested)) {
                *result = 88;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_STATUS_OPTIONCODE_requested)) {
                *result = 89;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_OR_A_SIGN_requested)) {
                *result = 90;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_OR_A_RATE_requested)) {
                *result = 91;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_OR_C_SIGN_requested)) {
                *result = 92;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_OR_C_RATE_requested)) {
                *result = 93;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_SC_SIGN_requested)) {
                *result = 94;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_SC_RATE_requested)) {
                *result = 95;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_C_SIGN_requested)) {
                *result = 96;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_C_RATE_requested)) {
                *result = 97;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_V_SIGN_requested)) {
                *result = 98;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_V_RATE_requested)) {
                *result = 99;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_OR_A_ENABLED_requested)) {
                *result = 100;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_OR_C_ENABLED_requested)) {
                *result = 101;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_SC_ENABLED_requested)) {
                *result = 102;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_C_ENABLED_requested)) {
                *result = 103;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_V_ENABLED_requested)) {
                *result = 104;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_LASER_ON_requested)) {
                *result = 105;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_LASER_DIV_requested)) {
                *result = 106;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_LASER_DELAY_requested)) {
                *result = 107;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_LASER_PATTERN_1_requested)) {
                *result = 108;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_LASER_PATTERN_0_requested)) {
                *result = 109;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_ATTEN_VALUE_requested)) {
                *result = 110;
                return;
            }
        }
        {
            using _t = void (Emulator::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulator::set_cmnd_ATTEN_STATUS_requested)) {
                *result = 111;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Emulator::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Emulator.data,
    qt_meta_data_Emulator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Emulator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Emulator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Emulator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Emulator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 167)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 167;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 167)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 167;
    }
    return _id;
}

// SIGNAL 0
void Emulator::set_cmnd_ADC_ZERO_requested(quint16 _t1, quint8 _t2, qint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Emulator::set_cmnd_ADC_DELAY_requested(quint16 _t1, quint8 _t2, qint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Emulator::set_cmnd_ADC0_OFFSET_requested(quint16 _t1, quint8 _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Emulator::set_cmnd_ADC1_OFFSET_requested(quint16 _t1, quint8 _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Emulator::set_cmnd_ADC0_RANGE_requested(quint16 _t1, quint8 _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Emulator::set_cmnd_ADC1_RANGE_requested(quint16 _t1, quint8 _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Emulator::set_cmnd_TIME_ALIGN_requested(quint16 _t1, quint8 _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Emulator::set_cmnd_CFD_THRESHOLD_requested(quint16 _t1, quint8 _t2, qint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Emulator::set_cmnd_CFD_ZERO_requested(quint16 _t1, quint8 _t2, qint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Emulator::set_cmnd_THRESHOLD_CALIBR_requested(quint16 _t1, quint8 _t2, qint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Emulator::set_cmnd_ADC0_MEANAMPL_requested(quint16 _t1, quint8 _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Emulator::set_cmnd_ADC1_MEANAMPL_requested(quint16 _t1, quint8 _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Emulator::set_cmnd_ADC0_ZEROLVL_requested(quint16 _t1, quint8 _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Emulator::set_cmnd_ADC1_ZEROLVL_requested(quint16 _t1, quint8 _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Emulator::set_cmnd_RAW_TDC_DATA_requested(quint16 _t1, quint8 _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Emulator::set_cmnd_CNT_CFD_requested(quint16 _t1, quint8 _t2, quint32 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Emulator::set_cmnd_CNT_CFD_RATE_requested(quint16 _t1, quint8 _t2, quint32 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Emulator::set_cmnd_CNT_TRG_requested(quint16 _t1, quint8 _t2, quint32 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Emulator::set_cmnd_CNT_TRG_RATE_requested(quint16 _t1, quint8 _t2, quint32 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Emulator::set_cmnd_OR_GATE_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Emulator::set_cmnd_CFD_SATR_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Emulator::set_cmnd_CH_MASK_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Emulator::set_cmnd_LINK_STATUS_requested(quint16 _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void Emulator::set_cmnd_BOARD_STATUS_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void Emulator::set_cmnd_TEMPERATURE_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Emulator::set_cmnd_SERIAL_NUM_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void Emulator::set_cmnd_FW_VERSION_requested(quint16 _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void Emulator::set_cmnd_TG_PATTERN_1_requested(quint16 _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Emulator::set_cmnd_TG_PATTERN_0_requested(quint16 _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void Emulator::set_cmnd_TG_CONT_VALUE_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void Emulator::set_cmnd_TG_BUNCH_FREQ_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void Emulator::set_cmnd_TG_FREQ_OFFSET_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void Emulator::set_cmnd_TG_MODE_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void Emulator::set_cmnd_HB_RESPONSE_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void Emulator::set_cmnd_DG_MODE_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void Emulator::set_cmnd_DG_TRG_RESPOND_MASK_requested(quint16 _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void Emulator::set_cmnd_DG_BUNCH_PATTERN_requested(quint16 _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void Emulator::set_cmnd_DG_BUNCH_FREQ_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void Emulator::set_cmnd_DG_FREQ_OFFSET_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void Emulator::set_cmnd_RDH_FEE_ID_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void Emulator::set_cmnd_RDH_PAR_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void Emulator::set_cmnd_RDH_MAX_PAYLOAD_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void Emulator::set_cmnd_RDH_DET_FIELD_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void Emulator::set_cmnd_CRU_TRG_COMPARE_DELAY_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void Emulator::set_cmnd_BCID_DELAY_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void Emulator::set_cmnd_DATA_SEL_TRG_MASK_requested(quint16 _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void Emulator::set_cmnd_BITS_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void Emulator::set_cmnd_READOUT_MODE_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void Emulator::set_cmnd_BCID_SYNC_MODE_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void Emulator::set_cmnd_RX_PHASE_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void Emulator::set_cmnd_CRU_ORBIT_requested(quint16 _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void Emulator::set_cmnd_CRU_BC_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void Emulator::set_cmnd_RAW_FIFO_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void Emulator::set_cmnd_SEL_FIFO_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void Emulator::set_cmnd_SEL_FIRST_HIT_DROPPED_ORBIT_requested(quint16 _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void Emulator::set_cmnd_SEL_LAST_HIT_DROPPED_ORBIT_requested(quint16 _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void Emulator::set_cmnd_SEL_HITS_DROPPED_requested(quint16 _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void Emulator::set_cmnd_READOUT_RATE_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void Emulator::set_cmnd_COUNTERS_UPD_RATE_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void Emulator::set_cmnd_EXTENDED_READOUT_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void Emulator::set_cmnd_SC_SUM_SIDES_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void Emulator::set_cmnd_C_SUM_SIDES_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void Emulator::set_cmnd_ADD_C_DELAY_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void Emulator::set_cmnd_RES_SW_1_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void Emulator::set_cmnd_RES_SW_2_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void Emulator::set_cmnd_RES_SW_3_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void Emulator::set_cmnd_RES_SW_4_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void Emulator::set_cmnd_DELAY_A_requested(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void Emulator::set_cmnd_DELAY_C_requested(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void Emulator::set_cmnd_VTIME_LOW_requested(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void Emulator::set_cmnd_VTIME_HIGH_requested(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void Emulator::set_cmnd_SC_LEVEL_A_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void Emulator::set_cmnd_SC_LEVEL_C_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void Emulator::set_cmnd_C_LEVEL_A_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void Emulator::set_cmnd_C_LEVEL_C_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void Emulator::set_cmnd_CH_MASK_A_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 75, _a);
}

// SIGNAL 76
void Emulator::set_cmnd_CH_MASK_C_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 76, _a);
}

// SIGNAL 77
void Emulator::set_cmnd_SIDE_A_STATUS_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 77, _a);
}

// SIGNAL 78
void Emulator::set_cmnd_SIDE_C_STATUS_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 78, _a);
}

// SIGNAL 79
void Emulator::set_cmnd_CNT_OR_A_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 79, _a);
}

// SIGNAL 80
void Emulator::set_cmnd_CNT_OR_A_RATE_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 80, _a);
}

// SIGNAL 81
void Emulator::set_cmnd_CNT_OR_C_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 81, _a);
}

// SIGNAL 82
void Emulator::set_cmnd_CNT_OR_C_RATE_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 82, _a);
}

// SIGNAL 83
void Emulator::set_cmnd_CNT_SC_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 83, _a);
}

// SIGNAL 84
void Emulator::set_cmnd_CNT_SC_RATE_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 84, _a);
}

// SIGNAL 85
void Emulator::set_cmnd_CNT_C_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 85, _a);
}

// SIGNAL 86
void Emulator::set_cmnd_CNT_C_RATE_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 86, _a);
}

// SIGNAL 87
void Emulator::set_cmnd_CNT_V_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 87, _a);
}

// SIGNAL 88
void Emulator::set_cmnd_CNT_V_RATE_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 88, _a);
}

// SIGNAL 89
void Emulator::set_cmnd_STATUS_OPTIONCODE_requested(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 89, _a);
}

// SIGNAL 90
void Emulator::set_cmnd_OR_A_SIGN_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 90, _a);
}

// SIGNAL 91
void Emulator::set_cmnd_OR_A_RATE_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 91, _a);
}

// SIGNAL 92
void Emulator::set_cmnd_OR_C_SIGN_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 92, _a);
}

// SIGNAL 93
void Emulator::set_cmnd_OR_C_RATE_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 93, _a);
}

// SIGNAL 94
void Emulator::set_cmnd_SC_SIGN_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 94, _a);
}

// SIGNAL 95
void Emulator::set_cmnd_SC_RATE_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 95, _a);
}

// SIGNAL 96
void Emulator::set_cmnd_C_SIGN_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 96, _a);
}

// SIGNAL 97
void Emulator::set_cmnd_C_RATE_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 97, _a);
}

// SIGNAL 98
void Emulator::set_cmnd_V_SIGN_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 98, _a);
}

// SIGNAL 99
void Emulator::set_cmnd_V_RATE_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 99, _a);
}

// SIGNAL 100
void Emulator::set_cmnd_OR_A_ENABLED_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 100, _a);
}

// SIGNAL 101
void Emulator::set_cmnd_OR_C_ENABLED_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 101, _a);
}

// SIGNAL 102
void Emulator::set_cmnd_SC_ENABLED_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 102, _a);
}

// SIGNAL 103
void Emulator::set_cmnd_C_ENABLED_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 103, _a);
}

// SIGNAL 104
void Emulator::set_cmnd_V_ENABLED_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 104, _a);
}

// SIGNAL 105
void Emulator::set_cmnd_LASER_ON_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 105, _a);
}

// SIGNAL 106
void Emulator::set_cmnd_LASER_DIV_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 106, _a);
}

// SIGNAL 107
void Emulator::set_cmnd_LASER_DELAY_requested(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 107, _a);
}

// SIGNAL 108
void Emulator::set_cmnd_LASER_PATTERN_1_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 108, _a);
}

// SIGNAL 109
void Emulator::set_cmnd_LASER_PATTERN_0_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 109, _a);
}

// SIGNAL 110
void Emulator::set_cmnd_ATTEN_VALUE_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 110, _a);
}

// SIGNAL 111
void Emulator::set_cmnd_ATTEN_STATUS_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 111, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
