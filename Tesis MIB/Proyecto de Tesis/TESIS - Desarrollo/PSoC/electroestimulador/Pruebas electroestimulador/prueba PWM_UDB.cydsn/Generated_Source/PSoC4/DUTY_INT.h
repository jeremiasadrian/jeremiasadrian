/*******************************************************************************
* File Name: DUTY_INT.h
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
#if !defined(CY_ISR_DUTY_INT_H)
#define CY_ISR_DUTY_INT_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void DUTY_INT_Start(void);
void DUTY_INT_StartEx(cyisraddress address);
void DUTY_INT_Stop(void);

CY_ISR_PROTO(DUTY_INT_Interrupt);

void DUTY_INT_SetVector(cyisraddress address);
cyisraddress DUTY_INT_GetVector(void);

void DUTY_INT_SetPriority(uint8 priority);
uint8 DUTY_INT_GetPriority(void);

void DUTY_INT_Enable(void);
uint8 DUTY_INT_GetState(void);
void DUTY_INT_Disable(void);

void DUTY_INT_SetPending(void);
void DUTY_INT_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the DUTY_INT ISR. */
#define DUTY_INT_INTC_VECTOR            ((reg32 *) DUTY_INT__INTC_VECT)

/* Address of the DUTY_INT ISR priority. */
#define DUTY_INT_INTC_PRIOR             ((reg32 *) DUTY_INT__INTC_PRIOR_REG)

/* Priority of the DUTY_INT interrupt. */
#define DUTY_INT_INTC_PRIOR_NUMBER      DUTY_INT__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable DUTY_INT interrupt. */
#define DUTY_INT_INTC_SET_EN            ((reg32 *) DUTY_INT__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the DUTY_INT interrupt. */
#define DUTY_INT_INTC_CLR_EN            ((reg32 *) DUTY_INT__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the DUTY_INT interrupt state to pending. */
#define DUTY_INT_INTC_SET_PD            ((reg32 *) DUTY_INT__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the DUTY_INT interrupt. */
#define DUTY_INT_INTC_CLR_PD            ((reg32 *) DUTY_INT__INTC_CLR_PD_REG)



#endif /* CY_ISR_DUTY_INT_H */


/* [] END OF FILE */
