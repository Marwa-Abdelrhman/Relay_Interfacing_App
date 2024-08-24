/* 
 * File:   application.c
 * Author: Marwa Abdelrahman
 *
 * Created on August 1, 2024, 12:53 AM
 */


#include"application.h"





Std_RetrunType ret=E_NOK;
relay_t rely_1={.relay_port=PORTC_INDEX,
                .relay_pin=GPIO_PIN0,
                .relay_state=RELAY_OFF_STATE};




int main() {
    app_init();
    while(1){
        ret=relay_on(&rely_1);
        __delay_ms(5000);
        ret=relay_off(&rely_1);
        __delay_ms(5000);
        


    }
        return (EXIT_SUCCESS);
}

void app_init(void){
  
    ret=relay_init(&rely_1);

    
}