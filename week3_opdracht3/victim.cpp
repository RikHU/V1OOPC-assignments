/* --------------------------- */
// Rik Ruttenberg
// 1677636
// Jorn Bunk
// Week 3 opdracht 3
/* --------------------------- */

#include "victim.hpp"
#include "iostream"

victim::victim(window & w, const vector & start, const vector & size, const int size_update_value):
	rectangle(w, start, size),
	size_update_value(size_update_value)
	{}

void victim::update(){
	left.location = {location.x, location.y};
	right.location = {size.x +location.x, location.y};
	top.location = {location.x, location.y};
	bottom.location = {location.x, size.y+location.y};
	
	left.end = {location.x, size.y+location.y};
	right.end = {size.x+location.x , size.y+location.y};
	top.end = {size.x+location.x, location.y};
	bottom.end = {size.x+location.x, size.y+location.y};
}

void victim::interact(drawable & other){
	if( this != & other){
		if( overlaps( other )){
			if(size.x > 0){
				if(size_update_value % 2 == 1){
					size_update_value += 1;
				}
				location.x += size_update_value / 2;
				location.y += size_update_value / 2;
				size.x -= size_update_value;
				size.y -= size_update_value;
			}
		}
	}
}
