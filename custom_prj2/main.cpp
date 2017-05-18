#include <conio.h>
#include <iostream>
#include <cstring>
#include <ctime>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	double n = 3.14;

	double *p = &n;

	cout << p << endl;

	cout << &n << endl;


	_getch();
}
