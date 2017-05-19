#include <conio.h>
#include <iostream>
#include <cstring>
#include <ctime>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	double d[16];

	for (int i(0); i < 16; i++) {
		d[i] = (double)i;

	}

	double *p = d;


	cout << "d\t" << d << endl;
	cout << "&d\t" << &d << endl << endl;
	cout << "d[0]\t" << d[0] << endl;
	cout << "&d[0]\t" << &d[0] << endl << endl;
	cout << "d[1]\t" << d[1] << endl;
	cout << "&d[1]\t" << &d[1] << endl << endl;

	cout << "p\t" << p << endl;
	cout << "*p\t" << *p << endl << endl;

	p++;

	cout << "p++\t" << p << endl;
	cout << "*p++\t" << *p << endl;


	

	_getch();
}
