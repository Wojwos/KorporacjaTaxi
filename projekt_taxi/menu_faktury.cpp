#include <iostream>
#include "pch.h"
#include "projekt_taxi.h"

void menu_faktury(vector<klienci> &lista_klienci, vector<przejazdy> lista_przejazdy, vector<faktury> &lista_faktury)
{
	time_t czas_aktualny = time(NULL);
		for (int i=0;i< lista_klienci.size();i++)
		{
			while (czas_aktualny > lista_klienci[i].faktura_do)
			{
				lista_faktury.push_back(faktury(lista_przejazdy, lista_klienci[i], lista_faktury.size()));
				lista_klienci[i].faktura_od += 2592000;
				lista_klienci[i].faktura_do += 2592000;
			}
		}
	char znak;
	while (1)
	{
		system("cls");
		wyswietl_menu_faktury();
		znak = _getch();
		_getch();
		switch (znak)
		{
		case 49:
		{
			system("cls");
				for (faktury x : lista_faktury)
					x.wyswietl_fakture();
				cout << "Nacisnij dowolny klawisz aby kontynuowac" << endl;
				_getch();
				_getch();
				break;
		}
		case 50:
		{
			system("cls");
			int wybrany;
			cout << "Podaj ID klienta:" << endl;
			cin >> wybrany;
			system("cls");
			if (wybrany <= lista_klienci.size() && wybrany > 0)
			{
				for (faktury x : lista_faktury)
				{
					if (x.klient == lista_klienci[wybrany-1])
						x.wyswietl_fakture();
				}
			}
			cout << "Nacisnij dowolny klawisz aby kontynuowac" << endl;
			_getch();
			_getch();
			break;
		}
		case 51:
		{
			system("cls");
			int wybrana;
			cout << "Podaj numer faktury ktora chcesz rozliczyc:" << endl;
			cin >> wybrana;
			for (faktury x : lista_faktury)
			{
				if (x.sprawdz_nr(wybrana) == true)
					lista_faktury[wybrana - 1].rozliczona = 1;
			}
			cout << "Rozliczono" << endl;
			czekaj();
			break;
		}
		case 8:
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