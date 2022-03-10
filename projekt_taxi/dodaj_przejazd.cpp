#include <iostream>
#include "pch.h"
#include "projekt_taxi.h"

void dodaj_przejazd(vector<taxi> &lista_taxi, vector<klienci> &lista_klienci, vector<przejazdy> &lista_przejazdy)
{
	int nr_taxi, id_klient, dlugosc_trasy;
	nr_taxi = dodaj_przejazd_taxi(lista_taxi);
	id_klient = dodaj_przejazd_klient(lista_klienci);
	system("cls");
	cout << "Podaj dlugosc trasy:" << endl;
	cin >> dlugosc_trasy;
	lista_przejazdy.push_back(przejazdy(dlugosc_trasy, lista_taxi[nr_taxi], lista_klienci[id_klient]));
}