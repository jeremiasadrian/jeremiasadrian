/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.4
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice_trm.h"

/* Vinv */
#define Vinv__0__DM__MASK 0x38u
#define Vinv__0__DM__SHIFT 3u
#define Vinv__0__DR CYREG_PRT1_DR
#define Vinv__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define Vinv__0__HSIOM_MASK 0x000000F0u
#define Vinv__0__HSIOM_SHIFT 4u
#define Vinv__0__INTCFG CYREG_PRT1_INTCFG
#define Vinv__0__INTSTAT CYREG_PRT1_INTSTAT
#define Vinv__0__MASK 0x02u
#define Vinv__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Vinv__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Vinv__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Vinv__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Vinv__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Vinv__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Vinv__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Vinv__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Vinv__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Vinv__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Vinv__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Vinv__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Vinv__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Vinv__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Vinv__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Vinv__0__PC CYREG_PRT1_PC
#define Vinv__0__PC2 CYREG_PRT1_PC2
#define Vinv__0__PORT 1u
#define Vinv__0__PS CYREG_PRT1_PS
#define Vinv__0__SHIFT 1u
#define Vinv__DR CYREG_PRT1_DR
#define Vinv__INTCFG CYREG_PRT1_INTCFG
#define Vinv__INTSTAT CYREG_PRT1_INTSTAT
#define Vinv__MASK 0x02u
#define Vinv__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Vinv__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Vinv__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Vinv__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Vinv__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Vinv__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Vinv__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Vinv__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Vinv__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Vinv__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Vinv__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Vinv__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Vinv__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Vinv__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Vinv__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Vinv__PC CYREG_PRT1_PC
#define Vinv__PC2 CYREG_PRT1_PC2
#define Vinv__PORT 1u
#define Vinv__PS CYREG_PRT1_PS
#define Vinv__SHIFT 1u

/* Vout */
#define Vout__0__DM__MASK 0x1C0u
#define Vout__0__DM__SHIFT 6u
#define Vout__0__DR CYREG_PRT1_DR
#define Vout__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define Vout__0__HSIOM_MASK 0x00000F00u
#define Vout__0__HSIOM_SHIFT 8u
#define Vout__0__INTCFG CYREG_PRT1_INTCFG
#define Vout__0__INTSTAT CYREG_PRT1_INTSTAT
#define Vout__0__MASK 0x04u
#define Vout__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Vout__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Vout__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Vout__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Vout__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Vout__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Vout__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Vout__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Vout__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Vout__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Vout__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Vout__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Vout__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Vout__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Vout__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Vout__0__PC CYREG_PRT1_PC
#define Vout__0__PC2 CYREG_PRT1_PC2
#define Vout__0__PORT 1u
#define Vout__0__PS CYREG_PRT1_PS
#define Vout__0__SHIFT 2u
#define Vout__DR CYREG_PRT1_DR
#define Vout__INTCFG CYREG_PRT1_INTCFG
#define Vout__INTSTAT CYREG_PRT1_INTSTAT
#define Vout__MASK 0x04u
#define Vout__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Vout__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Vout__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Vout__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Vout__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Vout__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Vout__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Vout__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Vout__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Vout__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Vout__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Vout__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Vout__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Vout__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Vout__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Vout__PC CYREG_PRT1_PC
#define Vout__PC2 CYREG_PRT1_PC2
#define Vout__PORT 1u
#define Vout__PS CYREG_PRT1_PS
#define Vout__SHIFT 2u

