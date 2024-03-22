/* ========================================
 *
Prueba de modulo IDAC
 *
 * ========================================*/
#include "project.h"

uint8 I_OUT=0;
CY_ISR(VAR_IDAC_Handler)
{
    if(I_OUT>=255)
     I_OUT=0;
    else
     I_OUT=I_OUT+5;
    IDAC_1_SetValue(I_OUT);
    SW1_IDAC_ClearInterrupt();
}

int main()
{
    CyGlobalIntEnable;
    IDAC_1_Start();
    VAR_IDAC_StartEx(VAR_IDAC_Handler);
	while(1)
    {}
}

