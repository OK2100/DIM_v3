/****************************************************************************
** Meta object code from reading C++ file 'emulator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../DIM_v3/emulator.h"
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
    QByteArrayData data[93];
    char stringdata0[2815];
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
QT_MOC_LITERAL(63, 1861, 26), // "update_request_act_OR_GATE"
QT_MOC_LITERAL(64, 1888, 27), // "update_request_act_CFD_SATR"
QT_MOC_LITERAL(65, 1916, 26), // "update_request_act_CH_MASK"
QT_MOC_LITERAL(66, 1943, 27), // "update_request_act_ADC_ZERO"
QT_MOC_LITERAL(67, 1971, 28), // "update_request_act_ADC_DELAY"
QT_MOC_LITERAL(68, 2000, 30), // "update_request_act_ADC0_OFFSET"
QT_MOC_LITERAL(69, 2031, 30), // "update_request_act_ADC1_OFFSET"
QT_MOC_LITERAL(70, 2062, 29), // "update_request_act_ADC0_RANGE"
QT_MOC_LITERAL(71, 2092, 29), // "update_request_act_ADC1_RANGE"
QT_MOC_LITERAL(72, 2122, 29), // "update_request_act_TIME_ALIGN"
QT_MOC_LITERAL(73, 2152, 32), // "update_request_act_CFD_THRESHOLD"
QT_MOC_LITERAL(74, 2185, 27), // "update_request_act_CFD_ZERO"
QT_MOC_LITERAL(75, 2213, 35), // "update_request_act_THRESHOLD_..."
QT_MOC_LITERAL(76, 2249, 31), // "update_request_act_TG_PATTERN_1"
QT_MOC_LITERAL(77, 2281, 31), // "update_request_act_TG_PATTERN_0"
QT_MOC_LITERAL(78, 2313, 32), // "update_request_act_TG_CONT_VALUE"
QT_MOC_LITERAL(79, 2346, 32), // "update_request_act_TG_BUNCH_FREQ"
QT_MOC_LITERAL(80, 2379, 33), // "update_request_act_TG_FREQ_OF..."
QT_MOC_LITERAL(81, 2413, 38), // "update_request_act_DG_TRG_RES..."
QT_MOC_LITERAL(82, 2452, 35), // "update_request_act_DG_BUNCH_P..."
QT_MOC_LITERAL(83, 2488, 32), // "update_request_act_DG_BUNCH_FREQ"
QT_MOC_LITERAL(84, 2521, 33), // "update_request_act_DG_FREQ_OF..."
QT_MOC_LITERAL(85, 2555, 29), // "update_request_act_RDH_FEE_ID"
QT_MOC_LITERAL(86, 2585, 26), // "update_request_act_RDH_PAR"
QT_MOC_LITERAL(87, 2612, 34), // "update_request_act_RDH_MAX_PA..."
QT_MOC_LITERAL(88, 2647, 32), // "update_request_act_RDH_DET_FIELD"
QT_MOC_LITERAL(89, 2680, 40), // "update_request_act_CRU_TRG_CO..."
QT_MOC_LITERAL(90, 2721, 29), // "update_request_act_BCID_DELAY"
QT_MOC_LITERAL(91, 2751, 36), // "update_request_act_DATA_SEL_T..."
QT_MOC_LITERAL(92, 2788, 26) // "update_request_act_AlltoPM"

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
    "update_request_act_AlltoPM"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Emulator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      88,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      58,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  454,    2, 0x06 /* Public */,
       6,    3,  461,    2, 0x06 /* Public */,
       7,    3,  468,    2, 0x06 /* Public */,
       8,    3,  475,    2, 0x06 /* Public */,
       9,    3,  482,    2, 0x06 /* Public */,
      10,    3,  489,    2, 0x06 /* Public */,
      11,    3,  496,    2, 0x06 /* Public */,
      12,    3,  503,    2, 0x06 /* Public */,
      13,    3,  510,    2, 0x06 /* Public */,
      14,    3,  517,    2, 0x06 /* Public */,
      15,    3,  524,    2, 0x06 /* Public */,
      16,    3,  531,    2, 0x06 /* Public */,
      17,    3,  538,    2, 0x06 /* Public */,
      18,    3,  545,    2, 0x06 /* Public */,
      19,    3,  552,    2, 0x06 /* Public */,
      20,    3,  559,    2, 0x06 /* Public */,
      21,    3,  566,    2, 0x06 /* Public */,
      22,    3,  573,    2, 0x06 /* Public */,
      23,    3,  580,    2, 0x06 /* Public */,
      24,    2,  587,    2, 0x06 /* Public */,
      25,    2,  592,    2, 0x06 /* Public */,
      26,    2,  597,    2, 0x06 /* Public */,
      27,    2,  602,    2, 0x06 /* Public */,
      28,    2,  607,    2, 0x06 /* Public */,
      29,    2,  612,    2, 0x06 /* Public */,
      30,    2,  617,    2, 0x06 /* Public */,
      31,    2,  622,    2, 0x06 /* Public */,
      32,    2,  627,    2, 0x06 /* Public */,
      33,    2,  632,    2, 0x06 /* Public */,
      34,    2,  637,    2, 0x06 /* Public */,
      35,    2,  642,    2, 0x06 /* Public */,
      36,    2,  647,    2, 0x06 /* Public */,
      37,    2,  652,    2, 0x06 /* Public */,
      38,    2,  657,    2, 0x06 /* Public */,
      39,    2,  662,    2, 0x06 /* Public */,
      40,    2,  667,    2, 0x06 /* Public */,
      41,    2,  672,    2, 0x06 /* Public */,
      42,    2,  677,    2, 0x06 /* Public */,
      43,    2,  682,    2, 0x06 /* Public */,
      44,    2,  687,    2, 0x06 /* Public */,
      45,    2,  692,    2, 0x06 /* Public */,
      46,    2,  697,    2, 0x06 /* Public */,
      47,    2,  702,    2, 0x06 /* Public */,
      48,    2,  707,    2, 0x06 /* Public */,
      49,    2,  712,    2, 0x06 /* Public */,
      50,    2,  717,    2, 0x06 /* Public */,
      51,    2,  722,    2, 0x06 /* Public */,
      52,    2,  727,    2, 0x06 /* Public */,
      53,    2,  732,    2, 0x06 /* Public */,
      54,    2,  737,    2, 0x06 /* Public */,
      55,    2,  742,    2, 0x06 /* Public */,
      56,    2,  747,    2, 0x06 /* Public */,
      57,    2,  752,    2, 0x06 /* Public */,
      58,    2,  757,    2, 0x06 /* Public */,
      59,    2,  762,    2, 0x06 /* Public */,
      60,    2,  767,    2, 0x06 /* Public */,
      61,    2,  772,    2, 0x06 /* Public */,
      62,    2,  777,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      63,    1,  782,    2, 0x0a /* Public */,
      64,    1,  785,    2, 0x0a /* Public */,
      65,    1,  788,    2, 0x0a /* Public */,
      66,    2,  791,    2, 0x0a /* Public */,
      67,    2,  796,    2, 0x0a /* Public */,
      68,    2,  801,    2, 0x0a /* Public */,
      69,    2,  806,    2, 0x0a /* Public */,
      70,    2,  811,    2, 0x0a /* Public */,
      71,    2,  816,    2, 0x0a /* Public */,
      72,    2,  821,    2, 0x0a /* Public */,
      73,    2,  826,    2, 0x0a /* Public */,
      74,    2,  831,    2, 0x0a /* Public */,
      75,    2,  836,    2, 0x0a /* Public */,
      76,    1,  841,    2, 0x0a /* Public */,
      77,    1,  844,    2, 0x0a /* Public */,
      78,    1,  847,    2, 0x0a /* Public */,
      79,    1,  850,    2, 0x0a /* Public */,
      80,    1,  853,    2, 0x0a /* Public */,
      81,    1,  856,    2, 0x0a /* Public */,
      82,    1,  859,    2, 0x0a /* Public */,
      83,    1,  862,    2, 0x0a /* Public */,
      84,    1,  865,    2, 0x0a /* Public */,
      85,    1,  868,    2, 0x0a /* Public */,
      86,    1,  871,    2, 0x0a /* Public */,
      87,    1,  874,    2, 0x0a /* Public */,
      88,    1,  877,    2, 0x0a /* Public */,
      89,    1,  880,    2, 0x0a /* Public */,
      90,    1,  883,    2, 0x0a /* Public */,
      91,    1,  886,    2, 0x0a /* Public */,
      92,    1,  889,    2, 0x0a /* Public */,

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
        case 58: _t->update_request_act_OR_GATE((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 59: _t->update_request_act_CFD_SATR((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 60: _t->update_request_act_CH_MASK((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 61: _t->update_request_act_ADC_ZERO((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 62: _t->update_request_act_ADC_DELAY((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 63: _t->update_request_act_ADC0_OFFSET((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 64: _t->update_request_act_ADC1_OFFSET((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 65: _t->update_request_act_ADC0_RANGE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 66: _t->update_request_act_ADC1_RANGE((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 67: _t->update_request_act_TIME_ALIGN((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 68: _t->update_request_act_CFD_THRESHOLD((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 69: _t->update_request_act_CFD_ZERO((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 70: _t->update_request_act_THRESHOLD_CALIBR((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 71: _t->update_request_act_TG_PATTERN_1((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 72: _t->update_request_act_TG_PATTERN_0((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 73: _t->update_request_act_TG_CONT_VALUE((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 74: _t->update_request_act_TG_BUNCH_FREQ((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 75: _t->update_request_act_TG_FREQ_OFFSET((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 76: _t->update_request_act_DG_TRG_RESPOND_MASK((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 77: _t->update_request_act_DG_BUNCH_PATTERN((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 78: _t->update_request_act_DG_BUNCH_FREQ((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 79: _t->update_request_act_DG_FREQ_OFFSET((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 80: _t->update_request_act_RDH_FEE_ID((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 81: _t->update_request_act_RDH_PAR((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 82: _t->update_request_act_RDH_MAX_PAYLOAD((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 83: _t->update_request_act_RDH_DET_FIELD((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 84: _t->update_request_act_CRU_TRG_COMPARE_DELAY((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 85: _t->update_request_act_BCID_DELAY((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 86: _t->update_request_act_DATA_SEL_TRG_MASK((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 87: _t->update_request_act_AlltoPM((*reinterpret_cast< quint16(*)>(_a[1]))); break;
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
        if (_id < 88)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 88;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 88)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 88;
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
