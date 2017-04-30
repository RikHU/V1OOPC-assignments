/* --------------------------- */
// Rik Ruttenberg
// 1677636
// Jorn Bunk
// Week 1 opdracht 3
/* --------------------------- */

#include <iostream>

#include "window.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "circle.hpp"
#include "filled_rectangle.hpp"
#include "train.hpp"

int main(int argc, char **argv){
    window w(128, 64, 2);

    train train1(w, 20, 5, 2);
	train train2(w, 0, 30, 3);
	
	train1.print_train();
	train2.print_train();
	
   return 0;
}
