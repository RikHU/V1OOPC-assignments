/* --------------------------- */
// Rik Ruttenberg
// 1677636
// Jorn Bunk
// Week 4 opdracht 1
/* --------------------------- */

#include "hwlib.hpp"

void kitt( hwlib::port_out & leds, int ms = 1000 ){
	for(;;){
		for( unsigned int i = 0; i < leds.number_of_pins()-1; i++ ){
			leds.set( 0x03 << i);
			hwlib::wait_ms( ms );
		}
		for( unsigned int j = leds.number_of_pins() -2; j > 0; j-- ){
			leds.set( 0x03 << j);
			hwlib::wait_ms( ms );
		}
	}
}

int main( void ){	
   // kill the watchdog
   WDT->WDT_MR = WDT_MR_WDDIS;
   
   auto led1 = hwlib::target::pin_out(hwlib::target::pins::d4);
   auto led2 = hwlib::target::pin_out(hwlib::target::pins::d5);
   auto led3 = hwlib::target::pin_out(hwlib::target::pins::d6);
   auto led4 = hwlib::target::pin_out(hwlib::target::pins::d7);
   
   auto leds = hwlib::port_out_from_pins(led1, led2, led3, led4);
   ::kitt(leds);
}
