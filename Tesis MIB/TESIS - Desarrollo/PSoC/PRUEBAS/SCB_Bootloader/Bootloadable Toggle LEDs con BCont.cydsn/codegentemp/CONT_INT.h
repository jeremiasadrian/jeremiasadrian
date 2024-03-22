/*******************************************************************************
* File Name: CONT_INT.h
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
#if !defined(CY_ISR_CONT_INT_H)
#define CY_ISR_CONT_INT_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void CONT_INT_Start(void);
void CONT_INT_StartEx(cyisraddress address);
void CONT_INT_Stop(void);

CY_ISR_PROTO(CONT_INT_Interrupt);

void CONT_INT_SetVector(cyisraddress address);
cyisraddress CONT_INT_GetVector(void);

void CONT_INT_SetPriority(uint8 priority);
uint8 CONT_INT_GetPriority(void);

void CONT_INT_Enable(void);
uint8 CONT_INT_GetState(void);
void CONT_INT_Disable(void);

void CONT_INT_SetPending(void);
void CONT_INT_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the CONT_INT ISR. */
#define CONT_INT_INTC_VECTOR            ((reg32 *) CONT_INT__INTC_VECT)

/* Address of the CONT_INT ISR priority. */
#define CONT_INT_INTC_PRIOR             ((reg32 *) CONT_INT__INTC_PRIOR_REG)

/* Priority of the CONT_INT interrupt. */
#define CONT_INT_INTC_PRIOR_NUMBER      CONT_INT__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable CONT_INT interrupt. */
#define CONT_INT_INTC_SET_EN            ((reg32 *) CONT_INT__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the CONT_INT interrupt. */
#define CONT_INT_INTC_CLR_EN            ((reg32 *) CONT_INT__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the CONT_INT interrupt state to pending. */
#define CONT_INT_INTC_SET_PD            ((reg32 *) CONT_INT__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the CONT_INT interrupt. */
#define CONT_INT_INTC_CLR_PD            ((reg32 *) CONT_INT__INTC_CLR_PD_REG)



#endif /* CY_ISR_CONT_INT_H */


/* [] END OF FILE */
