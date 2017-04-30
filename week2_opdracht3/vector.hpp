/* --------------------------- */
// Rik Ruttenberg
// 1677636
// Jorn Bunk
// Week 2 opdracht 3
/* --------------------------- */

#ifndef VECTOR_HPP
#define VECTOR_HPP
#include "ostream"
#include <iostream>

/// @file

	/// \brief   
	/// Class which contains a vector and it's operations.
	/// \details
	/// This is the class which can make a vector. 
	/// Operations can be done on a vector.
class vector {
private:
	int x;
	int y;
	
public:
	/// \brief   
	/// Constructor which can receive two integer values.
	/// \details
	/// The constructor can receive two integer values.
	/// It's default values are set to 0.
	/// The constructor is called to make a vector.
	vector(int x = 0, int y = 0);
	
	/// \brief
	/// Add a vector to another vector.
	/// \details
	/// This fucntions adds a vector to another vector
	/// and returns a new vector.
	vector operator+( const vector & rhs ) const;
	
	/// \brief
	/// Add a vector to another vector and overwrite it on the left vector.
	/// \details
	/// This functions adds a vector to another vector
	/// and returns and overwrites the value of the left vector.
	vector & operator+=( const vector & rhs );
	
	/// \brief   
	/// Multiply a vector by an integer.
	/// \details
	/// This operator multiplies a vector with an integer value.
	/// It returns a new vector with the result.
	vector operator*( const int rhs ) const;
	
	/// \brief   
	/// Multiply a vector by another vector.
	/// \details
	/// This operator multiplies a vector with another vector.
	/// It returns a new vector with the result.
	vector operator*( const vector & rhs ) const;
	
	/// \brief   
	/// Multiply a vector with an integer and overwrite
	/// the left value with the result.
	/// \details
	/// This operator multiplies a vector with an integer.
	/// It overwrites the left value with the result.
	vector & operator*=( const int rhs );
	
	/// \brief   
	/// Compare two vectors.
	/// \details
	/// This operator tests for equality.
	/// It returns true if the x value of both vectors are equal and
	/// if the y value of both vectors are equal.
	bool operator==( const vector & rhs );
	
	/// \brief   
	/// Pushes a vector to the ostream.
	/// \details
	/// This operator pushes the given vector to the ostream.
	/// So it can be shown on a screen.
	friend std::ostream & operator<<(std::ostream & lhs, const vector pos);
	
	//vector operator-(const vector & rhs ) const;
	//vector & operator-=(const vector & rhs);
	
	//vector operator/( const int rhs ) const;
	//vector & operator/=( const int rhs );
};

#endif
