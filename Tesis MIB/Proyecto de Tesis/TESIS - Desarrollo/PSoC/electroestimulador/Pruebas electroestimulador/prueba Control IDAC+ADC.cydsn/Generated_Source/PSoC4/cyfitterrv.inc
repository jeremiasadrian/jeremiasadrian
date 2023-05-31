;
; File Name: cyfitterrv.inc
; 
; PSoC Creator  4.4
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv_trm.inc

; LCD
LCD_LCDPort__0__DM__MASK EQU 0x07
LCD_LCDPort__0__DM__SHIFT EQU 0
LCD_LCDPort__0__DR EQU CYREG_PRT0_DR
LCD_LCDPort__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
LCD_LCDPort__0__HSIOM_MASK EQU 0x0000000F
LCD_LCDPort__0__HSIOM_SHIFT EQU 0
LCD_LCDPort__0__INTCFG EQU CYREG_PRT0_INTCFG
LCD_LCDPort__0__INTSTAT EQU CYREG_PRT0_INTSTAT
LCD_LCDPort__0__MASK EQU 0x01
LCD_LCDPort__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
LCD_LCDPort__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
LCD_LCDPort__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
LCD_LCDPort__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
LCD_LCDPort__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
LCD_LCDPort__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
LCD_LCDPort__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
LCD_LCDPort__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
LCD_LCDPort__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
LCD_LCDPort__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
LCD_LCDPort__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
LCD_LCDPort__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
LCD_LCDPort__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
LCD_LCDPort__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
LCD_LCDPort__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
LCD_LCDPort__0__PC EQU CYREG_PRT0_PC
LCD_LCDPort__0__PC2 EQU CYREG_PRT0_PC2
LCD_LCDPort__0__PORT EQU 0
LCD_LCDPort__0__PS EQU CYREG_PRT0_PS
LCD_LCDPort__0__SHIFT EQU 0
LCD_LCDPort__1__DM__MASK EQU 0x38
LCD_LCDPort__1__DM__SHIFT EQU 3
LCD_LCDPort__1__DR EQU CYREG_PRT0_DR
LCD_LCDPort__1__HSIOM EQU CYREG_HSIOM_PORT_SEL0
LCD_LCDPort__1__HSIOM_MASK EQU 0x000000F0
LCD_LCDPort__1__HSIOM_SHIFT EQU 4
LCD_LCDPort__1__INTCFG EQU CYREG_PRT0_INTCFG
LCD_LCDPort__1__INTSTAT EQU CYREG_PRT0_INTSTAT
LCD_LCDPort__1__MASK EQU 0x02
LCD_LCDPort__1__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
LCD_LCDPort__1__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
LCD_LCDPort__1__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
LCD_LCDPort__1__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
LCD_LCDPort__1__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
LCD_LCDPort__1__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
LCD_LCDPort__1__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
LCD_LCDPort__1__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
LCD_LCDPort__1__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
LCD_LCDPort__1__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
LCD_LCDPort__1__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
LCD_LCDPort__1__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
LCD_LCDPort__1__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
LCD_LCDPort__1__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
LCD_LCDPort__1__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
LCD_LCDPort__1__PC EQU CYREG_PRT0_PC
LCD_LCDPort__1__PC2 EQU CYREG_PRT0_PC2
LCD_LCDPort__1__PORT EQU 0
LCD_LCDPort__1__PS EQU CYREG_PRT0_PS
LCD_LCDPort__1__SHIFT EQU 1
LCD_LCDPort__2__DM__MASK EQU 0x1C0
LCD_LCDPort__2__DM__SHIFT EQU 6
LCD_LCDPort__2__DR EQU CYREG_PRT0_DR
LCD_LCDPort__2__HSIOM EQU CYREG_HSIOM_PORT_SEL0
LCD_LCDPort__2__HSIOM_MASK EQU 0x00000F00
LCD_LCDPort__2__HSIOM_SHIFT EQU 8
LCD_LCDPort__2__INTCFG EQU CYREG_PRT0_INTCFG
LCD_LCDPort__2__INTSTAT EQU CYREG_PRT0_INTSTAT
LCD_LCDPort__2__MASK EQU 0x04
LCD_LCDPort__2__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
LCD_LCDPort__2__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
LCD_LCDPort__2__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
LCD_LCDPort__2__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
LCD_LCDPort__2__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
LCD_LCDPort__2__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
LCD_LCDPort__2__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
LCD_LCDPort__2__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
LCD_LCDPort__2__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
LCD_LCDPort__2__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
LCD_LCDPort__2__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
LCD_LCDPort__2__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
LCD_LCDPort__2__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
LCD_LCDPort__2__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
LCD_LCDPort__2__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
LCD_LCDPort__2__PC EQU CYREG_PRT0_PC
LCD_LCDPort__2__PC2 EQU CYREG_PRT0_PC2
LCD_LCDPort__2__PORT EQU 0
LCD_LCDPort__2__PS EQU CYREG_PRT0_PS
LCD_LCDPort__2__SHIFT EQU 2
LCD_LCDPort__3__DM__MASK EQU 0xE00
LCD_LCDPort__3__DM__SHIFT EQU 9
LCD_LCDPort__3__DR EQU CYREG_PRT0_DR
LCD_LCDPort__3__HSIOM EQU CYREG_HSIOM_PORT_SEL0
LCD_LCDPort__3__HSIOM_MASK EQU 0x0000F000
LCD_LCDPort__3__HSIOM_SHIFT EQU 12
LCD_LCDPort__3__INTCFG EQU CYREG_PRT0_INTCFG
LCD_LCDPort__3__INTSTAT EQU CYREG_PRT0_INTSTAT
LCD_LCDPort__3__MASK EQU 0x08
LCD_LCDPort__3__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
LCD_LCDPort__3__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
LCD_LCDPort__3__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
LCD_LCDPort__3__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
LCD_LCDPort__3__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
LCD_LCDPort__3__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
LCD_LCDPort__3__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
LCD_LCDPort__3__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
LCD_LCDPort__3__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
LCD_LCDPort__3__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
LCD_LCDPort__3__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
LCD_LCDPort__3__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
LCD_LCDPort__3__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
LCD_LCDPort__3__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
LCD_LCDPort__3__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
LCD_LCDPort__3__PC EQU CYREG_PRT0_PC
LCD_LCDPort__3__PC2 EQU CYREG_PRT0_PC2
LCD_LCDPort__3__PORT EQU 0
LCD_LCDPort__3__PS EQU CYREG_PRT0_PS
LCD_LCDPort__3__SHIFT EQU 3
LCD_LCDPort__4__DM__MASK EQU 0x7000
LCD_LCDPort__4__DM__SHIFT EQU 12
LCD_LCDPort__4__DR EQU CYREG_PRT0_DR
LCD_LCDPort__4__HSIOM EQU CYREG_HSIOM_PORT_SEL0
LCD_LCDPort__4__HSIOM_MASK EQU 0x000F0000
LCD_LCDPort__4__HSIOM_SHIFT EQU 16
LCD_LCDPort__4__INTCFG EQU CYREG_PRT0_INTCFG
LCD_LCDPort__4__INTSTAT EQU CYREG_PRT0_INTSTAT
LCD_LCDPort__4__MASK EQU 0x10
LCD_LCDPort__4__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
LCD_LCDPort__4__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
LCD_LCDPort__4__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
LCD_LCDPort__4__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
LCD_LCDPort__4__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
LCD_LCDPort__4__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
LCD_LCDPort__4__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
LCD_LCDPort__4__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
LCD_LCDPort__4__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
LCD_LCDPort__4__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
LCD_LCDPort__4__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
LCD_LCDPort__4__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
LCD_LCDPort__4__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
LCD_LCDPort__4__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
LCD_LCDPort__4__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
LCD_LCDPort__4__PC EQU CYREG_PRT0_PC
LCD_LCDPort__4__PC2 EQU CYREG_PRT0_PC2
LCD_LCDPort__4__PORT EQU 0
LCD_LCDPort__4__PS EQU CYREG_PRT0_PS
LCD_LCDPort__4__SHIFT EQU 4
LCD_LCDPort__5__DM__MASK EQU 0x38000
LCD_LCDPort__5__DM__SHIFT EQU 15
LCD_LCDPort__5__DR EQU CYREG_PRT0_DR
LCD_LCDPort__5__HSIOM EQU CYREG_HSIOM_PORT_SEL0
LCD_LCDPort__5__HSIOM_MASK EQU 0x00F00000
LCD_LCDPort__5__HSIOM_SHIFT EQU 20
LCD_LCDPort__5__INTCFG EQU CYREG_PRT0_INTCFG
LCD_LCDPort__5__INTSTAT EQU CYREG_PRT0_INTSTAT
LCD_LCDPort__5__MASK EQU 0x20
LCD_LCDPort__5__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
LCD_LCDPort__5__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
LCD_LCDPort__5__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
LCD_LCDPort__5__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
LCD_LCDPort__5__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
LCD_LCDPort__5__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
LCD_LCDPort__5__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
LCD_LCDPort__5__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
LCD_LCDPort__5__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
LCD_LCDPort__5__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
LCD_LCDPort__5__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
LCD_LCDPort__5__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
LCD_LCDPort__5__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
LCD_LCDPort__5__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
LCD_LCDPort__5__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
LCD_LCDPort__5__PC EQU CYREG_PRT0_PC
LCD_LCDPort__5__PC2 EQU CYREG_PRT0_PC2
LCD_LCDPort__5__PORT EQU 0
LCD_LCDPort__5__PS EQU CYREG_PRT0_PS
LCD_LCDPort__5__SHIFT EQU 5
LCD_LCDPort__6__DM__MASK EQU 0x1C0000
LCD_LCDPort__6__DM__SHIFT EQU 18
LCD_LCDPort__6__DR EQU CYREG_PRT0_DR
LCD_LCDPort__6__HSIOM EQU CYREG_HSIOM_PORT_SEL0
LCD_LCDPort__6__HSIOM_MASK EQU 0x0F000000
LCD_LCDPort__6__HSIOM_SHIFT EQU 24
LCD_LCDPort__6__INTCFG EQU CYREG_PRT0_INTCFG
LCD_LCDPort__6__INTSTAT EQU CYREG_PRT0_INTSTAT
LCD_LCDPort__6__MASK EQU 0x40
LCD_LCDPort__6__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
LCD_LCDPort__6__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
LCD_LCDPort__6__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
LCD_LCDPort__6__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
LCD_LCDPort__6__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
LCD_LCDPort__6__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
LCD_LCDPort__6__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
LCD_LCDPort__6__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
LCD_LCDPort__6__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
LCD_LCDPort__6__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
LCD_LCDPort__6__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
LCD_LCDPort__6__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
LCD_LCDPort__6__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
LCD_LCDPort__6__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
LCD_LCDPort__6__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
LCD_LCDPort__6__PC EQU CYREG_PRT0_PC
LCD_LCDPort__6__PC2 EQU CYREG_PRT0_PC2
LCD_LCDPort__6__PORT EQU 0
LCD_LCDPort__6__PS EQU CYREG_PRT0_PS
LCD_LCDPort__6__SHIFT EQU 6
LCD_LCDPort__DR EQU CYREG_PRT0_DR
LCD_LCDPort__INTCFG EQU CYREG_PRT0_INTCFG
LCD_LCDPort__INTSTAT EQU CYREG_PRT0_INTSTAT
LCD_LCDPort__MASK EQU 0x7F
LCD_LCDPort__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
LCD_LCDPort__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
LCD_LCDPort__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
LCD_LCDPort__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
LCD_LCDPort__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
LCD_LCDPort__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
LCD_LCDPort__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
LCD_LCDPort__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
LCD_LCDPort__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
LCD_LCDPort__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
LCD_LCDPort__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
LCD_LCDPort__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
LCD_LCDPort__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
LCD_LCDPort__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
LCD_LCDPort__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
LCD_LCDPort__PC EQU CYREG_PRT0_PC
LCD_LCDPort__PC2 EQU CYREG_PRT0_PC2
LCD_LCDPort__PORT EQU 0
LCD_LCDPort__PS EQU CYREG_PRT0_PS
LCD_LCDPort__SHIFT EQU 0

