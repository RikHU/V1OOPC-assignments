/* --------------------------- */
// Rik Ruttenberg
// 1677636
// Jorn Bunk
// Week 3 opdracht 2
/* --------------------------- */

#ifndef WALL_HPP
#define WALL_HPP

#include "rectangle.hpp"

class wall : public rectangle{
private:
	bool filled;
	int update_interval;
	int update_count;
	vector bounce_value;
public:
	wall(window & w, const vector & location, const vector & end, int update_interval, const vector & bounce_value);
	void draw() override;
	void update() override;
};

#endif
