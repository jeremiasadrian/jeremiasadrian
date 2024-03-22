/*******************************************************************************
* File Name: PWM_NEG.h  
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

#if !defined(CY_PINS_PWM_NEG_ALIASES_H) /* Pins PWM_NEG_ALIASES_H */
#define CY_PINS_PWM_NEG_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define PWM_NEG_0			(PWM_NEG__0__PC)
#define PWM_NEG_0_PS		(PWM_NEG__0__PS)
#define PWM_NEG_0_PC		(PWM_NEG__0__PC)
#define PWM_NEG_0_DR		(PWM_NEG__0__DR)
#define PWM_NEG_0_SHIFT	(PWM_NEG__0__SHIFT)
#define PWM_NEG_0_INTR	((uint16)((uint16)0x0003u << (PWM_NEG__0__SHIFT*2u)))

#define PWM_NEG_INTR_ALL	 ((uint16)(PWM_NEG_0_INTR))


#endif /* End Pins PWM_NEG_ALIASES_H */


/* [] END OF FILE */
