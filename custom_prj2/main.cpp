#include <conio.h>
#include <iostream>
#include <cstring>
#include <ctime>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int d[16];

	for (int i(0); i < 16; i++) {
		d[i] = 10 - rand() % 10 + 1;
		cout << "D[" << i << "]=\t[" << d[i] << "]\t0x" << &d[i] << endl;
	}

	cout << "sizeD= " << sizeof(d) << endl;
	_getch();
}
