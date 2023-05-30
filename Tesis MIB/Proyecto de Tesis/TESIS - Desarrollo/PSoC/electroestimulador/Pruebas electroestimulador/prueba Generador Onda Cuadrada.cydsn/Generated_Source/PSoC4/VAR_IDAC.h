/*******************************************************************************
* File Name: VAR_IDAC.h
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
#if !defined(CY_ISR_VAR_IDAC_H)
#define CY_ISR_VAR_IDAC_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void VAR_IDAC_Start(void);
void VAR_IDAC_StartEx(cyisraddress address);
void VAR_IDAC_Stop(void);

CY_ISR_PROTO(VAR_IDAC_Interrupt);

void VAR_IDAC_SetVector(cyisraddress address);
cyisraddress VAR_IDAC_GetVector(void);

void VAR_IDAC_SetPriority(uint8 priority);
uint8 VAR_IDAC_GetPriority(void);

void VAR_IDAC_Enable(void);
uint8 VAR_IDAC_GetState(void);
void VAR_IDAC_Disable(void);

void VAR_IDAC_SetPending(void);
void VAR_IDAC_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the VAR_IDAC ISR. */
#define VAR_IDAC_INTC_VECTOR            ((reg32 *) VAR_IDAC__INTC_VECT)

/* Address of the VAR_IDAC ISR priority. */
#define VAR_IDAC_INTC_PRIOR             ((reg32 *) VAR_IDAC__INTC_PRIOR_REG)

/* Priority of the VAR_IDAC interrupt. */
#define VAR_IDAC_INTC_PRIOR_NUMBER      VAR_IDAC__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable VAR_IDAC interrupt. */
#define VAR_IDAC_INTC_SET_EN            ((reg32 *) VAR_IDAC__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the VAR_IDAC interrupt. */
#define VAR_IDAC_INTC_CLR_EN            ((reg32 *) VAR_IDAC__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the VAR_IDAC interrupt state to pending. */
#define VAR_IDAC_INTC_SET_PD            ((reg32 *) VAR_IDAC__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the VAR_IDAC interrupt. */
#define VAR_IDAC_INTC_CLR_PD            ((reg32 *) VAR_IDAC__INTC_CLR_PD_REG)



#endif /* CY_ISR_VAR_IDAC_H */


/* [] END OF FILE */
