/*******************************************************************************
* File Name: Nivel_Vout.h  
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

#if !defined(CY_PINS_Nivel_Vout_H) /* Pins Nivel_Vout_H */
#define CY_PINS_Nivel_Vout_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Nivel_Vout_aliases.h"


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
} Nivel_Vout_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   Nivel_Vout_Read(void);
void    Nivel_Vout_Write(uint8 value);
uint8   Nivel_Vout_ReadDataReg(void);
#if defined(Nivel_Vout__PC) || (CY_PSOC4_4200L) 
    void    Nivel_Vout_SetDriveMode(uint8 mode);
#endif
void    Nivel_Vout_SetInterruptMode(uint16 position, uint16 mode);
uint8   Nivel_Vout_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void Nivel_Vout_Sleep(void); 
void Nivel_Vout_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(Nivel_Vout__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define Nivel_Vout_DRIVE_MODE_BITS        (3)
    #define Nivel_Vout_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Nivel_Vout_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the Nivel_Vout_SetDriveMode() function.
         *  @{
         */
        #define Nivel_Vout_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define Nivel_Vout_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define Nivel_Vout_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define Nivel_Vout_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define Nivel_Vout_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define Nivel_Vout_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define Nivel_Vout_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define Nivel_Vout_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define Nivel_Vout_MASK               Nivel_Vout__MASK
#define Nivel_Vout_SHIFT              Nivel_Vout__SHIFT
#define Nivel_Vout_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Nivel_Vout_SetInterruptMode() function.
     *  @{
     */
        #define Nivel_Vout_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define Nivel_Vout_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define Nivel_Vout_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define Nivel_Vout_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(Nivel_Vout__SIO)
    #define Nivel_Vout_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(Nivel_Vout__PC) && (CY_PSOC4_4200L)
    #define Nivel_Vout_USBIO_ENABLE               ((uint32)0x80000000u)
    #define Nivel_Vout_USBIO_DISABLE              ((uint32)(~Nivel_Vout_USBIO_ENABLE))
    #define Nivel_Vout_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define Nivel_Vout_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define Nivel_Vout_USBIO_ENTER_SLEEP          ((uint32)((1u << Nivel_Vout_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << Nivel_Vout_USBIO_SUSPEND_DEL_SHIFT)))
    #define Nivel_Vout_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << Nivel_Vout_USBIO_SUSPEND_SHIFT)))
    #define Nivel_Vout_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << Nivel_Vout_USBIO_SUSPEND_DEL_SHIFT)))
    #define Nivel_Vout_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(Nivel_Vout__PC)
    /* Port Configuration */
    #define Nivel_Vout_PC                 (* (reg32 *) Nivel_Vout__PC)
#endif
/* Pin State */
#define Nivel_Vout_PS                     (* (reg32 *) Nivel_Vout__PS)
/* Data Register */
#define Nivel_Vout_DR                     (* (reg32 *) Nivel_Vout__DR)
/* Input Buffer Disable Override */
#define Nivel_Vout_INP_DIS                (* (reg32 *) Nivel_Vout__PC2)

/* Interrupt configuration Registers */
#define Nivel_Vout_INTCFG                 (* (reg32 *) Nivel_Vout__INTCFG)
#define Nivel_Vout_INTSTAT                (* (reg32 *) Nivel_Vout__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define Nivel_Vout_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(Nivel_Vout__SIO)
    #define Nivel_Vout_SIO_REG            (* (reg32 *) Nivel_Vout__SIO)
#endif /* (Nivel_Vout__SIO_CFG) */

/* USBIO registers */
#if !defined(Nivel_Vout__PC) && (CY_PSOC4_4200L)
    #define Nivel_Vout_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define Nivel_Vout_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define Nivel_Vout_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define Nivel_Vout_DRIVE_MODE_SHIFT       (0x00u)
#define Nivel_Vout_DRIVE_MODE_MASK        (0x07u << Nivel_Vout_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins Nivel_Vout_H */


/* [] END OF FILE */
