/* ========================================
 *
        Prueba de modulo IDAC+AMux
 * Seteo el IDAC en una valor fijo con con el pulsador hago conmutar el AMux.
 * ========================================*/
#include "project.h"

uint8 Estado=0;
CY_ISR(VAR_AMux_Handler)
{
    switch(Estado)
    {
     case 0:
        AMux_1_Select(0);
        break;
     case 1:
        AMux_1_Select(1);
        break;
     case 2:
        AMux_1_DisconnectAll();
        break;    
    }
    if(Estado>=2)
     Estado=0;
    else
     Estado++;
    SW1_AMux_ClearInterrupt();
}

int main()
{
    CyGlobalIntEnable;
    IDAC_1_Start();
    AMux_1_Start();
    VAR_AMux_StartEx(VAR_AMux_Handler);
	while(1)
    {}
}

