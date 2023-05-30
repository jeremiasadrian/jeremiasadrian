/*******************************************************************************
* File Name: Iout_neg.c  
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
#include "Iout_neg.h"

static Iout_neg_BACKUP_STRUCT  Iout_neg_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: Iout_neg_Sleep
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
*  \snippet Iout_neg_SUT.c usage_Iout_neg_Sleep_Wakeup
*******************************************************************************/
void Iout_neg_Sleep(void)
{
    #if defined(Iout_neg__PC)
        Iout_neg_backup.pcState = Iout_neg_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            Iout_neg_backup.usbState = Iout_neg_CR1_REG;
            Iout_neg_USB_POWER_REG |= Iout_neg_USBIO_ENTER_SLEEP;
            Iout_neg_CR1_REG &= Iout_neg_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(Iout_neg__SIO)
        Iout_neg_backup.sioState = Iout_neg_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        Iout_neg_SIO_REG &= (uint32)(~Iout_neg_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: Iout_neg_Wakeup
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
*  Refer to Iout_neg_Sleep() for an example usage.
*******************************************************************************/
void Iout_neg_Wakeup(void)
{
    #if defined(Iout_neg__PC)
        Iout_neg_PC = Iout_neg_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            Iout_neg_USB_POWER_REG &= Iout_neg_USBIO_EXIT_SLEEP_PH1;
            Iout_neg_CR1_REG = Iout_neg_backup.usbState;
            Iout_neg_USB_POWER_REG &= Iout_neg_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(Iout_neg__SIO)
        Iout_neg_SIO_REG = Iout_neg_backup.sioState;
    #endif
}


/* [] END OF FILE */
