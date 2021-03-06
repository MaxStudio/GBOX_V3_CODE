#include "MSP430F5438A.h"
#include "stdio.h"
#include "uart.h"
#include "main.h"
#include "clock.h"
#include "at24c512.h"
#include "led.h"
#include "ublox.h"
#include "sd2068.h"
#include "time.h"
#include "mg323b.h"
#include "adc.h"
#include "packdata.h"
#include "system.h"
#include "config.h"
#include "string.h"
#include "led.h"
#include "isr.h"
#include "device.h"
#include "key.h"


void main( void )
{
    WDTCTL = WDTPW + WDTHOLD;   // 关闭看门狗
    //Clock_init();// 开启外部时钟源
    dco_int(); // 开启内部时钟源,实际32.81K,
    gpio_init();
    P11DIR |= 0x07;                           // ACLK, MCLK, SMCLK set out to pins
    P11SEL |= 0x07;                           // P11.0,1,2 for debugging purposes.


    P1DIR |= BIT5;                            // P1.0 output LED
    //EEP_POWER_ON;PULL_UP_ON;
    GPS_POWER_INIT;
    GPS_POWER_ON;
    //GSM_POWER_INIT;
    //GSM_POWER_OFF;
    //I2C2_Init(); // ATMLH520
    //I2C0_Init();
  __delay_cycles(10*820230);      // 820230-200ms/2           // Delay
  __delay_cycles(10*820230);      // 820230-200ms/2           // Delay

    gps_port_init();
    gsm_port_init();
    debug_port_init(115200);
    TimeA0_init();
    #ifdef WDG
    WDTCTL = WDT_ARST_250;
    #endif
    AD_init();
    
    _BIS_SR(GIE);   // 开启总中断
    
//     SerialPutString("\r\n\r\n");
//    SerialPutString("====================================\r\n");
//    SerialPutString("Welcom to GPS Tracker.  G-BOXV104 <GCODE_V104_150202d>\r\n");
//    
    
 //device_start(); // EEPROM RTC KEY

    while(1)    
    {
//        system_start();
//        #ifdef WDG
//        WDTCTL = WDT_ARST_250;
//        #endif
//
//        //work_mode=2;
//        printf("work mode : %d\r\n",work_mode);
//        printf("work time : %d mins\r\n",work_time);


      P1OUT ^= BIT5;                          // Toggle P1.0
 //__delay_cycles(600000);      // 146.3ms/2           // Delay
  __delay_cycles(10*820230);      // 820230-200ms/2           // Delay

 
    }
}
