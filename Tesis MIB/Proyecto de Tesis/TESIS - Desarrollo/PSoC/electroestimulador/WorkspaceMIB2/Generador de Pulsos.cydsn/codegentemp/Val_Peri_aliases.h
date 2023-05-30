/*******************************************************************************
* File Name: Val_Peri.h  
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

#if !defined(CY_PINS_Val_Peri_ALIASES_H) /* Pins Val_Peri_ALIASES_H */
#define CY_PINS_Val_Peri_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define Val_Peri_0			(Val_Peri__0__PC)
#define Val_Peri_0_PS		(Val_Peri__0__PS)
#define Val_Peri_0_PC		(Val_Peri__0__PC)
#define Val_Peri_0_DR		(Val_Peri__0__DR)
#define Val_Peri_0_SHIFT	(Val_Peri__0__SHIFT)
#define Val_Peri_0_INTR	((uint16)((uint16)0x0003u << (Val_Peri__0__SHIFT*2u)))

#define Val_Peri_INTR_ALL	 ((uint16)(Val_Peri_0_INTR))


#endif /* End Pins Val_Peri_ALIASES_H */


/* [] END OF FILE */
