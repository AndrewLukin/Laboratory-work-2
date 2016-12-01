/*
Лабораторная работа №2
Задание 2: Калькулятор с вводимыми с клавиатуры значениями a и b
Алексей Шапран 
Группа: ИУ8-14
*/

#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

double sum ( float a,  float b);
double sub ( float a,  float b);
double mult ( float a,  float b);
double div ( float a,  float b);
double pow ( float a );
double abs (float a);
double sq ( float a );

int main (void)
{
	float a = 0.0;
	float b = 0.0;

	cout << endl << "Calculator 0.2";
	cout << endl << endl << "Print a = "; 
	cin >> a;
	cout << "Print b = ";
	cin >> b;
	cout << endl << "a + b = " << sum(a,b) << endl;
	cout << "a - b = " << sub(a,b) << endl;
	cout << "a * b = " << mult(a,b) << endl;
	if ( div(a,b) != false ) cout << "a / b = " << div(a,b) << endl;
		else cout << "a / b = Error: it can not be divided by zero" << endl;
	cout << "a^4 = " << pow(a) << endl;
	cout << "sqrt(a) = " << sq(a) << endl;
	
	cout << endl << "Press any button to exit the program" << endl;

	_getch();
	return 0;
}
double sum ( float a,  float b)
{
	return a + b;
}
double sub ( float a,  float b)
{
	return a - b;
}
double mult ( float a,  float b)
{
	return a * b;
}
double div ( float a,  float b)
{
	if ( b != 0 ) return (float)a/b;
		else return false;
}
double pow ( float a )
{
	unsigned int extent = 4;
	float a2 = a;
	
	if ( extent != 0 ) 
	{
			for (int i = 1; i < extent; i++)
		{
			a = a * a2;
		}
	}
		else a = 1.0;
	
	return (double) a;
}
double abs (float a)
{
	if ( a >= 0 ) a = a; 
		else a = -a;

	return a;
}
double sq ( float a )
{
	float xn = 1.0;  
	float xn1 = 2.0;

	if ( a != 1 && a != 0 )
	{
		while ( (xn1 - xn) > 0.000001 || (xn1 - xn) < -0.000001  )
		{
		 xn = xn1;
		 xn1 = (float)(xn + (float)a/xn)/2;
		}

	}
		else if ( a == 1 ) xn1 = 1;
			else if ( a == 0 ) xn1 = 0;
				else cout << "error";


	return xn1;
}