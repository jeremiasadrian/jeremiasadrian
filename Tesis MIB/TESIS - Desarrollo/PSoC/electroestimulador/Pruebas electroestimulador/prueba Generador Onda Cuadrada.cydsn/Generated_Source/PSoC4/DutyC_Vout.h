/*******************************************************************************
* File Name: DutyC_Vout.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_DutyC_Vout_H) /* Pins DutyC_Vout_H */
#define CY_PINS_DutyC_Vout_H

#include "cytypes.h"
#include "cyfitter.h"
#include "DutyC_Vout_aliases.h"


/***************************************
*     Data Struct Definitions
***************************************/

/**
* \addtogroup group_structures
* @{
*/
    
/* Structure for sleep mode support */
typedef struct
{
    uint32 pcState; /**< State of the port control register */
    uint32 sioState; /**< State of the SIO configuration */
    uint32 usbState; /**< State of the USBIO regulator */
} DutyC_Vout_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   DutyC_Vout_Read(void);
void    DutyC_Vout_Write(uint8 value);
uint8   DutyC_Vout_ReadDataReg(void);
#if defined(DutyC_Vout__PC) || (CY_PSOC4_4200L) 
    void    DutyC_Vout_SetDriveMode(uint8 mode);
#endif
void    DutyC_Vout_SetInterruptMode(uint16 position, uint16 mode);
uint8   DutyC_Vout_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void DutyC_Vout_Sleep(void); 
void DutyC_Vout_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(DutyC_Vout__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define DutyC_Vout_DRIVE_MODE_BITS        (3)
    #define DutyC_Vout_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - DutyC_Vout_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the DutyC_Vout_SetDriveMode() function.
         *  @{
         */
        #define DutyC_Vout_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define DutyC_Vout_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define DutyC_Vout_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define DutyC_Vout_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define DutyC_Vout_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define DutyC_Vout_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define DutyC_Vout_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define DutyC_Vout_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define DutyC_Vout_MASK               DutyC_Vout__MASK
#define DutyC_Vout_SHIFT              DutyC_Vout__SHIFT
#define DutyC_Vout_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in DutyC_Vout_SetInterruptMode() function.
     *  @{
     */
        #define DutyC_Vout_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define DutyC_Vout_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define DutyC_Vout_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define DutyC_Vout_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(DutyC_Vout__SIO)
    #define DutyC_Vout_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(DutyC_Vout__PC) && (CY_PSOC4_4200L)
    #define DutyC_Vout_USBIO_ENABLE               ((uint32)0x80000000u)
    #define DutyC_Vout_USBIO_DISABLE              ((uint32)(~DutyC_Vout_USBIO_ENABLE))
    #define DutyC_Vout_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define DutyC_Vout_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define DutyC_Vout_USBIO_ENTER_SLEEP          ((uint32)((1u << DutyC_Vout_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << DutyC_Vout_USBIO_SUSPEND_DEL_SHIFT)))
    #define DutyC_Vout_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << DutyC_Vout_USBIO_SUSPEND_SHIFT)))
    #define DutyC_Vout_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << DutyC_Vout_USBIO_SUSPEND_DEL_SHIFT)))
    #define DutyC_Vout_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(DutyC_Vout__PC)
    /* Port Configuration */
    #define DutyC_Vout_PC                 (* (reg32 *) DutyC_Vout__PC)
#endif
/* Pin State */
#define DutyC_Vout_PS                     (* (reg32 *) DutyC_Vout__PS)
/* Data Register */
#define DutyC_Vout_DR                     (* (reg32 *) DutyC_Vout__DR)
/* Input Buffer Disable Override */
#define DutyC_Vout_INP_DIS                (* (reg32 *) DutyC_Vout__PC2)

/* Interrupt configuration Registers */
#define DutyC_Vout_INTCFG                 (* (reg32 *) DutyC_Vout__INTCFG)
#define DutyC_Vout_INTSTAT                (* (reg32 *) DutyC_Vout__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define DutyC_Vout_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(DutyC_Vout__SIO)
    #define DutyC_Vout_SIO_REG            (* (reg32 *) DutyC_Vout__SIO)
#endif /* (DutyC_Vout__SIO_CFG) */

/* USBIO registers */
#if !defined(DutyC_Vout__PC) && (CY_PSOC4_4200L)
    #define DutyC_Vout_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define DutyC_Vout_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define DutyC_Vout_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define DutyC_Vout_DRIVE_MODE_SHIFT       (0x00u)
#define DutyC_Vout_DRIVE_MODE_MASK        (0x07u << DutyC_Vout_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins DutyC_Vout_H */


/* [] END OF FILE */
