/*******************************************************************************
* File Name: Val_Peri.h  
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

#if !defined(CY_PINS_Val_Peri_H) /* Pins Val_Peri_H */
#define CY_PINS_Val_Peri_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Val_Peri_aliases.h"


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
} Val_Peri_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   Val_Peri_Read(void);
void    Val_Peri_Write(uint8 value);
uint8   Val_Peri_ReadDataReg(void);
#if defined(Val_Peri__PC) || (CY_PSOC4_4200L) 
    void    Val_Peri_SetDriveMode(uint8 mode);
#endif
void    Val_Peri_SetInterruptMode(uint16 position, uint16 mode);
uint8   Val_Peri_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void Val_Peri_Sleep(void); 
void Val_Peri_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(Val_Peri__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define Val_Peri_DRIVE_MODE_BITS        (3)
    #define Val_Peri_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Val_Peri_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the Val_Peri_SetDriveMode() function.
         *  @{
         */
        #define Val_Peri_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define Val_Peri_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define Val_Peri_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define Val_Peri_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define Val_Peri_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define Val_Peri_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define Val_Peri_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define Val_Peri_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define Val_Peri_MASK               Val_Peri__MASK
#define Val_Peri_SHIFT              Val_Peri__SHIFT
#define Val_Peri_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Val_Peri_SetInterruptMode() function.
     *  @{
     */
        #define Val_Peri_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define Val_Peri_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define Val_Peri_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define Val_Peri_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(Val_Peri__SIO)
    #define Val_Peri_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(Val_Peri__PC) && (CY_PSOC4_4200L)
    #define Val_Peri_USBIO_ENABLE               ((uint32)0x80000000u)
    #define Val_Peri_USBIO_DISABLE              ((uint32)(~Val_Peri_USBIO_ENABLE))
    #define Val_Peri_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define Val_Peri_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define Val_Peri_USBIO_ENTER_SLEEP          ((uint32)((1u << Val_Peri_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << Val_Peri_USBIO_SUSPEND_DEL_SHIFT)))
    #define Val_Peri_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << Val_Peri_USBIO_SUSPEND_SHIFT)))
    #define Val_Peri_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << Val_Peri_USBIO_SUSPEND_DEL_SHIFT)))
    #define Val_Peri_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(Val_Peri__PC)
    /* Port Configuration */
    #define Val_Peri_PC                 (* (reg32 *) Val_Peri__PC)
#endif
/* Pin State */
#define Val_Peri_PS                     (* (reg32 *) Val_Peri__PS)
/* Data Register */
#define Val_Peri_DR                     (* (reg32 *) Val_Peri__DR)
/* Input Buffer Disable Override */
#define Val_Peri_INP_DIS                (* (reg32 *) Val_Peri__PC2)

/* Interrupt configuration Registers */
#define Val_Peri_INTCFG                 (* (reg32 *) Val_Peri__INTCFG)
#define Val_Peri_INTSTAT                (* (reg32 *) Val_Peri__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define Val_Peri_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(Val_Peri__SIO)
    #define Val_Peri_SIO_REG            (* (reg32 *) Val_Peri__SIO)
#endif /* (Val_Peri__SIO_CFG) */

/* USBIO registers */
#if !defined(Val_Peri__PC) && (CY_PSOC4_4200L)
    #define Val_Peri_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define Val_Peri_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define Val_Peri_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define Val_Peri_DRIVE_MODE_SHIFT       (0x00u)
#define Val_Peri_DRIVE_MODE_MASK        (0x07u << Val_Peri_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins Val_Peri_H */


/* [] END OF FILE */
