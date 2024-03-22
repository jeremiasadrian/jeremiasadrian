/*******************************************************************************
* File Name: SW1_IDAC.c  
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
#include "SW1_IDAC.h"

static SW1_IDAC_BACKUP_STRUCT  SW1_IDAC_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: SW1_IDAC_Sleep
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
*  \snippet SW1_IDAC_SUT.c usage_SW1_IDAC_Sleep_Wakeup
*******************************************************************************/
void SW1_IDAC_Sleep(void)
{
    #if defined(SW1_IDAC__PC)
        SW1_IDAC_backup.pcState = SW1_IDAC_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            SW1_IDAC_backup.usbState = SW1_IDAC_CR1_REG;
            SW1_IDAC_USB_POWER_REG |= SW1_IDAC_USBIO_ENTER_SLEEP;
            SW1_IDAC_CR1_REG &= SW1_IDAC_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(SW1_IDAC__SIO)
        SW1_IDAC_backup.sioState = SW1_IDAC_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        SW1_IDAC_SIO_REG &= (uint32)(~SW1_IDAC_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: SW1_IDAC_Wakeup
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
*  Refer to SW1_IDAC_Sleep() for an example usage.
*******************************************************************************/
void SW1_IDAC_Wakeup(void)
{
    #if defined(SW1_IDAC__PC)
        SW1_IDAC_PC = SW1_IDAC_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            SW1_IDAC_USB_POWER_REG &= SW1_IDAC_USBIO_EXIT_SLEEP_PH1;
            SW1_IDAC_CR1_REG = SW1_IDAC_backup.usbState;
            SW1_IDAC_USB_POWER_REG &= SW1_IDAC_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(SW1_IDAC__SIO)
        SW1_IDAC_SIO_REG = SW1_IDAC_backup.sioState;
    #endif
}


/* [] END OF FILE */
