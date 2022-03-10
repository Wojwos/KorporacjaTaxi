#ifndef KLIENCI_H
#define KLIENCI_H

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
#include "pch.h"

using namespace std;

class klienci
{
	int id;
	string imie, nazwisko;
public:
	time_t faktura_od = 0;
	time_t faktura_do = 0; //2592000 - 30dni

	klienci();
	klienci(int x);
	klienci(fstream &plik);
	~klienci();
	bool operator >(const klienci druga);
	bool sprawdz_id(int sprawdzany);
	void wyswietl_klientow();
	void zapisz_klient(fstream &plik);
	bool operator ==(const klienci drugi);
};

#endif