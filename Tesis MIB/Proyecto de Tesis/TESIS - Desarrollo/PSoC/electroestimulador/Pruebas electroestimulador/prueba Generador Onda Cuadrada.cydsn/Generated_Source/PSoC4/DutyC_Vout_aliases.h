/*******************************************************************************
* File Name: DutyC_Vout.h  
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

#if !defined(CY_PINS_DutyC_Vout_ALIASES_H) /* Pins DutyC_Vout_ALIASES_H */
#define CY_PINS_DutyC_Vout_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define DutyC_Vout_0			(DutyC_Vout__0__PC)
#define DutyC_Vout_0_PS		(DutyC_Vout__0__PS)
#define DutyC_Vout_0_PC		(DutyC_Vout__0__PC)
#define DutyC_Vout_0_DR		(DutyC_Vout__0__DR)
#define DutyC_Vout_0_SHIFT	(DutyC_Vout__0__SHIFT)
#define DutyC_Vout_0_INTR	((uint16)((uint16)0x0003u << (DutyC_Vout__0__SHIFT*2u)))

#define DutyC_Vout_INTR_ALL	 ((uint16)(DutyC_Vout_0_INTR))


#endif /* End Pins DutyC_Vout_ALIASES_H */


/* [] END OF FILE */
