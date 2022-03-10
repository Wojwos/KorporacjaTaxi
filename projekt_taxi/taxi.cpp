#include <iostream>
#include "pch.h"
#include "taxi.h"

using namespace std;

taxi::taxi()
{
}

taxi::taxi(int x)
{
	int godzina, minuta;
	system("cls");
	cout << "Podaj imie" << endl;
	cin >> imie;
	system("cls");
	cout << "Podaj nazwisko" << endl;
	cin >> nazwisko;
	numer = x+1;
	cout << "Ustal godzine rozpoczecia pracy:" << endl;
	cout << "Podaj godzine:" << endl;
	cin >> godzina;
	cout << "Podaj minute:" << endl;
	cin >> minuta;
	czas start_nowy(godzina, minuta);
	start = start_nowy;
	cout << "Ustal godzine zakonczenia pracy" << endl;
	cout << "Podaj godzine:" << endl;
	cin >> godzina;
	cout << "Podaj minute:" << endl;
	cin >> minuta;
	czas koniec_nowy(godzina, minuta);
	koniec = koniec_nowy;
}

void taxi::wyswietl_taxi()
{
	cout << "[" << numer << "] " << imie << " " << nazwisko << " Pracuje: " << start << "-" << koniec << endl;
}

taxi::~taxi()
{

}

bool taxi::operator >(taxi druga)
{
	if (this->numer > druga.numer)
		return true;
	else return false;
}

void taxi::zapisz_taxi(fstream &plik)
{
	plik << imie << " " << nazwisko << " " << numer << " ";
	start.zapisz(plik);
	koniec.zapisz(plik);
}

taxi::taxi(fstream &plik)
{
	plik >> imie >> nazwisko >> numer >> start >> koniec;
}

bool taxi::sprawdz_numer(int sprawdzany)
{
	if (this->numer == sprawdzany)
		return true;
	else
		return false;
}