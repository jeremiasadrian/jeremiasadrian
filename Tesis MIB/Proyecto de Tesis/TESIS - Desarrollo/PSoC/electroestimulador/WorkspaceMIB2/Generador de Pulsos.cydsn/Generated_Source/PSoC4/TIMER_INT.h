/*******************************************************************************
* File Name: TIMER_INT.h
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
#if !defined(CY_ISR_TIMER_INT_H)
#define CY_ISR_TIMER_INT_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void TIMER_INT_Start(void);
void TIMER_INT_StartEx(cyisraddress address);
void TIMER_INT_Stop(void);

CY_ISR_PROTO(TIMER_INT_Interrupt);

void TIMER_INT_SetVector(cyisraddress address);
cyisraddress TIMER_INT_GetVector(void);

void TIMER_INT_SetPriority(uint8 priority);
uint8 TIMER_INT_GetPriority(void);

void TIMER_INT_Enable(void);
uint8 TIMER_INT_GetState(void);
void TIMER_INT_Disable(void);

void TIMER_INT_SetPending(void);
void TIMER_INT_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the TIMER_INT ISR. */
#define TIMER_INT_INTC_VECTOR            ((reg32 *) TIMER_INT__INTC_VECT)

/* Address of the TIMER_INT ISR priority. */
#define TIMER_INT_INTC_PRIOR             ((reg32 *) TIMER_INT__INTC_PRIOR_REG)

/* Priority of the TIMER_INT interrupt. */
#define TIMER_INT_INTC_PRIOR_NUMBER      TIMER_INT__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable TIMER_INT interrupt. */
#define TIMER_INT_INTC_SET_EN            ((reg32 *) TIMER_INT__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the TIMER_INT interrupt. */
#define TIMER_INT_INTC_CLR_EN            ((reg32 *) TIMER_INT__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the TIMER_INT interrupt state to pending. */
#define TIMER_INT_INTC_SET_PD            ((reg32 *) TIMER_INT__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the TIMER_INT interrupt. */
#define TIMER_INT_INTC_CLR_PD            ((reg32 *) TIMER_INT__INTC_CLR_PD_REG)



#endif /* CY_ISR_TIMER_INT_H */


/* [] END OF FILE */
