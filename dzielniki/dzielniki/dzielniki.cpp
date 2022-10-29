#include<iostream>

using namespace std;

int* wyznaczDzielniki(int liczba)
{
    int* dzielniki = new int[liczba];
    int licznik = 0;
    for (int i = 0; i < liczba; i++) {
        dzielniki[i] = 0;
    }

    for (int i = 1; i <= liczba; i++) {
        if (liczba % i == 0) {
            dzielniki[licznik] = i;
            licznik++;
        }
    }

    return dzielniki;
}

void wypiszSume(int* dzielniki)
{
    int suma = 0;
    for (int i = 0; dzielniki[i] != 0; i++)
    {
        suma += dzielniki[i];
        if (i == 0)
        {
            cout << dzielniki[i];
        }
        else
        {
            cout << "+" << dzielniki[i];
        }
    }
    cout << "=" << suma;
}

int main() {
    int suma = 0;
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    wypiszSume(wyznaczDzielniki(liczba));

    return 0;
}