/* Vpos */
#define Vpos__0__DM__MASK 0x07u
#define Vpos__0__DM__SHIFT 0u
#define Vpos__0__DR CYREG_PRT1_DR
#define Vpos__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define Vpos__0__HSIOM_MASK 0x0000000Fu
#define Vpos__0__HSIOM_SHIFT 0u
#define Vpos__0__INTCFG CYREG_PRT1_INTCFG
#define Vpos__0__INTSTAT CYREG_PRT1_INTSTAT
#define Vpos__0__MASK 0x01u
#define Vpos__0__OUT_SEL CYREG_UDB_PA1_CFG10
#define Vpos__0__OUT_SEL_SHIFT 0u
#define Vpos__0__OUT_SEL_VAL 2u
#define Vpos__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Vpos__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Vpos__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Vpos__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Vpos__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Vpos__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Vpos__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Vpos__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Vpos__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Vpos__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Vpos__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Vpos__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Vpos__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Vpos__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Vpos__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Vpos__0__PC CYREG_PRT1_PC
#define Vpos__0__PC2 CYREG_PRT1_PC2
#define Vpos__0__PORT 1u
#define Vpos__0__PS CYREG_PRT1_PS
#define Vpos__0__SHIFT 0u
#define Vpos__DR CYREG_PRT1_DR
#define Vpos__INTCFG CYREG_PRT1_INTCFG
#define Vpos__INTSTAT CYREG_PRT1_INTSTAT
#define Vpos__MASK 0x01u
#define Vpos__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Vpos__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Vpos__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Vpos__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Vpos__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Vpos__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Vpos__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Vpos__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Vpos__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Vpos__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Vpos__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Vpos__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Vpos__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Vpos__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Vpos__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Vpos__PC CYREG_PRT1_PC
#define Vpos__PC2 CYREG_PRT1_PC2
#define Vpos__PORT 1u
#define Vpos__PS CYREG_PRT1_PS
#define Vpos__SHIFT 0u

/* IDAC_1 */
#define IDAC_1_cy_psoc4_idac__CONTROL CYREG_CSD_CONFIG
#define IDAC_1_cy_psoc4_idac__CSD_IDAC CYREG_CSD_IDAC
#define IDAC_1_cy_psoc4_idac__CSD_IDAC_SHIFT 0u
#define IDAC_1_cy_psoc4_idac__CSD_TRIM1 CYREG_CSD_TRIM1
#define IDAC_1_cy_psoc4_idac__CSD_TRIM1_SHIFT 0u
#define IDAC_1_cy_psoc4_idac__CSD_TRIM2 CYREG_CSD_TRIM2
#define IDAC_1_cy_psoc4_idac__CSD_TRIM2_SHIFT 0u
#define IDAC_1_cy_psoc4_idac__IDAC_NUMBER 1u
#define IDAC_1_cy_psoc4_idac__POLARITY CYREG_CSD_CONFIG
#define IDAC_1_cy_psoc4_idac__POLARITY_SHIFT 16u

/* Opamp1 */
#define Opamp1_cy_psoc4_abuf__COMP_STAT CYREG_CTBM_COMP_STAT
#define Opamp1_cy_psoc4_abuf__COMP_STAT_SHIFT 0u
#define Opamp1_cy_psoc4_abuf__CTBM_CTB_CTRL CYREG_CTBM_CTB_CTRL
#define Opamp1_cy_psoc4_abuf__INTR CYREG_CTBM_INTR
#define Opamp1_cy_psoc4_abuf__INTR_MASK CYREG_CTBM_INTR_MASK
#define Opamp1_cy_psoc4_abuf__INTR_MASK_SHIFT 0u
#define Opamp1_cy_psoc4_abuf__INTR_MASKED CYREG_CTBM_INTR_MASKED
#define Opamp1_cy_psoc4_abuf__INTR_MASKED_SHIFT 0u
#define Opamp1_cy_psoc4_abuf__INTR_SET CYREG_CTBM_INTR_SET
#define Opamp1_cy_psoc4_abuf__INTR_SET_SHIFT 0u
#define Opamp1_cy_psoc4_abuf__INTR_SHIFT 0u
#define Opamp1_cy_psoc4_abuf__OA_COMP_TRIM CYREG_CTBM_OA0_COMP_TRIM
#define Opamp1_cy_psoc4_abuf__OA_NUMBER 0u
#define Opamp1_cy_psoc4_abuf__OA_OFFSET_TRIM CYREG_CTBM_OA0_OFFSET_TRIM
#define Opamp1_cy_psoc4_abuf__OA_RES_CTRL CYREG_CTBM_OA_RES0_CTRL
#define Opamp1_cy_psoc4_abuf__OA_SLOPE_OFFSET_TRIM CYREG_CTBM_OA0_SLOPE_OFFSET_TRIM
#define Opamp1_cy_psoc4_abuf__OA_SW CYREG_CTBM_OA0_SW
#define Opamp1_cy_psoc4_abuf__OA_SW_CLEAR CYREG_CTBM_OA0_SW_CLEAR

