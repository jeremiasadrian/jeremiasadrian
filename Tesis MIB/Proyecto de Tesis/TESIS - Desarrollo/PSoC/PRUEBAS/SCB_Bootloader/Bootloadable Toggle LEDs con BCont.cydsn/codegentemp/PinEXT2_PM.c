/*******************************************************************************
* File Name: PinEXT2.c  
* Version 2.20
*
* Description:
*  This file contains APIs to set up the Pins component for low power modes.
*
* Note:
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "PinEXT2.h"

static PinEXT2_BACKUP_STRUCT  PinEXT2_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: PinEXT2_Sleep
****************************************************************************//**
*
* \brief Stores the pin configuration and prepares the pin for entering chip 
*  deep-sleep/hibernate modes. This function applies only to SIO and USBIO pins.
*  It should not be called for GPIO or GPIO_OVT pins.
*
* <b>Note</b> This function is available in PSoC 4 only.
*
* \return 
*  None 
*  
* \sideeffect
*  For SIO pins, this function configures the pin input threshold to CMOS and
*  drive level to Vddio. This is needed for SIO pins when in device 
*  deep-sleep/hibernate modes.
*
* \funcusage
*  \snippet PinEXT2_SUT.c usage_PinEXT2_Sleep_Wakeup
*******************************************************************************/
void PinEXT2_Sleep(void)
{
    #if defined(PinEXT2__PC)
        PinEXT2_backup.pcState = PinEXT2_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            PinEXT2_backup.usbState = PinEXT2_CR1_REG;
            PinEXT2_USB_POWER_REG |= PinEXT2_USBIO_ENTER_SLEEP;
            PinEXT2_CR1_REG &= PinEXT2_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(PinEXT2__SIO)
        PinEXT2_backup.sioState = PinEXT2_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        PinEXT2_SIO_REG &= (uint32)(~PinEXT2_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: PinEXT2_Wakeup
****************************************************************************//**
*
* \brief Restores the pin configuration that was saved during Pin_Sleep(). This 
* function applies only to SIO and USBIO pins. It should not be called for
* GPIO or GPIO_OVT pins.
*
* For USBIO pins, the wakeup is only triggered for falling edge interrupts.
*
* <b>Note</b> This function is available in PSoC 4 only.
*
* \return 
*  None
*  
* \funcusage
*  Refer to PinEXT2_Sleep() for an example usage.
*******************************************************************************/
void PinEXT2_Wakeup(void)
{
    #if defined(PinEXT2__PC)
        PinEXT2_PC = PinEXT2_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            PinEXT2_USB_POWER_REG &= PinEXT2_USBIO_EXIT_SLEEP_PH1;
            PinEXT2_CR1_REG = PinEXT2_backup.usbState;
            PinEXT2_USB_POWER_REG &= PinEXT2_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(PinEXT2__SIO)
        PinEXT2_SIO_REG = PinEXT2_backup.sioState;
    #endif
}


/* [] END OF FILE */
