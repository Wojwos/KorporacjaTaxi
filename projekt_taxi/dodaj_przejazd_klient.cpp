#include <iostream>
#include "pch.h"
#include "projekt_taxi.h"

int dodaj_przejazd_klient(vector<klienci> &lista_klienci)
{
	char znak;
	int zliczane=0;
	int id_klienta;
	while (1)
	{
		system("cls");
		wyswietl_menu_dodaj_przejazd_klient();
		znak = _getch();
		_getch();
		switch (znak)
		{
		case 49:
		{
			system("cls");
			cout << "Podaj ID klienta:" << endl;
			cin >> id_klienta;
			for (klienci x : lista_klienci)
			{
				if (x.sprawdz_id(id_klienta) == true)
					return zliczane;
				zliczane++;
			}
			cout << "Nie ma klienta z takim ID!" << endl; 
			czekaj();
			zliczane = 0;
			break;
		}
		case 50:
		{
			system("cls");
			for (klienci x : lista_klienci)
				x.wyswietl_klientow();
			cout << "Nacisnij dowolny klawisz aby kontynuowac" << endl;
			_getch();
			_getch();
			break;
		}
		case 51:
		{
			lista_klienci = nowy_klient(lista_klienci);
			break;
		}
		default:
		{
			break;
		}
		}
	}
}