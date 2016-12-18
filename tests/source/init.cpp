#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator sum", "[sum]") {
    float a = 9.0;
    float b = 1.0;
    
    double rv = sum( a, b );
    
	REQUIRE( rv == 10.0 );
}
SCENARIO("calculator sub", "[sub]") {
    float a = 9.0;
    float b = 1.0;
    
    double rv = sub( a, b );
    
	REQUIRE( rv == 8.0 );
}
SCENARIO("calculator mult", "[mult]") {
    float a = 9.0;
    float b = 1.0;
    
    double rv = mult( a, b );
    
	REQUIRE( rv == 9.0 );
}
SCENARIO("calculator div", "[div]") {
    float a = 9.0;
    float b = 1.0;
    int* c = (int*)malloc(sizeof(int));
    
    double rv = div( a, b, c );
    
	REQUIRE( rv == 9.0 );
}
SCENARIO("calculator pow", "[pow]") {
    float a = 2.0;
    float b = 1.0;
    int* extent = (int*)malloc(sizeof(int));
    int* c = (int*)malloc(sizeof(int));
    
    double rv = pow( a, extent, c );
    
	REQUIRE( rv == 0.25 );
}
SCENARIO("calculator sq", "[sq]") {
    float a = 9.0;
    float b = 1.0;
    int* c = (int*)malloc(sizeof(int));
    
    double rv = sq( a, c );
    
	REQUIRE( rv == 3.0 );
}
