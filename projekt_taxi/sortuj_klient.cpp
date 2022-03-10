#include <iostream>
#include "pch.h"
#include "projekt_taxi.h"

vector<klienci> sortuj_klient(vector<klienci> lista_klienci)
{
	if(lista_klienci.size()<2)
		return lista_klienci;
	int petla;
	petla = lista_klienci.size();
	for (int i = 0; i < petla; i++)
	{
		for (int j = i+1; j < petla; j++)
		{
			if (lista_klienci[i] > lista_klienci[j])
				swap(lista_klienci[i], lista_klienci[j]);
		}
	}
	return lista_klienci;
}