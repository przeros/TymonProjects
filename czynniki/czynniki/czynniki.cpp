#include<iostream>

using namespace std;

int main() {
	int liczba, dzielnik, counter;
	cin >> liczba;
	counter = 0;
	dzielnik = 2;
	while (true) {
		if (liczba % dzielnik == 0) {
			liczba = liczba / dzielnik;
			counter += 1;
		}
		else {
			if (liczba == 1) {
				cout << dzielnik << "^" << counter;
				break;
			}
			if (counter != 0)
				cout << dzielnik << "^" << counter << " * ";
			dzielnik += 1;
			counter = 0;
		}
	}

	return 0;
}
