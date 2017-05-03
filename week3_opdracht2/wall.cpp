/* --------------------------- */
// Rik Ruttenberg
// 1677636
// Jorn Bunk
// Week 3 opdracht 2
/* --------------------------- */

#include "wall.hpp"

wall::wall(window & w, const vector & location, const vector & end, int update_interval, const vector & bounce_value):
	rectangle(w, location, end),
	update_interval(update_interval),
	bounce_value(bounce_value)
	{
	update_count = 0;
	filled = false;
	bounce = bounce_value;
	}

void wall::update(){
	if(update_count == update_interval){
		if(filled == true){
			filled = false;
		}else{
			filled = true;
		}
		update_count = 0;
	}else{
		update_count++;
	}
}

void wall::draw(){
	if(filled == true){
		for(int i = location.x; i <= end.x; i++){
			for(int a = location.y; a <= end.y; a++){
				w.draw(vector( i, a ));
			}
		}
	}else if(filled == false){
		left.draw();
		right.draw();
		top.draw();
		bottom.draw();
	}
}
