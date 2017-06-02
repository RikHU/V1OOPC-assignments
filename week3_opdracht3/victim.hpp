/* --------------------------- */
// Rik Ruttenberg
// 1677636
// Jorn Bunk
// Week 3 opdracht 3
/* --------------------------- */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include "rectangle.hpp"
#include "drawable.hpp"

/// \brief
/// This class makes a victim object.
/// \details
/// This class makes a victim object out of a rectangle.
class victim : public rectangle{
private:
	int size_update_value;
public:
/// \brief
/// This constructor returns a victim object.
/// \details
/// This function returns a victim object made of a rectangle.
/// The size_update_value is the value in which the rectangle increases.
	victim(window & w, const vector & start, const vector & size, int size_update_value);

/// \brief
/// This function changes the victim.
/// \details
/// This function changes the victim if it interacts with an object.
	void interact(drawable & other) override;

/// \brief
/// Update the value of the rectangle with the size_update_value.
/// \details
/// Update the value of the rectangle with the size_update_value.
	void update() override;
};

#endif
