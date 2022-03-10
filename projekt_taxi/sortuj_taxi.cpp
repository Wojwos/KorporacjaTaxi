#include <iostream>
#include "pch.h"
#include "projekt_taxi.h"

vector<taxi> sortuj_taxi(vector<taxi> lista_taxi)
{
	if (lista_taxi.size() < 2)
		return lista_taxi;
	int petla;
	petla = lista_taxi.size();
	for (int i = 0; i < petla; i++)
	{
		for (int j = i+1; j < petla; j++)
		{
			if (lista_taxi[i] > lista_taxi[j])
				swap(lista_taxi[i], lista_taxi[j]);
		}
	}
	return lista_taxi;
}