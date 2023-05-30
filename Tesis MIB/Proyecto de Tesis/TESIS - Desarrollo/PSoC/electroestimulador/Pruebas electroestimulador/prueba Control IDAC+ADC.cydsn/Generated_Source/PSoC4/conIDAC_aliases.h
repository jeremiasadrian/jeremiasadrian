/*******************************************************************************
* File Name: conIDAC.h  
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

#if !defined(CY_PINS_conIDAC_ALIASES_H) /* Pins conIDAC_ALIASES_H */
#define CY_PINS_conIDAC_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define conIDAC_0			(conIDAC__0__PC)
#define conIDAC_0_PS		(conIDAC__0__PS)
#define conIDAC_0_PC		(conIDAC__0__PC)
#define conIDAC_0_DR		(conIDAC__0__DR)
#define conIDAC_0_SHIFT	(conIDAC__0__SHIFT)
#define conIDAC_0_INTR	((uint16)((uint16)0x0003u << (conIDAC__0__SHIFT*2u)))

#define conIDAC_INTR_ALL	 ((uint16)(conIDAC_0_INTR))


#endif /* End Pins conIDAC_ALIASES_H */


/* [] END OF FILE */
