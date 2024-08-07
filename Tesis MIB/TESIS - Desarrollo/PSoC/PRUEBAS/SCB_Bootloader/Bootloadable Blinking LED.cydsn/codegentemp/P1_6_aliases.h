/*******************************************************************************
* File Name: P1_6.h  
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

#if !defined(CY_PINS_P1_6_ALIASES_H) /* Pins P1_6_ALIASES_H */
#define CY_PINS_P1_6_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define P1_6_0			(P1_6__0__PC)
#define P1_6_0_PS		(P1_6__0__PS)
#define P1_6_0_PC		(P1_6__0__PC)
#define P1_6_0_DR		(P1_6__0__DR)
#define P1_6_0_SHIFT	(P1_6__0__SHIFT)
#define P1_6_0_INTR	((uint16)((uint16)0x0003u << (P1_6__0__SHIFT*2u)))

#define P1_6_INTR_ALL	 ((uint16)(P1_6_0_INTR))
#define P1_6_LED1			(P1_6__LED1__PC)
#define P1_6_LED1_PS		(P1_6__LED1__PS)
#define P1_6_LED1_PC		(P1_6__LED1__PC)
#define P1_6_LED1_DR		(P1_6__LED1__DR)
#define P1_6_LED1_SHIFT	(P1_6__LED1__SHIFT)
#define P1_6_LED1_INTR	((uint16)((uint16)0x0003u << (P1_6__0__SHIFT*2u)))


#endif /* End Pins P1_6_ALIASES_H */


/* [] END OF FILE */