; ADC_1
ADC_1_cy_psoc4_sar__SAR_ANA_TRIM EQU CYREG_SAR_ANA_TRIM
ADC_1_cy_psoc4_sar__SAR_AVG_STAT EQU CYREG_SAR_AVG_STAT
ADC_1_cy_psoc4_sar__SAR_CHAN_CONFIG00 EQU CYREG_SAR_CHAN_CONFIG00
ADC_1_cy_psoc4_sar__SAR_CHAN_CONFIG01 EQU CYREG_SAR_CHAN_CONFIG01
ADC_1_cy_psoc4_sar__SAR_CHAN_CONFIG02 EQU CYREG_SAR_CHAN_CONFIG02
ADC_1_cy_psoc4_sar__SAR_CHAN_CONFIG03 EQU CYREG_SAR_CHAN_CONFIG03
ADC_1_cy_psoc4_sar__SAR_CHAN_CONFIG04 EQU CYREG_SAR_CHAN_CONFIG04
ADC_1_cy_psoc4_sar__SAR_CHAN_CONFIG05 EQU CYREG_SAR_CHAN_CONFIG05
ADC_1_cy_psoc4_sar__SAR_CHAN_CONFIG06 EQU CYREG_SAR_CHAN_CONFIG06
ADC_1_cy_psoc4_sar__SAR_CHAN_CONFIG07 EQU CYREG_SAR_CHAN_CONFIG07
ADC_1_cy_psoc4_sar__SAR_CHAN_EN EQU CYREG_SAR_CHAN_EN
ADC_1_cy_psoc4_sar__SAR_CHAN_RESULT_VALID EQU CYREG_SAR_CHAN_RESULT_VALID
ADC_1_cy_psoc4_sar__SAR_CHAN_RESULT00 EQU CYREG_SAR_CHAN_RESULT00
ADC_1_cy_psoc4_sar__SAR_CHAN_RESULT01 EQU CYREG_SAR_CHAN_RESULT01
ADC_1_cy_psoc4_sar__SAR_CHAN_RESULT02 EQU CYREG_SAR_CHAN_RESULT02
ADC_1_cy_psoc4_sar__SAR_CHAN_RESULT03 EQU CYREG_SAR_CHAN_RESULT03
ADC_1_cy_psoc4_sar__SAR_CHAN_RESULT04 EQU CYREG_SAR_CHAN_RESULT04
ADC_1_cy_psoc4_sar__SAR_CHAN_RESULT05 EQU CYREG_SAR_CHAN_RESULT05
ADC_1_cy_psoc4_sar__SAR_CHAN_RESULT06 EQU CYREG_SAR_CHAN_RESULT06
ADC_1_cy_psoc4_sar__SAR_CHAN_RESULT07 EQU CYREG_SAR_CHAN_RESULT07
ADC_1_cy_psoc4_sar__SAR_CHAN_WORK_VALID EQU CYREG_SAR_CHAN_WORK_VALID
ADC_1_cy_psoc4_sar__SAR_CHAN_WORK00 EQU CYREG_SAR_CHAN_WORK00
ADC_1_cy_psoc4_sar__SAR_CHAN_WORK01 EQU CYREG_SAR_CHAN_WORK01
ADC_1_cy_psoc4_sar__SAR_CHAN_WORK02 EQU CYREG_SAR_CHAN_WORK02
ADC_1_cy_psoc4_sar__SAR_CHAN_WORK03 EQU CYREG_SAR_CHAN_WORK03
ADC_1_cy_psoc4_sar__SAR_CHAN_WORK04 EQU CYREG_SAR_CHAN_WORK04
ADC_1_cy_psoc4_sar__SAR_CHAN_WORK05 EQU CYREG_SAR_CHAN_WORK05
ADC_1_cy_psoc4_sar__SAR_CHAN_WORK06 EQU CYREG_SAR_CHAN_WORK06
ADC_1_cy_psoc4_sar__SAR_CHAN_WORK07 EQU CYREG_SAR_CHAN_WORK07
ADC_1_cy_psoc4_sar__SAR_CTRL EQU CYREG_SAR_CTRL
ADC_1_cy_psoc4_sar__SAR_DFT_CTRL EQU CYREG_SAR_DFT_CTRL
ADC_1_cy_psoc4_sar__SAR_INTR EQU CYREG_SAR_INTR
ADC_1_cy_psoc4_sar__SAR_INTR_CAUSE EQU CYREG_SAR_INTR_CAUSE
ADC_1_cy_psoc4_sar__SAR_INTR_MASK EQU CYREG_SAR_INTR_MASK
ADC_1_cy_psoc4_sar__SAR_INTR_MASKED EQU CYREG_SAR_INTR_MASKED
ADC_1_cy_psoc4_sar__SAR_INTR_SET EQU CYREG_SAR_INTR_SET
ADC_1_cy_psoc4_sar__SAR_MUX_SWITCH_CLEAR0 EQU CYREG_SAR_MUX_SWITCH_CLEAR0
ADC_1_cy_psoc4_sar__SAR_MUX_SWITCH_CLEAR1 EQU CYREG_SAR_MUX_SWITCH_CLEAR1
ADC_1_cy_psoc4_sar__SAR_MUX_SWITCH_HW_CTRL EQU CYREG_SAR_MUX_SWITCH_HW_CTRL
ADC_1_cy_psoc4_sar__SAR_MUX_SWITCH_STATUS EQU CYREG_SAR_MUX_SWITCH_STATUS
ADC_1_cy_psoc4_sar__SAR_MUX_SWITCH0 EQU CYREG_SAR_MUX_SWITCH0
ADC_1_cy_psoc4_sar__SAR_MUX_SWITCH1 EQU CYREG_SAR_MUX_SWITCH1
ADC_1_cy_psoc4_sar__SAR_NUMBER EQU 0
ADC_1_cy_psoc4_sar__SAR_PUMP_CTRL EQU CYREG_SAR_PUMP_CTRL
ADC_1_cy_psoc4_sar__SAR_RANGE_COND EQU CYREG_SAR_RANGE_COND
ADC_1_cy_psoc4_sar__SAR_RANGE_INTR EQU CYREG_SAR_RANGE_INTR
ADC_1_cy_psoc4_sar__SAR_RANGE_INTR_MASK EQU CYREG_SAR_RANGE_INTR_MASK
ADC_1_cy_psoc4_sar__SAR_RANGE_INTR_MASKED EQU CYREG_SAR_RANGE_INTR_MASKED
ADC_1_cy_psoc4_sar__SAR_RANGE_INTR_SET EQU CYREG_SAR_RANGE_INTR_SET
ADC_1_cy_psoc4_sar__SAR_RANGE_THRES EQU CYREG_SAR_RANGE_THRES
ADC_1_cy_psoc4_sar__SAR_SAMPLE_CTRL EQU CYREG_SAR_SAMPLE_CTRL
ADC_1_cy_psoc4_sar__SAR_SAMPLE_TIME01 EQU CYREG_SAR_SAMPLE_TIME01
ADC_1_cy_psoc4_sar__SAR_SAMPLE_TIME23 EQU CYREG_SAR_SAMPLE_TIME23
ADC_1_cy_psoc4_sar__SAR_SATURATE_INTR EQU CYREG_SAR_SATURATE_INTR
ADC_1_cy_psoc4_sar__SAR_SATURATE_INTR_MASK EQU CYREG_SAR_SATURATE_INTR_MASK
ADC_1_cy_psoc4_sar__SAR_SATURATE_INTR_MASKED EQU CYREG_SAR_SATURATE_INTR_MASKED
ADC_1_cy_psoc4_sar__SAR_SATURATE_INTR_SET EQU CYREG_SAR_SATURATE_INTR_SET
ADC_1_cy_psoc4_sar__SAR_START_CTRL EQU CYREG_SAR_START_CTRL
ADC_1_cy_psoc4_sar__SAR_STATUS EQU CYREG_SAR_STATUS
ADC_1_cy_psoc4_sar__SAR_WOUNDING EQU CYREG_SAR_WOUNDING
ADC_1_intClock__DIVIDER_MASK EQU 0x0000FFFF
ADC_1_intClock__ENABLE EQU CYREG_CLK_DIVIDER_A00
ADC_1_intClock__ENABLE_MASK EQU 0x80000000
ADC_1_intClock__MASK EQU 0x80000000
ADC_1_intClock__REGISTER EQU CYREG_CLK_DIVIDER_A00
ADC_1_IRQ__INTC_CLR_EN_REG EQU CYREG_CM0_ICER
ADC_1_IRQ__INTC_CLR_PD_REG EQU CYREG_CM0_ICPR
ADC_1_IRQ__INTC_MASK EQU 0x4000
ADC_1_IRQ__INTC_NUMBER EQU 14
ADC_1_IRQ__INTC_PRIOR_MASK EQU 0xC00000
ADC_1_IRQ__INTC_PRIOR_NUM EQU 3
ADC_1_IRQ__INTC_PRIOR_REG EQU CYREG_CM0_IPR3
ADC_1_IRQ__INTC_SET_EN_REG EQU CYREG_CM0_ISER
ADC_1_IRQ__INTC_SET_PD_REG EQU CYREG_CM0_ISPR

