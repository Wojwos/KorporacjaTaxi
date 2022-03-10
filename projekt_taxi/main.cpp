#include <iostream>
#include "pch.h"

int main()
{
	int long long tab[2];
	vector<taxi> lista_taxi;
	vector<klienci> lista_klienci;
	vector<przejazdy> lista_przejazdy;
	vector<faktury> lista_faktury;
	wczytaj(lista_taxi, lista_klienci, lista_przejazdy, lista_faktury);
	menu(lista_taxi, lista_klienci, lista_przejazdy, lista_faktury);
	zapisz(lista_taxi, lista_klienci, lista_przejazdy, lista_faktury);
	return 0;
}
