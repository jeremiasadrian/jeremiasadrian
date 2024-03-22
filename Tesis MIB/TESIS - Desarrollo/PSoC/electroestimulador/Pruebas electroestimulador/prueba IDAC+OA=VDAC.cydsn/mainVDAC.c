/* ========================================
 *
Prueba de modulo IDAC combinado con AO para formar una VDAC.
 *
 * ========================================*/
#include "project.h"

uint8 I_OUT=0;
CY_ISR(VAR_IDAC_Handler)
{
    if(I_OUT>=255)
     I_OUT=0;
    else
     I_OUT++;
    IDAC_1_SetValue(I_OUT);
    SW1_IDAC_ClearInterrupt();
    CyDelay(20);
}

int main()
{
    CyGlobalIntEnable;
    IDAC_1_Start();
    Opamp1_Start();
    Opamp1_SetPower(Opamp1_HIGHPOWER);
    VAR_IDAC_StartEx(VAR_IDAC_Handler);
	while(1)
    {}
}