; IDAC_1
IDAC_1_cy_psoc4_idac__CONTROL EQU CYREG_CSD_CONFIG
IDAC_1_cy_psoc4_idac__CSD_IDAC EQU CYREG_CSD_IDAC
IDAC_1_cy_psoc4_idac__CSD_IDAC_SHIFT EQU 0
IDAC_1_cy_psoc4_idac__CSD_TRIM1 EQU CYREG_CSD_TRIM1
IDAC_1_cy_psoc4_idac__CSD_TRIM1_SHIFT EQU 0
IDAC_1_cy_psoc4_idac__CSD_TRIM2 EQU CYREG_CSD_TRIM2
IDAC_1_cy_psoc4_idac__CSD_TRIM2_SHIFT EQU 0
IDAC_1_cy_psoc4_idac__IDAC_NUMBER EQU 1
IDAC_1_cy_psoc4_idac__POLARITY EQU CYREG_CSD_CONFIG
IDAC_1_cy_psoc4_idac__POLARITY_SHIFT EQU 16

; Opamp_1
Opamp_1_cy_psoc4_abuf__COMP_STAT EQU CYREG_CTBM_COMP_STAT
Opamp_1_cy_psoc4_abuf__COMP_STAT_SHIFT EQU 16
Opamp_1_cy_psoc4_abuf__CTBM_CTB_CTRL EQU CYREG_CTBM_CTB_CTRL
Opamp_1_cy_psoc4_abuf__INTR EQU CYREG_CTBM_INTR
Opamp_1_cy_psoc4_abuf__INTR_MASK EQU CYREG_CTBM_INTR_MASK
Opamp_1_cy_psoc4_abuf__INTR_MASK_SHIFT EQU 1
Opamp_1_cy_psoc4_abuf__INTR_MASKED EQU CYREG_CTBM_INTR_MASKED
Opamp_1_cy_psoc4_abuf__INTR_MASKED_SHIFT EQU 1
Opamp_1_cy_psoc4_abuf__INTR_SET EQU CYREG_CTBM_INTR_SET
Opamp_1_cy_psoc4_abuf__INTR_SET_SHIFT EQU 1
Opamp_1_cy_psoc4_abuf__INTR_SHIFT EQU 1
Opamp_1_cy_psoc4_abuf__OA_COMP_TRIM EQU CYREG_CTBM_OA1_COMP_TRIM
Opamp_1_cy_psoc4_abuf__OA_NUMBER EQU 1
Opamp_1_cy_psoc4_abuf__OA_OFFSET_TRIM EQU CYREG_CTBM_OA1_OFFSET_TRIM
Opamp_1_cy_psoc4_abuf__OA_RES_CTRL EQU CYREG_CTBM_OA_RES1_CTRL
Opamp_1_cy_psoc4_abuf__OA_SLOPE_OFFSET_TRIM EQU CYREG_CTBM_OA1_SLOPE_OFFSET_TRIM
Opamp_1_cy_psoc4_abuf__OA_SW EQU CYREG_CTBM_OA1_SW
Opamp_1_cy_psoc4_abuf__OA_SW_CLEAR EQU CYREG_CTBM_OA1_SW_CLEAR

