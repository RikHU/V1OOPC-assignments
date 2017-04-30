/* --------------------------- */
// Rik Ruttenberg
// 1677636
// Jorn Bunk
// Week 1 opdracht 2
/* --------------------------- */

#ifndef FILLED_RECTANGLE_HPP
#define FILLED_RECTANGLE_HPP

#include "window.hpp"

class filled_rectangle{
private:
	int p_start_x;
	int p_start_y;
	int p_end_x;
	int p_end_y;
    window & w;
public:
    filled_rectangle(window & w, int p_start_x, int p_start_y, int p_end_x, int p_end_y );
    void draw();
};

#endif