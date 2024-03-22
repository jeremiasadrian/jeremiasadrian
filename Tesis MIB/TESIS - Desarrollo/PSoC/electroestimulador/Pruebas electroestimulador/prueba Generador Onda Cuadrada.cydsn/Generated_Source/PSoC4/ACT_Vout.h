/*******************************************************************************
* File Name: ACT_Vout.h
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
#if !defined(CY_ISR_ACT_Vout_H)
#define CY_ISR_ACT_Vout_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void ACT_Vout_Start(void);
void ACT_Vout_StartEx(cyisraddress address);
void ACT_Vout_Stop(void);

CY_ISR_PROTO(ACT_Vout_Interrupt);

void ACT_Vout_SetVector(cyisraddress address);
cyisraddress ACT_Vout_GetVector(void);

void ACT_Vout_SetPriority(uint8 priority);
uint8 ACT_Vout_GetPriority(void);

void ACT_Vout_Enable(void);
uint8 ACT_Vout_GetState(void);
void ACT_Vout_Disable(void);

void ACT_Vout_SetPending(void);
void ACT_Vout_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the ACT_Vout ISR. */
#define ACT_Vout_INTC_VECTOR            ((reg32 *) ACT_Vout__INTC_VECT)

/* Address of the ACT_Vout ISR priority. */
#define ACT_Vout_INTC_PRIOR             ((reg32 *) ACT_Vout__INTC_PRIOR_REG)

/* Priority of the ACT_Vout interrupt. */
#define ACT_Vout_INTC_PRIOR_NUMBER      ACT_Vout__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable ACT_Vout interrupt. */
#define ACT_Vout_INTC_SET_EN            ((reg32 *) ACT_Vout__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the ACT_Vout interrupt. */
#define ACT_Vout_INTC_CLR_EN            ((reg32 *) ACT_Vout__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the ACT_Vout interrupt state to pending. */
#define ACT_Vout_INTC_SET_PD            ((reg32 *) ACT_Vout__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the ACT_Vout interrupt. */
#define ACT_Vout_INTC_CLR_PD            ((reg32 *) ACT_Vout__INTC_CLR_PD_REG)



#endif /* CY_ISR_ACT_Vout_H */


/* [] END OF FILE */
