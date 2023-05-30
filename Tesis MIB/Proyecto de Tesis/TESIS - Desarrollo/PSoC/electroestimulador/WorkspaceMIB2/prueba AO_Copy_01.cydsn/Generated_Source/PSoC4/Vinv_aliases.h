/*******************************************************************************
* File Name: Vinv.h  
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

#if !defined(CY_PINS_Vinv_ALIASES_H) /* Pins Vinv_ALIASES_H */
#define CY_PINS_Vinv_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define Vinv_0			(Vinv__0__PC)
#define Vinv_0_PS		(Vinv__0__PS)
#define Vinv_0_PC		(Vinv__0__PC)
#define Vinv_0_DR		(Vinv__0__DR)
#define Vinv_0_SHIFT	(Vinv__0__SHIFT)
#define Vinv_0_INTR	((uint16)((uint16)0x0003u << (Vinv__0__SHIFT*2u)))

#define Vinv_INTR_ALL	 ((uint16)(Vinv_0_INTR))


#endif /* End Pins Vinv_ALIASES_H */


/* [] END OF FILE */
