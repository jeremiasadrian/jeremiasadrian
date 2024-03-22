/*******************************************************************************
* File Name: Vinv.h  
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

#if !defined(CY_PINS_Vinv_H) /* Pins Vinv_H */
#define CY_PINS_Vinv_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Vinv_aliases.h"


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
} Vinv_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   Vinv_Read(void);
void    Vinv_Write(uint8 value);
uint8   Vinv_ReadDataReg(void);
#if defined(Vinv__PC) || (CY_PSOC4_4200L) 
    void    Vinv_SetDriveMode(uint8 mode);
#endif
void    Vinv_SetInterruptMode(uint16 position, uint16 mode);
uint8   Vinv_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void Vinv_Sleep(void); 
void Vinv_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(Vinv__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define Vinv_DRIVE_MODE_BITS        (3)
    #define Vinv_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Vinv_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the Vinv_SetDriveMode() function.
         *  @{
         */
        #define Vinv_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define Vinv_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define Vinv_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define Vinv_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define Vinv_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define Vinv_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define Vinv_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define Vinv_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define Vinv_MASK               Vinv__MASK
#define Vinv_SHIFT              Vinv__SHIFT
#define Vinv_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Vinv_SetInterruptMode() function.
     *  @{
     */
        #define Vinv_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define Vinv_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define Vinv_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define Vinv_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(Vinv__SIO)
    #define Vinv_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(Vinv__PC) && (CY_PSOC4_4200L)
    #define Vinv_USBIO_ENABLE               ((uint32)0x80000000u)
    #define Vinv_USBIO_DISABLE              ((uint32)(~Vinv_USBIO_ENABLE))
    #define Vinv_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define Vinv_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define Vinv_USBIO_ENTER_SLEEP          ((uint32)((1u << Vinv_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << Vinv_USBIO_SUSPEND_DEL_SHIFT)))
    #define Vinv_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << Vinv_USBIO_SUSPEND_SHIFT)))
    #define Vinv_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << Vinv_USBIO_SUSPEND_DEL_SHIFT)))
    #define Vinv_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(Vinv__PC)
    /* Port Configuration */
    #define Vinv_PC                 (* (reg32 *) Vinv__PC)
#endif
/* Pin State */
#define Vinv_PS                     (* (reg32 *) Vinv__PS)
/* Data Register */
#define Vinv_DR                     (* (reg32 *) Vinv__DR)
/* Input Buffer Disable Override */
#define Vinv_INP_DIS                (* (reg32 *) Vinv__PC2)

/* Interrupt configuration Registers */
#define Vinv_INTCFG                 (* (reg32 *) Vinv__INTCFG)
#define Vinv_INTSTAT                (* (reg32 *) Vinv__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define Vinv_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(Vinv__SIO)
    #define Vinv_SIO_REG            (* (reg32 *) Vinv__SIO)
#endif /* (Vinv__SIO_CFG) */

/* USBIO registers */
#if !defined(Vinv__PC) && (CY_PSOC4_4200L)
    #define Vinv_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define Vinv_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define Vinv_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define Vinv_DRIVE_MODE_SHIFT       (0x00u)
#define Vinv_DRIVE_MODE_MASK        (0x07u << Vinv_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins Vinv_H */


/* [] END OF FILE */
