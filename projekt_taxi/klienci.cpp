#include <iostream>
#include "pch.h"
#include "klienci.h"

klienci::klienci()
{
}

klienci::klienci(int x)
{
	system("cls");
	cout << "Podaj imie" << endl;
	cin >> imie;
	system("cls");
	cout << "Podaj nazwisko" << endl;
	cin >> nazwisko;
	id = x+1;
	faktura_od = time(NULL);
	faktura_do = faktura_od + 2592000;
}

void klienci::wyswietl_klientow()
{
	cout << "[" << id << "] " << imie << " " << nazwisko << " " << endl;
}

klienci::~klienci()
{
}

bool klienci::operator >(const klienci druga)
{
	if (this->id > druga.id)
		return true;
	else return false;
}

void klienci::zapisz_klient(fstream &plik)
{
	plik << imie << " " << nazwisko << " " << id << " " << faktura_od << endl;
}

klienci::klienci(fstream &plik)
{
	plik >> imie >> nazwisko >> id >> faktura_od;
	faktura_do = faktura_od + 2592000;
}

bool klienci::sprawdz_id(int sprawdzany)
{
	if (id == sprawdzany)
		return true;
	else
		return false;
}

bool klienci::operator ==(const klienci drugi)
{
	if (this->id == drugi.id &&  this->imie == drugi.imie && this->nazwisko == drugi.nazwisko)
		return true;
	else return false;
}