#include <iostream>
#include "pch.h"
#include "projekt_taxi.h"

vector<taxi> menu_usuwania_taxi(vector<taxi> lista_taxi)
{
	char znak;
	int zliczane = 0;
	int nr_usun;
	while (1)
	{
		cout << "Czy na pewno chcesz usunac taksowke?" << endl;
		cout << "1.Tak" << endl;
		cout << "2.Nie" << endl; 
		znak = _getch();
		_getch();
		switch (znak)
		{
		case 49:
		{
			system("cls");
			cout << "Podaj numer taksowki ktora chcesz usunac:" << endl;
			cin >> nr_usun;
			for (taxi x : lista_taxi)
			{
				if (x.sprawdz_numer(nr_usun) == true)
				{
					lista_taxi.erase(lista_taxi.begin()+zliczane);
					return lista_taxi;
				}
				zliczane++;
			}
			system("cls");
			cout << "Taxi nr " << nr_usun << " nie istnieje!" << endl;
			cout << "Nacisnij dowolny klawisz aby kontynuowac" << endl;
			_getch();
			_getch();
			zliczane = 0;
			break;
		}
		case 50:
		{
			return lista_taxi;
		}
		default:
		{
			break;
		}
		}
	}
}