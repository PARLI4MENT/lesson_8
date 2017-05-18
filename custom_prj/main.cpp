#include <iostream>
#include <conio.h>
#include <cstdio>
#include <ctime>

using namespace std;

void main()
{
	setlocale(LC_ALL, 0);

	long arr[10];

	for (int i(0); i < 10; i++) {
		arr[i] = 10 - rand() % 10 + 1;
		cout << "arr[" << i << "] =" << arr[i] << " (0x" << &arr[i] << ")" << endl;
	}

	_getch();
}