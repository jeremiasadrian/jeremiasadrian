/*******************************************************************************
* File Name: Val_Vout.h  
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

#if !defined(CY_PINS_Val_Vout_H) /* Pins Val_Vout_H */
#define CY_PINS_Val_Vout_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Val_Vout_aliases.h"


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
} Val_Vout_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   Val_Vout_Read(void);
void    Val_Vout_Write(uint8 value);
uint8   Val_Vout_ReadDataReg(void);
#if defined(Val_Vout__PC) || (CY_PSOC4_4200L) 
    void    Val_Vout_SetDriveMode(uint8 mode);
#endif
void    Val_Vout_SetInterruptMode(uint16 position, uint16 mode);
uint8   Val_Vout_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void Val_Vout_Sleep(void); 
void Val_Vout_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(Val_Vout__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define Val_Vout_DRIVE_MODE_BITS        (3)
    #define Val_Vout_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Val_Vout_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the Val_Vout_SetDriveMode() function.
         *  @{
         */
        #define Val_Vout_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define Val_Vout_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define Val_Vout_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define Val_Vout_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define Val_Vout_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define Val_Vout_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define Val_Vout_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define Val_Vout_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define Val_Vout_MASK               Val_Vout__MASK
#define Val_Vout_SHIFT              Val_Vout__SHIFT
#define Val_Vout_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Val_Vout_SetInterruptMode() function.
     *  @{
     */
        #define Val_Vout_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define Val_Vout_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define Val_Vout_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define Val_Vout_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(Val_Vout__SIO)
    #define Val_Vout_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(Val_Vout__PC) && (CY_PSOC4_4200L)
    #define Val_Vout_USBIO_ENABLE               ((uint32)0x80000000u)
    #define Val_Vout_USBIO_DISABLE              ((uint32)(~Val_Vout_USBIO_ENABLE))
    #define Val_Vout_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define Val_Vout_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define Val_Vout_USBIO_ENTER_SLEEP          ((uint32)((1u << Val_Vout_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << Val_Vout_USBIO_SUSPEND_DEL_SHIFT)))
    #define Val_Vout_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << Val_Vout_USBIO_SUSPEND_SHIFT)))
    #define Val_Vout_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << Val_Vout_USBIO_SUSPEND_DEL_SHIFT)))
    #define Val_Vout_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(Val_Vout__PC)
    /* Port Configuration */
    #define Val_Vout_PC                 (* (reg32 *) Val_Vout__PC)
#endif
/* Pin State */
#define Val_Vout_PS                     (* (reg32 *) Val_Vout__PS)
/* Data Register */
#define Val_Vout_DR                     (* (reg32 *) Val_Vout__DR)
/* Input Buffer Disable Override */
#define Val_Vout_INP_DIS                (* (reg32 *) Val_Vout__PC2)

/* Interrupt configuration Registers */
#define Val_Vout_INTCFG                 (* (reg32 *) Val_Vout__INTCFG)
#define Val_Vout_INTSTAT                (* (reg32 *) Val_Vout__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define Val_Vout_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(Val_Vout__SIO)
    #define Val_Vout_SIO_REG            (* (reg32 *) Val_Vout__SIO)
#endif /* (Val_Vout__SIO_CFG) */

/* USBIO registers */
#if !defined(Val_Vout__PC) && (CY_PSOC4_4200L)
    #define Val_Vout_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define Val_Vout_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define Val_Vout_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define Val_Vout_DRIVE_MODE_SHIFT       (0x00u)
#define Val_Vout_DRIVE_MODE_MASK        (0x07u << Val_Vout_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins Val_Vout_H */


/* [] END OF FILE */
