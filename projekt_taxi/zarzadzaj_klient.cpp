#include <iostream>
#include "pch.h"
#include "projekt_taxi.h"

vector<klienci> zarzadzaj_klient(vector<klienci> lista_klienci)
{
	char znak;
	while (1)
	{
		system("cls");
		wyswietl_menu_klient();
		znak = _getch();
		_getch();
		switch (znak)
		{
		case 49:
		{
			system("cls");
			for (klienci x : lista_klienci)
				x.wyswietl_klientow();
			cout << "Nacisnij dowolny klawisz aby kontynuowac" << endl;
			_getch();
			_getch();
			break;
		}
		case 50:
		{
			lista_klienci = nowy_klient(lista_klienci);
			break;
		}
		case 51:
		{
			lista_klienci=menu_usuwania_klient(lista_klienci);
			break;
		}
		case 8:
		{
			return lista_klienci;
			break;
		}
		default:
		{
			break;
		}
		}
	}
}