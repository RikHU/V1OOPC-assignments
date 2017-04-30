/* --------------------------- */
// Rik Ruttenberg
// 1677636
// Jorn Bunk
// Week 1 opdracht 2
/* --------------------------- */

#include "filled_rectangle.hpp"
#include <iostream>

filled_rectangle::filled_rectangle( window & w, int p_start_x, int p_start_y, int p_end_x, int p_end_y ):
      p_start_x(p_start_x),
      p_start_y(p_start_y),
      p_end_x(p_end_x),
      p_end_y(p_end_y),
      w( w )
{}
    
void filled_rectangle::draw(){
	for(int i = p_start_x; i <= p_end_x; i++){
		for(int a = p_start_y; a <= p_end_y; a++){
			w.draw(i,a);
		}
	}
}
