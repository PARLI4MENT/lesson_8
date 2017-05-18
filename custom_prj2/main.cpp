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
		cout << "D[" << i << "]=\t" << &d[i] << endl;
	}

	cout << "sizeD= " << sizeof(d) << endl;
	_getch();
}
