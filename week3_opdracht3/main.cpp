/* --------------------------- */
// Rik Ruttenberg
// 1677636
// Jorn Bunk
// Week 3 opdracht 3
/* --------------------------- */

#include "window.hpp"
#include "line.hpp"
#include "ball.hpp"
#include "wall.hpp"
#include "victim.hpp"

int main(){
   window w( vector(128, 64), 2);
   wall top( w, vector(0, 0), vector(127, 4), 2, {1, -1});
   wall right( w, vector(123,  0), vector(127, 63), 2, {-1, 1});
   wall bottom( w, vector(0, 59), vector(127, 63), 2, {1, -1});
   wall left( w, vector(0, 0), vector(4, 63), 2, {-1, 1});
   ball b( w, vector(50, 20), 9, vector(5, 2));
   victim vic(w, vector(50, 18), vector(78, 46), 2);
   
   drawable * objects[] = { &b, &top, &left, &right , &bottom, &vic };

   for(;;){
      w.clear();
      for( auto & p : objects ){
         p->draw();
      }
      wait_ms( 100 );
      for( auto & p : objects ){
          p->update();
      }
      for( auto & p : objects ){
         for( auto & other : objects ){
            p->interact( *other );
         } 
      }
   }
}

