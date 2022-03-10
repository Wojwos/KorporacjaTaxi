#include <iostream>
#include "pch.h"
#include "projekt_taxi.h"

vector<taxi> zarzadzaj_taxi(vector<taxi> lista_taxi)
{
	char znak;
	while (1)
	{
		system("cls");
		wyswietl_menu_taxi();
		znak = _getch();
		_getch();
		switch (znak)
		{
		case 49:
		{
			system("cls");
			for (taxi x : lista_taxi)
				x.wyswietl_taxi();
			cout << "Nacisnij dowolny klawisz aby kontynuowac" << endl;
			_getch();
			_getch();
			break;
		}
		case 50:
		{
			lista_taxi = nowe_taxi(lista_taxi);
			break;
		}
		case 51:
		{
			lista_taxi=menu_usuwania_taxi(lista_taxi);
			break;
		}
		case 8:
		{
			return lista_taxi;
			break;
		}
		default:
		{
			break;
		}
		}
	}
}