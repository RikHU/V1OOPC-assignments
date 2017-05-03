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

class victim : public rectangle{
private:
	int size_update_value;
public:
	victim(window & w, const vector & start, const vector & size, int size_update_value);
	void interact(drawable & other) override;
	void update() override;
};

#endif