/* SW1_IDAC */
#define SW1_IDAC__0__DM__MASK 0xE00000u
#define SW1_IDAC__0__DM__SHIFT 21u
#define SW1_IDAC__0__DR CYREG_PRT0_DR
#define SW1_IDAC__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define SW1_IDAC__0__HSIOM_MASK 0xF0000000u
#define SW1_IDAC__0__HSIOM_SHIFT 28u
#define SW1_IDAC__0__INTCFG CYREG_PRT0_INTCFG
#define SW1_IDAC__0__INTSTAT CYREG_PRT0_INTSTAT
#define SW1_IDAC__0__MASK 0x80u
#define SW1_IDAC__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define SW1_IDAC__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define SW1_IDAC__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define SW1_IDAC__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define SW1_IDAC__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define SW1_IDAC__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define SW1_IDAC__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define SW1_IDAC__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define SW1_IDAC__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define SW1_IDAC__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define SW1_IDAC__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define SW1_IDAC__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define SW1_IDAC__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define SW1_IDAC__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define SW1_IDAC__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define SW1_IDAC__0__PC CYREG_PRT0_PC
#define SW1_IDAC__0__PC2 CYREG_PRT0_PC2
#define SW1_IDAC__0__PORT 0u
#define SW1_IDAC__0__PS CYREG_PRT0_PS
#define SW1_IDAC__0__SHIFT 7u
#define SW1_IDAC__DR CYREG_PRT0_DR
#define SW1_IDAC__INTCFG CYREG_PRT0_INTCFG
#define SW1_IDAC__INTSTAT CYREG_PRT0_INTSTAT
#define SW1_IDAC__MASK 0x80u
#define SW1_IDAC__PA__CFG0 CYREG_UDB_PA0_CFG0
#define SW1_IDAC__PA__CFG1 CYREG_UDB_PA0_CFG1
#define SW1_IDAC__PA__CFG10 CYREG_UDB_PA0_CFG10
#define SW1_IDAC__PA__CFG11 CYREG_UDB_PA0_CFG11
#define SW1_IDAC__PA__CFG12 CYREG_UDB_PA0_CFG12
#define SW1_IDAC__PA__CFG13 CYREG_UDB_PA0_CFG13
#define SW1_IDAC__PA__CFG14 CYREG_UDB_PA0_CFG14
#define SW1_IDAC__PA__CFG2 CYREG_UDB_PA0_CFG2
#define SW1_IDAC__PA__CFG3 CYREG_UDB_PA0_CFG3
#define SW1_IDAC__PA__CFG4 CYREG_UDB_PA0_CFG4
#define SW1_IDAC__PA__CFG5 CYREG_UDB_PA0_CFG5
#define SW1_IDAC__PA__CFG6 CYREG_UDB_PA0_CFG6
#define SW1_IDAC__PA__CFG7 CYREG_UDB_PA0_CFG7
#define SW1_IDAC__PA__CFG8 CYREG_UDB_PA0_CFG8
#define SW1_IDAC__PA__CFG9 CYREG_UDB_PA0_CFG9
#define SW1_IDAC__PC CYREG_PRT0_PC
#define SW1_IDAC__PC2 CYREG_PRT0_PC2
#define SW1_IDAC__PORT 0u
#define SW1_IDAC__PS CYREG_PRT0_PS
#define SW1_IDAC__SHIFT 7u
#define SW1_IDAC__SNAP CYREG_PRT0_INTSTAT

/* VAR_IDAC */
#define VAR_IDAC__INTC_CLR_EN_REG CYREG_CM0_ICER
#define VAR_IDAC__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define VAR_IDAC__INTC_MASK 0x01u
#define VAR_IDAC__INTC_NUMBER 0u
#define VAR_IDAC__INTC_PRIOR_MASK 0xC0u
#define VAR_IDAC__INTC_PRIOR_NUM 3u
#define VAR_IDAC__INTC_PRIOR_REG CYREG_CM0_IPR0
#define VAR_IDAC__INTC_SET_EN_REG CYREG_CM0_ISER
#define VAR_IDAC__INTC_SET_PD_REG CYREG_CM0_ISPR

