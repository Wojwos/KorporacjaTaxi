#include <iostream>
#include "pch.h"
#include "projekt_taxi.h"

void wczytaj(vector<taxi> &lista_taxi, vector<klienci> &lista_klienci, vector<przejazdy> &lista_przejazdy, vector<faktury> &lista_faktury)
{
	fstream plik1, plik2, plik3, plik4;
	plik1.open("taxi.dat", ios::in | ios::binary);
	if (plik1.good() == true)
	{
		while (plik1)
		{
			lista_taxi.push_back(taxi(plik1));
		}
			lista_taxi.pop_back();
	}
	plik1.close();
	plik2.open("klient.dat", ios::in | ios::binary);
	if (plik2.good() == true)
	{
		while (plik2)
		{
			lista_klienci.push_back(klienci(plik2));
		}
		lista_klienci.pop_back();
	}
	plik2.close();
	plik3.open("przejazdy.dat", ios::in | ios::binary);
	if (plik3.good() == true)
	{
		while (plik3)
		{
			lista_przejazdy.push_back(przejazdy(plik3));
		}
		lista_przejazdy.pop_back();
	}
	plik3.close();
	plik4.open("faktury.dat", ios::in | ios::binary);
	if (plik4.good() == true)
	{
		while (plik4)
		{
			lista_faktury.push_back(faktury(plik4));
		}
		lista_faktury.pop_back();
	}
	plik4.close();
}