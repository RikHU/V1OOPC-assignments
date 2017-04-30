/* --------------------------- */
// Rik Ruttenberg
// 1677636
// Jorn Bunk
// Week 2 opdracht 3
/* --------------------------- */

#include "vector.hpp"
#include "catch_with_main.hpp"

TEST_CASE( "operator +" ){
   vector b( 1, 2 );
   vector a(2, 4);
   vector c = a + b;
   REQUIRE( c == vector( 3, 6 ) ); 
}

TEST_CASE( "operator +=" ){
   vector b( 1, 2 );
   vector a(2, 4);
   vector c = a += b;
   REQUIRE( a == vector( 3, 6 ) ); 
   REQUIRE( c == vector( 3, 6 ) ); 
    REQUIRE( b == vector( 1, 2 ) ); 
}

TEST_CASE( "operator*, int" ){
   vector a(2, 4);
   vector c = a * 2;
   REQUIRE( a == vector( 2, 4 ) ); 
   REQUIRE( c == vector( 4, 8 ) ); 
}

TEST_CASE( "operator*=" ){
   vector a(2, 4);
   vector c = a *= 2;
   REQUIRE( a == vector( 4, 8 ) ); 
   REQUIRE( c == vector( 4, 8 ) ); 
}

TEST_CASE( "constructor, two_parameters" ){
   vector v( 3, 4 );
   std::stringstream s;
   s << v;
   REQUIRE( s.str() == "(3,4)" );   
}
/*
TEST_CASE( "operator/" ){
   vector a(2, 4);
   vector c = a / 2;
   REQUIRE( a == vector( 2, 4 ) ); 
   REQUIRE( c == vector( 1, 2 ) ); 
}

TEST_CASE( "operator/=" ){
   vector a(2, 4);
   vector c = a /= 2;
   REQUIRE( a == vector( 1, 2 ) ); 
   REQUIRE( c == vector( 1, 2 ) ); 
}

TEST_CASE( "operator -" ){
   vector b( 1, 2 );
   vector a(2, 4);
   vector c = a - b;
   REQUIRE( c == vector( 1, 2 ) ); 
}

TEST_CASE( "operator -=" ){
   vector b( 1, 2 );
   vector a(2, 4);
   vector c = a -= b;
   REQUIRE( a == vector( 1, 2 ) ); 
   REQUIRE( c == vector( 1, 2 ) ); 
    REQUIRE( b == vector( 1, 2 ) ); 
}
*/