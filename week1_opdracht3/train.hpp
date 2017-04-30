/* --------------------------- */
// Rik Ruttenberg
// 1677636
// Jorn Bunk
// Week 1 opdracht 3
/* --------------------------- */

#ifndef TRAIN_HPP
#define TRAIN_HPP

#include "window.hpp"
#include "line.hpp"
#include "filled_rectangle.hpp"
#include "circle.hpp"

class train{
private:
	window & w;
	int start_x;
	int start_y;
	int number_of_carriages;
	int current = 0;
public:
   train(window & w, int start_x, int start_y, int number_of_carriages);
   void print_train();
};


class carriage{
private:
	line straight, rail;
	filled_rectangle body;
	circle frontwheel, backwheel;
	window & w;
public:
	carriage(window & w, int start_x_, int start_y_);
	print_carriage();
};

#endif
