/*******************************************************************************
* File Name: Iout_pos.h  
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

#if !defined(CY_PINS_Iout_pos_H) /* Pins Iout_pos_H */
#define CY_PINS_Iout_pos_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Iout_pos_aliases.h"


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
} Iout_pos_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   Iout_pos_Read(void);
void    Iout_pos_Write(uint8 value);
uint8   Iout_pos_ReadDataReg(void);
#if defined(Iout_pos__PC) || (CY_PSOC4_4200L) 
    void    Iout_pos_SetDriveMode(uint8 mode);
#endif
void    Iout_pos_SetInterruptMode(uint16 position, uint16 mode);
uint8   Iout_pos_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void Iout_pos_Sleep(void); 
void Iout_pos_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(Iout_pos__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define Iout_pos_DRIVE_MODE_BITS        (3)
    #define Iout_pos_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Iout_pos_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the Iout_pos_SetDriveMode() function.
         *  @{
         */
        #define Iout_pos_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define Iout_pos_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define Iout_pos_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define Iout_pos_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define Iout_pos_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define Iout_pos_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define Iout_pos_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define Iout_pos_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define Iout_pos_MASK               Iout_pos__MASK
#define Iout_pos_SHIFT              Iout_pos__SHIFT
#define Iout_pos_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Iout_pos_SetInterruptMode() function.
     *  @{
     */
        #define Iout_pos_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define Iout_pos_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define Iout_pos_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define Iout_pos_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(Iout_pos__SIO)
    #define Iout_pos_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(Iout_pos__PC) && (CY_PSOC4_4200L)
    #define Iout_pos_USBIO_ENABLE               ((uint32)0x80000000u)
    #define Iout_pos_USBIO_DISABLE              ((uint32)(~Iout_pos_USBIO_ENABLE))
    #define Iout_pos_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define Iout_pos_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define Iout_pos_USBIO_ENTER_SLEEP          ((uint32)((1u << Iout_pos_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << Iout_pos_USBIO_SUSPEND_DEL_SHIFT)))
    #define Iout_pos_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << Iout_pos_USBIO_SUSPEND_SHIFT)))
    #define Iout_pos_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << Iout_pos_USBIO_SUSPEND_DEL_SHIFT)))
    #define Iout_pos_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(Iout_pos__PC)
    /* Port Configuration */
    #define Iout_pos_PC                 (* (reg32 *) Iout_pos__PC)
#endif
/* Pin State */
#define Iout_pos_PS                     (* (reg32 *) Iout_pos__PS)
/* Data Register */
#define Iout_pos_DR                     (* (reg32 *) Iout_pos__DR)
/* Input Buffer Disable Override */
#define Iout_pos_INP_DIS                (* (reg32 *) Iout_pos__PC2)

/* Interrupt configuration Registers */
#define Iout_pos_INTCFG                 (* (reg32 *) Iout_pos__INTCFG)
#define Iout_pos_INTSTAT                (* (reg32 *) Iout_pos__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define Iout_pos_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(Iout_pos__SIO)
    #define Iout_pos_SIO_REG            (* (reg32 *) Iout_pos__SIO)
#endif /* (Iout_pos__SIO_CFG) */

/* USBIO registers */
#if !defined(Iout_pos__PC) && (CY_PSOC4_4200L)
    #define Iout_pos_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define Iout_pos_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define Iout_pos_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define Iout_pos_DRIVE_MODE_SHIFT       (0x00u)
#define Iout_pos_DRIVE_MODE_MASK        (0x07u << Iout_pos_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins Iout_pos_H */


/* [] END OF FILE */
