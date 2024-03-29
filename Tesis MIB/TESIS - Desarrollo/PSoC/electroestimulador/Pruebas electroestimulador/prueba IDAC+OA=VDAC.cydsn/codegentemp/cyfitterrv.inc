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

; Vinv
Vinv__0__DM__MASK EQU 0x38
Vinv__0__DM__SHIFT EQU 3
Vinv__0__DR EQU CYREG_PRT1_DR
Vinv__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
Vinv__0__HSIOM_MASK EQU 0x000000F0
Vinv__0__HSIOM_SHIFT EQU 4
Vinv__0__INTCFG EQU CYREG_PRT1_INTCFG
Vinv__0__INTSTAT EQU CYREG_PRT1_INTSTAT
Vinv__0__MASK EQU 0x02
Vinv__0__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
Vinv__0__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
Vinv__0__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
Vinv__0__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
Vinv__0__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
Vinv__0__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
Vinv__0__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
Vinv__0__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
Vinv__0__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
Vinv__0__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
Vinv__0__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
Vinv__0__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
Vinv__0__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
Vinv__0__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
Vinv__0__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
Vinv__0__PC EQU CYREG_PRT1_PC
Vinv__0__PC2 EQU CYREG_PRT1_PC2
Vinv__0__PORT EQU 1
Vinv__0__PS EQU CYREG_PRT1_PS
Vinv__0__SHIFT EQU 1
Vinv__DR EQU CYREG_PRT1_DR
Vinv__INTCFG EQU CYREG_PRT1_INTCFG
Vinv__INTSTAT EQU CYREG_PRT1_INTSTAT
Vinv__MASK EQU 0x02
Vinv__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
Vinv__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
Vinv__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
Vinv__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
Vinv__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
Vinv__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
Vinv__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
Vinv__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
Vinv__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
Vinv__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
Vinv__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
Vinv__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
Vinv__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
Vinv__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
Vinv__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
Vinv__PC EQU CYREG_PRT1_PC
Vinv__PC2 EQU CYREG_PRT1_PC2
Vinv__PORT EQU 1
Vinv__PS EQU CYREG_PRT1_PS
Vinv__SHIFT EQU 1

; Vout
Vout__0__DM__MASK EQU 0x1C0
Vout__0__DM__SHIFT EQU 6
Vout__0__DR EQU CYREG_PRT1_DR
Vout__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
Vout__0__HSIOM_MASK EQU 0x00000F00
Vout__0__HSIOM_SHIFT EQU 8
Vout__0__INTCFG EQU CYREG_PRT1_INTCFG
Vout__0__INTSTAT EQU CYREG_PRT1_INTSTAT
Vout__0__MASK EQU 0x04
Vout__0__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
Vout__0__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
Vout__0__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
Vout__0__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
Vout__0__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
Vout__0__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
Vout__0__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
Vout__0__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
Vout__0__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
Vout__0__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
Vout__0__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
Vout__0__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
Vout__0__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
Vout__0__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
Vout__0__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
Vout__0__PC EQU CYREG_PRT1_PC
Vout__0__PC2 EQU CYREG_PRT1_PC2
Vout__0__PORT EQU 1
Vout__0__PS EQU CYREG_PRT1_PS
Vout__0__SHIFT EQU 2
Vout__DR EQU CYREG_PRT1_DR
Vout__INTCFG EQU CYREG_PRT1_INTCFG
Vout__INTSTAT EQU CYREG_PRT1_INTSTAT
Vout__MASK EQU 0x04
Vout__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
Vout__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
Vout__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
Vout__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
Vout__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
Vout__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
Vout__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
Vout__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
Vout__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
Vout__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
Vout__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
Vout__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
Vout__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
Vout__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
Vout__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
Vout__PC EQU CYREG_PRT1_PC
Vout__PC2 EQU CYREG_PRT1_PC2
Vout__PORT EQU 1
Vout__PS EQU CYREG_PRT1_PS
Vout__SHIFT EQU 2

