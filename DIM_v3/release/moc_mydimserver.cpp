/****************************************************************************
** Meta object code from reading C++ file 'mydimserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mydimserver.h"
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
    QByteArrayData data[315];
    char stringdata0[7640];
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
QT_MOC_LITERAL(81, 2147, 33), // "apply_COUNTERS_UPD_RATE_reque..."
QT_MOC_LITERAL(82, 2181, 32), // "apply_EXTENDED_READOUT_requested"
QT_MOC_LITERAL(83, 2214, 28), // "apply_SC_SUM_SIDES_requested"
QT_MOC_LITERAL(84, 2243, 27), // "apply_C_SUM_SIDES_requested"
QT_MOC_LITERAL(85, 2271, 27), // "apply_ADD_C_DELAY_requested"
QT_MOC_LITERAL(86, 2299, 24), // "apply_RES_SW_1_requested"
QT_MOC_LITERAL(87, 2324, 24), // "apply_RES_SW_2_requested"
QT_MOC_LITERAL(88, 2349, 24), // "apply_RES_SW_3_requested"
QT_MOC_LITERAL(89, 2374, 24), // "apply_RES_SW_4_requested"
QT_MOC_LITERAL(90, 2399, 21), // "set_DELAY_A_requested"
QT_MOC_LITERAL(91, 2421, 21), // "set_DELAY_C_requested"
QT_MOC_LITERAL(92, 2443, 23), // "set_VTIME_LOW_requested"
QT_MOC_LITERAL(93, 2467, 24), // "set_VTIME_HIGH_requested"
QT_MOC_LITERAL(94, 2492, 24), // "set_SC_LEVEL_A_requested"
QT_MOC_LITERAL(95, 2517, 24), // "set_SC_LEVEL_C_requested"
QT_MOC_LITERAL(96, 2542, 23), // "set_C_LEVEL_A_requested"
QT_MOC_LITERAL(97, 2566, 23), // "set_C_LEVEL_C_requested"
QT_MOC_LITERAL(98, 2590, 23), // "set_CH_MASK_A_requested"
QT_MOC_LITERAL(99, 2614, 23), // "set_CH_MASK_C_requested"
QT_MOC_LITERAL(100, 2638, 23), // "apply_DELAY_A_requested"
QT_MOC_LITERAL(101, 2662, 23), // "apply_DELAY_C_requested"
QT_MOC_LITERAL(102, 2686, 25), // "apply_VTIME_LOW_requested"
QT_MOC_LITERAL(103, 2712, 26), // "apply_VTIME_HIGH_requested"
QT_MOC_LITERAL(104, 2739, 26), // "apply_SC_LEVEL_A_requested"
QT_MOC_LITERAL(105, 2766, 26), // "apply_SC_LEVEL_C_requested"
QT_MOC_LITERAL(106, 2793, 25), // "apply_C_LEVEL_A_requested"
QT_MOC_LITERAL(107, 2819, 25), // "apply_C_LEVEL_C_requested"
QT_MOC_LITERAL(108, 2845, 25), // "apply_CH_MASK_A_requested"
QT_MOC_LITERAL(109, 2871, 25), // "apply_CH_MASK_C_requested"
QT_MOC_LITERAL(110, 2897, 28), // "apply_RESET_SYSTEM_requested"
QT_MOC_LITERAL(111, 2926, 23), // "set_OR_A_SIGN_requested"
QT_MOC_LITERAL(112, 2950, 23), // "set_OR_A_RATE_requested"
QT_MOC_LITERAL(113, 2974, 23), // "set_OR_C_SIGN_requested"
QT_MOC_LITERAL(114, 2998, 23), // "set_OR_C_RATE_requested"
QT_MOC_LITERAL(115, 3022, 21), // "set_SC_SIGN_requested"
QT_MOC_LITERAL(116, 3044, 21), // "set_SC_RATE_requested"
QT_MOC_LITERAL(117, 3066, 20), // "set_C_SIGN_requested"
QT_MOC_LITERAL(118, 3087, 20), // "set_C_RATE_requested"
QT_MOC_LITERAL(119, 3108, 20), // "set_V_SIGN_requested"
QT_MOC_LITERAL(120, 3129, 20), // "set_V_RATE_requested"
QT_MOC_LITERAL(121, 3150, 25), // "apply_OR_A_SIGN_requested"
QT_MOC_LITERAL(122, 3176, 25), // "apply_OR_A_RATE_requested"
QT_MOC_LITERAL(123, 3202, 25), // "apply_OR_C_SIGN_requested"
QT_MOC_LITERAL(124, 3228, 25), // "apply_OR_C_RATE_requested"
QT_MOC_LITERAL(125, 3254, 23), // "apply_SC_SIGN_requested"
QT_MOC_LITERAL(126, 3278, 23), // "apply_SC_RATE_requested"
QT_MOC_LITERAL(127, 3302, 22), // "apply_C_SIGN_requested"
QT_MOC_LITERAL(128, 3325, 22), // "apply_C_RATE_requested"
QT_MOC_LITERAL(129, 3348, 22), // "apply_V_SIGN_requested"
QT_MOC_LITERAL(130, 3371, 22), // "apply_V_RATE_requested"
QT_MOC_LITERAL(131, 3394, 28), // "apply_OR_A_ENABLED_requested"
QT_MOC_LITERAL(132, 3423, 28), // "apply_OR_C_ENABLED_requested"
QT_MOC_LITERAL(133, 3452, 26), // "apply_SC_ENABLED_requested"
QT_MOC_LITERAL(134, 3479, 25), // "apply_C_ENABLED_requested"
QT_MOC_LITERAL(135, 3505, 25), // "apply_V_ENABLED_requested"
QT_MOC_LITERAL(136, 3531, 24), // "apply_LASER_ON_requested"
QT_MOC_LITERAL(137, 3556, 25), // "apply_LASER_DIV_requested"
QT_MOC_LITERAL(138, 3582, 27), // "apply_LASER_DELAY_requested"
QT_MOC_LITERAL(139, 3610, 31), // "apply_LASER_PATTERN_1_requested"
QT_MOC_LITERAL(140, 3642, 31), // "apply_LASER_PATTERN_0_requested"
QT_MOC_LITERAL(141, 3674, 27), // "apply_ATTEN_VALUE_requested"
QT_MOC_LITERAL(142, 3702, 23), // "set_LASER_DIV_requested"
QT_MOC_LITERAL(143, 3726, 25), // "set_LASER_DELAY_requested"
QT_MOC_LITERAL(144, 3752, 29), // "set_LASER_PATTERN_1_requested"
QT_MOC_LITERAL(145, 3782, 29), // "set_LASER_PATTERN_0_requested"
QT_MOC_LITERAL(146, 3812, 25), // "set_ATTEN_VALUE_requested"
QT_MOC_LITERAL(147, 3838, 30), // "apply_SET_OPTIONCODE_requested"
QT_MOC_LITERAL(148, 3869, 4), // "mode"
QT_MOC_LITERAL(149, 3874, 19), // "update_act_ADC_ZERO"
QT_MOC_LITERAL(150, 3894, 20), // "update_act_ADC_DELAY"
QT_MOC_LITERAL(151, 3915, 22), // "update_act_ADC0_OFFSET"
QT_MOC_LITERAL(152, 3938, 22), // "update_act_ADC1_OFFSET"
QT_MOC_LITERAL(153, 3961, 21), // "update_act_ADC0_RANGE"
QT_MOC_LITERAL(154, 3983, 21), // "update_act_ADC1_RANGE"
QT_MOC_LITERAL(155, 4005, 21), // "update_act_TIME_ALIGN"
QT_MOC_LITERAL(156, 4027, 24), // "update_act_CFD_THRESHOLD"
QT_MOC_LITERAL(157, 4052, 19), // "update_act_CFD_ZERO"
QT_MOC_LITERAL(158, 4072, 27), // "update_act_THRESHOLD_CALIBR"
QT_MOC_LITERAL(159, 4100, 19), // "update_new_ADC_ZERO"
QT_MOC_LITERAL(160, 4120, 20), // "update_new_ADC_DELAY"
QT_MOC_LITERAL(161, 4141, 22), // "update_new_ADC0_OFFSET"
QT_MOC_LITERAL(162, 4164, 22), // "update_new_ADC1_OFFSET"
QT_MOC_LITERAL(163, 4187, 21), // "update_new_ADC0_RANGE"
QT_MOC_LITERAL(164, 4209, 21), // "update_new_ADC1_RANGE"
QT_MOC_LITERAL(165, 4231, 21), // "update_new_TIME_ALIGN"
QT_MOC_LITERAL(166, 4253, 24), // "update_new_CFD_THRESHOLD"
QT_MOC_LITERAL(167, 4278, 19), // "update_new_CFD_ZERO"
QT_MOC_LITERAL(168, 4298, 27), // "update_new_THRESHOLD_CALIBR"
QT_MOC_LITERAL(169, 4326, 24), // "update_act_ADC0_MEANAMPL"
QT_MOC_LITERAL(170, 4351, 24), // "update_act_ADC1_MEANAMPL"
QT_MOC_LITERAL(171, 4376, 23), // "update_act_ADC0_ZEROLVL"
QT_MOC_LITERAL(172, 4400, 23), // "update_act_ADC1_ZEROLVL"
QT_MOC_LITERAL(173, 4424, 23), // "update_act_RAW_TDC_DATA"
QT_MOC_LITERAL(174, 4448, 18), // "update_act_CNT_CFD"
QT_MOC_LITERAL(175, 4467, 23), // "update_act_CNT_CFD_RATE"
QT_MOC_LITERAL(176, 4491, 18), // "update_act_CNT_TRG"
QT_MOC_LITERAL(177, 4510, 23), // "update_act_CNT_TRG_RATE"
QT_MOC_LITERAL(178, 4534, 23), // "update_act_TG_PATTERN_1"
QT_MOC_LITERAL(179, 4558, 23), // "update_act_TG_PATTERN_0"
QT_MOC_LITERAL(180, 4582, 24), // "update_act_TG_CONT_VALUE"
QT_MOC_LITERAL(181, 4607, 24), // "update_act_TG_BUNCH_FREQ"
QT_MOC_LITERAL(182, 4632, 25), // "update_act_TG_FREQ_OFFSET"
QT_MOC_LITERAL(183, 4658, 18), // "update_act_TG_MODE"
QT_MOC_LITERAL(184, 4677, 22), // "update_act_HB_RESPONSE"
QT_MOC_LITERAL(185, 4700, 18), // "update_act_DG_MODE"
QT_MOC_LITERAL(186, 4719, 30), // "update_act_DG_TRG_RESPOND_MASK"
QT_MOC_LITERAL(187, 4750, 27), // "update_act_DG_BUNCH_PATTERN"
QT_MOC_LITERAL(188, 4778, 24), // "update_act_DG_BUNCH_FREQ"
QT_MOC_LITERAL(189, 4803, 25), // "update_act_DG_FREQ_OFFSET"
QT_MOC_LITERAL(190, 4829, 21), // "update_act_RDH_FEE_ID"
QT_MOC_LITERAL(191, 4851, 18), // "update_act_RDH_PAR"
QT_MOC_LITERAL(192, 4870, 26), // "update_act_RDH_MAX_PAYLOAD"
QT_MOC_LITERAL(193, 4897, 24), // "update_act_RDH_DET_FIELD"
QT_MOC_LITERAL(194, 4922, 32), // "update_act_CRU_TRG_COMPARE_DELAY"
QT_MOC_LITERAL(195, 4955, 21), // "update_act_BCID_DELAY"
QT_MOC_LITERAL(196, 4977, 28), // "update_act_DATA_SEL_TRG_MASK"
QT_MOC_LITERAL(197, 5006, 15), // "update_act_BITS"
QT_MOC_LITERAL(198, 5022, 23), // "update_act_READOUT_MODE"
QT_MOC_LITERAL(199, 5046, 25), // "update_act_BCID_SYNC_MODE"
QT_MOC_LITERAL(200, 5072, 19), // "update_act_RX_PHASE"
QT_MOC_LITERAL(201, 5092, 20), // "update_act_CRU_ORBIT"
QT_MOC_LITERAL(202, 5113, 17), // "update_act_CRU_BC"
QT_MOC_LITERAL(203, 5131, 19), // "update_act_RAW_FIFO"
QT_MOC_LITERAL(204, 5151, 19), // "update_act_SEL_FIFO"
QT_MOC_LITERAL(205, 5171, 38), // "update_act_SEL_FIRST_HIT_DROP..."
QT_MOC_LITERAL(206, 5210, 37), // "update_act_SEL_LAST_HIT_DROPP..."
QT_MOC_LITERAL(207, 5248, 27), // "update_act_SEL_HITS_DROPPED"
QT_MOC_LITERAL(208, 5276, 23), // "update_act_READOUT_RATE"
QT_MOC_LITERAL(209, 5300, 18), // "update_act_OR_GATE"
QT_MOC_LITERAL(210, 5319, 19), // "update_act_CFD_SATR"
QT_MOC_LITERAL(211, 5339, 18), // "update_act_CH_MASK"
QT_MOC_LITERAL(212, 5358, 23), // "update_new_TG_PATTERN_1"
QT_MOC_LITERAL(213, 5382, 23), // "update_new_TG_PATTERN_0"
QT_MOC_LITERAL(214, 5406, 24), // "update_new_TG_CONT_VALUE"
QT_MOC_LITERAL(215, 5431, 24), // "update_new_TG_BUNCH_FREQ"
QT_MOC_LITERAL(216, 5456, 25), // "update_new_TG_FREQ_OFFSET"
QT_MOC_LITERAL(217, 5482, 30), // "update_new_DG_TRG_RESPOND_MASK"
QT_MOC_LITERAL(218, 5513, 27), // "update_new_DG_BUNCH_PATTERN"
QT_MOC_LITERAL(219, 5541, 24), // "update_new_DG_BUNCH_FREQ"
QT_MOC_LITERAL(220, 5566, 25), // "update_new_DG_FREQ_OFFSET"
QT_MOC_LITERAL(221, 5592, 21), // "update_new_RDH_FEE_ID"
QT_MOC_LITERAL(222, 5614, 18), // "update_new_RDH_PAR"
QT_MOC_LITERAL(223, 5633, 26), // "update_new_RDH_MAX_PAYLOAD"
QT_MOC_LITERAL(224, 5660, 24), // "update_new_RDH_DET_FIELD"
QT_MOC_LITERAL(225, 5685, 32), // "update_new_CRU_TRG_COMPARE_DELAY"
QT_MOC_LITERAL(226, 5718, 21), // "update_new_BCID_DELAY"
QT_MOC_LITERAL(227, 5740, 28), // "update_new_DATA_SEL_TRG_MASK"
QT_MOC_LITERAL(228, 5769, 18), // "update_new_OR_GATE"
QT_MOC_LITERAL(229, 5788, 19), // "update_new_CFD_SATR"
QT_MOC_LITERAL(230, 5808, 18), // "update_new_CH_MASK"
QT_MOC_LITERAL(231, 5827, 22), // "update_act_LINK_STATUS"
QT_MOC_LITERAL(232, 5850, 23), // "update_act_BOARD_STATUS"
QT_MOC_LITERAL(233, 5874, 22), // "update_act_TEMPERATURE"
QT_MOC_LITERAL(234, 5897, 21), // "update_act_SERIAL_NUM"
QT_MOC_LITERAL(235, 5919, 21), // "update_act_FW_VERSION"
QT_MOC_LITERAL(236, 5941, 28), // "update_act_COUNTERS_UPD_RATE"
QT_MOC_LITERAL(237, 5970, 27), // "update_act_EXTENDED_READOUT"
QT_MOC_LITERAL(238, 5998, 23), // "update_act_SC_SUM_SIDES"
QT_MOC_LITERAL(239, 6022, 22), // "update_act_C_SUM_SIDES"
QT_MOC_LITERAL(240, 6045, 22), // "update_act_ADD_C_DELAY"
QT_MOC_LITERAL(241, 6068, 19), // "update_act_RES_SW_1"
QT_MOC_LITERAL(242, 6088, 19), // "update_act_RES_SW_2"
QT_MOC_LITERAL(243, 6108, 19), // "update_act_RES_SW_3"
QT_MOC_LITERAL(244, 6128, 19), // "update_act_RES_SW_4"
QT_MOC_LITERAL(245, 6148, 18), // "update_new_DELAY_A"
QT_MOC_LITERAL(246, 6167, 18), // "update_new_DELAY_C"
QT_MOC_LITERAL(247, 6186, 20), // "update_new_VTIME_LOW"
QT_MOC_LITERAL(248, 6207, 21), // "update_new_VTIME_HIGH"
QT_MOC_LITERAL(249, 6229, 21), // "update_new_SC_LEVEL_A"
QT_MOC_LITERAL(250, 6251, 21), // "update_new_SC_LEVEL_C"
QT_MOC_LITERAL(251, 6273, 20), // "update_new_C_LEVEL_A"
QT_MOC_LITERAL(252, 6294, 20), // "update_new_C_LEVEL_C"
QT_MOC_LITERAL(253, 6315, 20), // "update_new_CH_MASK_A"
QT_MOC_LITERAL(254, 6336, 20), // "update_new_CH_MASK_C"
QT_MOC_LITERAL(255, 6357, 18), // "update_act_DELAY_A"
QT_MOC_LITERAL(256, 6376, 18), // "update_act_DELAY_C"
QT_MOC_LITERAL(257, 6395, 20), // "update_act_VTIME_LOW"
QT_MOC_LITERAL(258, 6416, 21), // "update_act_VTIME_HIGH"
QT_MOC_LITERAL(259, 6438, 21), // "update_act_SC_LEVEL_A"
QT_MOC_LITERAL(260, 6460, 21), // "update_act_SC_LEVEL_C"
QT_MOC_LITERAL(261, 6482, 20), // "update_act_C_LEVEL_A"
QT_MOC_LITERAL(262, 6503, 20), // "update_act_C_LEVEL_C"
QT_MOC_LITERAL(263, 6524, 20), // "update_act_CH_MASK_A"
QT_MOC_LITERAL(264, 6545, 20), // "update_act_CH_MASK_C"
QT_MOC_LITERAL(265, 6566, 24), // "update_act_SIDE_A_STATUS"
QT_MOC_LITERAL(266, 6591, 24), // "update_act_SIDE_C_STATUS"
QT_MOC_LITERAL(267, 6616, 19), // "update_act_CNT_OR_A"
QT_MOC_LITERAL(268, 6636, 24), // "update_act_CNT_OR_A_RATE"
QT_MOC_LITERAL(269, 6661, 19), // "update_act_CNT_OR_C"
QT_MOC_LITERAL(270, 6681, 24), // "update_act_CNT_OR_C_RATE"
QT_MOC_LITERAL(271, 6706, 17), // "update_act_CNT_SC"
QT_MOC_LITERAL(272, 6724, 22), // "update_act_CNT_SC_RATE"
QT_MOC_LITERAL(273, 6747, 16), // "update_act_CNT_C"
QT_MOC_LITERAL(274, 6764, 21), // "update_act_CNT_C_RATE"
QT_MOC_LITERAL(275, 6786, 16), // "update_act_CNT_V"
QT_MOC_LITERAL(276, 6803, 21), // "update_act_CNT_V_RATE"
QT_MOC_LITERAL(277, 6825, 20), // "update_new_OR_A_SIGN"
QT_MOC_LITERAL(278, 6846, 20), // "update_new_OR_A_RATE"
QT_MOC_LITERAL(279, 6867, 20), // "update_new_OR_C_SIGN"
QT_MOC_LITERAL(280, 6888, 20), // "update_new_OR_C_RATE"
QT_MOC_LITERAL(281, 6909, 18), // "update_new_SC_SIGN"
QT_MOC_LITERAL(282, 6928, 18), // "update_new_SC_RATE"
QT_MOC_LITERAL(283, 6947, 17), // "update_new_C_SIGN"
QT_MOC_LITERAL(284, 6965, 17), // "update_new_C_RATE"
QT_MOC_LITERAL(285, 6983, 17), // "update_new_V_SIGN"
QT_MOC_LITERAL(286, 7001, 17), // "update_new_V_RATE"
QT_MOC_LITERAL(287, 7019, 20), // "update_act_OR_A_SIGN"
QT_MOC_LITERAL(288, 7040, 20), // "update_act_OR_A_RATE"
QT_MOC_LITERAL(289, 7061, 20), // "update_act_OR_C_SIGN"
QT_MOC_LITERAL(290, 7082, 20), // "update_act_OR_C_RATE"
QT_MOC_LITERAL(291, 7103, 18), // "update_act_SC_SIGN"
QT_MOC_LITERAL(292, 7122, 18), // "update_act_SC_RATE"
QT_MOC_LITERAL(293, 7141, 17), // "update_act_C_SIGN"
QT_MOC_LITERAL(294, 7159, 17), // "update_act_C_RATE"
QT_MOC_LITERAL(295, 7177, 17), // "update_act_V_SIGN"
QT_MOC_LITERAL(296, 7195, 17), // "update_act_V_RATE"
QT_MOC_LITERAL(297, 7213, 28), // "update_act_STATUS_OPTIONCODE"
QT_MOC_LITERAL(298, 7242, 23), // "update_act_OR_A_ENABLED"
QT_MOC_LITERAL(299, 7266, 23), // "update_act_OR_C_ENABLED"
QT_MOC_LITERAL(300, 7290, 21), // "update_act_SC_ENABLED"
QT_MOC_LITERAL(301, 7312, 20), // "update_act_C_ENABLED"
QT_MOC_LITERAL(302, 7333, 20), // "update_act_V_ENABLED"
QT_MOC_LITERAL(303, 7354, 19), // "update_act_LASER_ON"
QT_MOC_LITERAL(304, 7374, 20), // "update_act_LASER_DIV"
QT_MOC_LITERAL(305, 7395, 22), // "update_act_LASER_DELAY"
QT_MOC_LITERAL(306, 7418, 26), // "update_act_LASER_PATTERN_1"
QT_MOC_LITERAL(307, 7445, 26), // "update_act_LASER_PATTERN_0"
QT_MOC_LITERAL(308, 7472, 22), // "update_act_ATTEN_VALUE"
QT_MOC_LITERAL(309, 7495, 20), // "update_new_LASER_DIV"
QT_MOC_LITERAL(310, 7516, 22), // "update_new_LASER_DELAY"
QT_MOC_LITERAL(311, 7539, 26), // "update_new_LASER_PATTERN_1"
QT_MOC_LITERAL(312, 7566, 26), // "update_new_LASER_PATTERN_0"
QT_MOC_LITERAL(313, 7593, 22), // "update_new_ATTEN_VALUE"
QT_MOC_LITERAL(314, 7616, 23) // "update_act_ATTEN_STATUS"

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
    "apply_ALLtoPM_requested\0"
    "apply_COUNTERS_UPD_RATE_requested\0"
    "apply_EXTENDED_READOUT_requested\0"
    "apply_SC_SUM_SIDES_requested\0"
    "apply_C_SUM_SIDES_requested\0"
    "apply_ADD_C_DELAY_requested\0"
    "apply_RES_SW_1_requested\0"
    "apply_RES_SW_2_requested\0"
    "apply_RES_SW_3_requested\0"
    "apply_RES_SW_4_requested\0set_DELAY_A_requested\0"
    "set_DELAY_C_requested\0set_VTIME_LOW_requested\0"
    "set_VTIME_HIGH_requested\0"
    "set_SC_LEVEL_A_requested\0"
    "set_SC_LEVEL_C_requested\0"
    "set_C_LEVEL_A_requested\0set_C_LEVEL_C_requested\0"
    "set_CH_MASK_A_requested\0set_CH_MASK_C_requested\0"
    "apply_DELAY_A_requested\0apply_DELAY_C_requested\0"
    "apply_VTIME_LOW_requested\0"
    "apply_VTIME_HIGH_requested\0"
    "apply_SC_LEVEL_A_requested\0"
    "apply_SC_LEVEL_C_requested\0"
    "apply_C_LEVEL_A_requested\0"
    "apply_C_LEVEL_C_requested\0"
    "apply_CH_MASK_A_requested\0"
    "apply_CH_MASK_C_requested\0"
    "apply_RESET_SYSTEM_requested\0"
    "set_OR_A_SIGN_requested\0set_OR_A_RATE_requested\0"
    "set_OR_C_SIGN_requested\0set_OR_C_RATE_requested\0"
    "set_SC_SIGN_requested\0set_SC_RATE_requested\0"
    "set_C_SIGN_requested\0set_C_RATE_requested\0"
    "set_V_SIGN_requested\0set_V_RATE_requested\0"
    "apply_OR_A_SIGN_requested\0"
    "apply_OR_A_RATE_requested\0"
    "apply_OR_C_SIGN_requested\0"
    "apply_OR_C_RATE_requested\0"
    "apply_SC_SIGN_requested\0apply_SC_RATE_requested\0"
    "apply_C_SIGN_requested\0apply_C_RATE_requested\0"
    "apply_V_SIGN_requested\0apply_V_RATE_requested\0"
    "apply_OR_A_ENABLED_requested\0"
    "apply_OR_C_ENABLED_requested\0"
    "apply_SC_ENABLED_requested\0"
    "apply_C_ENABLED_requested\0"
    "apply_V_ENABLED_requested\0"
    "apply_LASER_ON_requested\0"
    "apply_LASER_DIV_requested\0"
    "apply_LASER_DELAY_requested\0"
    "apply_LASER_PATTERN_1_requested\0"
    "apply_LASER_PATTERN_0_requested\0"
    "apply_ATTEN_VALUE_requested\0"
    "set_LASER_DIV_requested\0"
    "set_LASER_DELAY_requested\0"
    "set_LASER_PATTERN_1_requested\0"
    "set_LASER_PATTERN_0_requested\0"
    "set_ATTEN_VALUE_requested\0"
    "apply_SET_OPTIONCODE_requested\0mode\0"
    "update_act_ADC_ZERO\0update_act_ADC_DELAY\0"
    "update_act_ADC0_OFFSET\0update_act_ADC1_OFFSET\0"
    "update_act_ADC0_RANGE\0update_act_ADC1_RANGE\0"
    "update_act_TIME_ALIGN\0update_act_CFD_THRESHOLD\0"
    "update_act_CFD_ZERO\0update_act_THRESHOLD_CALIBR\0"
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
    "update_act_SERIAL_NUM\0update_act_FW_VERSION\0"
    "update_act_COUNTERS_UPD_RATE\0"
    "update_act_EXTENDED_READOUT\0"
    "update_act_SC_SUM_SIDES\0update_act_C_SUM_SIDES\0"
    "update_act_ADD_C_DELAY\0update_act_RES_SW_1\0"
    "update_act_RES_SW_2\0update_act_RES_SW_3\0"
    "update_act_RES_SW_4\0update_new_DELAY_A\0"
    "update_new_DELAY_C\0update_new_VTIME_LOW\0"
    "update_new_VTIME_HIGH\0update_new_SC_LEVEL_A\0"
    "update_new_SC_LEVEL_C\0update_new_C_LEVEL_A\0"
    "update_new_C_LEVEL_C\0update_new_CH_MASK_A\0"
    "update_new_CH_MASK_C\0update_act_DELAY_A\0"
    "update_act_DELAY_C\0update_act_VTIME_LOW\0"
    "update_act_VTIME_HIGH\0update_act_SC_LEVEL_A\0"
    "update_act_SC_LEVEL_C\0update_act_C_LEVEL_A\0"
    "update_act_C_LEVEL_C\0update_act_CH_MASK_A\0"
    "update_act_CH_MASK_C\0update_act_SIDE_A_STATUS\0"
    "update_act_SIDE_C_STATUS\0update_act_CNT_OR_A\0"
    "update_act_CNT_OR_A_RATE\0update_act_CNT_OR_C\0"
    "update_act_CNT_OR_C_RATE\0update_act_CNT_SC\0"
    "update_act_CNT_SC_RATE\0update_act_CNT_C\0"
    "update_act_CNT_C_RATE\0update_act_CNT_V\0"
    "update_act_CNT_V_RATE\0update_new_OR_A_SIGN\0"
    "update_new_OR_A_RATE\0update_new_OR_C_SIGN\0"
    "update_new_OR_C_RATE\0update_new_SC_SIGN\0"
    "update_new_SC_RATE\0update_new_C_SIGN\0"
    "update_new_C_RATE\0update_new_V_SIGN\0"
    "update_new_V_RATE\0update_act_OR_A_SIGN\0"
    "update_act_OR_A_RATE\0update_act_OR_C_SIGN\0"
    "update_act_OR_C_RATE\0update_act_SC_SIGN\0"
    "update_act_SC_RATE\0update_act_C_SIGN\0"
    "update_act_C_RATE\0update_act_V_SIGN\0"
    "update_act_V_RATE\0update_act_STATUS_OPTIONCODE\0"
    "update_act_OR_A_ENABLED\0update_act_OR_C_ENABLED\0"
    "update_act_SC_ENABLED\0update_act_C_ENABLED\0"
    "update_act_V_ENABLED\0update_act_LASER_ON\0"
    "update_act_LASER_DIV\0update_act_LASER_DELAY\0"
    "update_act_LASER_PATTERN_1\0"
    "update_act_LASER_PATTERN_0\0"
    "update_act_ATTEN_VALUE\0update_new_LASER_DIV\0"
    "update_new_LASER_DELAY\0"
    "update_new_LASER_PATTERN_1\0"
    "update_new_LASER_PATTERN_0\0"
    "update_new_ATTEN_VALUE\0update_act_ATTEN_STATUS"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyDimServer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     307,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
     141,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3, 1549,    2, 0x06 /* Public */,
       6,    3, 1556,    2, 0x06 /* Public */,
       7,    3, 1563,    2, 0x06 /* Public */,
       8,    3, 1570,    2, 0x06 /* Public */,
       9,    3, 1577,    2, 0x06 /* Public */,
      10,    3, 1584,    2, 0x06 /* Public */,
      11,    3, 1591,    2, 0x06 /* Public */,
      12,    3, 1598,    2, 0x06 /* Public */,
      13,    3, 1605,    2, 0x06 /* Public */,
      14,    3, 1612,    2, 0x06 /* Public */,
      15,    2, 1619,    2, 0x06 /* Public */,
      16,    2, 1624,    2, 0x06 /* Public */,
      17,    2, 1629,    2, 0x06 /* Public */,
      18,    2, 1634,    2, 0x06 /* Public */,
      19,    2, 1639,    2, 0x06 /* Public */,
      20,    2, 1644,    2, 0x06 /* Public */,
      21,    2, 1649,    2, 0x06 /* Public */,
      22,    2, 1654,    2, 0x06 /* Public */,
      23,    2, 1659,    2, 0x06 /* Public */,
      24,    2, 1664,    2, 0x06 /* Public */,
      25,    2, 1669,    2, 0x06 /* Public */,
      26,    2, 1674,    2, 0x06 /* Public */,
      27,    2, 1679,    2, 0x06 /* Public */,
      28,    2, 1684,    2, 0x06 /* Public */,
      29,    2, 1689,    2, 0x06 /* Public */,
      30,    2, 1694,    2, 0x06 /* Public */,
      31,    2, 1699,    2, 0x06 /* Public */,
      32,    2, 1704,    2, 0x06 /* Public */,
      33,    2, 1709,    2, 0x06 /* Public */,
      34,    2, 1714,    2, 0x06 /* Public */,
      35,    2, 1719,    2, 0x06 /* Public */,
      36,    2, 1724,    2, 0x06 /* Public */,
      37,    2, 1729,    2, 0x06 /* Public */,
      38,    2, 1734,    2, 0x06 /* Public */,
      39,    2, 1739,    2, 0x06 /* Public */,
      40,    2, 1744,    2, 0x06 /* Public */,
      41,    2, 1749,    2, 0x06 /* Public */,
      42,    2, 1754,    2, 0x06 /* Public */,
      43,    2, 1759,    2, 0x06 /* Public */,
      44,    1, 1764,    2, 0x06 /* Public */,
      45,    1, 1767,    2, 0x06 /* Public */,
      46,    1, 1770,    2, 0x06 /* Public */,
      47,    1, 1773,    2, 0x06 /* Public */,
      48,    1, 1776,    2, 0x06 /* Public */,
      49,    1, 1779,    2, 0x06 /* Public */,
      50,    2, 1782,    2, 0x06 /* Public */,
      52,    2, 1787,    2, 0x06 /* Public */,
      53,    1, 1792,    2, 0x06 /* Public */,
      54,    1, 1795,    2, 0x06 /* Public */,
      55,    1, 1798,    2, 0x06 /* Public */,
      56,    1, 1801,    2, 0x06 /* Public */,
      57,    1, 1804,    2, 0x06 /* Public */,
      58,    2, 1807,    2, 0x06 /* Public */,
      59,    2, 1812,    2, 0x06 /* Public */,
      61,    2, 1817,    2, 0x06 /* Public */,
      62,    1, 1822,    2, 0x06 /* Public */,
      63,    1, 1825,    2, 0x06 /* Public */,
      64,    1, 1828,    2, 0x06 /* Public */,
      65,    1, 1831,    2, 0x06 /* Public */,
      66,    1, 1834,    2, 0x06 /* Public */,
      67,    1, 1837,    2, 0x06 /* Public */,
      68,    1, 1840,    2, 0x06 /* Public */,
      69,    1, 1843,    2, 0x06 /* Public */,
      70,    1, 1846,    2, 0x06 /* Public */,
      71,    1, 1849,    2, 0x06 /* Public */,
      72,    1, 1852,    2, 0x06 /* Public */,
      73,    1, 1855,    2, 0x06 /* Public */,
      74,    1, 1858,    2, 0x06 /* Public */,
      75,    1, 1861,    2, 0x06 /* Public */,
      76,    2, 1864,    2, 0x06 /* Public */,
      77,    2, 1869,    2, 0x06 /* Public */,
      78,    1, 1874,    2, 0x06 /* Public */,
      79,    1, 1877,    2, 0x06 /* Public */,
      80,    1, 1880,    2, 0x06 /* Public */,
      81,    1, 1883,    2, 0x06 /* Public */,
      82,    1, 1886,    2, 0x06 /* Public */,
      83,    1, 1889,    2, 0x06 /* Public */,
      84,    1, 1892,    2, 0x06 /* Public */,
      85,    1, 1895,    2, 0x06 /* Public */,
      86,    1, 1898,    2, 0x06 /* Public */,
      87,    1, 1901,    2, 0x06 /* Public */,
      88,    1, 1904,    2, 0x06 /* Public */,
      89,    1, 1907,    2, 0x06 /* Public */,
      90,    1, 1910,    2, 0x06 /* Public */,
      91,    1, 1913,    2, 0x06 /* Public */,
      92,    1, 1916,    2, 0x06 /* Public */,
      93,    1, 1919,    2, 0x06 /* Public */,
      94,    1, 1922,    2, 0x06 /* Public */,
      95,    1, 1925,    2, 0x06 /* Public */,
      96,    1, 1928,    2, 0x06 /* Public */,
      97,    1, 1931,    2, 0x06 /* Public */,
      98,    1, 1934,    2, 0x06 /* Public */,
      99,    1, 1937,    2, 0x06 /* Public */,
     100,    0, 1940,    2, 0x06 /* Public */,
     101,    0, 1941,    2, 0x06 /* Public */,
     102,    0, 1942,    2, 0x06 /* Public */,
     103,    0, 1943,    2, 0x06 /* Public */,
     104,    0, 1944,    2, 0x06 /* Public */,
     105,    0, 1945,    2, 0x06 /* Public */,
     106,    0, 1946,    2, 0x06 /* Public */,
     107,    0, 1947,    2, 0x06 /* Public */,
     108,    0, 1948,    2, 0x06 /* Public */,
     109,    0, 1949,    2, 0x06 /* Public */,
     110,    1, 1950,    2, 0x06 /* Public */,
     111,    1, 1953,    2, 0x06 /* Public */,
     112,    1, 1956,    2, 0x06 /* Public */,
     113,    1, 1959,    2, 0x06 /* Public */,
     114,    1, 1962,    2, 0x06 /* Public */,
     115,    1, 1965,    2, 0x06 /* Public */,
     116,    1, 1968,    2, 0x06 /* Public */,
     117,    1, 1971,    2, 0x06 /* Public */,
     118,    1, 1974,    2, 0x06 /* Public */,
     119,    1, 1977,    2, 0x06 /* Public */,
     120,    1, 1980,    2, 0x06 /* Public */,
     121,    0, 1983,    2, 0x06 /* Public */,
     122,    0, 1984,    2, 0x06 /* Public */,
     123,    0, 1985,    2, 0x06 /* Public */,
     124,    0, 1986,    2, 0x06 /* Public */,
     125,    0, 1987,    2, 0x06 /* Public */,
     126,    0, 1988,    2, 0x06 /* Public */,
     127,    0, 1989,    2, 0x06 /* Public */,
     128,    0, 1990,    2, 0x06 /* Public */,
     129,    0, 1991,    2, 0x06 /* Public */,
     130,    0, 1992,    2, 0x06 /* Public */,
     131,    1, 1993,    2, 0x06 /* Public */,
     132,    1, 1996,    2, 0x06 /* Public */,
     133,    1, 1999,    2, 0x06 /* Public */,
     134,    1, 2002,    2, 0x06 /* Public */,
     135,    1, 2005,    2, 0x06 /* Public */,
     136,    1, 2008,    2, 0x06 /* Public */,
     137,    0, 2011,    2, 0x06 /* Public */,
     138,    0, 2012,    2, 0x06 /* Public */,
     139,    0, 2013,    2, 0x06 /* Public */,
     140,    0, 2014,    2, 0x06 /* Public */,
     141,    0, 2015,    2, 0x06 /* Public */,
     142,    1, 2016,    2, 0x06 /* Public */,
     143,    1, 2019,    2, 0x06 /* Public */,
     144,    1, 2022,    2, 0x06 /* Public */,
     145,    1, 2025,    2, 0x06 /* Public */,
     146,    1, 2028,    2, 0x06 /* Public */,
     147,    2, 2031,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
     149,    3, 2036,    2, 0x0a /* Public */,
     150,    3, 2043,    2, 0x0a /* Public */,
     151,    3, 2050,    2, 0x0a /* Public */,
     152,    3, 2057,    2, 0x0a /* Public */,
     153,    3, 2064,    2, 0x0a /* Public */,
     154,    3, 2071,    2, 0x0a /* Public */,
     155,    3, 2078,    2, 0x0a /* Public */,
     156,    3, 2085,    2, 0x0a /* Public */,
     157,    3, 2092,    2, 0x0a /* Public */,
     158,    3, 2099,    2, 0x0a /* Public */,
     159,    3, 2106,    2, 0x0a /* Public */,
     160,    3, 2113,    2, 0x0a /* Public */,
     161,    3, 2120,    2, 0x0a /* Public */,
     162,    3, 2127,    2, 0x0a /* Public */,
     163,    3, 2134,    2, 0x0a /* Public */,
     164,    3, 2141,    2, 0x0a /* Public */,
     165,    3, 2148,    2, 0x0a /* Public */,
     166,    3, 2155,    2, 0x0a /* Public */,
     167,    3, 2162,    2, 0x0a /* Public */,
     168,    3, 2169,    2, 0x0a /* Public */,
     169,    3, 2176,    2, 0x0a /* Public */,
     170,    3, 2183,    2, 0x0a /* Public */,
     171,    3, 2190,    2, 0x0a /* Public */,
     172,    3, 2197,    2, 0x0a /* Public */,
     173,    3, 2204,    2, 0x0a /* Public */,
     174,    3, 2211,    2, 0x0a /* Public */,
     175,    3, 2218,    2, 0x0a /* Public */,
     176,    3, 2225,    2, 0x0a /* Public */,
     177,    3, 2232,    2, 0x0a /* Public */,
     178,    2, 2239,    2, 0x0a /* Public */,
     179,    2, 2244,    2, 0x0a /* Public */,
     180,    2, 2249,    2, 0x0a /* Public */,
     181,    2, 2254,    2, 0x0a /* Public */,
     182,    2, 2259,    2, 0x0a /* Public */,
     183,    2, 2264,    2, 0x0a /* Public */,
     184,    2, 2269,    2, 0x0a /* Public */,
     185,    2, 2274,    2, 0x0a /* Public */,
     186,    2, 2279,    2, 0x0a /* Public */,
     187,    2, 2284,    2, 0x0a /* Public */,
     188,    2, 2289,    2, 0x0a /* Public */,
     189,    2, 2294,    2, 0x0a /* Public */,
     190,    2, 2299,    2, 0x0a /* Public */,
     191,    2, 2304,    2, 0x0a /* Public */,
     192,    2, 2309,    2, 0x0a /* Public */,
     193,    2, 2314,    2, 0x0a /* Public */,
     194,    2, 2319,    2, 0x0a /* Public */,
     195,    2, 2324,    2, 0x0a /* Public */,
     196,    2, 2329,    2, 0x0a /* Public */,
     197,    2, 2334,    2, 0x0a /* Public */,
     198,    2, 2339,    2, 0x0a /* Public */,
     199,    2, 2344,    2, 0x0a /* Public */,
     200,    2, 2349,    2, 0x0a /* Public */,
     201,    2, 2354,    2, 0x0a /* Public */,
     202,    2, 2359,    2, 0x0a /* Public */,
     203,    2, 2364,    2, 0x0a /* Public */,
     204,    2, 2369,    2, 0x0a /* Public */,
     205,    2, 2374,    2, 0x0a /* Public */,
     206,    2, 2379,    2, 0x0a /* Public */,
     207,    2, 2384,    2, 0x0a /* Public */,
     208,    2, 2389,    2, 0x0a /* Public */,
     209,    2, 2394,    2, 0x0a /* Public */,
     210,    2, 2399,    2, 0x0a /* Public */,
     211,    2, 2404,    2, 0x0a /* Public */,
     212,    2, 2409,    2, 0x0a /* Public */,
     213,    2, 2414,    2, 0x0a /* Public */,
     214,    2, 2419,    2, 0x0a /* Public */,
     215,    2, 2424,    2, 0x0a /* Public */,
     216,    2, 2429,    2, 0x0a /* Public */,
     217,    2, 2434,    2, 0x0a /* Public */,
     218,    2, 2439,    2, 0x0a /* Public */,
     219,    2, 2444,    2, 0x0a /* Public */,
     220,    2, 2449,    2, 0x0a /* Public */,
     221,    2, 2454,    2, 0x0a /* Public */,
     222,    2, 2459,    2, 0x0a /* Public */,
     223,    2, 2464,    2, 0x0a /* Public */,
     224,    2, 2469,    2, 0x0a /* Public */,
     225,    2, 2474,    2, 0x0a /* Public */,
     226,    2, 2479,    2, 0x0a /* Public */,
     227,    2, 2484,    2, 0x0a /* Public */,
     228,    2, 2489,    2, 0x0a /* Public */,
     229,    2, 2494,    2, 0x0a /* Public */,
     230,    2, 2499,    2, 0x0a /* Public */,
     231,    2, 2504,    2, 0x0a /* Public */,
     232,    2, 2509,    2, 0x0a /* Public */,
     233,    2, 2514,    2, 0x0a /* Public */,
     234,    2, 2519,    2, 0x0a /* Public */,
     235,    2, 2524,    2, 0x0a /* Public */,
     236,    1, 2529,    2, 0x0a /* Public */,
     237,    1, 2532,    2, 0x0a /* Public */,
     238,    1, 2535,    2, 0x0a /* Public */,
     239,    1, 2538,    2, 0x0a /* Public */,
     240,    1, 2541,    2, 0x0a /* Public */,
     241,    1, 2544,    2, 0x0a /* Public */,
     242,    1, 2547,    2, 0x0a /* Public */,
     243,    1, 2550,    2, 0x0a /* Public */,
     244,    1, 2553,    2, 0x0a /* Public */,
     245,    1, 2556,    2, 0x0a /* Public */,
     246,    1, 2559,    2, 0x0a /* Public */,
     247,    1, 2562,    2, 0x0a /* Public */,
     248,    1, 2565,    2, 0x0a /* Public */,
     249,    1, 2568,    2, 0x0a /* Public */,
     250,    1, 2571,    2, 0x0a /* Public */,
     251,    1, 2574,    2, 0x0a /* Public */,
     252,    1, 2577,    2, 0x0a /* Public */,
     253,    1, 2580,    2, 0x0a /* Public */,
     254,    1, 2583,    2, 0x0a /* Public */,
     255,    1, 2586,    2, 0x0a /* Public */,
     256,    1, 2589,    2, 0x0a /* Public */,
     257,    1, 2592,    2, 0x0a /* Public */,
     258,    1, 2595,    2, 0x0a /* Public */,
     259,    1, 2598,    2, 0x0a /* Public */,
     260,    1, 2601,    2, 0x0a /* Public */,
     261,    1, 2604,    2, 0x0a /* Public */,
     262,    1, 2607,    2, 0x0a /* Public */,
     263,    1, 2610,    2, 0x0a /* Public */,
     264,    1, 2613,    2, 0x0a /* Public */,
     265,    1, 2616,    2, 0x0a /* Public */,
     266,    1, 2619,    2, 0x0a /* Public */,
     267,    1, 2622,    2, 0x0a /* Public */,
     268,    1, 2625,    2, 0x0a /* Public */,
     269,    1, 2628,    2, 0x0a /* Public */,
     270,    1, 2631,    2, 0x0a /* Public */,
     271,    1, 2634,    2, 0x0a /* Public */,
     272,    1, 2637,    2, 0x0a /* Public */,
     273,    1, 2640,    2, 0x0a /* Public */,
     274,    1, 2643,    2, 0x0a /* Public */,
     275,    1, 2646,    2, 0x0a /* Public */,
     276,    1, 2649,    2, 0x0a /* Public */,
     277,    1, 2652,    2, 0x0a /* Public */,
     278,    1, 2655,    2, 0x0a /* Public */,
     279,    1, 2658,    2, 0x0a /* Public */,
     280,    1, 2661,    2, 0x0a /* Public */,
     281,    1, 2664,    2, 0x0a /* Public */,
     282,    1, 2667,    2, 0x0a /* Public */,
     283,    1, 2670,    2, 0x0a /* Public */,
     284,    1, 2673,    2, 0x0a /* Public */,
     285,    1, 2676,    2, 0x0a /* Public */,
     286,    1, 2679,    2, 0x0a /* Public */,
     287,    1, 2682,    2, 0x0a /* Public */,
     288,    1, 2685,    2, 0x0a /* Public */,
     289,    1, 2688,    2, 0x0a /* Public */,
     290,    1, 2691,    2, 0x0a /* Public */,
     291,    1, 2694,    2, 0x0a /* Public */,
     292,    1, 2697,    2, 0x0a /* Public */,
     293,    1, 2700,    2, 0x0a /* Public */,
     294,    1, 2703,    2, 0x0a /* Public */,
     295,    1, 2706,    2, 0x0a /* Public */,
     296,    1, 2709,    2, 0x0a /* Public */,
     297,    1, 2712,    2, 0x0a /* Public */,
     298,    1, 2715,    2, 0x0a /* Public */,
     299,    1, 2718,    2, 0x0a /* Public */,
     300,    1, 2721,    2, 0x0a /* Public */,
     301,    1, 2724,    2, 0x0a /* Public */,
     302,    1, 2727,    2, 0x0a /* Public */,
     303,    1, 2730,    2, 0x0a /* Public */,
     304,    1, 2733,    2, 0x0a /* Public */,
     305,    1, 2736,    2, 0x0a /* Public */,
     306,    1, 2739,    2, 0x0a /* Public */,
     307,    1, 2742,    2, 0x0a /* Public */,
     308,    1, 2745,    2, 0x0a /* Public */,
     309,    1, 2748,    2, 0x0a /* Public */,
     310,    1, 2751,    2, 0x0a /* Public */,
     311,    1, 2754,    2, 0x0a /* Public */,
     312,    1, 2757,    2, 0x0a /* Public */,
     313,    1, 2760,    2, 0x0a /* Public */,
     314,    1, 2763,    2, 0x0a /* Public */,

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
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void, QMetaType::UChar,   60,
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
    QMetaType::Void, QMetaType::UShort,    3,
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
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::Short,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UShort,    5,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar,  148,    4,

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
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void, QMetaType::UChar,   60,
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
    QMetaType::Void, QMetaType::QString,  148,
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void, QMetaType::UChar,   60,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::Short,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UShort,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::Short,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UShort,    5,
    QMetaType::Void, QMetaType::UChar,    5,

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
        case 74: _t->apply_COUNTERS_UPD_RATE_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 75: _t->apply_EXTENDED_READOUT_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 76: _t->apply_SC_SUM_SIDES_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 77: _t->apply_C_SUM_SIDES_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 78: _t->apply_ADD_C_DELAY_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 79: _t->apply_RES_SW_1_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 80: _t->apply_RES_SW_2_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 81: _t->apply_RES_SW_3_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 82: _t->apply_RES_SW_4_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 83: _t->set_DELAY_A_requested((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 84: _t->set_DELAY_C_requested((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 85: _t->set_VTIME_LOW_requested((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 86: _t->set_VTIME_HIGH_requested((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 87: _t->set_SC_LEVEL_A_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 88: _t->set_SC_LEVEL_C_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 89: _t->set_C_LEVEL_A_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 90: _t->set_C_LEVEL_C_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 91: _t->set_CH_MASK_A_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 92: _t->set_CH_MASK_C_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 93: _t->apply_DELAY_A_requested(); break;
        case 94: _t->apply_DELAY_C_requested(); break;
        case 95: _t->apply_VTIME_LOW_requested(); break;
        case 96: _t->apply_VTIME_HIGH_requested(); break;
        case 97: _t->apply_SC_LEVEL_A_requested(); break;
        case 98: _t->apply_SC_LEVEL_C_requested(); break;
        case 99: _t->apply_C_LEVEL_A_requested(); break;
        case 100: _t->apply_C_LEVEL_C_requested(); break;
        case 101: _t->apply_CH_MASK_A_requested(); break;
        case 102: _t->apply_CH_MASK_C_requested(); break;
        case 103: _t->apply_RESET_SYSTEM_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 104: _t->set_OR_A_SIGN_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 105: _t->set_OR_A_RATE_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 106: _t->set_OR_C_SIGN_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 107: _t->set_OR_C_RATE_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 108: _t->set_SC_SIGN_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 109: _t->set_SC_RATE_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 110: _t->set_C_SIGN_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 111: _t->set_C_RATE_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 112: _t->set_V_SIGN_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 113: _t->set_V_RATE_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 114: _t->apply_OR_A_SIGN_requested(); break;
        case 115: _t->apply_OR_A_RATE_requested(); break;
        case 116: _t->apply_OR_C_SIGN_requested(); break;
        case 117: _t->apply_OR_C_RATE_requested(); break;
        case 118: _t->apply_SC_SIGN_requested(); break;
        case 119: _t->apply_SC_RATE_requested(); break;
        case 120: _t->apply_C_SIGN_requested(); break;
        case 121: _t->apply_C_RATE_requested(); break;
        case 122: _t->apply_V_SIGN_requested(); break;
        case 123: _t->apply_V_RATE_requested(); break;
        case 124: _t->apply_OR_A_ENABLED_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 125: _t->apply_OR_C_ENABLED_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 126: _t->apply_SC_ENABLED_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 127: _t->apply_C_ENABLED_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 128: _t->apply_V_ENABLED_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 129: _t->apply_LASER_ON_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 130: _t->apply_LASER_DIV_requested(); break;
        case 131: _t->apply_LASER_DELAY_requested(); break;
        case 132: _t->apply_LASER_PATTERN_1_requested(); break;
        case 133: _t->apply_LASER_PATTERN_0_requested(); break;
        case 134: _t->apply_ATTEN_VALUE_requested(); break;
        case 135: _t->set_LASER_DIV_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 136: _t->set_LASER_DELAY_requested((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 137: _t->set_LASER_PATTERN_1_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 138: _t->set_LASER_PATTERN_0_requested((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 139: _t->set_ATTEN_VALUE_requested((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 140: _t->apply_SET_OPTIONCODE_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 141: _t->update_act_ADC_ZERO((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 142: _t->update_act_ADC_DELAY((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 143: _t->update_act_ADC0_OFFSET((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 144: _t->update_act_ADC1_OFFSET((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 145: _t->update_act_ADC0_RANGE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 146: _t->update_act_ADC1_RANGE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 147: _t->update_act_TIME_ALIGN((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 148: _t->update_act_CFD_THRESHOLD((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 149: _t->update_act_CFD_ZERO((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 150: _t->update_act_THRESHOLD_CALIBR((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 151: _t->update_new_ADC_ZERO((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 152: _t->update_new_ADC_DELAY((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 153: _t->update_new_ADC0_OFFSET((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 154: _t->update_new_ADC1_OFFSET((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 155: _t->update_new_ADC0_RANGE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 156: _t->update_new_ADC1_RANGE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 157: _t->update_new_TIME_ALIGN((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 158: _t->update_new_CFD_THRESHOLD((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 159: _t->update_new_CFD_ZERO((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 160: _t->update_new_THRESHOLD_CALIBR((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3]))); break;
        case 161: _t->update_act_ADC0_MEANAMPL((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 162: _t->update_act_ADC1_MEANAMPL((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 163: _t->update_act_ADC0_ZEROLVL((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 164: _t->update_act_ADC1_ZEROLVL((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 165: _t->update_act_RAW_TDC_DATA((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 166: _t->update_act_CNT_CFD((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 167: _t->update_act_CNT_CFD_RATE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 168: _t->update_act_CNT_TRG((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 169: _t->update_act_CNT_TRG_RATE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 170: _t->update_act_TG_PATTERN_1((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 171: _t->update_act_TG_PATTERN_0((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 172: _t->update_act_TG_CONT_VALUE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 173: _t->update_act_TG_BUNCH_FREQ((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 174: _t->update_act_TG_FREQ_OFFSET((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 175: _t->update_act_TG_MODE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 176: _t->update_act_HB_RESPONSE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 177: _t->update_act_DG_MODE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 178: _t->update_act_DG_TRG_RESPOND_MASK((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 179: _t->update_act_DG_BUNCH_PATTERN((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 180: _t->update_act_DG_BUNCH_FREQ((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 181: _t->update_act_DG_FREQ_OFFSET((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 182: _t->update_act_RDH_FEE_ID((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 183: _t->update_act_RDH_PAR((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 184: _t->update_act_RDH_MAX_PAYLOAD((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 185: _t->update_act_RDH_DET_FIELD((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 186: _t->update_act_CRU_TRG_COMPARE_DELAY((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 187: _t->update_act_BCID_DELAY((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 188: _t->update_act_DATA_SEL_TRG_MASK((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 189: _t->update_act_BITS((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 190: _t->update_act_READOUT_MODE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 191: _t->update_act_BCID_SYNC_MODE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 192: _t->update_act_RX_PHASE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 193: _t->update_act_CRU_ORBIT((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 194: _t->update_act_CRU_BC((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 195: _t->update_act_RAW_FIFO((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 196: _t->update_act_SEL_FIFO((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 197: _t->update_act_SEL_FIRST_HIT_DROPPED_ORBIT((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 198: _t->update_act_SEL_LAST_HIT_DROPPED_ORBIT((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 199: _t->update_act_SEL_HITS_DROPPED((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 200: _t->update_act_READOUT_RATE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 201: _t->update_act_OR_GATE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 202: _t->update_act_CFD_SATR((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 203: _t->update_act_CH_MASK((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 204: _t->update_new_TG_PATTERN_1((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 205: _t->update_new_TG_PATTERN_0((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 206: _t->update_new_TG_CONT_VALUE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 207: _t->update_new_TG_BUNCH_FREQ((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 208: _t->update_new_TG_FREQ_OFFSET((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 209: _t->update_new_DG_TRG_RESPOND_MASK((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 210: _t->update_new_DG_BUNCH_PATTERN((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 211: _t->update_new_DG_BUNCH_FREQ((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 212: _t->update_new_DG_FREQ_OFFSET((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 213: _t->update_new_RDH_FEE_ID((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 214: _t->update_new_RDH_PAR((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 215: _t->update_new_RDH_MAX_PAYLOAD((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 216: _t->update_new_RDH_DET_FIELD((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 217: _t->update_new_CRU_TRG_COMPARE_DELAY((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 218: _t->update_new_BCID_DELAY((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 219: _t->update_new_DATA_SEL_TRG_MASK((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 220: _t->update_new_OR_GATE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 221: _t->update_new_CFD_SATR((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 222: _t->update_new_CH_MASK((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 223: _t->update_act_LINK_STATUS((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 224: _t->update_act_BOARD_STATUS((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 225: _t->update_act_TEMPERATURE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 226: _t->update_act_SERIAL_NUM((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 227: _t->update_act_FW_VERSION((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 228: _t->update_act_COUNTERS_UPD_RATE((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 229: _t->update_act_EXTENDED_READOUT((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 230: _t->update_act_SC_SUM_SIDES((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 231: _t->update_act_C_SUM_SIDES((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 232: _t->update_act_ADD_C_DELAY((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 233: _t->update_act_RES_SW_1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 234: _t->update_act_RES_SW_2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 235: _t->update_act_RES_SW_3((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 236: _t->update_act_RES_SW_4((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 237: _t->update_new_DELAY_A((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 238: _t->update_new_DELAY_C((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 239: _t->update_new_VTIME_LOW((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 240: _t->update_new_VTIME_HIGH((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 241: _t->update_new_SC_LEVEL_A((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 242: _t->update_new_SC_LEVEL_C((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 243: _t->update_new_C_LEVEL_A((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 244: _t->update_new_C_LEVEL_C((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 245: _t->update_new_CH_MASK_A((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 246: _t->update_new_CH_MASK_C((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 247: _t->update_act_DELAY_A((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 248: _t->update_act_DELAY_C((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 249: _t->update_act_VTIME_LOW((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 250: _t->update_act_VTIME_HIGH((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 251: _t->update_act_SC_LEVEL_A((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 252: _t->update_act_SC_LEVEL_C((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 253: _t->update_act_C_LEVEL_A((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 254: _t->update_act_C_LEVEL_C((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 255: _t->update_act_CH_MASK_A((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 256: _t->update_act_CH_MASK_C((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 257: _t->update_act_SIDE_A_STATUS((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 258: _t->update_act_SIDE_C_STATUS((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 259: _t->update_act_CNT_OR_A((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 260: _t->update_act_CNT_OR_A_RATE((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 261: _t->update_act_CNT_OR_C((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 262: _t->update_act_CNT_OR_C_RATE((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 263: _t->update_act_CNT_SC((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 264: _t->update_act_CNT_SC_RATE((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 265: _t->update_act_CNT_C((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 266: _t->update_act_CNT_C_RATE((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 267: _t->update_act_CNT_V((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 268: _t->update_act_CNT_V_RATE((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 269: _t->update_new_OR_A_SIGN((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 270: _t->update_new_OR_A_RATE((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 271: _t->update_new_OR_C_SIGN((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 272: _t->update_new_OR_C_RATE((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 273: _t->update_new_SC_SIGN((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 274: _t->update_new_SC_RATE((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 275: _t->update_new_C_SIGN((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 276: _t->update_new_C_RATE((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 277: _t->update_new_V_SIGN((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 278: _t->update_new_V_RATE((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 279: _t->update_act_OR_A_SIGN((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 280: _t->update_act_OR_A_RATE((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 281: _t->update_act_OR_C_SIGN((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 282: _t->update_act_OR_C_RATE((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 283: _t->update_act_SC_SIGN((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 284: _t->update_act_SC_RATE((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 285: _t->update_act_C_SIGN((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 286: _t->update_act_C_RATE((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 287: _t->update_act_V_SIGN((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 288: _t->update_act_V_RATE((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 289: _t->update_act_STATUS_OPTIONCODE((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 290: _t->update_act_OR_A_ENABLED((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 291: _t->update_act_OR_C_ENABLED((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 292: _t->update_act_SC_ENABLED((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 293: _t->update_act_C_ENABLED((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 294: _t->update_act_V_ENABLED((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 295: _t->update_act_LASER_ON((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 296: _t->update_act_LASER_DIV((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 297: _t->update_act_LASER_DELAY((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 298: _t->update_act_LASER_PATTERN_1((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 299: _t->update_act_LASER_PATTERN_0((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 300: _t->update_act_ATTEN_VALUE((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 301: _t->update_new_LASER_DIV((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 302: _t->update_new_LASER_DELAY((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 303: _t->update_new_LASER_PATTERN_1((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 304: _t->update_new_LASER_PATTERN_0((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 305: _t->update_new_ATTEN_VALUE((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 306: _t->update_act_ATTEN_STATUS((*reinterpret_cast< quint8(*)>(_a[1]))); break;
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
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_COUNTERS_UPD_RATE_requested)) {
                *result = 74;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_EXTENDED_READOUT_requested)) {
                *result = 75;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_SC_SUM_SIDES_requested)) {
                *result = 76;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_C_SUM_SIDES_requested)) {
                *result = 77;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_ADD_C_DELAY_requested)) {
                *result = 78;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RES_SW_1_requested)) {
                *result = 79;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RES_SW_2_requested)) {
                *result = 80;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RES_SW_3_requested)) {
                *result = 81;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RES_SW_4_requested)) {
                *result = 82;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_DELAY_A_requested)) {
                *result = 83;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_DELAY_C_requested)) {
                *result = 84;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_VTIME_LOW_requested)) {
                *result = 85;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_VTIME_HIGH_requested)) {
                *result = 86;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_SC_LEVEL_A_requested)) {
                *result = 87;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_SC_LEVEL_C_requested)) {
                *result = 88;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_C_LEVEL_A_requested)) {
                *result = 89;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_C_LEVEL_C_requested)) {
                *result = 90;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_CH_MASK_A_requested)) {
                *result = 91;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_CH_MASK_C_requested)) {
                *result = 92;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_DELAY_A_requested)) {
                *result = 93;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_DELAY_C_requested)) {
                *result = 94;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_VTIME_LOW_requested)) {
                *result = 95;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_VTIME_HIGH_requested)) {
                *result = 96;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_SC_LEVEL_A_requested)) {
                *result = 97;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_SC_LEVEL_C_requested)) {
                *result = 98;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_C_LEVEL_A_requested)) {
                *result = 99;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_C_LEVEL_C_requested)) {
                *result = 100;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_CH_MASK_A_requested)) {
                *result = 101;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_CH_MASK_C_requested)) {
                *result = 102;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RESET_SYSTEM_requested)) {
                *result = 103;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_OR_A_SIGN_requested)) {
                *result = 104;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_OR_A_RATE_requested)) {
                *result = 105;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_OR_C_SIGN_requested)) {
                *result = 106;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_OR_C_RATE_requested)) {
                *result = 107;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_SC_SIGN_requested)) {
                *result = 108;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_SC_RATE_requested)) {
                *result = 109;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_C_SIGN_requested)) {
                *result = 110;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_C_RATE_requested)) {
                *result = 111;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_V_SIGN_requested)) {
                *result = 112;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_V_RATE_requested)) {
                *result = 113;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_OR_A_SIGN_requested)) {
                *result = 114;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_OR_A_RATE_requested)) {
                *result = 115;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_OR_C_SIGN_requested)) {
                *result = 116;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_OR_C_RATE_requested)) {
                *result = 117;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_SC_SIGN_requested)) {
                *result = 118;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_SC_RATE_requested)) {
                *result = 119;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_C_SIGN_requested)) {
                *result = 120;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_C_RATE_requested)) {
                *result = 121;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_V_SIGN_requested)) {
                *result = 122;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_V_RATE_requested)) {
                *result = 123;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_OR_A_ENABLED_requested)) {
                *result = 124;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_OR_C_ENABLED_requested)) {
                *result = 125;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_SC_ENABLED_requested)) {
                *result = 126;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_C_ENABLED_requested)) {
                *result = 127;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_V_ENABLED_requested)) {
                *result = 128;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_LASER_ON_requested)) {
                *result = 129;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_LASER_DIV_requested)) {
                *result = 130;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_LASER_DELAY_requested)) {
                *result = 131;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_LASER_PATTERN_1_requested)) {
                *result = 132;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_LASER_PATTERN_0_requested)) {
                *result = 133;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_ATTEN_VALUE_requested)) {
                *result = 134;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_LASER_DIV_requested)) {
                *result = 135;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_LASER_DELAY_requested)) {
                *result = 136;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_LASER_PATTERN_1_requested)) {
                *result = 137;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_LASER_PATTERN_0_requested)) {
                *result = 138;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_ATTEN_VALUE_requested)) {
                *result = 139;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_SET_OPTIONCODE_requested)) {
                *result = 140;
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
        if (_id < 307)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 307;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 307)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 307;
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

// SIGNAL 74
void MyDimServer::apply_COUNTERS_UPD_RATE_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void MyDimServer::apply_EXTENDED_READOUT_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 75, _a);
}

// SIGNAL 76
void MyDimServer::apply_SC_SUM_SIDES_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 76, _a);
}

// SIGNAL 77
void MyDimServer::apply_C_SUM_SIDES_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 77, _a);
}

// SIGNAL 78
void MyDimServer::apply_ADD_C_DELAY_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 78, _a);
}

// SIGNAL 79
void MyDimServer::apply_RES_SW_1_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 79, _a);
}

// SIGNAL 80
void MyDimServer::apply_RES_SW_2_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 80, _a);
}

// SIGNAL 81
void MyDimServer::apply_RES_SW_3_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 81, _a);
}

// SIGNAL 82
void MyDimServer::apply_RES_SW_4_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 82, _a);
}

// SIGNAL 83
void MyDimServer::set_DELAY_A_requested(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 83, _a);
}

// SIGNAL 84
void MyDimServer::set_DELAY_C_requested(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 84, _a);
}

// SIGNAL 85
void MyDimServer::set_VTIME_LOW_requested(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 85, _a);
}

// SIGNAL 86
void MyDimServer::set_VTIME_HIGH_requested(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 86, _a);
}

// SIGNAL 87
void MyDimServer::set_SC_LEVEL_A_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 87, _a);
}

// SIGNAL 88
void MyDimServer::set_SC_LEVEL_C_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 88, _a);
}

// SIGNAL 89
void MyDimServer::set_C_LEVEL_A_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 89, _a);
}

// SIGNAL 90
void MyDimServer::set_C_LEVEL_C_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 90, _a);
}

// SIGNAL 91
void MyDimServer::set_CH_MASK_A_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 91, _a);
}

// SIGNAL 92
void MyDimServer::set_CH_MASK_C_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 92, _a);
}

// SIGNAL 93
void MyDimServer::apply_DELAY_A_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 93, nullptr);
}

// SIGNAL 94
void MyDimServer::apply_DELAY_C_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 94, nullptr);
}

// SIGNAL 95
void MyDimServer::apply_VTIME_LOW_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 95, nullptr);
}

// SIGNAL 96
void MyDimServer::apply_VTIME_HIGH_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 96, nullptr);
}

// SIGNAL 97
void MyDimServer::apply_SC_LEVEL_A_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 97, nullptr);
}

// SIGNAL 98
void MyDimServer::apply_SC_LEVEL_C_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 98, nullptr);
}

// SIGNAL 99
void MyDimServer::apply_C_LEVEL_A_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 99, nullptr);
}

// SIGNAL 100
void MyDimServer::apply_C_LEVEL_C_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 100, nullptr);
}

// SIGNAL 101
void MyDimServer::apply_CH_MASK_A_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 101, nullptr);
}

// SIGNAL 102
void MyDimServer::apply_CH_MASK_C_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 102, nullptr);
}

// SIGNAL 103
void MyDimServer::apply_RESET_SYSTEM_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 103, _a);
}

// SIGNAL 104
void MyDimServer::set_OR_A_SIGN_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 104, _a);
}

// SIGNAL 105
void MyDimServer::set_OR_A_RATE_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 105, _a);
}

// SIGNAL 106
void MyDimServer::set_OR_C_SIGN_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 106, _a);
}

// SIGNAL 107
void MyDimServer::set_OR_C_RATE_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 107, _a);
}

// SIGNAL 108
void MyDimServer::set_SC_SIGN_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 108, _a);
}

// SIGNAL 109
void MyDimServer::set_SC_RATE_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 109, _a);
}

// SIGNAL 110
void MyDimServer::set_C_SIGN_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 110, _a);
}

// SIGNAL 111
void MyDimServer::set_C_RATE_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 111, _a);
}

// SIGNAL 112
void MyDimServer::set_V_SIGN_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 112, _a);
}

// SIGNAL 113
void MyDimServer::set_V_RATE_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 113, _a);
}

// SIGNAL 114
void MyDimServer::apply_OR_A_SIGN_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 114, nullptr);
}

// SIGNAL 115
void MyDimServer::apply_OR_A_RATE_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 115, nullptr);
}

// SIGNAL 116
void MyDimServer::apply_OR_C_SIGN_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 116, nullptr);
}

// SIGNAL 117
void MyDimServer::apply_OR_C_RATE_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 117, nullptr);
}

// SIGNAL 118
void MyDimServer::apply_SC_SIGN_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 118, nullptr);
}

// SIGNAL 119
void MyDimServer::apply_SC_RATE_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 119, nullptr);
}

// SIGNAL 120
void MyDimServer::apply_C_SIGN_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 120, nullptr);
}

// SIGNAL 121
void MyDimServer::apply_C_RATE_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 121, nullptr);
}

// SIGNAL 122
void MyDimServer::apply_V_SIGN_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 122, nullptr);
}

// SIGNAL 123
void MyDimServer::apply_V_RATE_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 123, nullptr);
}

// SIGNAL 124
void MyDimServer::apply_OR_A_ENABLED_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 124, _a);
}

// SIGNAL 125
void MyDimServer::apply_OR_C_ENABLED_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 125, _a);
}

// SIGNAL 126
void MyDimServer::apply_SC_ENABLED_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 126, _a);
}

// SIGNAL 127
void MyDimServer::apply_C_ENABLED_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 127, _a);
}

// SIGNAL 128
void MyDimServer::apply_V_ENABLED_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 128, _a);
}

// SIGNAL 129
void MyDimServer::apply_LASER_ON_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 129, _a);
}

// SIGNAL 130
void MyDimServer::apply_LASER_DIV_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 130, nullptr);
}

// SIGNAL 131
void MyDimServer::apply_LASER_DELAY_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 131, nullptr);
}

// SIGNAL 132
void MyDimServer::apply_LASER_PATTERN_1_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 132, nullptr);
}

// SIGNAL 133
void MyDimServer::apply_LASER_PATTERN_0_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 133, nullptr);
}

// SIGNAL 134
void MyDimServer::apply_ATTEN_VALUE_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 134, nullptr);
}

// SIGNAL 135
void MyDimServer::set_LASER_DIV_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 135, _a);
}

// SIGNAL 136
void MyDimServer::set_LASER_DELAY_requested(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 136, _a);
}

// SIGNAL 137
void MyDimServer::set_LASER_PATTERN_1_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 137, _a);
}

// SIGNAL 138
void MyDimServer::set_LASER_PATTERN_0_requested(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 138, _a);
}

// SIGNAL 139
void MyDimServer::set_ATTEN_VALUE_requested(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 139, _a);
}

// SIGNAL 140
void MyDimServer::apply_SET_OPTIONCODE_requested(quint8 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 140, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
