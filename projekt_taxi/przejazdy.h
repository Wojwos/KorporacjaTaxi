#ifndef PRZEJAZDY_H
#define PRZEJAZDY_H

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "pch.h"
#include "taxi.h"
#include "klienci.h"

using namespace std;

class przejazdy
{
	int dlugosc;
	taxi taxi_przejazdu;
	klienci klient_przejazdu;
	time_t data;
public:
	int cena;
	przejazdy(int dlugosc_trasy_km, taxi taxi_przejazdu, klienci klient_przejazdu);
	void zapisz_przejazdy(fstream &plik);
	przejazdy(fstream &plik);
	void wyswietl_przejazd();
	bool sprawdz_klient(klienci sprawdzany);
	~przejazdy();
};

#endif