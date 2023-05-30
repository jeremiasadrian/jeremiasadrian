/*******************************************************************************
* File Name: PERIODO_Vout.c  
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
#include "PERIODO_Vout.h"

static PERIODO_Vout_BACKUP_STRUCT  PERIODO_Vout_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: PERIODO_Vout_Sleep
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
*  \snippet PERIODO_Vout_SUT.c usage_PERIODO_Vout_Sleep_Wakeup
*******************************************************************************/
void PERIODO_Vout_Sleep(void)
{
    #if defined(PERIODO_Vout__PC)
        PERIODO_Vout_backup.pcState = PERIODO_Vout_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            PERIODO_Vout_backup.usbState = PERIODO_Vout_CR1_REG;
            PERIODO_Vout_USB_POWER_REG |= PERIODO_Vout_USBIO_ENTER_SLEEP;
            PERIODO_Vout_CR1_REG &= PERIODO_Vout_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(PERIODO_Vout__SIO)
        PERIODO_Vout_backup.sioState = PERIODO_Vout_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        PERIODO_Vout_SIO_REG &= (uint32)(~PERIODO_Vout_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: PERIODO_Vout_Wakeup
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
*  Refer to PERIODO_Vout_Sleep() for an example usage.
*******************************************************************************/
void PERIODO_Vout_Wakeup(void)
{
    #if defined(PERIODO_Vout__PC)
        PERIODO_Vout_PC = PERIODO_Vout_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            PERIODO_Vout_USB_POWER_REG &= PERIODO_Vout_USBIO_EXIT_SLEEP_PH1;
            PERIODO_Vout_CR1_REG = PERIODO_Vout_backup.usbState;
            PERIODO_Vout_USB_POWER_REG &= PERIODO_Vout_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(PERIODO_Vout__SIO)
        PERIODO_Vout_SIO_REG = PERIODO_Vout_backup.sioState;
    #endif
}


/* [] END OF FILE */
