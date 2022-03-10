#include <iostream>
#include "pch.h"
#include "projekt_taxi.h"

int dodaj_przejazd_taxi(vector<taxi> &lista_taxi)
{
	char znak;
	int zliczane=0;
	int nr_taxi;
	while (1)
	{
		system("cls");
		wyswietl_menu_dodaj_przejazd_taxi();
		znak = _getch();
		_getch();
		switch (znak)
		{
		case 49:
		{
			system("cls");
			cout << "Podaj numer taxi:" << endl;
			cin >> nr_taxi;
			for (taxi x : lista_taxi)
			{
				if (x.sprawdz_numer(nr_taxi) == true)
					return zliczane;
				zliczane++;
			}
			cout << "Taxi nr " << nr_taxi << " nie istnieje!" << endl;
			czekaj();
			zliczane = 0;
			break;
		}
		case 50:
		{
			system("cls");
			for (taxi x : lista_taxi)
				x.wyswietl_taxi();
			cout << "Nacisnij dowolny klawisz aby kontynuowac" << endl;
			_getch();
			_getch();
			break;
		}
		case 51:
		{
			lista_taxi = nowe_taxi(lista_taxi);
			break;
		}
		default:
		{
			break;
		}
		}
	}
}