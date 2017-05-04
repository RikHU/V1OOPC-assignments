/* --------------------------- */
// Rik Ruttenberg
// 1677636
// Jorn Bunk
// Week 4 opdracht 2
/* --------------------------- */

#include "hwlib.hpp"

void led_control(hwlib::port_out & leds, hwlib::target::pin_in_out & sw1, hwlib::target::pin_in_out & sw2){
	sw1.direction_set_input();
    sw2.direction_set_input();
	int i = 0;
	for(;;){
		if(!sw1.get()){
			i*=2;
			i+=1;
			leds.set(i << 0);
		}
		if(!sw2.get()){
			i-=1;
			i/=2;
			leds.set(i << 0);
		}
		hwlib::wait_ms(150);
	}
}

int main( void ){	
   // kill the watchdog
   WDT->WDT_MR = WDT_MR_WDDIS;
   
   auto led1 = hwlib::target::pin_out(hwlib::target::pins::d4);
   auto led2 = hwlib::target::pin_out(hwlib::target::pins::d5);
   auto led3 = hwlib::target::pin_out(hwlib::target::pins::d6);
   auto led4 = hwlib::target::pin_out(hwlib::target::pins::d7);
   
   auto sw1 = hwlib::target::pin_in_out(hwlib::target::pins::d8);
   auto sw2 = hwlib::target::pin_in_out(hwlib::target::pins::d9);
   
   auto leds = hwlib::port_out_from_pins(led1, led2, led3, led4);
   ::led_control(leds, sw1, sw2);
}
