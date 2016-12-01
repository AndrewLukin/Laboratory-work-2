#include <iostream>

#include "calculator.hpp"
using namespace std;

int main()
{
    float a, b;
    cin >> a;
    cin >> b;
    
    cout << sum( a, b ) << endl;
    cout << sub( a, b ) << endl;
    cout << mult( a, b ) << endl;
    if ( div(a,b) != false ) cout << "a / b = " << div(a,b) << endl;
        else cout << "a / b = Error: it can not be divided by zero" << endl; 
    cout << pow( a ) << endl;
    cout << sq( a ) << endl;
    
    return 0;
}
