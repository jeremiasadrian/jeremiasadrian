/******************************************************************************
* Project Name		: Bootloadable Contador Basico con ISR
* File Name			: main.c
* Device Used		: CY8C4245AXI-483
* Software Used		: PSoC Creator 4.4
* Related Hardware	: CY8CKIT-049-42xx PSoC 4 Prototyping Kit */
/******************************************************************************
*                           THEORY OF OPERATION
* Dispara una interrupción por nivel, segun el estado del MSB del contador. 
* Default UART Port Configuration for bootloading the PSoC 4 in CY8CKIT-049-42xx
* Baud Rate : 115200 bps
* Data Bits : 8
* Stop Bits : 1
* Parity    : None
******************************************************************************/
#include <project.h>

CY_ISR(CONT_INT_Handler)
{
    PinEXT2_Write(~PinEXT2_Read());
    CyDelay(250);
}

int main()
{
    CyGlobalIntEnable;
    CONT_INT_StartEx(CONT_INT_Handler);
	while(1)
    {}
}