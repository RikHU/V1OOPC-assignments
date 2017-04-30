/* --------------------------- */
// Rik Ruttenberg
// 1677636
// Jorn Bunk
// Week 1 opdracht 3
/* --------------------------- */

#include "train.hpp"

train::train(window & w, int start_x, int start_y, int number_of_carriages):
	w(w),
	start_x(start_x),
	start_y(start_y),
	number_of_carriages(number_of_carriages)
{}

void train::print_train(){
	for(int i = 0; i < number_of_carriages; i++){
		carriage car(w, start_x + current, start_y);
		car.print_carriage();
		current += 37;
	}
}

carriage::carriage(window & w, int start_x_, int start_y_):
	w(w),
	body(w, start_x_ + 7, start_y_, start_x_ + 37, start_y_ + 15),
	frontwheel(w, (start_x_ + 12), (start_y_ + 18), 3),
	backwheel(w, (start_x_ + 31), (start_y_ + 18), 3),
	straight(w, (start_x_), start_y_ + 15, start_x_ + 7, start_y_ + 15),
	rail(w, start_x_, start_y_ + 22, start_x_ + 37, start_y_ + 22)
{}

carriage::print_carriage(){
	rail.print();
	straight.print();
	body.draw();
	frontwheel.print();
	backwheel.print();
}