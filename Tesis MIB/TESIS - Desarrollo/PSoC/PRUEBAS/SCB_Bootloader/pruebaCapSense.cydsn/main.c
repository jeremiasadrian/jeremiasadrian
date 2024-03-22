#include <project.h>

int main(void)
{
    uint16 valor=0;
    /*uint32 CapSense_LINEARSLIDER0_LS=0;*/
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* inicializo el modulo CapSense, la "baselines" VER, e inicio el primer escaneo */
    CapSense_Start();
    CapSense_InitializeAllBaselines(); 
    CapSense_ScanEnabledWidgets();
    
    /* inicializo el modulo PWM*/
    PWM_1_Start();
    /*Bucle de lectura de la linea capacitiva y actualización del Duty del LED en función del resultado */
    while(1)
    {
     if(CapSense_IsBusy() == 0)   /* pregunta si termino el escaneo */
     {
      valor=CapSense_GetCentroidPos(CapSense_LINEARSLIDER0__LS);
      if(valor != 0xFFFF)
        PWM_1_WriteCompare(valor); /* actualiza el ciclo de trabajo del LED en función de la posición del dedo*/
      CapSense_UpdateEnabledBaselines();
      CapSense_ScanEnabledWidgets();
     }
    }
}