/* Miscellaneous */
#define CY_PROJECT_NAME "prueba IDAC+OA=VDAC"
#define CY_VERSION "PSoC Creator  4.4"
#define CYDEV_BANDGAP_VOLTAGE 1.024
#define CYDEV_BCLK__HFCLK__HZ 24000000U
#define CYDEV_BCLK__HFCLK__KHZ 24000U
#define CYDEV_BCLK__HFCLK__MHZ 24U
#define CYDEV_BCLK__SYSCLK__HZ 24000000U
#define CYDEV_BCLK__SYSCLK__KHZ 24000U
#define CYDEV_BCLK__SYSCLK__MHZ 24U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 26u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x04C81193u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 26u
#define CYDEV_CHIP_MEMBER_4AA 25u
#define CYDEV_CHIP_MEMBER_4AB 30u
#define CYDEV_CHIP_MEMBER_4AC 14u
#define CYDEV_CHIP_MEMBER_4AD 15u
#define CYDEV_CHIP_MEMBER_4AE 16u
#define CYDEV_CHIP_MEMBER_4D 20u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 27u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 24u
#define CYDEV_CHIP_MEMBER_4I 32u
#define CYDEV_CHIP_MEMBER_4J 21u
#define CYDEV_CHIP_MEMBER_4K 22u
#define CYDEV_CHIP_MEMBER_4L 31u
#define CYDEV_CHIP_MEMBER_4M 29u
#define CYDEV_CHIP_MEMBER_4N 11u
#define CYDEV_CHIP_MEMBER_4O 8u
#define CYDEV_CHIP_MEMBER_4P 28u
#define CYDEV_CHIP_MEMBER_4Q 17u
#define CYDEV_CHIP_MEMBER_4R 9u
#define CYDEV_CHIP_MEMBER_4S 12u
#define CYDEV_CHIP_MEMBER_4T 10u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 23u
#define CYDEV_CHIP_MEMBER_4W 13u
#define CYDEV_CHIP_MEMBER_4X 7u
#define CYDEV_CHIP_MEMBER_4Y 18u
#define CYDEV_CHIP_MEMBER_4Z 19u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 33u
#define CYDEV_CHIP_MEMBER_FM3 37u
#define CYDEV_CHIP_MEMBER_FM4 38u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 34u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 35u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 36u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4A
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4AA_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AB_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AC_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AD_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AE_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4W_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4X_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Y_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Z_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4A_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_Disallowed
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_Disable
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_ENABLE 0
#define CYDEV_DFT_SELECT_CLK0 1u
#define CYDEV_DFT_SELECT_CLK1 2u
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_IMO_TRIMMED_BY_USB 0u
#define CYDEV_IMO_TRIMMED_BY_WCO 0u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 2
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0400
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 3.3
#define CYDEV_VDDA_MV 3300
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_WDT_GENERATE_ISR 1u
#define CYIPBLOCK_M0S8_CTBM_VERSION 0
#define CYIPBLOCK_m0s8cpuss_VERSION 0
#define CYIPBLOCK_m0s8csd_VERSION 0
#define CYIPBLOCK_m0s8gpio2_VERSION 0
#define CYIPBLOCK_m0s8hsiom4a_VERSION 0
#define CYIPBLOCK_m0s8lcd_VERSION 0
#define CYIPBLOCK_m0s8lpcomp_VERSION 0
#define CYIPBLOCK_m0s8pclk_VERSION 0
#define CYIPBLOCK_m0s8sar_VERSION 0
#define CYIPBLOCK_m0s8scb_VERSION 0
#define CYIPBLOCK_m0s8srssv2_VERSION 1
#define CYIPBLOCK_m0s8tcpwm_VERSION 0
#define CYIPBLOCK_m0s8udbif_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 2
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
