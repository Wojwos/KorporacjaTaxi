#include <iostream>
#include "pch.h"
#include "projekt_taxi.h"

vector<klienci> nowy_klient(vector<klienci> lista_klienci)
{
	int i = 1;
	for (klienci x : lista_klienci)
	{
		if (x.sprawdz_id(i) == false)
		{
			lista_klienci.push_back(i - 1);
			break;
		}
		i++;
	}
	if (lista_klienci.size() == i - 1)
		lista_klienci.push_back(i - 1);
	return sortuj_klient(lista_klienci);
}