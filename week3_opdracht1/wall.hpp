/* --------------------------- */
// Rik Ruttenberg
// 1677636
// Jorn Bunk
// Week 3 opdracht 1
/* --------------------------- */

#ifndef WALL_HPP
#define WALL_HPP

#include "rectangle.hpp"

/// \brief
/// The wall class
/// \details
/// This class makes a wall object, a wall is a rectangle with extra functions.
class wall : public rectangle{
private:
	bool filled;
	int update_interval;
	int update_count;
public:
/// \brief
/// The constructor of wall.
/// \details
/// This function makes a wall object. 
/// The update_interval value contains a value in which interval the wall needs to be updated.
	wall(window & w, const vector & location, const vector & end, int update_interval);
/// \brief
/// Print the wall
/// \details
/// This function draws the wall on the window.
	void draw() override;
/// \brief
/// Update the wall.
/// \details
/// This function updates the wall between filled and unfilled.
	void update() override;
};

#endif
