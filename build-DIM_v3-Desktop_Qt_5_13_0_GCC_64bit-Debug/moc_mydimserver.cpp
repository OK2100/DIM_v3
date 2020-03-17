/****************************************************************************
** Meta object code from reading C++ file 'mydimserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../DIM_v3/mydimserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mydimserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyDimServer_t {
    QByteArrayData data[168];
    char stringdata0[4214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyDimServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyDimServer_t qt_meta_stringdata_MyDimServer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MyDimServer"
QT_MOC_LITERAL(1, 12, 22), // "set_ADC_ZERO_requested"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "FEEid"
QT_MOC_LITERAL(4, 42, 2), // "Ch"
QT_MOC_LITERAL(5, 45, 3), // "val"
QT_MOC_LITERAL(6, 49, 23), // "set_ADC_DELAY_requested"
QT_MOC_LITERAL(7, 73, 25), // "set_ADC0_OFFSET_requested"
QT_MOC_LITERAL(8, 99, 25), // "set_ADC1_OFFSET_requested"
QT_MOC_LITERAL(9, 125, 24), // "set_ADC0_RANGE_requested"
QT_MOC_LITERAL(10, 150, 24), // "set_ADC1_RANGE_requested"
QT_MOC_LITERAL(11, 175, 24), // "set_TIME_ALIGN_requested"
QT_MOC_LITERAL(12, 200, 27), // "set_CFD_THRESHOLD_requested"
QT_MOC_LITERAL(13, 228, 22), // "set_CFD_ZERO_requested"
QT_MOC_LITERAL(14, 251, 30), // "set_THRESHOLD_CALIBR_requested"
QT_MOC_LITERAL(15, 282, 26), // "set_TG_PATTERN_1_requested"
QT_MOC_LITERAL(16, 309, 26), // "set_TG_PATTERN_0_requested"
QT_MOC_LITERAL(17, 336, 27), // "set_TG_CONT_VALUE_requested"
QT_MOC_LITERAL(18, 364, 27), // "set_TG_BUNCH_FREQ_requested"
QT_MOC_LITERAL(19, 392, 28), // "set_TG_FREQ_OFFSET_requested"
QT_MOC_LITERAL(20, 421, 33), // "set_DG_TRG_RESPOND_MASK_reque..."
QT_MOC_LITERAL(21, 455, 30), // "set_DG_BUNCH_PATTERN_requested"
QT_MOC_LITERAL(22, 486, 27), // "set_DG_BUNCH_FREQ_requested"
QT_MOC_LITERAL(23, 514, 28), // "set_DG_FREQ_OFFSET_requested"
QT_MOC_LITERAL(24, 543, 24), // "set_RDH_FEE_ID_requested"
QT_MOC_LITERAL(25, 568, 21), // "set_RDH_PAR_requested"
QT_MOC_LITERAL(26, 590, 29), // "set_RDH_MAX_PAYLOAD_requested"
QT_MOC_LITERAL(27, 620, 27), // "set_RDH_DET_FIELD_requested"
QT_MOC_LITERAL(28, 648, 35), // "set_CRU_TRG_COMPARE_DELAY_req..."
QT_MOC_LITERAL(29, 684, 24), // "set_BCID_DELAY_requested"
QT_MOC_LITERAL(30, 709, 31), // "set_DATA_SEL_TRG_MASK_requested"
QT_MOC_LITERAL(31, 741, 21), // "set_OR_GATE_requested"
QT_MOC_LITERAL(32, 763, 22), // "set_CFD_SATR_requested"
QT_MOC_LITERAL(33, 786, 21), // "set_CH_MASK_requested"
QT_MOC_LITERAL(34, 808, 24), // "apply_ADC_ZERO_requested"
QT_MOC_LITERAL(35, 833, 25), // "apply_ADC_DELAY_requested"
QT_MOC_LITERAL(36, 859, 27), // "apply_ADC0_OFFSET_requested"
QT_MOC_LITERAL(37, 887, 27), // "apply_ADC1_OFFSET_requested"
QT_MOC_LITERAL(38, 915, 26), // "apply_ADC0_RANGE_requested"
QT_MOC_LITERAL(39, 942, 26), // "apply_ADC1_RANGE_requested"
QT_MOC_LITERAL(40, 969, 26), // "apply_TIME_ALIGN_requested"
QT_MOC_LITERAL(41, 996, 29), // "apply_CFD_THRESHOLD_requested"
QT_MOC_LITERAL(42, 1026, 24), // "apply_CFD_ZERO_requested"
QT_MOC_LITERAL(43, 1051, 32), // "apply_THRESHOLD_CALIBR_requested"
QT_MOC_LITERAL(44, 1084, 32), // "apply_RESET_ORBIT_SYNC_requested"
QT_MOC_LITERAL(45, 1117, 43), // "apply_RESET_DROPPING_HIT_COUN..."
QT_MOC_LITERAL(46, 1161, 38), // "apply_RESET_GEN_BUNCH_OFFSET_..."
QT_MOC_LITERAL(47, 1200, 32), // "apply_RESET_GBT_ERRORS_requested"
QT_MOC_LITERAL(48, 1233, 25), // "apply_RESET_GBT_requested"
QT_MOC_LITERAL(49, 1259, 36), // "apply_RESET_RX_PHASE_ERROR_re..."
QT_MOC_LITERAL(50, 1296, 36), // "apply_SEND_READOUT_COMMAND_re..."
QT_MOC_LITERAL(51, 1333, 3), // "cmd"
QT_MOC_LITERAL(52, 1337, 30), // "apply_TG_SEND_SINGLE_requested"
QT_MOC_LITERAL(53, 1368, 28), // "apply_TG_PATTERN_1_requested"
QT_MOC_LITERAL(54, 1397, 28), // "apply_TG_PATTERN_0_requested"
QT_MOC_LITERAL(55, 1426, 29), // "apply_TG_CONT_VALUE_requested"
QT_MOC_LITERAL(56, 1456, 29), // "apply_TG_BUNCH_FREQ_requested"
QT_MOC_LITERAL(57, 1486, 30), // "apply_TG_FREQ_OFFSET_requested"
QT_MOC_LITERAL(58, 1517, 23), // "apply_TG_MODE_requested"
QT_MOC_LITERAL(59, 1541, 27), // "apply_HB_RESPONSE_requested"
QT_MOC_LITERAL(60, 1569, 4), // "isOn"
QT_MOC_LITERAL(61, 1574, 23), // "apply_DG_MODE_requested"
QT_MOC_LITERAL(62, 1598, 35), // "apply_DG_TRG_RESPOND_MASK_req..."
QT_MOC_LITERAL(63, 1634, 32), // "apply_DG_BUNCH_PATTERN_requested"
QT_MOC_LITERAL(64, 1667, 29), // "apply_DG_BUNCH_FREQ_requested"
QT_MOC_LITERAL(65, 1697, 30), // "apply_DG_FREQ_OFFSET_requested"
QT_MOC_LITERAL(66, 1728, 26), // "apply_RDH_FEE_ID_requested"
QT_MOC_LITERAL(67, 1755, 23), // "apply_RDH_PAR_requested"
QT_MOC_LITERAL(68, 1779, 31), // "apply_RDH_MAX_PAYLOAD_requested"
QT_MOC_LITERAL(69, 1811, 29), // "apply_RDH_DET_FIELD_requested"
QT_MOC_LITERAL(70, 1841, 37), // "apply_CRU_TRG_COMPARE_DELAY_r..."
QT_MOC_LITERAL(71, 1879, 26), // "apply_BCID_DELAY_requested"
QT_MOC_LITERAL(72, 1906, 33), // "apply_DATA_SEL_TRG_MASK_reque..."
QT_MOC_LITERAL(73, 1940, 23), // "apply_OR_GATE_requested"
QT_MOC_LITERAL(74, 1964, 24), // "apply_CFD_SATR_requested"
QT_MOC_LITERAL(75, 1989, 23), // "apply_CH_MASK_requested"
QT_MOC_LITERAL(76, 2013, 22), // "apply_SwChOn_requested"
QT_MOC_LITERAL(77, 2036, 23), // "apply_SwChOff_requested"
QT_MOC_LITERAL(78, 2060, 30), // "apply_RESET_COUNTERS_requested"
QT_MOC_LITERAL(79, 2091, 31), // "apply_ZERO_LVL_CALIBR_requested"
QT_MOC_LITERAL(80, 2123, 23), // "apply_ALLtoPM_requested"
QT_MOC_LITERAL(81, 2147, 19), // "update_act_ADC_ZERO"
QT_MOC_LITERAL(82, 2167, 20), // "update_act_ADC_DELAY"
QT_MOC_LITERAL(83, 2188, 22), // "update_act_ADC0_OFFSET"
QT_MOC_LITERAL(84, 2211, 22), // "update_act_ADC1_OFFSET"
QT_MOC_LITERAL(85, 2234, 21), // "update_act_ADC0_RANGE"
QT_MOC_LITERAL(86, 2256, 21), // "update_act_ADC1_RANGE"
QT_MOC_LITERAL(87, 2278, 21), // "update_act_TIME_ALIGN"
QT_MOC_LITERAL(88, 2300, 24), // "update_act_CFD_THRESHOLD"
QT_MOC_LITERAL(89, 2325, 19), // "update_act_CFD_ZERO"
QT_MOC_LITERAL(90, 2345, 27), // "update_act_THRESHOLD_CALIBR"
QT_MOC_LITERAL(91, 2373, 19), // "update_new_ADC_ZERO"
QT_MOC_LITERAL(92, 2393, 20), // "update_new_ADC_DELAY"
QT_MOC_LITERAL(93, 2414, 22), // "update_new_ADC0_OFFSET"
QT_MOC_LITERAL(94, 2437, 22), // "update_new_ADC1_OFFSET"
QT_MOC_LITERAL(95, 2460, 21), // "update_new_ADC0_RANGE"
QT_MOC_LITERAL(96, 2482, 21), // "update_new_ADC1_RANGE"
QT_MOC_LITERAL(97, 2504, 21), // "update_new_TIME_ALIGN"
QT_MOC_LITERAL(98, 2526, 24), // "update_new_CFD_THRESHOLD"
QT_MOC_LITERAL(99, 2551, 19), // "update_new_CFD_ZERO"
QT_MOC_LITERAL(100, 2571, 27), // "update_new_THRESHOLD_CALIBR"
QT_MOC_LITERAL(101, 2599, 24), // "update_act_ADC0_MEANAMPL"
QT_MOC_LITERAL(102, 2624, 24), // "update_act_ADC1_MEANAMPL"
QT_MOC_LITERAL(103, 2649, 23), // "update_act_ADC0_ZEROLVL"
QT_MOC_LITERAL(104, 2673, 23), // "update_act_ADC1_ZEROLVL"
QT_MOC_LITERAL(105, 2697, 23), // "update_act_RAW_TDC_DATA"
QT_MOC_LITERAL(106, 2721, 18), // "update_act_CNT_CFD"
QT_MOC_LITERAL(107, 2740, 23), // "update_act_CNT_CFD_RATE"
QT_MOC_LITERAL(108, 2764, 18), // "update_act_CNT_TRG"
QT_MOC_LITERAL(109, 2783, 23), // "update_act_CNT_TRG_RATE"
QT_MOC_LITERAL(110, 2807, 23), // "update_act_TG_PATTERN_1"
QT_MOC_LITERAL(111, 2831, 23), // "update_act_TG_PATTERN_0"
QT_MOC_LITERAL(112, 2855, 24), // "update_act_TG_CONT_VALUE"
QT_MOC_LITERAL(113, 2880, 24), // "update_act_TG_BUNCH_FREQ"
QT_MOC_LITERAL(114, 2905, 25), // "update_act_TG_FREQ_OFFSET"
QT_MOC_LITERAL(115, 2931, 18), // "update_act_TG_MODE"
QT_MOC_LITERAL(116, 2950, 22), // "update_act_HB_RESPONSE"
QT_MOC_LITERAL(117, 2973, 18), // "update_act_DG_MODE"
QT_MOC_LITERAL(118, 2992, 30), // "update_act_DG_TRG_RESPOND_MASK"
QT_MOC_LITERAL(119, 3023, 27), // "update_act_DG_BUNCH_PATTERN"
QT_MOC_LITERAL(120, 3051, 24), // "update_act_DG_BUNCH_FREQ"
QT_MOC_LITERAL(121, 3076, 25), // "update_act_DG_FREQ_OFFSET"
QT_MOC_LITERAL(122, 3102, 21), // "update_act_RDH_FEE_ID"
QT_MOC_LITERAL(123, 3124, 18), // "update_act_RDH_PAR"
QT_MOC_LITERAL(124, 3143, 26), // "update_act_RDH_MAX_PAYLOAD"
QT_MOC_LITERAL(125, 3170, 24), // "update_act_RDH_DET_FIELD"
QT_MOC_LITERAL(126, 3195, 32), // "update_act_CRU_TRG_COMPARE_DELAY"
QT_MOC_LITERAL(127, 3228, 21), // "update_act_BCID_DELAY"
QT_MOC_LITERAL(128, 3250, 28), // "update_act_DATA_SEL_TRG_MASK"
QT_MOC_LITERAL(129, 3279, 15), // "update_act_BITS"
QT_MOC_LITERAL(130, 3295, 23), // "update_act_READOUT_MODE"
QT_MOC_LITERAL(131, 3319, 25), // "update_act_BCID_SYNC_MODE"
QT_MOC_LITERAL(132, 3345, 19), // "update_act_RX_PHASE"
QT_MOC_LITERAL(133, 3365, 20), // "update_act_CRU_ORBIT"
QT_MOC_LITERAL(134, 3386, 17), // "update_act_CRU_BC"
QT_MOC_LITERAL(135, 3404, 19), // "update_act_RAW_FIFO"
QT_MOC_LITERAL(136, 3424, 19), // "update_act_SEL_FIFO"
QT_MOC_LITERAL(137, 3444, 38), // "update_act_SEL_FIRST_HIT_DROP..."
QT_MOC_LITERAL(138, 3483, 37), // "update_act_SEL_LAST_HIT_DROPP..."
QT_MOC_LITERAL(139, 3521, 27), // "update_act_SEL_HITS_DROPPED"
QT_MOC_LITERAL(140, 3549, 23), // "update_act_READOUT_RATE"
QT_MOC_LITERAL(141, 3573, 18), // "update_act_OR_GATE"
QT_MOC_LITERAL(142, 3592, 19), // "update_act_CFD_SATR"
QT_MOC_LITERAL(143, 3612, 18), // "update_act_CH_MASK"
QT_MOC_LITERAL(144, 3631, 23), // "update_new_TG_PATTERN_1"
QT_MOC_LITERAL(145, 3655, 23), // "update_new_TG_PATTERN_0"
QT_MOC_LITERAL(146, 3679, 24), // "update_new_TG_CONT_VALUE"
QT_MOC_LITERAL(147, 3704, 24), // "update_new_TG_BUNCH_FREQ"
QT_MOC_LITERAL(148, 3729, 25), // "update_new_TG_FREQ_OFFSET"
QT_MOC_LITERAL(149, 3755, 30), // "update_new_DG_TRG_RESPOND_MASK"
QT_MOC_LITERAL(150, 3786, 27), // "update_new_DG_BUNCH_PATTERN"
QT_MOC_LITERAL(151, 3814, 24), // "update_new_DG_BUNCH_FREQ"
QT_MOC_LITERAL(152, 3839, 25), // "update_new_DG_FREQ_OFFSET"
QT_MOC_LITERAL(153, 3865, 21), // "update_new_RDH_FEE_ID"
QT_MOC_LITERAL(154, 3887, 18), // "update_new_RDH_PAR"
QT_MOC_LITERAL(155, 3906, 26), // "update_new_RDH_MAX_PAYLOAD"
QT_MOC_LITERAL(156, 3933, 24), // "update_new_RDH_DET_FIELD"
QT_MOC_LITERAL(157, 3958, 32), // "update_new_CRU_TRG_COMPARE_DELAY"
QT_MOC_LITERAL(158, 3991, 21), // "update_new_BCID_DELAY"
QT_MOC_LITERAL(159, 4013, 28), // "update_new_DATA_SEL_TRG_MASK"
QT_MOC_LITERAL(160, 4042, 18), // "update_new_OR_GATE"
QT_MOC_LITERAL(161, 4061, 19), // "update_new_CFD_SATR"
QT_MOC_LITERAL(162, 4081, 18), // "update_new_CH_MASK"
QT_MOC_LITERAL(163, 4100, 22), // "update_act_LINK_STATUS"
QT_MOC_LITERAL(164, 4123, 23), // "update_act_BOARD_STATUS"
QT_MOC_LITERAL(165, 4147, 22), // "update_act_TEMPERATURE"
QT_MOC_LITERAL(166, 4170, 21), // "update_act_SERIAL_NUM"
QT_MOC_LITERAL(167, 4192, 21) // "update_act_FW_VERSION"

    },
    "MyDimServer\0set_ADC_ZERO_requested\0\0"
    "FEEid\0Ch\0val\0set_ADC_DELAY_requested\0"
    "set_ADC0_OFFSET_requested\0"
    "set_ADC1_OFFSET_requested\0"
    "set_ADC0_RANGE_requested\0"
    "set_ADC1_RANGE_requested\0"
    "set_TIME_ALIGN_requested\0"
    "set_CFD_THRESHOLD_requested\0"
    "set_CFD_ZERO_requested\0"
    "set_THRESHOLD_CALIBR_requested\0"
    "set_TG_PATTERN_1_requested\0"
    "set_TG_PATTERN_0_requested\0"
    "set_TG_CONT_VALUE_requested\0"
    "set_TG_BUNCH_FREQ_requested\0"
    "set_TG_FREQ_OFFSET_requested\0"
    "set_DG_TRG_RESPOND_MASK_requested\0"
    "set_DG_BUNCH_PATTERN_requested\0"
    "set_DG_BUNCH_FREQ_requested\0"
    "set_DG_FREQ_OFFSET_requested\0"
    "set_RDH_FEE_ID_requested\0set_RDH_PAR_requested\0"
    "set_RDH_MAX_PAYLOAD_requested\0"
    "set_RDH_DET_FIELD_requested\0"
    "set_CRU_TRG_COMPARE_DELAY_requested\0"
    "set_BCID_DELAY_requested\0"
    "set_DATA_SEL_TRG_MASK_requested\0"
    "set_OR_GATE_requested\0set_CFD_SATR_requested\0"
    "set_CH_MASK_requested\0apply_ADC_ZERO_requested\0"
    "apply_ADC_DELAY_requested\0"
    "apply_ADC0_OFFSET_requested\0"
    "apply_ADC1_OFFSET_requested\0"
    "apply_ADC0_RANGE_requested\0"
    "apply_ADC1_RANGE_requested\0"
    "apply_TIME_ALIGN_requested\0"
    "apply_CFD_THRESHOLD_requested\0"
    "apply_CFD_ZERO_requested\0"
    "apply_THRESHOLD_CALIBR_requested\0"
    "apply_RESET_ORBIT_SYNC_requested\0"
    "apply_RESET_DROPPING_HIT_COUNTERS_requested\0"
    "apply_RESET_GEN_BUNCH_OFFSET_requested\0"
    "apply_RESET_GBT_ERRORS_requested\0"
    "apply_RESET_GBT_requested\0"
    "apply_RESET_RX_PHASE_ERROR_requested\0"
    "apply_SEND_READOUT_COMMAND_requested\0"
    "cmd\0apply_TG_SEND_SINGLE_requested\0"
    "apply_TG_PATTERN_1_requested\0"
    "apply_TG_PATTERN_0_requested\0"
    "apply_TG_CONT_VALUE_requested\0"
    "apply_TG_BUNCH_FREQ_requested\0"
    "apply_TG_FREQ_OFFSET_requested\0"
    "apply_TG_MODE_requested\0"
    "apply_HB_RESPONSE_requested\0isOn\0"
    "apply_DG_MODE_requested\0"
    "apply_DG_TRG_RESPOND_MASK_requested\0"
    "apply_DG_BUNCH_PATTERN_requested\0"
    "apply_DG_BUNCH_FREQ_requested\0"
    "apply_DG_FREQ_OFFSET_requested\0"
    "apply_RDH_FEE_ID_requested\0"
    "apply_RDH_PAR_requested\0"
    "apply_RDH_MAX_PAYLOAD_requested\0"
    "apply_RDH_DET_FIELD_requested\0"
    "apply_CRU_TRG_COMPARE_DELAY_requested\0"
    "apply_BCID_DELAY_requested\0"
    "apply_DATA_SEL_TRG_MASK_requested\0"
    "apply_OR_GATE_requested\0"
    "apply_CFD_SATR_requested\0"
    "apply_CH_MASK_requested\0apply_SwChOn_requested\0"
    "apply_SwChOff_requested\0"
    "apply_RESET_COUNTERS_requested\0"
    "apply_ZERO_LVL_CALIBR_requested\0"
    "apply_ALLtoPM_requested\0update_act_ADC_ZERO\0"
    "update_act_ADC_DELAY\0update_act_ADC0_OFFSET\0"
    "update_act_ADC1_OFFSET\0update_act_ADC0_RANGE\0"
    "update_act_ADC1_RANGE\0update_act_TIME_ALIGN\0"
    "update_act_CFD_THRESHOLD\0update_act_CFD_ZERO\0"
    "update_act_THRESHOLD_CALIBR\0"
    "update_new_ADC_ZERO\0update_new_ADC_DELAY\0"
    "update_new_ADC0_OFFSET\0update_new_ADC1_OFFSET\0"
    "update_new_ADC0_RANGE\0update_new_ADC1_RANGE\0"
    "update_new_TIME_ALIGN\0update_new_CFD_THRESHOLD\0"
    "update_new_CFD_ZERO\0update_new_THRESHOLD_CALIBR\0"
    "update_act_ADC0_MEANAMPL\0"
    "update_act_ADC1_MEANAMPL\0"
    "update_act_ADC0_ZEROLVL\0update_act_ADC1_ZEROLVL\0"
    "update_act_RAW_TDC_DATA\0update_act_CNT_CFD\0"
    "update_act_CNT_CFD_RATE\0update_act_CNT_TRG\0"
    "update_act_CNT_TRG_RATE\0update_act_TG_PATTERN_1\0"
    "update_act_TG_PATTERN_0\0"
    "update_act_TG_CONT_VALUE\0"
    "update_act_TG_BUNCH_FREQ\0"
    "update_act_TG_FREQ_OFFSET\0update_act_TG_MODE\0"
    "update_act_HB_RESPONSE\0update_act_DG_MODE\0"
    "update_act_DG_TRG_RESPOND_MASK\0"
    "update_act_DG_BUNCH_PATTERN\0"
    "update_act_DG_BUNCH_FREQ\0"
    "update_act_DG_FREQ_OFFSET\0"
    "update_act_RDH_FEE_ID\0update_act_RDH_PAR\0"
    "update_act_RDH_MAX_PAYLOAD\0"
    "update_act_RDH_DET_FIELD\0"
    "update_act_CRU_TRG_COMPARE_DELAY\0"
    "update_act_BCID_DELAY\0"
    "update_act_DATA_SEL_TRG_MASK\0"
    "update_act_BITS\0update_act_READOUT_MODE\0"
    "update_act_BCID_SYNC_MODE\0update_act_RX_PHASE\0"
    "update_act_CRU_ORBIT\0update_act_CRU_BC\0"
    "update_act_RAW_FIFO\0update_act_SEL_FIFO\0"
    "update_act_SEL_FIRST_HIT_DROPPED_ORBIT\0"
    "update_act_SEL_LAST_HIT_DROPPED_ORBIT\0"
    "update_act_SEL_HITS_DROPPED\0"
    "update_act_READOUT_RATE\0update_act_OR_GATE\0"
    "update_act_CFD_SATR\0update_act_CH_MASK\0"
    "update_new_TG_PATTERN_1\0update_new_TG_PATTERN_0\0"
    "update_new_TG_CONT_VALUE\0"
    "update_new_TG_BUNCH_FREQ\0"
    "update_new_TG_FREQ_OFFSET\0"
    "update_new_DG_TRG_RESPOND_MASK\0"
    "update_new_DG_BUNCH_PATTERN\0"
    "update_new_DG_BUNCH_FREQ\0"
    "update_new_DG_FREQ_OFFSET\0"
    "update_new_RDH_FEE_ID\0update_new_RDH_PAR\0"
    "update_new_RDH_MAX_PAYLOAD\0"
    "update_new_RDH_DET_FIELD\0"
    "update_new_CRU_TRG_COMPARE_DELAY\0"
    "update_new_BCID_DELAY\0"
    "update_new_DATA_SEL_TRG_MASK\0"
    "update_new_OR_GATE\0update_new_CFD_SATR\0"
    "update_new_CH_MASK\0update_act_LINK_STATUS\0"
    "update_act_BOARD_STATUS\0update_act_TEMPERATURE\0"
    "update_act_SERIAL_NUM\0update_act_FW_VERSION"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyDimServer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     161,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      74,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  819,    2, 0x06 /* Public */,
       6,    3,  826,    2, 0x06 /* Public */,
       7,    3,  833,    2, 0x06 /* Public */,
       8,    3,  840,    2, 0x06 /* Public */,
       9,    3,  847,    2, 0x06 /* Public */,
      10,    3,  854,    2, 0x06 /* Public */,
      11,    3,  861,    2, 0x06 /* Public */,
      12,    3,  868,    2, 0x06 /* Public */,
      13,    3,  875,    2, 0x06 /* Public */,
      14,    3,  882,    2, 0x06 /* Public */,
      15,    2,  889,    2, 0x06 /* Public */,
      16,    2,  894,    2, 0x06 /* Public */,
      17,    2,  899,    2, 0x06 /* Public */,
      18,    2,  904,    2, 0x06 /* Public */,
      19,    2,  909,    2, 0x06 /* Public */,
      20,    2,  914,    2, 0x06 /* Public */,
      21,    2,  919,    2, 0x06 /* Public */,
      22,    2,  924,    2, 0x06 /* Public */,
      23,    2,  929,    2, 0x06 /* Public */,
      24,    2,  934,    2, 0x06 /* Public */,
      25,    2,  939,    2, 0x06 /* Public */,
      26,    2,  944,    2, 0x06 /* Public */,
      27,    2,  949,    2, 0x06 /* Public */,
      28,    2,  954,    2, 0x06 /* Public */,
      29,    2,  959,    2, 0x06 /* Public */,
      30,    2,  964,    2, 0x06 /* Public */,
      31,    2,  969,    2, 0x06 /* Public */,
      32,    2,  974,    2, 0x06 /* Public */,
      33,    2,  979,    2, 0x06 /* Public */,
      34,    2,  984,    2, 0x06 /* Public */,
      35,    2,  989,    2, 0x06 /* Public */,
      36,    2,  994,    2, 0x06 /* Public */,
      37,    2,  999,    2, 0x06 /* Public */,
      38,    2, 1004,    2, 0x06 /* Public */,
      39,    2, 1009,    2, 0x06 /* Public */,
      40,    2, 1014,    2, 0x06 /* Public */,
      41,    2, 1019,    2, 0x06 /* Public */,
      42,    2, 1024,    2, 0x06 /* Public */,
      43,    2, 1029,    2, 0x06 /* Public */,
      44,    1, 1034,    2, 0x06 /* Public */,
      45,    1, 1037,    2, 0x06 /* Public */,
      46,    1, 1040,    2, 0x06 /* Public */,
      47,    1, 1043,    2, 0x06 /* Public */,
      48,    1, 1046,    2, 0x06 /* Public */,
      49,    1, 1049,    2, 0x06 /* Public */,
      50,    2, 1052,    2, 0x06 /* Public */,
      52,    2, 1057,    2, 0x06 /* Public */,
      53,    1, 1062,    2, 0x06 /* Public */,
      54,    1, 1065,    2, 0x06 /* Public */,
      55,    1, 1068,    2, 0x06 /* Public */,
      56,    1, 1071,    2, 0x06 /* Public */,
      57,    1, 1074,    2, 0x06 /* Public */,
      58,    2, 1077,    2, 0x06 /* Public */,
      59,    2, 1082,    2, 0x06 /* Public */,
      61,    2, 1087,    2, 0x06 /* Public */,
      62,    1, 1092,    2, 0x06 /* Public */,
      63,    1, 1095,    2, 0x06 /* Public */,
      64,    1, 1098,    2, 0x06 /* Public */,
      65,    1, 1101,    2, 0x06 /* Public */,
      66,    1, 1104,    2, 0x06 /* Public */,
      67,    1, 1107,    2, 0x06 /* Public */,
      68,    1, 1110,    2, 0x06 /* Public */,
      69,    1, 1113,    2, 0x06 /* Public */,
      70,    1, 1116,    2, 0x06 /* Public */,
      71,    1, 1119,    2, 0x06 /* Public */,
      72,    1, 1122,    2, 0x06 /* Public */,
      73,    1, 1125,    2, 0x06 /* Public */,
      74,    1, 1128,    2, 0x06 /* Public */,
      75,    1, 1131,    2, 0x06 /* Public */,
      76,    2, 1134,    2, 0x06 /* Public */,
      77,    2, 1139,    2, 0x06 /* Public */,
      78,    1, 1144,    2, 0x06 /* Public */,
      79,    1, 1147,    2, 0x06 /* Public */,
      80,    1, 1150,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      81,    3, 1153,    2, 0x0a /* Public */,
      82,    3, 1160,    2, 0x0a /* Public */,
      83,    3, 1167,    2, 0x0a /* Public */,
      84,    3, 1174,    2, 0x0a /* Public */,
      85,    3, 1181,    2, 0x0a /* Public */,
      86,    3, 1188,    2, 0x0a /* Public */,
      87,    3, 1195,    2, 0x0a /* Public */,
      88,    3, 1202,    2, 0x0a /* Public */,
      89,    3, 1209,    2, 0x0a /* Public */,
      90,    3, 1216,    2, 0x0a /* Public */,
      91,    3, 1223,    2, 0x0a /* Public */,
      92,    3, 1230,    2, 0x0a /* Public */,
      93,    3, 1237,    2, 0x0a /* Public */,
      94,    3, 1244,    2, 0x0a /* Public */,
      95,    3, 1251,    2, 0x0a /* Public */,
      96,    3, 1258,    2, 0x0a /* Public */,
      97,    3, 1265,    2, 0x0a /* Public */,
      98,    3, 1272,    2, 0x0a /* Public */,
      99,    3, 1279,    2, 0x0a /* Public */,
     100,    3, 1286,    2, 0x0a /* Public */,
     101,    3, 1293,    2, 0x0a /* Public */,
     102,    3, 1300,    2, 0x0a /* Public */,
     103,    3, 1307,    2, 0x0a /* Public */,
     104,    3, 1314,    2, 0x0a /* Public */,
     105,    3, 1321,    2, 0x0a /* Public */,
     106,    3, 1328,    2, 0x0a /* Public */,
     107,    3, 1335,    2, 0x0a /* Public */,
     108,    3, 1342,    2, 0x0a /* Public */,
     109,    3, 1349,    2, 0x0a /* Public */,
     110,    2, 1356,    2, 0x0a /* Public */,
     111,    2, 1361,    2, 0x0a /* Public */,
     112,    2, 1366,    2, 0x0a /* Public */,
     113,    2, 1371,    2, 0x0a /* Public */,
     114,    2, 1376,    2, 0x0a /* Public */,
     115,    2, 1381,    2, 0x0a /* Public */,
     116,    2, 1386,    2, 0x0a /* Public */,
     117,    2, 1391,    2, 0x0a /* Public */,
     118,    2, 1396,    2, 0x0a /* Public */,
     119,    2, 1401,    2, 0x0a /* Public */,
     120,    2, 1406,    2, 0x0a /* Public */,
     121,    2, 1411,    2, 0x0a /* Public */,
     122,    2, 1416,    2, 0x0a /* Public */,
     123,    2, 1421,    2, 0x0a /* Public */,
     124,    2, 1426,    2, 0x0a /* Public */,
     125,    2, 1431,    2, 0x0a /* Public */,
     126,    2, 1436,    2, 0x0a /* Public */,
     127,    2, 1441,    2, 0x0a /* Public */,
     128,    2, 1446,    2, 0x0a /* Public */,
     129,    2, 1451,    2, 0x0a /* Public */,
     130,    2, 1456,    2, 0x0a /* Public */,
     131,    2, 1461,    2, 0x0a /* Public */,
     132,    2, 1466,    2, 0x0a /* Public */,
     133,    2, 1471,    2, 0x0a /* Public */,
     134,    2, 1476,    2, 0x0a /* Public */,
     135,    2, 1481,    2, 0x0a /* Public */,
     136,    2, 1486,    2, 0x0a /* Public */,
     137,    2, 1491,    2, 0x0a /* Public */,
     138,    2, 1496,    2, 0x0a /* Public */,
     139,    2, 1501,    2, 0x0a /* Public */,
     140,    2, 1506,    2, 0x0a /* Public */,
     141,    2, 1511,    2, 0x0a /* Public */,
     142,    2, 1516,    2, 0x0a /* Public */,
     143,    2, 1521,    2, 0x0a /* Public */,
     144,    2, 1526,    2, 0x0a /* Public */,
     145,    2, 1531,    2, 0x0a /* Public */,
     146,    2, 1536,    2, 0x0a /* Public */,
     147,    2, 1541,    2, 0x0a /* Public */,
     148,    2, 1546,    2, 0x0a /* Public */,
     149,    2, 1551,    2, 0x0a /* Public */,
     150,    2, 1556,    2, 0x0a /* Public */,
     151,    2, 1561,    2, 0x0a /* Public */,
     152,    2, 1566,    2, 0x0a /* Public */,
     153,    2, 1571,    2, 0x0a /* Public */,
     154,    2, 1576,    2, 0x0a /* Public */,
     155,    2, 1581,    2, 0x0a /* Public */,
     156,    2, 1586,    2, 0x0a /* Public */,
     157,    2, 1591,    2, 0x0a /* Public */,
     158,    2, 1596,    2, 0x0a /* Public */,
     159,    2, 1601,    2, 0x0a /* Public */,
     160,    2, 1606,    2, 0x0a /* Public */,
     161,    2, 1611,    2, 0x0a /* Public */,
     162,    2, 1616,    2, 0x0a /* Public */,
     163,    2, 1621,    2, 0x0a /* Public */,
     164,    2, 1626,    2, 0x0a /* Public */,
     165,    2, 1631,    2, 0x0a /* Public */,
     166,    2, 1636,    2, 0x0a /* Public */,
     167,    2, 1641,    2, 0x0a /* Public */,

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
    QMetaType::Void, QMetaType::UShort, QMetaType::UInt,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UInt,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
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
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    5,
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
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,   51,
    QMetaType::Void, QMetaType::UShort, QMetaType::UInt,    3,    5,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,   60,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    5,
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
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    4,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    4,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,

 // slots: parameters
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
    QMetaType::Void, QMetaType::UShort, QMetaType::UInt,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UInt,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,   60,
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
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UInt,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UInt,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
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
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UInt,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,    3,    5,
    QMetaType::Void, QMetaType::UShort, QMetaType::UInt,    3,    5,

       0        // eod
};

void MyDimServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyDimServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->set_ADC_ZERO_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 1: _t->set_ADC_DELAY_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 2: _t->set_ADC0_OFFSET_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 3: _t->set_ADC1_OFFSET_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 4: _t->set_ADC0_RANGE_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 5: _t->set_ADC1_RANGE_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 6: _t->set_TIME_ALIGN_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 7: _t->set_CFD_THRESHOLD_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 8: _t->set_CFD_ZERO_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 9: _t->set_THRESHOLD_CALIBR_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 10: _t->set_TG_PATTERN_1_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 11: _t->set_TG_PATTERN_0_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 12: _t->set_TG_CONT_VALUE_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 13: _t->set_TG_BUNCH_FREQ_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 14: _t->set_TG_FREQ_OFFSET_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 15: _t->set_DG_TRG_RESPOND_MASK_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 16: _t->set_DG_BUNCH_PATTERN_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 17: _t->set_DG_BUNCH_FREQ_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 18: _t->set_DG_FREQ_OFFSET_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 19: _t->set_RDH_FEE_ID_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 20: _t->set_RDH_PAR_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 21: _t->set_RDH_MAX_PAYLOAD_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 22: _t->set_RDH_DET_FIELD_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 23: _t->set_CRU_TRG_COMPARE_DELAY_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 24: _t->set_BCID_DELAY_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 25: _t->set_DATA_SEL_TRG_MASK_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 26: _t->set_OR_GATE_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 27: _t->set_CFD_SATR_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 28: _t->set_CH_MASK_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 29: _t->apply_ADC_ZERO_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 30: _t->apply_ADC_DELAY_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 31: _t->apply_ADC0_OFFSET_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 32: _t->apply_ADC1_OFFSET_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 33: _t->apply_ADC0_RANGE_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 34: _t->apply_ADC1_RANGE_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 35: _t->apply_TIME_ALIGN_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 36: _t->apply_CFD_THRESHOLD_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 37: _t->apply_CFD_ZERO_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 38: _t->apply_THRESHOLD_CALIBR_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 39: _t->apply_RESET_ORBIT_SYNC_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 40: _t->apply_RESET_DROPPING_HIT_COUNTERS_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 41: _t->apply_RESET_GEN_BUNCH_OFFSET_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 42: _t->apply_RESET_GBT_ERRORS_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 43: _t->apply_RESET_GBT_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 44: _t->apply_RESET_RX_PHASE_ERROR_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 45: _t->apply_SEND_READOUT_COMMAND_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 46: _t->apply_TG_SEND_SINGLE_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 47: _t->apply_TG_PATTERN_1_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 48: _t->apply_TG_PATTERN_0_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 49: _t->apply_TG_CONT_VALUE_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 50: _t->apply_TG_BUNCH_FREQ_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 51: _t->apply_TG_FREQ_OFFSET_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 52: _t->apply_TG_MODE_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 53: _t->apply_HB_RESPONSE_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 54: _t->apply_DG_MODE_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 55: _t->apply_DG_TRG_RESPOND_MASK_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 56: _t->apply_DG_BUNCH_PATTERN_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 57: _t->apply_DG_BUNCH_FREQ_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 58: _t->apply_DG_FREQ_OFFSET_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 59: _t->apply_RDH_FEE_ID_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 60: _t->apply_RDH_PAR_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 61: _t->apply_RDH_MAX_PAYLOAD_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 62: _t->apply_RDH_DET_FIELD_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 63: _t->apply_CRU_TRG_COMPARE_DELAY_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 64: _t->apply_BCID_DELAY_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 65: _t->apply_DATA_SEL_TRG_MASK_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 66: _t->apply_OR_GATE_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 67: _t->apply_CFD_SATR_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 68: _t->apply_CH_MASK_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 69: _t->apply_SwChOn_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 70: _t->apply_SwChOff_requested((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 71: _t->apply_RESET_COUNTERS_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 72: _t->apply_ZERO_LVL_CALIBR_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 73: _t->apply_ALLtoPM_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 74: _t->update_act_ADC_ZERO((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 75: _t->update_act_ADC_DELAY((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 76: _t->update_act_ADC0_OFFSET((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 77: _t->update_act_ADC1_OFFSET((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 78: _t->update_act_ADC0_RANGE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 79: _t->update_act_ADC1_RANGE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 80: _t->update_act_TIME_ALIGN((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 81: _t->update_act_CFD_THRESHOLD((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 82: _t->update_act_CFD_ZERO((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 83: _t->update_act_THRESHOLD_CALIBR((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 84: _t->update_new_ADC_ZERO((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 85: _t->update_new_ADC_DELAY((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 86: _t->update_new_ADC0_OFFSET((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 87: _t->update_new_ADC1_OFFSET((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 88: _t->update_new_ADC0_RANGE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 89: _t->update_new_ADC1_RANGE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 90: _t->update_new_TIME_ALIGN((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 91: _t->update_new_CFD_THRESHOLD((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 92: _t->update_new_CFD_ZERO((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 93: _t->update_new_THRESHOLD_CALIBR((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 94: _t->update_act_ADC0_MEANAMPL((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 95: _t->update_act_ADC1_MEANAMPL((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 96: _t->update_act_ADC0_ZEROLVL((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 97: _t->update_act_ADC1_ZEROLVL((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 98: _t->update_act_RAW_TDC_DATA((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 99: _t->update_act_CNT_CFD((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 100: _t->update_act_CNT_CFD_RATE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 101: _t->update_act_CNT_TRG((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 102: _t->update_act_CNT_TRG_RATE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 103: _t->update_act_TG_PATTERN_1((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 104: _t->update_act_TG_PATTERN_0((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 105: _t->update_act_TG_CONT_VALUE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 106: _t->update_act_TG_BUNCH_FREQ((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 107: _t->update_act_TG_FREQ_OFFSET((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 108: _t->update_act_TG_MODE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 109: _t->update_act_HB_RESPONSE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 110: _t->update_act_DG_MODE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 111: _t->update_act_DG_TRG_RESPOND_MASK((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 112: _t->update_act_DG_BUNCH_PATTERN((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 113: _t->update_act_DG_BUNCH_FREQ((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 114: _t->update_act_DG_FREQ_OFFSET((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 115: _t->update_act_RDH_FEE_ID((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 116: _t->update_act_RDH_PAR((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 117: _t->update_act_RDH_MAX_PAYLOAD((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 118: _t->update_act_RDH_DET_FIELD((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 119: _t->update_act_CRU_TRG_COMPARE_DELAY((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 120: _t->update_act_BCID_DELAY((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 121: _t->update_act_DATA_SEL_TRG_MASK((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 122: _t->update_act_BITS((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 123: _t->update_act_READOUT_MODE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 124: _t->update_act_BCID_SYNC_MODE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 125: _t->update_act_RX_PHASE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 126: _t->update_act_CRU_ORBIT((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 127: _t->update_act_CRU_BC((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 128: _t->update_act_RAW_FIFO((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 129: _t->update_act_SEL_FIFO((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 130: _t->update_act_SEL_FIRST_HIT_DROPPED_ORBIT((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 131: _t->update_act_SEL_LAST_HIT_DROPPED_ORBIT((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 132: _t->update_act_SEL_HITS_DROPPED((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 133: _t->update_act_READOUT_RATE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 134: _t->update_act_OR_GATE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 135: _t->update_act_CFD_SATR((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 136: _t->update_act_CH_MASK((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 137: _t->update_new_TG_PATTERN_1((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 138: _t->update_new_TG_PATTERN_0((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 139: _t->update_new_TG_CONT_VALUE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 140: _t->update_new_TG_BUNCH_FREQ((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 141: _t->update_new_TG_FREQ_OFFSET((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 142: _t->update_new_DG_TRG_RESPOND_MASK((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 143: _t->update_new_DG_BUNCH_PATTERN((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 144: _t->update_new_DG_BUNCH_FREQ((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 145: _t->update_new_DG_FREQ_OFFSET((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 146: _t->update_new_RDH_FEE_ID((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 147: _t->update_new_RDH_PAR((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 148: _t->update_new_RDH_MAX_PAYLOAD((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 149: _t->update_new_RDH_DET_FIELD((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 150: _t->update_new_CRU_TRG_COMPARE_DELAY((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 151: _t->update_new_BCID_DELAY((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 152: _t->update_new_DATA_SEL_TRG_MASK((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 153: _t->update_new_OR_GATE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 154: _t->update_new_CFD_SATR((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 155: _t->update_new_CH_MASK((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 156: _t->update_act_LINK_STATUS((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 157: _t->update_act_BOARD_STATUS((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 158: _t->update_act_TEMPERATURE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 159: _t->update_act_SERIAL_NUM((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 160: _t->update_act_FW_VERSION((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 , qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_ADC_ZERO_requested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 , qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_ADC_DELAY_requested)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_ADC0_OFFSET_requested)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_ADC1_OFFSET_requested)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_ADC0_RANGE_requested)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_ADC1_RANGE_requested)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_TIME_ALIGN_requested)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 , qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_CFD_THRESHOLD_requested)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 , qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_CFD_ZERO_requested)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 , qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_THRESHOLD_CALIBR_requested)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_TG_PATTERN_1_requested)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_TG_PATTERN_0_requested)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_TG_CONT_VALUE_requested)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_TG_BUNCH_FREQ_requested)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_TG_FREQ_OFFSET_requested)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_DG_TRG_RESPOND_MASK_requested)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_DG_BUNCH_PATTERN_requested)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_DG_BUNCH_FREQ_requested)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_DG_FREQ_OFFSET_requested)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_RDH_FEE_ID_requested)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_RDH_PAR_requested)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_RDH_MAX_PAYLOAD_requested)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_RDH_DET_FIELD_requested)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_CRU_TRG_COMPARE_DELAY_requested)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_BCID_DELAY_requested)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_DATA_SEL_TRG_MASK_requested)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_OR_GATE_requested)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_CFD_SATR_requested)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_CH_MASK_requested)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_ADC_ZERO_requested)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_ADC_DELAY_requested)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_ADC0_OFFSET_requested)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_ADC1_OFFSET_requested)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_ADC0_RANGE_requested)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_ADC1_RANGE_requested)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_TIME_ALIGN_requested)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_CFD_THRESHOLD_requested)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_CFD_ZERO_requested)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_THRESHOLD_CALIBR_requested)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RESET_ORBIT_SYNC_requested)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RESET_DROPPING_HIT_COUNTERS_requested)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RESET_GEN_BUNCH_OFFSET_requested)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RESET_GBT_ERRORS_requested)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RESET_GBT_requested)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RESET_RX_PHASE_ERROR_requested)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_SEND_READOUT_COMMAND_requested)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_TG_SEND_SINGLE_requested)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_TG_PATTERN_1_requested)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_TG_PATTERN_0_requested)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_TG_CONT_VALUE_requested)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_TG_BUNCH_FREQ_requested)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_TG_FREQ_OFFSET_requested)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_TG_MODE_requested)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_HB_RESPONSE_requested)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_DG_MODE_requested)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_DG_TRG_RESPOND_MASK_requested)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_DG_BUNCH_PATTERN_requested)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_DG_BUNCH_FREQ_requested)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_DG_FREQ_OFFSET_requested)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RDH_FEE_ID_requested)) {
                *result = 59;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RDH_PAR_requested)) {
                *result = 60;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RDH_MAX_PAYLOAD_requested)) {
                *result = 61;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RDH_DET_FIELD_requested)) {
                *result = 62;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_CRU_TRG_COMPARE_DELAY_requested)) {
                *result = 63;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_BCID_DELAY_requested)) {
                *result = 64;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_DATA_SEL_TRG_MASK_requested)) {
                *result = 65;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_OR_GATE_requested)) {
                *result = 66;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_CFD_SATR_requested)) {
                *result = 67;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_CH_MASK_requested)) {
                *result = 68;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_SwChOn_requested)) {
                *result = 69;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_SwChOff_requested)) {
                *result = 70;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RESET_COUNTERS_requested)) {
                *result = 71;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_ZERO_LVL_CALIBR_requested)) {
                *result = 72;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_ALLtoPM_requested)) {
                *result = 73;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyDimServer::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MyDimServer.data,
    qt_meta_data_MyDimServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyDimServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyDimServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyDimServer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "DimServer"))
        return static_cast< DimServer*>(this);
    return QObject::qt_metacast(_clname);
}

int MyDimServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 161)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 161;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 161)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 161;
    }
    return _id;
}

// SIGNAL 0
void MyDimServer::set_ADC_ZERO_requested(quint16 _t1, quint8 _t2, qint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyDimServer::set_ADC_DELAY_requested(quint16 _t1, quint8 _t2, qint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyDimServer::set_ADC0_OFFSET_requested(quint16 _t1, quint8 _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MyDimServer::set_ADC1_OFFSET_requested(quint16 _t1, quint8 _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MyDimServer::set_ADC0_RANGE_requested(quint16 _t1, quint8 _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MyDimServer::set_ADC1_RANGE_requested(quint16 _t1, quint8 _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MyDimServer::set_TIME_ALIGN_requested(quint16 _t1, quint8 _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MyDimServer::set_CFD_THRESHOLD_requested(quint16 _t1, quint8 _t2, qint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MyDimServer::set_CFD_ZERO_requested(quint16 _t1, quint8 _t2, qint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MyDimServer::set_THRESHOLD_CALIBR_requested(quint16 _t1, quint8 _t2, qint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MyDimServer::set_TG_PATTERN_1_requested(quint16 _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MyDimServer::set_TG_PATTERN_0_requested(quint16 _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MyDimServer::set_TG_CONT_VALUE_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MyDimServer::set_TG_BUNCH_FREQ_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MyDimServer::set_TG_FREQ_OFFSET_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MyDimServer::set_DG_TRG_RESPOND_MASK_requested(quint16 _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MyDimServer::set_DG_BUNCH_PATTERN_requested(quint16 _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MyDimServer::set_DG_BUNCH_FREQ_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void MyDimServer::set_DG_FREQ_OFFSET_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void MyDimServer::set_RDH_FEE_ID_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void MyDimServer::set_RDH_PAR_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void MyDimServer::set_RDH_MAX_PAYLOAD_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void MyDimServer::set_RDH_DET_FIELD_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void MyDimServer::set_CRU_TRG_COMPARE_DELAY_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void MyDimServer::set_BCID_DELAY_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void MyDimServer::set_DATA_SEL_TRG_MASK_requested(quint16 _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void MyDimServer::set_OR_GATE_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void MyDimServer::set_CFD_SATR_requested(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void MyDimServer::set_CH_MASK_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void MyDimServer::apply_ADC_ZERO_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void MyDimServer::apply_ADC_DELAY_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void MyDimServer::apply_ADC0_OFFSET_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void MyDimServer::apply_ADC1_OFFSET_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void MyDimServer::apply_ADC0_RANGE_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void MyDimServer::apply_ADC1_RANGE_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void MyDimServer::apply_TIME_ALIGN_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void MyDimServer::apply_CFD_THRESHOLD_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void MyDimServer::apply_CFD_ZERO_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void MyDimServer::apply_THRESHOLD_CALIBR_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void MyDimServer::apply_RESET_ORBIT_SYNC_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void MyDimServer::apply_RESET_DROPPING_HIT_COUNTERS_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void MyDimServer::apply_RESET_GEN_BUNCH_OFFSET_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void MyDimServer::apply_RESET_GBT_ERRORS_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void MyDimServer::apply_RESET_GBT_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void MyDimServer::apply_RESET_RX_PHASE_ERROR_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void MyDimServer::apply_SEND_READOUT_COMMAND_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void MyDimServer::apply_TG_SEND_SINGLE_requested(quint16 _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void MyDimServer::apply_TG_PATTERN_1_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void MyDimServer::apply_TG_PATTERN_0_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void MyDimServer::apply_TG_CONT_VALUE_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void MyDimServer::apply_TG_BUNCH_FREQ_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void MyDimServer::apply_TG_FREQ_OFFSET_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void MyDimServer::apply_TG_MODE_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void MyDimServer::apply_HB_RESPONSE_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void MyDimServer::apply_DG_MODE_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void MyDimServer::apply_DG_TRG_RESPOND_MASK_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void MyDimServer::apply_DG_BUNCH_PATTERN_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void MyDimServer::apply_DG_BUNCH_FREQ_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void MyDimServer::apply_DG_FREQ_OFFSET_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void MyDimServer::apply_RDH_FEE_ID_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void MyDimServer::apply_RDH_PAR_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void MyDimServer::apply_RDH_MAX_PAYLOAD_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void MyDimServer::apply_RDH_DET_FIELD_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void MyDimServer::apply_CRU_TRG_COMPARE_DELAY_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void MyDimServer::apply_BCID_DELAY_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void MyDimServer::apply_DATA_SEL_TRG_MASK_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void MyDimServer::apply_OR_GATE_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void MyDimServer::apply_CFD_SATR_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void MyDimServer::apply_CH_MASK_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void MyDimServer::apply_SwChOn_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void MyDimServer::apply_SwChOff_requested(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void MyDimServer::apply_RESET_COUNTERS_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void MyDimServer::apply_ZERO_LVL_CALIBR_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void MyDimServer::apply_ALLtoPM_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
