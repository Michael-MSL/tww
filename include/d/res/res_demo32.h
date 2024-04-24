#ifndef RES_DEMO32_H
#define RES_DEMO32_H

#include "global.h"

enum DEMO32_RES_FILE_ID {
    /* STB */
    DEMO32_STB_PRAY_KOKIRI=0x0,
    
    /* BCKS */
    DEMO32_BCK_15_CB_CUT10_PLAY_L=0x2,
    DEMO32_BCK_15_CB_CUT10_TAMESHI_O=0x3,
    DEMO32_BCK_15_CB_CUT21A_PLAYEND_O=0x4,
    DEMO32_BCK_30_FD_LOOP_L=0x5,
    DEMO32_BCK_15_CB_CUT21B_FURIAGE_O=0xC,
    DEMO32_BCK_15_CB_CUT22_WAIT_L=0xD,
    DEMO32_BCK_15_CB_CUT2_NAKU_L=0xE,
    DEMO32_BCK_15_CB_CUT2_TYAKUTI_O=0xF,
    DEMO32_BCK_15_CB_CUT7_HA_O=0x10,
    DEMO32_BCK_15_CB_CUT7_JUMP_L=0x11,
    DEMO32_BCK_15_CB_CUT8_BIGJUMP_O=0x12,
    DEMO32_BCK_15_CB_CUT8_TYAKUTI_O=0x13,
    DEMO32_BCK_15_CB_CUT9_TURN_O=0x14,
    DEMO32_BCK_15_CB_CUT9_WAIT_L=0x15,
    DEMO32_BCK_21_SWMS_CUT1_O=0x16,
    DEMO32_BCK_29_SWMS_MSHENKA_O=0x17,
    DEMO32_BCK_31_CB_CUT01_PLAY_L=0x1E,
    DEMO32_BCK_31_FD_CUT01_PLAY_L=0x1F,
    DEMO32_BCK_31_FD_CUT07_OZIGI_O=0x20,
    DEMO32_BCK_31_FD_CUT07_OZIGIWAIT_L=0x21,
    DEMO32_BCK_MASTERSW_LV1_2=0x31,
    
    /* BTP */
    DEMO32_BTP_30_FD_LOOP_L=0x6,
    DEMO32_BTP_31_FD_CUT01_PLAY_L=0x22,
    DEMO32_BTP_31_FD_CUT07_OZIGI_O=0x23,
    DEMO32_BTP_31_FD_CUT07_OZIGIWAIT_L=0x24,
    
    /* BRK */
    DEMO32_BRK_30_FD_TOIKAKEB2_L=0x7,
    DEMO32_BRK_30_FD_TOIKAKE2_O=0x8,
    DEMO32_BRK_30_FD_LOOP_L=0x9,
    DEMO32_BRK_GDEMO19_TF00=0x18,
    DEMO32_BRK_GDEMO29_A00=0x25,
    DEMO32_BRK_GDEMO29_A01=0x26,
    DEMO32_BRK_GDEMO29_C00=0x2E,
    DEMO32_BRK_GDEMO29_C01=0x2F,
#if VERSION != VERSION_JPN
    DEMO32_BRK_30_FD_IBARI_L=0x33,
#endif
    
    /* BDLM */
    DEMO32_BDL_FD_COMP=0xA,
    DEMO32_BDL_GDEMO19_TF00=0x19,
    DEMO32_BDL_MASTERSW_LV2=0x1D,
    DEMO32_BDL_GDEMO29_A00=0x27,
    DEMO32_BDL_GDEMO29_B00=0x2B,
    DEMO32_BDL_GDEMO29_C00=0x30,
    DEMO32_BDL_MASTERSW_LV1_2=0x32,
    
    /* BDL */
    DEMO32_BDL_CD_COMP=0xB,
    
    /* BTK */
    DEMO32_BTK_GDEMO19_TF00=0x1B,
    DEMO32_BTK_SWMS_NO_FLASH=0x1C,
    DEMO32_BTK_GDEMO29_B00=0x2C,
};

#if VERSION == VERSION_JPN
enum DEMO32_RES_FILE_INDEX {
    /* STB */
    DEMO32_INDEX_STB_PRAY_KOKIRI=0x9,
    
