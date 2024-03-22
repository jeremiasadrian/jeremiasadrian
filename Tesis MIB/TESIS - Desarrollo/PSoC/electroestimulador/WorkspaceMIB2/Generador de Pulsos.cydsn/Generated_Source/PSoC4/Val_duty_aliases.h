/*******************************************************************************
* File Name: Val_duty.h  
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

#if !defined(CY_PINS_Val_duty_ALIASES_H) /* Pins Val_duty_ALIASES_H */
#define CY_PINS_Val_duty_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define Val_duty_0			(Val_duty__0__PC)
#define Val_duty_0_PS		(Val_duty__0__PS)
#define Val_duty_0_PC		(Val_duty__0__PC)
#define Val_duty_0_DR		(Val_duty__0__DR)
#define Val_duty_0_SHIFT	(Val_duty__0__SHIFT)
#define Val_duty_0_INTR	((uint16)((uint16)0x0003u << (Val_duty__0__SHIFT*2u)))

#define Val_duty_INTR_ALL	 ((uint16)(Val_duty_0_INTR))


#endif /* End Pins Val_duty_ALIASES_H */


/* [] END OF FILE */
