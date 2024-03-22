/*******************************************************************************
* File Name: PWMComp_INT.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_PWMComp_INT_H)
#define CY_ISR_PWMComp_INT_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void PWMComp_INT_Start(void);
void PWMComp_INT_StartEx(cyisraddress address);
void PWMComp_INT_Stop(void);

CY_ISR_PROTO(PWMComp_INT_Interrupt);

void PWMComp_INT_SetVector(cyisraddress address);
cyisraddress PWMComp_INT_GetVector(void);

void PWMComp_INT_SetPriority(uint8 priority);
uint8 PWMComp_INT_GetPriority(void);

void PWMComp_INT_Enable(void);
uint8 PWMComp_INT_GetState(void);
void PWMComp_INT_Disable(void);

void PWMComp_INT_SetPending(void);
void PWMComp_INT_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the PWMComp_INT ISR. */
#define PWMComp_INT_INTC_VECTOR            ((reg32 *) PWMComp_INT__INTC_VECT)

/* Address of the PWMComp_INT ISR priority. */
#define PWMComp_INT_INTC_PRIOR             ((reg32 *) PWMComp_INT__INTC_PRIOR_REG)

/* Priority of the PWMComp_INT interrupt. */
#define PWMComp_INT_INTC_PRIOR_NUMBER      PWMComp_INT__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable PWMComp_INT interrupt. */
#define PWMComp_INT_INTC_SET_EN            ((reg32 *) PWMComp_INT__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the PWMComp_INT interrupt. */
#define PWMComp_INT_INTC_CLR_EN            ((reg32 *) PWMComp_INT__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the PWMComp_INT interrupt state to pending. */
#define PWMComp_INT_INTC_SET_PD            ((reg32 *) PWMComp_INT__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the PWMComp_INT interrupt. */
#define PWMComp_INT_INTC_CLR_PD            ((reg32 *) PWMComp_INT__INTC_CLR_PD_REG)



#endif /* CY_ISR_PWMComp_INT_H */


/* [] END OF FILE */