; conIDAC
conIDAC__0__DM__MASK EQU 0x38000
conIDAC__0__DM__SHIFT EQU 15
conIDAC__0__DR EQU CYREG_PRT1_DR
conIDAC__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
conIDAC__0__HSIOM_MASK EQU 0x00F00000
conIDAC__0__HSIOM_SHIFT EQU 20
conIDAC__0__INTCFG EQU CYREG_PRT1_INTCFG
conIDAC__0__INTSTAT EQU CYREG_PRT1_INTSTAT
conIDAC__0__MASK EQU 0x20
conIDAC__0__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
conIDAC__0__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
conIDAC__0__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
conIDAC__0__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
conIDAC__0__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
conIDAC__0__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
conIDAC__0__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
conIDAC__0__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
conIDAC__0__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
conIDAC__0__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
conIDAC__0__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
conIDAC__0__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
conIDAC__0__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
conIDAC__0__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
conIDAC__0__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
conIDAC__0__PC EQU CYREG_PRT1_PC
conIDAC__0__PC2 EQU CYREG_PRT1_PC2
conIDAC__0__PORT EQU 1
conIDAC__0__PS EQU CYREG_PRT1_PS
conIDAC__0__SHIFT EQU 5
conIDAC__DR EQU CYREG_PRT1_DR
conIDAC__INTCFG EQU CYREG_PRT1_INTCFG
conIDAC__INTSTAT EQU CYREG_PRT1_INTSTAT
conIDAC__MASK EQU 0x20
conIDAC__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
conIDAC__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
conIDAC__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
conIDAC__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
conIDAC__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
conIDAC__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
conIDAC__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
conIDAC__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
conIDAC__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
conIDAC__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
conIDAC__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
conIDAC__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
conIDAC__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
conIDAC__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
conIDAC__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
conIDAC__PC EQU CYREG_PRT1_PC
conIDAC__PC2 EQU CYREG_PRT1_PC2
conIDAC__PORT EQU 1
conIDAC__PS EQU CYREG_PRT1_PS
conIDAC__SHIFT EQU 5

