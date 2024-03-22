/*===============================================================================
    Prueba de modulo IDAC+ADC
    Este programa confirgura el valor de IDAC en función del resultado de una
    conversión AD de una potenciometro con una frecuencua de actualización
    de 10Hz (100ms), eso de ejecuta mediante una interrución de fin de comversión.
    Paralelamente se ejecuta una interrución cuando el pulsador SW1 de oprime,
    en esta subrrutina sa salida del IDAC se sequencia mediente un AMux entre dos 
    salidas y la desconección, rotando en estos tres estados.
    El estado de la salida en texto y los valores obtenidos del ADC y enviados
    al IDAC son en valor Hexadecimal son visualizados en una pantalla LCD de 2x16.
 ================================================================================*/
#include "project.h"

uint8 Estado=0;
CY_ISR(VAR_AMux_Handler)
{
    switch(Estado)
    {
     case 0:
        AMux_1_Select(0);
        LCD_Position(0,0);
        LCD_PrintString("Salida negativa");
        break;
     case 1:
        AMux_1_Select(1);
        LCD_Position(0,0);
        LCD_PrintString("Salida positiva");
        break;
     case 2:
        AMux_1_DisconnectAll();
        LCD_Position(0,0);
        LCD_PrintString("Salidas desc.  ");
        break;    
    }
    if(Estado>=2)
     Estado=0;
    else
     Estado++;
    SW1_AMux_ClearInterrupt();
}

CY_ISR(ADC_1_IRQ_Handler)
{
    int16 Cont_IDAC=0;
    uint32 IDAC_out=0;
    uint32 intr_status;
    intr_status = ADC_1_SAR_INTR_REG;
    ADC_1_StopConvert();
    Cont_IDAC = ADC_1_GetResult16(0);
    IDAC_out=Cont_IDAC;
    IDAC_1_SetValue(IDAC_out);
    ADC_1_SAR_INTR_REG = intr_status;
    LCD_Position(1,0);
    LCD_PrintInt16(Cont_IDAC);
    LCD_Position(1,6);
    LCD_PrintInt32(IDAC_out);
}

int main()
{
    CyGlobalIntEnable;
    ADC_1_Start();
    ADC_1_IRQ_Enable();
    IDAC_1_Start();
    AMux_1_Start();
    Opamp_1_Start();
    Opamp_1_SetPower(Opamp_1_HIGHPOWER);
    LCD_Start();
    LCD_Position(0,0);
    LCD_PrintString("Prueba LCD");
    VAR_AMux_StartEx(VAR_AMux_Handler);
    ADC_1_IRQ_StartEx(ADC_1_IRQ_Handler);
	while(1)
    {
        CyDelay(100);
        ADC_1_StartConvert();
    }
}

