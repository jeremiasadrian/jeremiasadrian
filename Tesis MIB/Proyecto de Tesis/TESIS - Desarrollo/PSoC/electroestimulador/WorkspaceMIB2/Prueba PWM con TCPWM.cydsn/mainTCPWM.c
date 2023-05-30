/* ========================================
 pRUEBA DEL MODULO TCPWM
 * ========================================
*/
#include <project.h>

uint8 estado = 0;

CY_ISR(PWM_INT_Handler)
{
    uint32 estado_int=0;
    estado_int = PWM_1_GetInterruptSourceMasked();
    switch(estado_int)
    {
        case PWM_1_INTR_MASK_TC:
            Pin_INT_TC_Write(~Pin_INT_TC_Read());
            PWM_1_ClearInterrupt(PWM_1_INTR_MASK_TC);
            break;
        case PWM_1_INTR_MASK_CC_MATCH:
            Pin_INT_CC_Write(~Pin_INT_CC_Read());
            PWM_1_ClearInterrupt(PWM_1_INTR_MASK_CC_MATCH);
            break;
        default:
            PWM_1_ClearInterrupt(PWM_1_INTR_MASK_TC);
            PWM_1_ClearInterrupt(PWM_1_INTR_MASK_CC_MATCH);
            break;
    }
}

CY_ISR(SW_INT_Handler)
{
    if(estado)
    {
        estado = 0;
        PWM_1_Stop();
        Pin_INT_TC_Write(0);
        Pin_INT_CC_Write(0);
    }
    else
    {
        estado = 1;
        PWM_1_Start();
    }
    Pin_SW_ClearInterrupt();
    CyDelayUs(40);
}

int main(void)
{
    CyGlobalIntEnable; // Enable global interrupts.
    PWM_INT_StartEx(PWM_INT_Handler);
    SW_INT_StartEx(SW_INT_Handler);
    Pin_INT_TC_Write(0);
    Pin_INT_CC_Write(0);
    while(1)
    {}
}