; Iout_neg
Iout_neg__0__DM__MASK EQU 0x1C0
Iout_neg__0__DM__SHIFT EQU 6
Iout_neg__0__DR EQU CYREG_PRT1_DR
Iout_neg__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
Iout_neg__0__HSIOM_MASK EQU 0x00000F00
Iout_neg__0__HSIOM_SHIFT EQU 8
Iout_neg__0__INTCFG EQU CYREG_PRT1_INTCFG
Iout_neg__0__INTSTAT EQU CYREG_PRT1_INTSTAT
Iout_neg__0__MASK EQU 0x04
Iout_neg__0__OUT_SEL EQU CYREG_UDB_PA1_CFG10
Iout_neg__0__OUT_SEL_SHIFT EQU 4
Iout_neg__0__OUT_SEL_VAL EQU 2
Iout_neg__0__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
Iout_neg__0__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
Iout_neg__0__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
Iout_neg__0__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
Iout_neg__0__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
Iout_neg__0__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
Iout_neg__0__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
Iout_neg__0__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
Iout_neg__0__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
Iout_neg__0__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
Iout_neg__0__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
Iout_neg__0__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
Iout_neg__0__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
Iout_neg__0__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
Iout_neg__0__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
Iout_neg__0__PC EQU CYREG_PRT1_PC
Iout_neg__0__PC2 EQU CYREG_PRT1_PC2
Iout_neg__0__PORT EQU 1
Iout_neg__0__PS EQU CYREG_PRT1_PS
Iout_neg__0__SHIFT EQU 2
Iout_neg__DR EQU CYREG_PRT1_DR
Iout_neg__INTCFG EQU CYREG_PRT1_INTCFG
Iout_neg__INTSTAT EQU CYREG_PRT1_INTSTAT
Iout_neg__MASK EQU 0x04
Iout_neg__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
Iout_neg__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
Iout_neg__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
Iout_neg__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
Iout_neg__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
Iout_neg__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
Iout_neg__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
Iout_neg__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
Iout_neg__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
Iout_neg__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
Iout_neg__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
Iout_neg__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
Iout_neg__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
Iout_neg__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
Iout_neg__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
Iout_neg__PC EQU CYREG_PRT1_PC
Iout_neg__PC2 EQU CYREG_PRT1_PC2
Iout_neg__PORT EQU 1
Iout_neg__PS EQU CYREG_PRT1_PS
Iout_neg__SHIFT EQU 2

