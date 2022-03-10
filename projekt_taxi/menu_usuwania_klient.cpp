#include <iostream>
#include "pch.h"
#include "projekt_taxi.h"

vector<klienci> menu_usuwania_klient(vector<klienci> lista_klienci)
{
	char znak;
	int zliczane = 0;
	int id_usun;
	while (1)
	{
		cout << "Czy na pewno chcesz usunac klienta?" << endl;
		cout << "1.Tak" << endl;
		cout << "2.Nie" << endl;
		znak = _getch();
		_getch();
		switch (znak)
		{
		case 49:
		{
			system("cls");
			cout << "Podaj ID klienta ktorego chcesz usnac:" << endl;
			cin >> id_usun;
			for (klienci x : lista_klienci)
			{
				if (x.sprawdz_id(id_usun) == true)
				{
					lista_klienci.erase(lista_klienci.begin()+zliczane);
					return lista_klienci;
				}
				zliczane++;
			}
			system("cls");
			cout << "Nie ma klienta z takim ID!" << endl;
			cout << "Nacisnij dowolny klawisz aby kontynuowac" << endl;
			_getch();
			_getch();
			zliczane = 0;
			break;
		}
		case 50:
		{
			return lista_klienci;
		}
		default:
		{
			break;
		}
		}
	}
}