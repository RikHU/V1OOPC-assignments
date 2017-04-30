/* --------------------------- */
// Rik Ruttenberg
// 1677636
// Jorn Bunk
// Week 1 opdracht 2
/* --------------------------- */

#include <iostream>

#include "window.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "circle.hpp"
#include "filled_rectangle.hpp"

int main(int argc, char **argv){
	window w(128, 64, 2);
	
	filled_rectangle rect1(w, 50, 10, 70, 20);
	filled_rectangle rect2(w, 100, 40, 120, 60);
	rect1.draw();
	rect2.draw();
   return 0;
}
