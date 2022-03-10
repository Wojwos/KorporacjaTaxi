#ifndef TAXI_H
#define TAXI_H

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <string>
#include "pch.h"
#include "czas.h"

using namespace std;

class taxi
{
	int numer;
	string imie, nazwisko;
	czas start, koniec;
public:

	taxi();
	taxi(int x);
	taxi(fstream &plik);
	~taxi(); 
	bool operator >(taxi druga);
	bool sprawdz_numer(int sprawdzany);
	void wyswietl_taxi();
	void zapisz_taxi(fstream &plik);
};

#endif