    /* BCKS */
    DEMO32_INDEX_BCK_15_CB_CUT10_PLAY_L=0xC,
    DEMO32_INDEX_BCK_15_CB_CUT10_TAMESHI_O=0xD,
    DEMO32_INDEX_BCK_15_CB_CUT21A_PLAYEND_O=0xE,
    DEMO32_INDEX_BCK_30_FD_LOOP_L=0xF,
    DEMO32_INDEX_BCK_15_CB_CUT21B_FURIAGE_O=0x10,
    DEMO32_INDEX_BCK_15_CB_CUT22_WAIT_L=0x11,
    DEMO32_INDEX_BCK_15_CB_CUT2_NAKU_L=0x12,
    DEMO32_INDEX_BCK_15_CB_CUT2_TYAKUTI_O=0x13,
    DEMO32_INDEX_BCK_15_CB_CUT7_HA_O=0x14,
    DEMO32_INDEX_BCK_15_CB_CUT7_JUMP_L=0x15,
    DEMO32_INDEX_BCK_15_CB_CUT8_BIGJUMP_O=0x16,
    DEMO32_INDEX_BCK_15_CB_CUT8_TYAKUTI_O=0x17,
    DEMO32_INDEX_BCK_15_CB_CUT9_TURN_O=0x18,
    DEMO32_INDEX_BCK_15_CB_CUT9_WAIT_L=0x19,
    DEMO32_INDEX_BCK_21_SWMS_CUT1_O=0x1A,
    DEMO32_INDEX_BCK_29_SWMS_MSHENKA_O=0x1B,
    DEMO32_INDEX_BCK_31_CB_CUT01_PLAY_L=0x1C,
    DEMO32_INDEX_BCK_31_FD_CUT01_PLAY_L=0x1D,
    DEMO32_INDEX_BCK_31_FD_CUT07_OZIGI_O=0x1E,
    DEMO32_INDEX_BCK_31_FD_CUT07_OZIGIWAIT_L=0x1F,
    DEMO32_INDEX_BCK_MASTERSW_LV1_2=0x20,
    
    /* BTP */
    DEMO32_INDEX_BTP_30_FD_LOOP_L=0x23,
    DEMO32_INDEX_BTP_31_FD_CUT01_PLAY_L=0x24,
    DEMO32_INDEX_BTP_31_FD_CUT07_OZIGI_O=0x25,
    DEMO32_INDEX_BTP_31_FD_CUT07_OZIGIWAIT_L=0x26,
    
    /* BRK */
    DEMO32_INDEX_BRK_30_FD_TOIKAKEB2_L=0x29,
    DEMO32_INDEX_BRK_30_FD_TOIKAKE2_O=0x2A,
    DEMO32_INDEX_BRK_30_FD_LOOP_L=0x2B,
    DEMO32_INDEX_BRK_GDEMO19_TF00=0x2C,
    DEMO32_INDEX_BRK_GDEMO29_A00=0x2D,
    DEMO32_INDEX_BRK_GDEMO29_A01=0x2E,
    DEMO32_INDEX_BRK_GDEMO29_C00=0x2F,
    DEMO32_INDEX_BRK_GDEMO29_C01=0x30,
    
    /* BDLM */
    DEMO32_INDEX_BDL_FD_COMP=0x33,
    DEMO32_INDEX_BDL_GDEMO19_TF00=0x34,
    DEMO32_INDEX_BDL_MASTERSW_LV2=0x35,
    DEMO32_INDEX_BDL_GDEMO29_A00=0x36,
    DEMO32_INDEX_BDL_GDEMO29_B00=0x37,
    DEMO32_INDEX_BDL_GDEMO29_C00=0x38,
    DEMO32_INDEX_BDL_MASTERSW_LV1_2=0x39,
    
    /* BDL */
    DEMO32_INDEX_BDL_CD_COMP=0x3C,
    
    /* BTK */
    DEMO32_INDEX_BTK_GDEMO19_TF00=0x3F,
    DEMO32_INDEX_BTK_SWMS_NO_FLASH=0x40,
    DEMO32_INDEX_BTK_GDEMO29_B00=0x41,
};
#else
enum DEMO32_RES_FILE_INDEX {
    /* STB */
    DEMO32_INDEX_STB_PRAY_KOKIRI=0x9,
    
