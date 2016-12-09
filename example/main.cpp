#include <iostream>

#include "calculator.hpp"
using namespace std;

int main()
{
    float a, b;
    int* c = (int*)malloc(sizeof(int));
	*c = 0;
    cin >> a;
    cin >> b;
    
    cout << sum( a, b ) << endl;
    cout << sub( a, b ) << endl;
    cout << mult( a, b ) << endl;
    div(a,b,c);
	if ( *c == 0 ) cout << "a / b = " << div(a,b,c) << endl;
		else cout << "a / b = Error: it can not be divided by zero" << endl;
    cout << pow( a ) << endl;
   sq(a,c);
	if ( *c == 0 ) cout << "sqrt(a) = " << sq(a,c) << endl;
		else cout << "sqrt(a) = Error: root of a negative number does not exist!" << endl;
    
    return 0;
}
