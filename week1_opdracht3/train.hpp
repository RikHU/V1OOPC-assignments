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

/// @file

/// \brief
/// Train class
/// \details
/// This class makes a train object.
class train{
private:
	window & w;
	int start_x;
	int start_y;
	int number_of_carriages;
	int current = 0;
public:
/// \brief
/// The train constructor.
/// \details
/// This function returns a train object.
/// The train starts at the start_x and start_y point. 
/// Number of carriages shows how much carriages the train contains.
   train(window & w, int start_x, int start_y, int number_of_carriages);
/// \brief
/// Print the train.
/// \details
/// This function shows a couple of carriages on the window.
/// This will show as a train object.
   void print_train();
};

/// \brief
/// Carriage class
/// \details
/// This class makes a carriage object.
class carriage{
private:
	line straight, rail;
	filled_rectangle body;
	circle frontwheel, backwheel;
	window & w;
public:
/// \brief
/// Carriage constructor.
/// \details
/// This is the constructor which returns a carriage object.
/// The start_x and start_y value is the start position of the carriage.
/// Which is the left upper point on the carriage.
	carriage(window & w, int start_x_, int start_y_);
/// \brief
/// Print the carriage.
/// \details
/// This function shows the carriage on the given window.
	print_carriage();
};

#endif
