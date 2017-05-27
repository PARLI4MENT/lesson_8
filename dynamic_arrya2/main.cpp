#include <conio.h>
#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	int n, m;

	int **p = new int*[n];

	for (int i = 0; i < n; i++) {
		p[i] = new int[m];
	}

	for (int i = 0; i < n; i++) {
		delete[] p[i];
	}

	delete[] p;

	_getch();
}