/* ========================================
    Segunda prueba de Generador de Pulsos para
    Electroestimulador.
======================================== */
#include <project.h>
#include <stdlib.h>

uint8 estadoPWM = 0;

CY_ISR(ADC_INTAux_Handler)
{
    int16 canal_0;
    int16 canal_1;
    int16 canal_2;
    uint32 periodo;
    div_t dutyAux;
    uint32 div_entero;
    uint32 div_resto;
    uint32 duty;
    uint32 Iout;
    ADC_StopConvert();
    canal_0 = ADC_GetResult16(0);
    canal_1 = ADC_GetResult16(1);
    canal_2 = ADC_GetResult16(2);
    periodo = canal_0;
    dutyAux = div(2047,canal_1);
    div_entero = dutyAux.quot;
    div_resto = dutyAux.rem;
    duty = (periodo/div_entero)-((periodo*div_resto)/2047);
    Iout = canal_2;
    if(Iout>255)
        Iout = 255;
    else{}
    PWM_WritePeriod(periodo);
    PWM_WriteCompare(duty);
    IDAC_SetValue(Iout);
    canal_0 = periodo;
    canal_1 = duty;
    canal_2 = Iout;
//    LCD_ClearDisplay();
    LCD_Position(1,0);
    LCD_PrintNumber(canal_2);
//    LCD_Position(1,0);
//    LCD_PrintInt16(canal_0);
//    LCD_Position(1,8);
//    LCD_PrintInt16(canal_1);
}

CY_ISR(TIMER_INT_Handler)
{
    ADC_StartConvert();
    Timer_1_ClearInterrupt(Timer_1_INTR_MASK_TC);
}

CY_ISR(PWM_INT_Handler)
{
    uint32 estadoINT_PWM = 0;
    estadoINT_PWM = PWM_GetInterruptSource();
    switch(estadoINT_PWM)
    {
        case PWM_INTR_MASK_TC:
            AMux_DisconnectAll();
            AMux_Select(0);
            PWM_ClearInterrupt(PWM_INTR_MASK_TC);
            break;
        case PWM_INTR_MASK_CC_MATCH:
            AMux_DisconnectAll();
            AMux_Select(1);
            PWM_ClearInterrupt(PWM_INTR_MASK_CC_MATCH);
            break;
        default:
            PWM_ClearInterrupt(PWM_INTR_MASK_TC);
            PWM_ClearInterrupt(PWM_INTR_MASK_CC_MATCH);
            break;
    }
}

CY_ISR(SW_INT_Handler)
{
    if(estadoPWM)
    {
        PWM_Stop();
        estadoPWM = 0;
    }
    else
    {
        PWM_Start();
        estadoPWM = 1;
    }
    PIN_SW_ClearInterrupt();
}

int main(void)
{
    CyGlobalIntEnable; 
    ADC_IRQ_Disable();
    ADC_INTAux_StartEx(ADC_INTAux_Handler);
    SW_INT_StartEx(SW_INT_Handler);
    PWM_INT_StartEx(PWM_INT_Handler);
    TIMER_INT_StartEx(TIMER_INT_Handler);
    LCD_Start();
    PWM_Init();
    Timer_1_Start();
    IDAC_Start();
    AMux_Start();
    ADC_Start();
    LCD_Position(0,0);
    LCD_PrintString("Electroestimulador");
    while(1)
    {}
}

