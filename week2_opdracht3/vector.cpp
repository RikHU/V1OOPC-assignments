/* --------------------------- */
// Rik Ruttenberg
// 1677636
// Jorn Bunk
// Week 2 opdracht 3
/* --------------------------- */

#include "vector.hpp"

vector::vector(int x, int y):
	x( x ), y( y )
{}   

vector vector::operator+( const vector & rhs ) const {
	return vector( x + rhs.x, y + rhs.y );
}
   
vector & vector::operator+=( const vector & rhs ){
	x += rhs.x;
	y += rhs.y;
	return *this;
}

vector vector::operator*( const int rhs ) const {
	return vector( rhs * x, rhs * y );
}

vector vector::operator*( const vector & rhs ) const {
	return vector( x * rhs.x , x * rhs.y );
}

vector & vector::operator*=( const int rhs ){
	x *= rhs;
	y *= rhs;
	return *this;
}

bool vector::operator==( const vector & rhs ) {
	return (x == rhs.x && y == rhs.y);
}

std::ostream & operator<<( std::ostream & lhs, const vector pos ){
	lhs << "(" << pos.x << "," << pos.y << ")";
	return lhs;
}
/*
vector vector::operator/( const int rhs ) const {
	return vector( x / rhs, y / rhs );
}
   
vector & vector::operator/=( const int rhs ){
	x /= rhs;
	y /= rhs;
	return *this;
}

vector vector::operator-(const vector & rhs ) const {
	return vector( x - rhs.x, y - rhs.y );
}

vector & vector::operator-=(const vector & rhs){
	x -= rhs.x;
	y -= rhs.y;
	return *this;
}
*/
