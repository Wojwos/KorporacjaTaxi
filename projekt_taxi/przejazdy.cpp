#include <iostream>
#include "pch.h"
#include "przejazdy.h"

using namespace std;

przejazdy::przejazdy(int dlugosc_trasy_km, taxi dodane_taxi, klienci dodany_klient)
{
	dlugosc = dlugosc_trasy_km;
	cena = 4 + dlugosc * 2;
	taxi_przejazdu = dodane_taxi;
	klient_przejazdu = dodany_klient;
	data = time(NULL);
}

void przejazdy::wyswietl_przejazd()
{
	cout << "Data: ";
	char t[26];
	ctime_s(t, sizeof(t), &data);
	cout << t;
	cout << "Taxi: ";
	taxi_przejazdu.wyswietl_taxi();
	cout << "Klient: ";
	klient_przejazdu.wyswietl_klientow();
	cout << "DLugosc: " << dlugosc << " Km" << " Cena: " << cena << endl;
	cout << "--------------------------" << endl;
}

przejazdy::~przejazdy()
{
}

void przejazdy::zapisz_przejazdy(fstream &plik)
{
	plik << dlugosc << " " << cena << " " << data << endl;
	taxi_przejazdu.zapisz_taxi(plik);
	klient_przejazdu.zapisz_klient(plik);
}

przejazdy::przejazdy(fstream &plik)
{
	plik >> dlugosc >> cena >> data;
	taxi_przejazdu=taxi(plik);
	klient_przejazdu=klienci(plik);
}

bool przejazdy::sprawdz_klient(klienci sprawdzany)
{
	if (klient_przejazdu == sprawdzany && data >= sprawdzany.faktura_od  && data < sprawdzany.faktura_do)
		return true;
	else
		return false;
}