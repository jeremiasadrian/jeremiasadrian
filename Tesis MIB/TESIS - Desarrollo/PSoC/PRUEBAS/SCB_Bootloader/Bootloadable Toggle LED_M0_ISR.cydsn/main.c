/******************************************************************************
* Project Name		: Bootloadable Toggle LED con M0 ISR
* File Name			: main.c
* Device Used		: CY8C4245AXI-483
* Software Used		: PSoC Creator 4.4
* Related Hardware	: CY8CKIT-049-42xx PSoC 4 Prototyping Kit */
/******************************************************************************
*                           THEORY OF OPERATION
* This is a blinking LED project. A PWM component drives the pin to blink the 
* LED at regular intervals. This project contains a bootloadable component so 
* that it can be bootloaded into PSoC 4 which has a bootloader already programmed 
* into it.
* Default UART Port Configuration for bootloading the PSoC 4 in CY8CKIT-049-42xx
* Baud Rate : 115200 bps
* Data Bits : 8
* Stop Bits : 1
* Parity    : None
******************************************************************************/
#include <project.h>

uint8 INT_RES;
CY_ISR(INT_SW1_Handler)
{
    PinONB_Write(~PinONB_Read());
    INT_RES = Pin_SW1_ClearInterrupt();
}

int main()
{
    CyGlobalIntEnable;
    INT_SW1_StartEx(INT_SW1_Handler);
	while(1)
    {}
}
