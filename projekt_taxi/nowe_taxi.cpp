#include <iostream>
#include "pch.h"
#include "projekt_taxi.h"

vector<taxi> nowe_taxi(vector<taxi> lista_taxi)
{
	int i = 1;
	for (taxi x : lista_taxi)
	{
		if (x.sprawdz_numer(i) == false)
		{
			lista_taxi.push_back(i - 1);
			break;
		}
		i++;
	}
	if (lista_taxi.size() == i - 1)
		lista_taxi.push_back(i - 1);
	return sortuj_taxi(lista_taxi);
}