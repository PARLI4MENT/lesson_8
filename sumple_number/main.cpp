#include <conio.h>
#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	int n;
	cout << "Enter: ";
	cin >> n;

	bool *_sn = new bool[n];

	for (int i = 0; i < n; i++)
		_sn[i] = true;

	for (int i = 2; i < n; i++) {
		if (_sn[i]) {
			for (int j = i*i; j <= n; j += i) {
				_sn[j] = false;
			}
		}
	}

	cout << endl << endl;

	for (int i = 2; i < n+1; i++) {
		if (_sn[i])
			cout << "_sn\t" << i << endl;
	}

	delete[] _sn;

	_getch();
}