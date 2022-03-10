#include <iostream>
#include "pch.h"
#include "faktury.h"


faktury::faktury(vector<przejazdy> lista_przejazdy, klienci wybrany_klient, int nr_poprzedniej_faktury)
{
	liczba_przejazdy = 0;
	cena = 0;
	data = time(NULL);
	rozliczona = 0;
	nr = 1 + nr_poprzedniej_faktury;
	for (przejazdy x : lista_przejazdy)
	{
		if (x.sprawdz_klient(wybrany_klient) == true)
		{
			liczba_przejazdy++;
			cena += x.cena;
		}
	}
	klient = wybrany_klient;
}

faktury::~faktury()
{
}


void faktury::zapisz_faktury(fstream &plik)
{
	plik << data << " " << cena << " " << liczba_przejazdy << " " << nr << " " << rozliczona << endl;
	klient.zapisz_klient(plik);
}

faktury::faktury(fstream &plik)
{
	plik >> data >> cena >> liczba_przejazdy >> nr >> rozliczona;

	klient = klienci(plik);
}

bool faktury::sprawdz_nr(int wybrany)
{
	if (nr == wybrany)
		return true;
	else return false;
}

void faktury::wyswietl_fakture()
{
	cout << "FAKTURA NR " << nr << endl;
	cout << "KLIENT: ";
	klient.wyswietl_klientow();
	cout << "LICZBA PRZEJAZDOW: " << liczba_przejazdy << endl;
	cout << "CENA: " << cena << endl;
	cout << "Rozliczna: ";
	if (rozliczona == 1)
		cout << "TAK" << endl;
	else
		cout << "NIE" << endl;
	cout << "--------------------------" << endl;
}