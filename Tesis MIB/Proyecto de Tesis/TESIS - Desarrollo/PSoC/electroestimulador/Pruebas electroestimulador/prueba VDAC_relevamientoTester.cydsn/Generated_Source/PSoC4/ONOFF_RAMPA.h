/*******************************************************************************
* File Name: ONOFF_RAMPA.h
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
#if !defined(CY_ISR_ONOFF_RAMPA_H)
#define CY_ISR_ONOFF_RAMPA_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void ONOFF_RAMPA_Start(void);
void ONOFF_RAMPA_StartEx(cyisraddress address);
void ONOFF_RAMPA_Stop(void);

CY_ISR_PROTO(ONOFF_RAMPA_Interrupt);

void ONOFF_RAMPA_SetVector(cyisraddress address);
cyisraddress ONOFF_RAMPA_GetVector(void);

void ONOFF_RAMPA_SetPriority(uint8 priority);
uint8 ONOFF_RAMPA_GetPriority(void);

void ONOFF_RAMPA_Enable(void);
uint8 ONOFF_RAMPA_GetState(void);
void ONOFF_RAMPA_Disable(void);

void ONOFF_RAMPA_SetPending(void);
void ONOFF_RAMPA_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the ONOFF_RAMPA ISR. */
#define ONOFF_RAMPA_INTC_VECTOR            ((reg32 *) ONOFF_RAMPA__INTC_VECT)

/* Address of the ONOFF_RAMPA ISR priority. */
#define ONOFF_RAMPA_INTC_PRIOR             ((reg32 *) ONOFF_RAMPA__INTC_PRIOR_REG)

/* Priority of the ONOFF_RAMPA interrupt. */
#define ONOFF_RAMPA_INTC_PRIOR_NUMBER      ONOFF_RAMPA__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable ONOFF_RAMPA interrupt. */
#define ONOFF_RAMPA_INTC_SET_EN            ((reg32 *) ONOFF_RAMPA__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the ONOFF_RAMPA interrupt. */
#define ONOFF_RAMPA_INTC_CLR_EN            ((reg32 *) ONOFF_RAMPA__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the ONOFF_RAMPA interrupt state to pending. */
#define ONOFF_RAMPA_INTC_SET_PD            ((reg32 *) ONOFF_RAMPA__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the ONOFF_RAMPA interrupt. */
#define ONOFF_RAMPA_INTC_CLR_PD            ((reg32 *) ONOFF_RAMPA__INTC_CLR_PD_REG)



#endif /* CY_ISR_ONOFF_RAMPA_H */


/* [] END OF FILE */
