/*===============================================================================
    Prueba de Generador de Onda Cuadrada
    Este programa configura el valor de IDAC en función del resultado de una
    conversión AD de un potenciometro que se ejecuta cada vez que se apaga 
    y enciende la onda. Paralelamente se ejecuta una interrución cuando el pulsador
    SW1 de oprime, en esta subrrutina la salida del IDAC se sequencia mediante un
    AMux entre dos salidas y la desconección, rotando en estos tres estados.
    La leyenda de que la señales esta siendo generada o no y el valor actual cargado
    en el IDAC (en Hexadecimal) son visualizados en una pantalla LCD de 2x16.
 ================================================================================*/
#include <project.h>
#include <math.h>
//#include <stdio.h>

uint8 Estado=0;
uint16 Duty=0;
uint16 PERI=0;
uint32 IDAC_out=0;
uint8 I_neg = 0;
uint8 I_pos = 1;
CY_ISR(ACT_Vout_Handler)
{
    if(Estado)
    {
        AMux_1_DisconnectAll();
        IDAC_1_SetValue(0); 
        PWM_Stop();
  //      ADC_1_IRQ_Enable();
//        ADC_1_StartConvert();
        Estado = 0;    
        LCD_Position(0,0);
        LCD_PrintString("   Salida OFF   ");
    }
    else
    {
        Estado = 1; 
//        ADC_1_IRQ_Disable();
 //       ADC_1_StopConvert();
        PWM_WritePeriod(PERI);
        PWM_WriteCompare(Duty);
        IDAC_1_SetValue(IDAC_out); 
        PWM_Start();
        LCD_Position(0,0);
        LCD_PrintString("   Salida ON    ");
    }
    SW1_Vout_ClearInterrupt();
}

//CY_ISR(ADC_1_IRQ_Handler)
//{
//    float32 DutyAux2=0;
//    int32 DutyAux3=0;
//    int16 DutyAux1=0;
//    int16 PERIAux=0;
//    int16 Niv_IDAC=0;
//    uint32 intr_status;
//    intr_status = ADC_1_SAR_INTR_REG;
//    ADC_1_StopConvert();
//    Niv_IDAC = ADC_1_GetResult16(0);
//    DutyAux1 = ADC_1_GetResult16(1);
//    PERIAux = ADC_1_GetResult16(2);
//    IDAC_out = Niv_IDAC;
//    if(IDAC_out > 255)
//        IDAC_out = 255;
//    else{}
//    DutyAux2 = ADC_1_CountsTo_Volts(1,DutyAux1)/5;
//    DutyAux3 = truncf(PERIAux*DutyAux2);
//    Duty = DutyAux3;
//    PERI = PERIAux;
//    ADC_1_SAR_INTR_REG = intr_status;
//    LCD_Position(1,0);
//    LCD_PrintInt16(Niv_IDAC);
//   LCD_Position(1,6);
//    LCD_PrintInt16(Duty);
//    LCD_Position(1,12);
 //   LCD_PrintInt16(PERI); 
//    ADC_1_StartConvert();
//}

CY_ISR(PWMComp_INT_Handler)
{
    AMux_1_DisconnectAll();
    AMux_1_Select(I_pos);
    PWM_ReadStatusRegister();
    
}

CY_ISR(PWMPeri_INT_Handler)
{
    AMux_1_DisconnectAll();
    AMux_1_Select(I_neg);
}

int main()
{
    CyGlobalIntEnable;
//    ADC_1_Start();
//    ADC_1_IRQ_Enable();
    IDAC_1_Start();
    AMux_1_Start();
    AMux_1_DisconnectAll();
    PWM_Init();         /*Inicializo el PWM pero no lo enciendo.*/
    LCD_Start();
    LCD_Position(0,0);
    LCD_PrintString("Onda Cuadrada BF"); 
    ACT_Vout_StartEx(ACT_Vout_Handler);
 //   ADC_1_IRQ_StartEx(ADC_1_IRQ_Handler);
    PWMComp_INT_StartEx(PWMComp_INT_Handler);
    PWMPeri_INT_StartEx(PWMPeri_INT_Handler);
//    ADC_1_StartConvert();
	while(1)
    {}
}

