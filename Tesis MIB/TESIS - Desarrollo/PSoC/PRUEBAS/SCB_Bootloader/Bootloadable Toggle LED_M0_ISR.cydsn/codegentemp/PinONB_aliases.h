/*******************************************************************************
* File Name: PinONB.h  
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

#if !defined(CY_PINS_PinONB_ALIASES_H) /* Pins PinONB_ALIASES_H */
#define CY_PINS_PinONB_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define PinONB_0			(PinONB__0__PC)
#define PinONB_0_PS		(PinONB__0__PS)
#define PinONB_0_PC		(PinONB__0__PC)
#define PinONB_0_DR		(PinONB__0__DR)
#define PinONB_0_SHIFT	(PinONB__0__SHIFT)
#define PinONB_0_INTR	((uint16)((uint16)0x0003u << (PinONB__0__SHIFT*2u)))

#define PinONB_INTR_ALL	 ((uint16)(PinONB_0_INTR))


#endif /* End Pins PinONB_ALIASES_H */


/* [] END OF FILE */