; Iout_pos
Iout_pos__0__DM__MASK EQU 0x7000
Iout_pos__0__DM__SHIFT EQU 12
Iout_pos__0__DR EQU CYREG_PRT1_DR
Iout_pos__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
Iout_pos__0__HSIOM_MASK EQU 0x000F0000
Iout_pos__0__HSIOM_SHIFT EQU 16
Iout_pos__0__INTCFG EQU CYREG_PRT1_INTCFG
Iout_pos__0__INTSTAT EQU CYREG_PRT1_INTSTAT
Iout_pos__0__MASK EQU 0x10
Iout_pos__0__OUT_SEL EQU CYREG_UDB_PA1_CFG10
Iout_pos__0__OUT_SEL_SHIFT EQU 8
Iout_pos__0__OUT_SEL_VAL EQU 2
Iout_pos__0__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
Iout_pos__0__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
Iout_pos__0__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
Iout_pos__0__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
Iout_pos__0__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
Iout_pos__0__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
Iout_pos__0__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
Iout_pos__0__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
Iout_pos__0__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
Iout_pos__0__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
Iout_pos__0__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
Iout_pos__0__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
Iout_pos__0__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
Iout_pos__0__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
Iout_pos__0__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
Iout_pos__0__PC EQU CYREG_PRT1_PC
Iout_pos__0__PC2 EQU CYREG_PRT1_PC2
Iout_pos__0__PORT EQU 1
Iout_pos__0__PS EQU CYREG_PRT1_PS
Iout_pos__0__SHIFT EQU 4
Iout_pos__DR EQU CYREG_PRT1_DR
Iout_pos__INTCFG EQU CYREG_PRT1_INTCFG
Iout_pos__INTSTAT EQU CYREG_PRT1_INTSTAT
Iout_pos__MASK EQU 0x10
Iout_pos__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
Iout_pos__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
Iout_pos__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
Iout_pos__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
Iout_pos__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
Iout_pos__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
Iout_pos__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
Iout_pos__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
Iout_pos__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
Iout_pos__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
Iout_pos__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
Iout_pos__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
Iout_pos__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
Iout_pos__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
Iout_pos__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
Iout_pos__PC EQU CYREG_PRT1_PC
Iout_pos__PC2 EQU CYREG_PRT1_PC2
Iout_pos__PORT EQU 1
Iout_pos__PS EQU CYREG_PRT1_PS
Iout_pos__SHIFT EQU 4

