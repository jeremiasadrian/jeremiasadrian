/*******************************************************************************
* File Name: PinEXT.h  
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

#if !defined(CY_PINS_PinEXT_ALIASES_H) /* Pins PinEXT_ALIASES_H */
#define CY_PINS_PinEXT_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define PinEXT_0			(PinEXT__0__PC)
#define PinEXT_0_PS		(PinEXT__0__PS)
#define PinEXT_0_PC		(PinEXT__0__PC)
#define PinEXT_0_DR		(PinEXT__0__DR)
#define PinEXT_0_SHIFT	(PinEXT__0__SHIFT)
#define PinEXT_0_INTR	((uint16)((uint16)0x0003u << (PinEXT__0__SHIFT*2u)))

#define PinEXT_INTR_ALL	 ((uint16)(PinEXT_0_INTR))
#define PinEXT_LED2			(PinEXT__LED2__PC)
#define PinEXT_LED2_PS		(PinEXT__LED2__PS)
#define PinEXT_LED2_PC		(PinEXT__LED2__PC)
#define PinEXT_LED2_DR		(PinEXT__LED2__DR)
#define PinEXT_LED2_SHIFT	(PinEXT__LED2__SHIFT)
#define PinEXT_LED2_INTR	((uint16)((uint16)0x0003u << (PinEXT__0__SHIFT*2u)))


#endif /* End Pins PinEXT_ALIASES_H */


/* [] END OF FILE */
