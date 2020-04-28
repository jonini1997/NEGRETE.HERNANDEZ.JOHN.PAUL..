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

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        if(SW_Read())
        {
            LED_1_Write(1);
            CyDelay(500);
            LED_1_Write(0);
            LED_2_Write(1);
            LED_10_Write(1);
            CyDelay(500);
            LED_2_Write(0);
            LED_10_Write(0);
            LED_3_Write(1);
            LED_9_Write(1);
            CyDelay(500);
            LED_3_Write(0);
            LED_9_Write(0);
            LED_4_Write(1);
            LED_8_Write(1);
            CyDelay(500);
            LED_4_Write(0);
            LED_8_Write(0);
            LED_5_Write(1);
            LED_7_Write(1);
            CyDelay(500);
            LED_5_Write(0);
            LED_7_Write(0);
            LED_6_Write(1);
            CyDelay(500);
            LED_6_Write(0);
            LED_5_Write(1);
            LED_7_Write(1);
            CyDelay(500);
            LED_5_Write(0);
            LED_7_Write(0);
            LED_4_Write(1);
            LED_8_Write(1);
            CyDelay(500);
            LED_4_Write(0);
            LED_8_Write(0);
            LED_3_Write(1);
            LED_9_Write(1);
            CyDelay(500);
            LED_3_Write(0);
            LED_9_Write(0);
            LED_2_Write(1);
            LED_10_Write(1);
            CyDelay(500);
            LED_2_Write(0);
            LED_10_Write(0);
            LED_1_Write(1);
            CyDelay(500);
            
        }
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
