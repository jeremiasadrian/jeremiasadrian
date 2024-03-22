/* ========================================
 *
Prueba de modulo IDAC combinado con AO para formar una VDAC.
 *
 * ========================================*/
#include "project.h"

uint8 RampaON=0;
uint8 I_OUT=0;
CY_ISR(ONOFF_RAMPA_Handler)
{
    if(RampaON==1)      /* Subrutina de toggle. */
     RampaON=0;
    else
     RampaON=1;
    SW1_RAMPA_ClearInterrupt();
    CyDelay(20);        /* Temporización antirebote. */
}

int main()
{
    CyGlobalIntEnable;
    IDAC_1_Start();
    Opamp1_Start();
    Opamp1_SetPower(Opamp1_HIGHPOWER);
    ONOFF_RAMPA_StartEx(ONOFF_RAMPA_Handler);
    while (1)
    {
	 if(RampaON)
     {
      I_OUT++;            /*          */
      if(I_OUT>255)            /* Cada escalon del VDAC toma 3,45us aprox. */
       I_OUT=0;                 /* Considerando un clk de 48MHz y clc de inst. a 12MHz */
      else{}                    /* eso da 83,3ns por instrucción */
      IDAC_1_SetValue(I_OUT);   /* con lo que los 3,45us pueden traducirse en 41,4 instruc. aprox. */
      CyDelay(5000);      /* Tiempo entre incremento para que el Tester pueda leer de manera estable */
     }
     else
     {
      I_OUT=0;
      IDAC_1_SetValue(I_OUT);
     }
    }
    
}
