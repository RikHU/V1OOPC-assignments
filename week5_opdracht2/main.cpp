/* --------------------------- */
// Rik Ruttenberg
// 1677636
// Jorn Bunk
// Week 5 opdracht 1
/* --------------------------- */

#include "hwlib.hpp"

class pin_out_invert : public hwlib::pin_out{
private:
	hwlib::pin_out & out1;
public:
	pin_out_invert(hwlib::pin_out & out1):
		out1(out1)
	{}
	
	void set(bool x, hwlib::buffering buf = hwlib::buffering::unbuffered){
		out1.set(!x);
	}
};

class pin_out_all : public hwlib::pin_out{
private:
   hwlib::pin_out * list[ 8 ];

public:
   pin_out_all( 
      hwlib::pin_out & p0, 
      hwlib::pin_out & p1 = hwlib::pin_out_dummy,  
      hwlib::pin_out & p2 = hwlib::pin_out_dummy, 
      hwlib::pin_out & p3 = hwlib::pin_out_dummy, 
	  hwlib::pin_out & p4 = hwlib::pin_out_dummy,  
      hwlib::pin_out & p5 = hwlib::pin_out_dummy, 
      hwlib::pin_out & p6 = hwlib::pin_out_dummy,
	  hwlib::pin_out & p7 = hwlib::pin_out_dummy 
   
   ):
      list{ &p0, &p1, &p2, &p3, &p4, &p5, &p6, &p7 }
   {}
   
   void set( bool v, hwlib::buffering buf = hwlib::buffering::unbuffered ){
      for( auto p  : list ){
          p->set( v );
      }
   }
};

int main( void ){	
   // kill the watchdog
   WDT->WDT_MR = WDT_MR_WDDIS;
   namespace target = hwlib::target;
   
   auto led1 = target::pin_out(target::pins::d4);
   auto led2 = target::pin_out(target::pins::d5);
   auto led3 = target::pin_out(target::pins::d6);
   auto led4 = target::pin_out(target::pins::d7);
   
	auto ds = target::pin_out( target::pins::d8);
	auto shcp = target::pin_out( target::pins::d9);
	auto stcp = target::pin_out( target::pins::d10);
	auto spi = hwlib::spi_bus_bit_banged_sclk_mosi_miso(shcp, ds, hwlib::pin_in_dummy);
	
	auto hc595 = hwlib::hc595(spi, stcp);
   
   auto inverted_led1 = pin_out_invert(led1);
   auto inverted_led2 = pin_out_invert(led2);
   auto inverted_led3 = pin_out_invert(led3);
   auto inverted_led4 = pin_out_invert(led4);
   
   auto leds = pin_out_all(inverted_led1, inverted_led2, inverted_led3, inverted_led4, hc595.p1, hc595.p2, hc595.p3, hc595.p4);
   hwlib::blink(leds, 500);
}
