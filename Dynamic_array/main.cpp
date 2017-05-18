#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	//чтоб все по фэншую :)
	system("cls");
	system("color a");

	long n;

	cout << "Введите размерность массива: ";
	cin >> n;

	int *mass = new int [n];

	cout << "===================================\n";

	cout << "Вывод массива:\n";

	for(int i(0); i<n; i++){
		mass[i] = 100-rand() %100+1;
		cout << "mass[" << i << "]=\t " << mass[i] << endl;
	}


	delete[] mass;

	_getch();
}
