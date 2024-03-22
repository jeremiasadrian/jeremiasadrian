/*******************************************************************************
* File Name: Iout_pos.h  
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

#if !defined(CY_PINS_Iout_pos_ALIASES_H) /* Pins Iout_pos_ALIASES_H */
#define CY_PINS_Iout_pos_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define Iout_pos_0			(Iout_pos__0__PC)
#define Iout_pos_0_PS		(Iout_pos__0__PS)
#define Iout_pos_0_PC		(Iout_pos__0__PC)
#define Iout_pos_0_DR		(Iout_pos__0__DR)
#define Iout_pos_0_SHIFT	(Iout_pos__0__SHIFT)
#define Iout_pos_0_INTR	((uint16)((uint16)0x0003u << (Iout_pos__0__SHIFT*2u)))

#define Iout_pos_INTR_ALL	 ((uint16)(Iout_pos_0_INTR))


#endif /* End Pins Iout_pos_ALIASES_H */


/* [] END OF FILE */