    /* BCKS */
    DEMO32_INDEX_BCK_15_CB_CUT10_PLAY_L=0xC,
    DEMO32_INDEX_BCK_15_CB_CUT10_TAMESHI_O=0xD,
    DEMO32_INDEX_BCK_15_CB_CUT21A_PLAYEND_O=0xE,
    DEMO32_INDEX_BCK_30_FD_LOOP_L=0xF,
    DEMO32_INDEX_BCK_15_CB_CUT21B_FURIAGE_O=0x10,
    DEMO32_INDEX_BCK_15_CB_CUT22_WAIT_L=0x11,
    DEMO32_INDEX_BCK_15_CB_CUT2_NAKU_L=0x12,
    DEMO32_INDEX_BCK_15_CB_CUT2_TYAKUTI_O=0x13,
    DEMO32_INDEX_BCK_15_CB_CUT7_HA_O=0x14,
    DEMO32_INDEX_BCK_15_CB_CUT7_JUMP_L=0x15,
    DEMO32_INDEX_BCK_15_CB_CUT8_BIGJUMP_O=0x16,
    DEMO32_INDEX_BCK_15_CB_CUT8_TYAKUTI_O=0x17,
    DEMO32_INDEX_BCK_15_CB_CUT9_TURN_O=0x18,
    DEMO32_INDEX_BCK_15_CB_CUT9_WAIT_L=0x19,
    DEMO32_INDEX_BCK_21_SWMS_CUT1_O=0x1A,
    DEMO32_INDEX_BCK_29_SWMS_MSHENKA_O=0x1B,
    DEMO32_INDEX_BCK_31_CB_CUT01_PLAY_L=0x1C,
    DEMO32_INDEX_BCK_31_FD_CUT01_PLAY_L=0x1D,
    DEMO32_INDEX_BCK_31_FD_CUT07_OZIGI_O=0x1E,
    DEMO32_INDEX_BCK_31_FD_CUT07_OZIGIWAIT_L=0x1F,
    DEMO32_INDEX_BCK_MASTERSW_LV1_2=0x20,
    
    /* BTP */
    DEMO32_INDEX_BTP_30_FD_LOOP_L=0x23,
    DEMO32_INDEX_BTP_31_FD_CUT01_PLAY_L=0x24,
    DEMO32_INDEX_BTP_31_FD_CUT07_OZIGI_O=0x25,
    DEMO32_INDEX_BTP_31_FD_CUT07_OZIGIWAIT_L=0x26,
    
    /* BRK */
    DEMO32_INDEX_BRK_30_FD_TOIKAKEB2_L=0x29,
    DEMO32_INDEX_BRK_30_FD_TOIKAKE2_O=0x2A,
    DEMO32_INDEX_BRK_30_FD_LOOP_L=0x2B,
    DEMO32_INDEX_BRK_GDEMO19_TF00=0x2C,
    DEMO32_INDEX_BRK_GDEMO29_A00=0x2D,
    DEMO32_INDEX_BRK_GDEMO29_A01=0x2E,
    DEMO32_INDEX_BRK_GDEMO29_C00=0x2F,
    DEMO32_INDEX_BRK_GDEMO29_C01=0x30,
    DEMO32_INDEX_BRK_30_FD_IBARI_L=0x31,
    
    /* BDLM */
    DEMO32_INDEX_BDL_FD_COMP=0x34,
    DEMO32_INDEX_BDL_GDEMO19_TF00=0x35,
    DEMO32_INDEX_BDL_MASTERSW_LV2=0x36,
    DEMO32_INDEX_BDL_GDEMO29_A00=0x37,
    DEMO32_INDEX_BDL_GDEMO29_B00=0x38,
    DEMO32_INDEX_BDL_GDEMO29_C00=0x39,
    DEMO32_INDEX_BDL_MASTERSW_LV1_2=0x3A,
    
    /* BDL */
    DEMO32_INDEX_BDL_CD_COMP=0x3D,
    
    /* BTK */
    DEMO32_INDEX_BTK_GDEMO19_TF00=0x40,
    DEMO32_INDEX_BTK_SWMS_NO_FLASH=0x41,
    DEMO32_INDEX_BTK_GDEMO29_B00=0x42,
};
#endif

#endif /* RES_DEMO32_H */