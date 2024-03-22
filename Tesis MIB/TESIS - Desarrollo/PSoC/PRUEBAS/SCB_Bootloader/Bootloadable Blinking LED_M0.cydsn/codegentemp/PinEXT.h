/*******************************************************************************
* File Name: PinEXT.h  
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

#if !defined(CY_PINS_PinEXT_H) /* Pins PinEXT_H */
#define CY_PINS_PinEXT_H

#include "cytypes.h"
#include "cyfitter.h"
#include "PinEXT_aliases.h"


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
} PinEXT_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   PinEXT_Read(void);
void    PinEXT_Write(uint8 value);
uint8   PinEXT_ReadDataReg(void);
#if defined(PinEXT__PC) || (CY_PSOC4_4200L) 
    void    PinEXT_SetDriveMode(uint8 mode);
#endif
void    PinEXT_SetInterruptMode(uint16 position, uint16 mode);
uint8   PinEXT_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void PinEXT_Sleep(void); 
void PinEXT_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(PinEXT__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define PinEXT_DRIVE_MODE_BITS        (3)
    #define PinEXT_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - PinEXT_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the PinEXT_SetDriveMode() function.
         *  @{
         */
        #define PinEXT_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define PinEXT_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define PinEXT_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define PinEXT_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define PinEXT_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define PinEXT_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define PinEXT_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define PinEXT_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define PinEXT_MASK               PinEXT__MASK
#define PinEXT_SHIFT              PinEXT__SHIFT
#define PinEXT_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in PinEXT_SetInterruptMode() function.
     *  @{
     */
        #define PinEXT_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define PinEXT_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define PinEXT_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define PinEXT_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(PinEXT__SIO)
    #define PinEXT_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(PinEXT__PC) && (CY_PSOC4_4200L)
    #define PinEXT_USBIO_ENABLE               ((uint32)0x80000000u)
    #define PinEXT_USBIO_DISABLE              ((uint32)(~PinEXT_USBIO_ENABLE))
    #define PinEXT_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define PinEXT_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define PinEXT_USBIO_ENTER_SLEEP          ((uint32)((1u << PinEXT_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << PinEXT_USBIO_SUSPEND_DEL_SHIFT)))
    #define PinEXT_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << PinEXT_USBIO_SUSPEND_SHIFT)))
    #define PinEXT_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << PinEXT_USBIO_SUSPEND_DEL_SHIFT)))
    #define PinEXT_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(PinEXT__PC)
    /* Port Configuration */
    #define PinEXT_PC                 (* (reg32 *) PinEXT__PC)
#endif
/* Pin State */
#define PinEXT_PS                     (* (reg32 *) PinEXT__PS)
/* Data Register */
#define PinEXT_DR                     (* (reg32 *) PinEXT__DR)
/* Input Buffer Disable Override */
#define PinEXT_INP_DIS                (* (reg32 *) PinEXT__PC2)

/* Interrupt configuration Registers */
#define PinEXT_INTCFG                 (* (reg32 *) PinEXT__INTCFG)
#define PinEXT_INTSTAT                (* (reg32 *) PinEXT__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define PinEXT_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(PinEXT__SIO)
    #define PinEXT_SIO_REG            (* (reg32 *) PinEXT__SIO)
#endif /* (PinEXT__SIO_CFG) */

/* USBIO registers */
#if !defined(PinEXT__PC) && (CY_PSOC4_4200L)
    #define PinEXT_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define PinEXT_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define PinEXT_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define PinEXT_DRIVE_MODE_SHIFT       (0x00u)
#define PinEXT_DRIVE_MODE_MASK        (0x07u << PinEXT_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins PinEXT_H */


/* [] END OF FILE */
