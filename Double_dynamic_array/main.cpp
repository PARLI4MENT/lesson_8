#include <iostream>
#include <conio.h>
#include <cctype>
#include <ctime>

using namespace std;

void main()
{
	srand(time(NULL));
	system("color a");

	int n, m;

	cout << "Enter N M: ";
	cin >> n >> m;

	int **mass = new int*[n];

	//создание самого массива
	for(int i(0); i<n;i++){
		mass[i] = new int[m];
	}

	//генератор случайных чисел и вывод на экран
	for(int i(0); i<n; i++){
		for(int j(0); j<m; j++){
			*(*(mass+i)+j) = 100 - rand() %100 +1;
			cout << *(*(mass + i) + j) << "\t";
		}
		cout << "\n";
	}

	//очистка массива из памяти
	//просто так более правильно :)
	for(int i(0); i<n; i++){
		delete [] mass[i];
	}

	delete [] mass;

	_getch();
}
