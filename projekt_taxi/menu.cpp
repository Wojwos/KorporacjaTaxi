#include <iostream>
#include "pch.h"
#include "projekt_taxi.h"

void menu(vector<taxi> &lista_taxi, vector<klienci> &lista_klienci, vector<przejazdy> &lista_przejazdy,vector<faktury> &lista_faktury)
{
	char znak;
	while (1)
	{
		system("cls");
		wyswietl_menu();
		znak = _getch();
		_getch();
		switch (znak)
		{
		case 49:
		{
			dodaj_przejazd(lista_taxi, lista_klienci, lista_przejazdy);
			break;
		}
		case 50:
		{
			lista_taxi = zarzadzaj_taxi(lista_taxi);
			break;
		}
		case 51:
		{
			lista_klienci = zarzadzaj_klient(lista_klienci);
			break;
		}
		case 52:
		{
			system("cls");
			for (przejazdy x : lista_przejazdy)
				x.wyswietl_przejazd();
			cout << "Nacisnij dowolny klawisz aby kontynuowac" << endl;
			_getch();
			_getch();
			break;
		}
		case 53:
		{
			menu_faktury(lista_klienci, lista_przejazdy, lista_faktury);
			break;
		}
		case 27:
		{
			return;
			break;
		}
		default:
		{
			break;
		}
		}
	}
}