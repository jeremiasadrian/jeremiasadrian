/*******************************************************************************
* File Name: ADC_INTAux.h
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
#if !defined(CY_ISR_ADC_INTAux_H)
#define CY_ISR_ADC_INTAux_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void ADC_INTAux_Start(void);
void ADC_INTAux_StartEx(cyisraddress address);
void ADC_INTAux_Stop(void);

CY_ISR_PROTO(ADC_INTAux_Interrupt);

void ADC_INTAux_SetVector(cyisraddress address);
cyisraddress ADC_INTAux_GetVector(void);

void ADC_INTAux_SetPriority(uint8 priority);
uint8 ADC_INTAux_GetPriority(void);

void ADC_INTAux_Enable(void);
uint8 ADC_INTAux_GetState(void);
void ADC_INTAux_Disable(void);

void ADC_INTAux_SetPending(void);
void ADC_INTAux_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the ADC_INTAux ISR. */
#define ADC_INTAux_INTC_VECTOR            ((reg32 *) ADC_INTAux__INTC_VECT)

/* Address of the ADC_INTAux ISR priority. */
#define ADC_INTAux_INTC_PRIOR             ((reg32 *) ADC_INTAux__INTC_PRIOR_REG)

/* Priority of the ADC_INTAux interrupt. */
#define ADC_INTAux_INTC_PRIOR_NUMBER      ADC_INTAux__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable ADC_INTAux interrupt. */
#define ADC_INTAux_INTC_SET_EN            ((reg32 *) ADC_INTAux__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the ADC_INTAux interrupt. */
#define ADC_INTAux_INTC_CLR_EN            ((reg32 *) ADC_INTAux__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the ADC_INTAux interrupt state to pending. */
#define ADC_INTAux_INTC_SET_PD            ((reg32 *) ADC_INTAux__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the ADC_INTAux interrupt. */
#define ADC_INTAux_INTC_CLR_PD            ((reg32 *) ADC_INTAux__INTC_CLR_PD_REG)



#endif /* CY_ISR_ADC_INTAux_H */


/* [] END OF FILE */
