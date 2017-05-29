/* --------------------------- */
// Rik Ruttenberg
// 1677636
// Jorn Bunk
// Week 6 opdracht 1
/* --------------------------- */

#include "hwlib.hpp"

int main( void ){
	// kill the watchdog
	WDT->WDT_MR = WDT_MR_WDDIS;
	namespace target = hwlib::target;
   
	auto scl     = target::pin_oc( target::pins::scl );
	auto sda     = target::pin_oc( target::pins::sda );
	auto i2c_bus = hwlib::i2c_bus_bit_banged_scl_sda( scl, sda );
	auto oled    = hwlib::glcd_oled( i2c_bus, 0x3c );  
	
	oled.clear();
	
	uint16_t x = oled.size.x / 4;
	uint16_t y = oled.size.y / 2;
	
	while(x < oled.size.x / 2 ){
		oled.write( hwlib::location( x++, y-- ), hwlib::black);
	}
	
	while(y < oled.size.y/2){
		oled.write( hwlib::location( x++, y++ ), hwlib::black);
	}
		
	while(y < oled.size.y-5){
		oled.write( hwlib::location( x, y++ ), hwlib::black);
	}
	
	while(x > oled.size.x/4){
		oled.write( hwlib::location( x--, y ), hwlib::black);
	}
	
	while(y > oled.size.y / 2){
		oled.write( hwlib::location( x, y-- ), hwlib::black);
	}
	
	while(x < oled.size.x/4*3 ){
		oled.write( hwlib::location( x++, y ), hwlib::black);
	}
}

