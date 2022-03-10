#include <iostream>
#include "pch.h"
#include "projekt_taxi.h"

void zapisz(vector<taxi> lista_taxi, vector<klienci> lista_klienci, vector<przejazdy> lista_przejazdy, vector<faktury> lista_faktury)
{
	fstream plik1, plik2, plik3, plik4;
	plik1.open("taxi.dat", ios::out | ios::binary);
	if (plik1.good() == true)
	{
		for (taxi x : lista_taxi)
		{
			x.zapisz_taxi(plik1);
		}
	}
	plik1.close();
	plik2.open("klient.dat", ios::out | ios::binary);
	if (plik2.good() == true)
	{
		for (klienci x : lista_klienci)
		{
			x.zapisz_klient(plik2);
		}
	}
	plik2.close(); 
	plik3.open("przejazdy.dat", ios::out | ios::binary);
	if (plik3.good() == true)
	{
		for (przejazdy x : lista_przejazdy)
		{
			x.zapisz_przejazdy(plik3);
		}
	}
	plik3.close();
	plik4.open("faktury.dat", ios::out | ios::binary);
	if (plik4.good() == true)
	{
		for (faktury x : lista_faktury)
		{
			x.zapisz_faktury(plik4);
		}
	}
	plik4.close();
}