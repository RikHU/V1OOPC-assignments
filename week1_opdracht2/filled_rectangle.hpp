/* --------------------------- */
// Rik Ruttenberg
// 1677636
// Jorn Bunk
// Week 1 opdracht 2
/* --------------------------- */

#ifndef FILLED_RECTANGLE_HPP
#define FILLED_RECTANGLE_HPP

#include "window.hpp"

/// \brief
///	filled rectangle class
/// \details
/// This class makes a filled rectangle using a window, start and end coördinates.
class filled_rectangle{
private:
	int p_start_x;
	int p_start_y;
	int p_end_x;
	int p_end_y;
    window & w;
public:
/// \brief
/// Filled rectangle constructor.
/// \details
/// This is the constructor which returns a filled rectangle object.
    filled_rectangle(window & w, int p_start_x, int p_start_y, int p_end_x, int p_end_y );
/// \brief
/// Draw the filled rectangle.
/// \details
/// Draw a filled rectangle on the window.
    void draw();
};

#endif