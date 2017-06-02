#ifndef BALL_HPP
#define BALL_HPP

#include "window.hpp"
#include "vector.hpp"
#include "circle.hpp"

/// \brief
/// The class to make a ball
/// \details
/// This class makes a ball object, the ball object is made of a circle.
class ball : public circle {
private:
   vector speed;
public:
/// \brief
/// This constructor returns a ball object.
/// \details
/// This function returns a ball object. 
/// The value speed is added to the circle constructor. This value is with which speed the ball moves over the window.
   ball( window & w, const vector & midpoint, int radius, const vector & speed );
/// \brief
/// Update the ball on the window.
/// \details
/// This function moves the midpoint of the ball to move the object over the window.
   void update() override;
   /// \brief
/// Interact with the wall.
/// \details
/// This function makes that the ball can interact with the wall.
/// When the ball hits the wall, the speed of the ball changes.
   void interact( drawable & other ) override;
};

#endif // BALL_HPP
