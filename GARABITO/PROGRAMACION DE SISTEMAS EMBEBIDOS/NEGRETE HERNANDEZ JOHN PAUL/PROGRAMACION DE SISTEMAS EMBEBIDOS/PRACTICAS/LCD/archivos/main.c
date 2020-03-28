/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

int main()
{
    uint8_t
    counter = 0;
    CyGlobalIntEnable; /* Enable global interrupts. */
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    LCD_Start();
    LCD_ClearDisplay();
    LCD_PrintString("Gutierrez Jose");
    for(;;)
    {
        /* Place your application code here. */
        LCD_Position(1,7);
        LCD_PrintNumber(counter);
        LCD_PrintString(" ");
        counter++;
        CyDelay(500);
    }
}

/* [] END OF FILE */