; SW1_AMux
SW1_AMux__0__DM__MASK EQU 0xE00000
SW1_AMux__0__DM__SHIFT EQU 21
SW1_AMux__0__DR EQU CYREG_PRT0_DR
SW1_AMux__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
SW1_AMux__0__HSIOM_MASK EQU 0xF0000000
SW1_AMux__0__HSIOM_SHIFT EQU 28
SW1_AMux__0__INTCFG EQU CYREG_PRT0_INTCFG
SW1_AMux__0__INTSTAT EQU CYREG_PRT0_INTSTAT
SW1_AMux__0__MASK EQU 0x80
SW1_AMux__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
SW1_AMux__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
SW1_AMux__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
SW1_AMux__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
SW1_AMux__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
SW1_AMux__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
SW1_AMux__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
SW1_AMux__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
SW1_AMux__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
SW1_AMux__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
SW1_AMux__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
SW1_AMux__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
SW1_AMux__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
SW1_AMux__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
SW1_AMux__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
SW1_AMux__0__PC EQU CYREG_PRT0_PC
SW1_AMux__0__PC2 EQU CYREG_PRT0_PC2
SW1_AMux__0__PORT EQU 0
SW1_AMux__0__PS EQU CYREG_PRT0_PS
SW1_AMux__0__SHIFT EQU 7
SW1_AMux__DR EQU CYREG_PRT0_DR
SW1_AMux__INTCFG EQU CYREG_PRT0_INTCFG
SW1_AMux__INTSTAT EQU CYREG_PRT0_INTSTAT
SW1_AMux__MASK EQU 0x80
SW1_AMux__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
SW1_AMux__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
SW1_AMux__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
SW1_AMux__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
SW1_AMux__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
SW1_AMux__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
SW1_AMux__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
SW1_AMux__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
SW1_AMux__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
SW1_AMux__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
SW1_AMux__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
SW1_AMux__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
SW1_AMux__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
SW1_AMux__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
SW1_AMux__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
SW1_AMux__PC EQU CYREG_PRT0_PC
SW1_AMux__PC2 EQU CYREG_PRT0_PC2
SW1_AMux__PORT EQU 0
SW1_AMux__PS EQU CYREG_PRT0_PS
SW1_AMux__SHIFT EQU 7
SW1_AMux__SNAP EQU CYREG_PRT0_INTSTAT