; Vpos
Vpos__0__DM__MASK EQU 0x07
Vpos__0__DM__SHIFT EQU 0
Vpos__0__DR EQU CYREG_PRT1_DR
Vpos__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
Vpos__0__HSIOM_MASK EQU 0x0000000F
Vpos__0__HSIOM_SHIFT EQU 0
Vpos__0__INTCFG EQU CYREG_PRT1_INTCFG
Vpos__0__INTSTAT EQU CYREG_PRT1_INTSTAT
Vpos__0__MASK EQU 0x01
Vpos__0__OUT_SEL EQU CYREG_UDB_PA1_CFG10
Vpos__0__OUT_SEL_SHIFT EQU 0
Vpos__0__OUT_SEL_VAL EQU 2
Vpos__0__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
Vpos__0__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
Vpos__0__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
Vpos__0__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
Vpos__0__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
Vpos__0__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
Vpos__0__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
Vpos__0__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
Vpos__0__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
Vpos__0__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
Vpos__0__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
Vpos__0__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
Vpos__0__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
Vpos__0__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
Vpos__0__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
Vpos__0__PC EQU CYREG_PRT1_PC
Vpos__0__PC2 EQU CYREG_PRT1_PC2
Vpos__0__PORT EQU 1
Vpos__0__PS EQU CYREG_PRT1_PS
Vpos__0__SHIFT EQU 0
Vpos__DR EQU CYREG_PRT1_DR
Vpos__INTCFG EQU CYREG_PRT1_INTCFG
Vpos__INTSTAT EQU CYREG_PRT1_INTSTAT
Vpos__MASK EQU 0x01
Vpos__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
Vpos__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
Vpos__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
Vpos__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
Vpos__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
Vpos__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
Vpos__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
Vpos__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
Vpos__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
Vpos__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
Vpos__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
Vpos__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
Vpos__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
Vpos__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
Vpos__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
Vpos__PC EQU CYREG_PRT1_PC
Vpos__PC2 EQU CYREG_PRT1_PC2
Vpos__PORT EQU 1
Vpos__PS EQU CYREG_PRT1_PS
Vpos__SHIFT EQU 0

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

; Opamp1
Opamp1_cy_psoc4_abuf__COMP_STAT EQU CYREG_CTBM_COMP_STAT
Opamp1_cy_psoc4_abuf__COMP_STAT_SHIFT EQU 0
Opamp1_cy_psoc4_abuf__CTBM_CTB_CTRL EQU CYREG_CTBM_CTB_CTRL
Opamp1_cy_psoc4_abuf__INTR EQU CYREG_CTBM_INTR
Opamp1_cy_psoc4_abuf__INTR_MASK EQU CYREG_CTBM_INTR_MASK
Opamp1_cy_psoc4_abuf__INTR_MASK_SHIFT EQU 0
Opamp1_cy_psoc4_abuf__INTR_MASKED EQU CYREG_CTBM_INTR_MASKED
Opamp1_cy_psoc4_abuf__INTR_MASKED_SHIFT EQU 0
Opamp1_cy_psoc4_abuf__INTR_SET EQU CYREG_CTBM_INTR_SET
Opamp1_cy_psoc4_abuf__INTR_SET_SHIFT EQU 0
Opamp1_cy_psoc4_abuf__INTR_SHIFT EQU 0
Opamp1_cy_psoc4_abuf__OA_COMP_TRIM EQU CYREG_CTBM_OA0_COMP_TRIM
Opamp1_cy_psoc4_abuf__OA_NUMBER EQU 0
Opamp1_cy_psoc4_abuf__OA_OFFSET_TRIM EQU CYREG_CTBM_OA0_OFFSET_TRIM
Opamp1_cy_psoc4_abuf__OA_RES_CTRL EQU CYREG_CTBM_OA_RES0_CTRL
Opamp1_cy_psoc4_abuf__OA_SLOPE_OFFSET_TRIM EQU CYREG_CTBM_OA0_SLOPE_OFFSET_TRIM
Opamp1_cy_psoc4_abuf__OA_SW EQU CYREG_CTBM_OA0_SW
Opamp1_cy_psoc4_abuf__OA_SW_CLEAR EQU CYREG_CTBM_OA0_SW_CLEAR

