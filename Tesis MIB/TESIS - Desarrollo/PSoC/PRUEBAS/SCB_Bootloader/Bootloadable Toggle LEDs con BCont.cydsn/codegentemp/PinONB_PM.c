/*******************************************************************************
* File Name: PinONB.c  
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
#include "PinONB.h"

static PinONB_BACKUP_STRUCT  PinONB_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: PinONB_Sleep
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
*  \snippet PinONB_SUT.c usage_PinONB_Sleep_Wakeup
*******************************************************************************/
void PinONB_Sleep(void)
{
    #if defined(PinONB__PC)
        PinONB_backup.pcState = PinONB_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            PinONB_backup.usbState = PinONB_CR1_REG;
            PinONB_USB_POWER_REG |= PinONB_USBIO_ENTER_SLEEP;
            PinONB_CR1_REG &= PinONB_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(PinONB__SIO)
        PinONB_backup.sioState = PinONB_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        PinONB_SIO_REG &= (uint32)(~PinONB_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: PinONB_Wakeup
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
*  Refer to PinONB_Sleep() for an example usage.
*******************************************************************************/
void PinONB_Wakeup(void)
{
    #if defined(PinONB__PC)
        PinONB_PC = PinONB_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            PinONB_USB_POWER_REG &= PinONB_USBIO_EXIT_SLEEP_PH1;
            PinONB_CR1_REG = PinONB_backup.usbState;
            PinONB_USB_POWER_REG &= PinONB_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(PinONB__SIO)
        PinONB_SIO_REG = PinONB_backup.sioState;
    #endif
}


/* [] END OF FILE */