; VAR_AMux
VAR_AMux__INTC_CLR_EN_REG EQU CYREG_CM0_ICER
VAR_AMux__INTC_CLR_PD_REG EQU CYREG_CM0_ICPR
VAR_AMux__INTC_MASK EQU 0x01
VAR_AMux__INTC_NUMBER EQU 0
VAR_AMux__INTC_PRIOR_MASK EQU 0xC0
VAR_AMux__INTC_PRIOR_NUM EQU 3
VAR_AMux__INTC_PRIOR_REG EQU CYREG_CM0_IPR0
VAR_AMux__INTC_SET_EN_REG EQU CYREG_CM0_ISER
VAR_AMux__INTC_SET_PD_REG EQU CYREG_CM0_ISPR

; Miscellaneous
CYDEV_BCLK__HFCLK__HZ EQU 48000000
CYDEV_BCLK__HFCLK__KHZ EQU 48000
CYDEV_BCLK__HFCLK__MHZ EQU 48
CYDEV_BCLK__SYSCLK__HZ EQU 48000000
CYDEV_BCLK__SYSCLK__KHZ EQU 48000
CYDEV_BCLK__SYSCLK__MHZ EQU 48
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 26
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC4
CYDEV_CHIP_JTAG_ID EQU 0x04C81193
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 26
CYDEV_CHIP_MEMBER_4AA EQU 25
CYDEV_CHIP_MEMBER_4AB EQU 30
CYDEV_CHIP_MEMBER_4AC EQU 14
CYDEV_CHIP_MEMBER_4AD EQU 15
CYDEV_CHIP_MEMBER_4AE EQU 16
CYDEV_CHIP_MEMBER_4D EQU 20
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 27
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 24
CYDEV_CHIP_MEMBER_4I EQU 32
CYDEV_CHIP_MEMBER_4J EQU 21
CYDEV_CHIP_MEMBER_4K EQU 22
CYDEV_CHIP_MEMBER_4L EQU 31
CYDEV_CHIP_MEMBER_4M EQU 29
CYDEV_CHIP_MEMBER_4N EQU 11
CYDEV_CHIP_MEMBER_4O EQU 8
CYDEV_CHIP_MEMBER_4P EQU 28
CYDEV_CHIP_MEMBER_4Q EQU 17
CYDEV_CHIP_MEMBER_4R EQU 9
CYDEV_CHIP_MEMBER_4S EQU 12
CYDEV_CHIP_MEMBER_4T EQU 10
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 23
CYDEV_CHIP_MEMBER_4W EQU 13
CYDEV_CHIP_MEMBER_4X EQU 7
CYDEV_CHIP_MEMBER_4Y EQU 18
CYDEV_CHIP_MEMBER_4Z EQU 19
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 33
CYDEV_CHIP_MEMBER_FM3 EQU 37
CYDEV_CHIP_MEMBER_FM4 EQU 38
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 34
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 35
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 36
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_4A
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4AA_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AB_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AC_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AD_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AE_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4W_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4X_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Y_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Z_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_4A_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_READ_ACCELERATOR EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_Disallowed
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_PROTECT_KILL EQU 4
CYDEV_DEBUG_PROTECT_OPEN EQU 1
CYDEV_DEBUG_PROTECT EQU CYDEV_DEBUG_PROTECT_OPEN
CYDEV_DEBUG_PROTECT_PROTECTED EQU 2
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_Disable
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_ENABLE EQU 0
CYDEV_DFT_SELECT_CLK0 EQU 1
CYDEV_DFT_SELECT_CLK1 EQU 2
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_IMO_TRIMMED_BY_USB EQU 0
CYDEV_IMO_TRIMMED_BY_WCO EQU 0
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 2
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_STACK_SIZE EQU 0x0400
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 1
CYDEV_VDDA_MV EQU 3300
CYDEV_VDDD_MV EQU 3300
CYDEV_WDT_GENERATE_ISR EQU 1
CYIPBLOCK_M0S8_CTBM_VERSION EQU 0
CYIPBLOCK_m0s8cpuss_VERSION EQU 0
CYIPBLOCK_m0s8csd_VERSION EQU 0
CYIPBLOCK_m0s8gpio2_VERSION EQU 0
CYIPBLOCK_m0s8hsiom4a_VERSION EQU 0
CYIPBLOCK_m0s8lcd_VERSION EQU 0
CYIPBLOCK_m0s8lpcomp_VERSION EQU 0
CYIPBLOCK_m0s8pclk_VERSION EQU 0
CYIPBLOCK_m0s8sar_VERSION EQU 0
CYIPBLOCK_m0s8scb_VERSION EQU 0
CYIPBLOCK_m0s8srssv2_VERSION EQU 1
CYIPBLOCK_m0s8tcpwm_VERSION EQU 0
CYIPBLOCK_m0s8udbif_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 2
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END