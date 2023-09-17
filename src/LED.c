#include "8051.h"
#include "REG51.h"
#define LED0 P1_0
#define LED1 P1_1
#define LED2 P1_2
#define LED3 P1_3
#define LED4 P1_4
#define LED5 P1_5
#define LED6 P1_6
#define LED7 P1_7
#define u_int unsigned int;
void delay(unsigned int milesecond);

void main(){

    LED0 = 0;
    delay(100);
    LED0 = 1;
    
    LED1 = 0;
    delay(100);
    LED1 = 1;
    
    LED2 = 0;
    delay(100);
    LED2 = 1;

    LED3 = 0;
    delay(100);
    LED3 = 1;


    LED4 = 0;
    delay(100);
    LED4 = 1;


    LED5 = 0;
    delay(100);
    LED5 = 1;

    LED6 = 0;
    delay(100);
    LED6 = 1;

    LED7 = 0;
    delay(100);
    LED7 = 1;
}


void delay(unsigned int  milesecond){
    while (milesecond != 0){
        milesecond --;
        for (int i = 0; i < 512; i++)
        {
            /* code */
        }
    }
    
}