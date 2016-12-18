SCENARIO("calculator div", "[div]") {
    float a = 1.0;
    float b = 0.0;
    int* c = (int*)malloc(sizeof(int));
    
    double rv = div( a, b, c );
    
	REQUIRE( rv == nullptr );
}
SCENARIO("calculator pow", "[pow]") {
    float a = 2.0;
    float b = 1.0;
    int* extent = (int*)malloc(sizeof(int));
    int* c = (int*)malloc(sizeof(int));
    *extent = 2;
    
    double rv = pow( a, extent, c );
    
	REQUIRE( rv == 4.0 );
}
SCENARIO("calculator sq", "[sq]") {
    float a = -2.0;
    float b = 1.0;
    int* c = (int*)malloc(sizeof(int));
    
    double rv = sq( a, c );
    
	REQUIRE( rv == nullptr );
}
