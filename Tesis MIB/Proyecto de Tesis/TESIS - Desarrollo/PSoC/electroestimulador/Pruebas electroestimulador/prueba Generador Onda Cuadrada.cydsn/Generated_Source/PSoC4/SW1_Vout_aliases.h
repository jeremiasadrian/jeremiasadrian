/*******************************************************************************
* File Name: SW1_Vout.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_SW1_Vout_ALIASES_H) /* Pins SW1_Vout_ALIASES_H */
#define CY_PINS_SW1_Vout_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define SW1_Vout_0			(SW1_Vout__0__PC)
#define SW1_Vout_0_PS		(SW1_Vout__0__PS)
#define SW1_Vout_0_PC		(SW1_Vout__0__PC)
#define SW1_Vout_0_DR		(SW1_Vout__0__DR)
#define SW1_Vout_0_SHIFT	(SW1_Vout__0__SHIFT)
#define SW1_Vout_0_INTR	((uint16)((uint16)0x0003u << (SW1_Vout__0__SHIFT*2u)))

#define SW1_Vout_INTR_ALL	 ((uint16)(SW1_Vout_0_INTR))


#endif /* End Pins SW1_Vout_ALIASES_H */


/* [] END OF FILE */