; SW1_IDAC
SW1_IDAC__0__DM__MASK EQU 0xE00000
SW1_IDAC__0__DM__SHIFT EQU 21
SW1_IDAC__0__DR EQU CYREG_PRT0_DR
SW1_IDAC__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
SW1_IDAC__0__HSIOM_MASK EQU 0xF0000000
SW1_IDAC__0__HSIOM_SHIFT EQU 28
SW1_IDAC__0__INTCFG EQU CYREG_PRT0_INTCFG
SW1_IDAC__0__INTSTAT EQU CYREG_PRT0_INTSTAT
SW1_IDAC__0__MASK EQU 0x80
SW1_IDAC__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
SW1_IDAC__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
SW1_IDAC__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
SW1_IDAC__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
SW1_IDAC__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
SW1_IDAC__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
SW1_IDAC__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
SW1_IDAC__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
SW1_IDAC__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
SW1_IDAC__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
SW1_IDAC__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
SW1_IDAC__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
SW1_IDAC__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
SW1_IDAC__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
SW1_IDAC__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
SW1_IDAC__0__PC EQU CYREG_PRT0_PC
SW1_IDAC__0__PC2 EQU CYREG_PRT0_PC2
SW1_IDAC__0__PORT EQU 0
SW1_IDAC__0__PS EQU CYREG_PRT0_PS
SW1_IDAC__0__SHIFT EQU 7
SW1_IDAC__DR EQU CYREG_PRT0_DR
SW1_IDAC__INTCFG EQU CYREG_PRT0_INTCFG
SW1_IDAC__INTSTAT EQU CYREG_PRT0_INTSTAT
SW1_IDAC__MASK EQU 0x80
SW1_IDAC__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
SW1_IDAC__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
SW1_IDAC__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
SW1_IDAC__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
SW1_IDAC__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
SW1_IDAC__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
SW1_IDAC__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
SW1_IDAC__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
SW1_IDAC__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
SW1_IDAC__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
SW1_IDAC__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
SW1_IDAC__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
SW1_IDAC__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
SW1_IDAC__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
SW1_IDAC__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
SW1_IDAC__PC EQU CYREG_PRT0_PC
SW1_IDAC__PC2 EQU CYREG_PRT0_PC2
SW1_IDAC__PORT EQU 0
SW1_IDAC__PS EQU CYREG_PRT0_PS
SW1_IDAC__SHIFT EQU 7
SW1_IDAC__SNAP EQU CYREG_PRT0_INTSTAT

; VAR_IDAC
VAR_IDAC__INTC_CLR_EN_REG EQU CYREG_CM0_ICER
VAR_IDAC__INTC_CLR_PD_REG EQU CYREG_CM0_ICPR
VAR_IDAC__INTC_MASK EQU 0x01
VAR_IDAC__INTC_NUMBER EQU 0
VAR_IDAC__INTC_PRIOR_MASK EQU 0xC0
VAR_IDAC__INTC_PRIOR_NUM EQU 3
VAR_IDAC__INTC_PRIOR_REG EQU CYREG_CM0_IPR0
VAR_IDAC__INTC_SET_EN_REG EQU CYREG_CM0_ISER
VAR_IDAC__INTC_SET_PD_REG EQU CYREG_CM0_ISPR

; Miscellaneous
CYDEV_BCLK__HFCLK__HZ EQU 24000000
CYDEV_BCLK__HFCLK__KHZ EQU 24000
CYDEV_BCLK__HFCLK__MHZ EQU 24
CYDEV_BCLK__SYSCLK__HZ EQU 24000000
CYDEV_BCLK__SYSCLK__KHZ EQU 24000
CYDEV_BCLK__SYSCLK__MHZ EQU 24
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
