/* ========================================
    Prueba del modulo PWM implementado con UDB.
    Este programa genera un PWM de 1kHz aprox. que actua sobre el LED
    On Board de la placa, la señal arranca con una Duty del 1% y se
    incrementará en una unidad cada 50ms mientra este pulsado el SWI On Board
    de la placa, si no esta pulsado el duty quedará fijo en el ultimo valor.
    Paralelamente cada evento tc del PWM se genera una interrupción que incrementará
    un contador, al transcurrir de 1000 interrupciones (aprox. 1 segundo) se 
    irá toggleando un led conectado a la salida P1_0 (esto debería suceder todo el tiempo).
 * ========================================
*/
#include "project.h"

uint16 duty=0;
uint8 Estado=0;

CY_ISR(DUTY_INT_Handler)
{   
    Pin_Ext2_Write(~Pin_Ext2_Read());
    PWM_ReadStatusRegister();
}

CY_ISR(PERIODO_INT_Handler)
{
    Pin_Ext1_Write(~Pin_Ext1_Read());
}

CY_ISR(SW_INT_Handler)
{
    if(Estado)
    {
        Estado=0;
        PWM_Stop();
    }
    else
    {
        Estado=1;
        PWM_Start();
    }
    Pin_SWOnB_ClearInterrupt();
    CyDelayUs(40);
}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    DUTY_INT_StartEx(DUTY_INT_Handler);
    PERIODO_INT_StartEx(PERIODO_INT_Handler);
    SW_INT_StartEx(SW_INT_Handler);
    while(1)
    {}
}

