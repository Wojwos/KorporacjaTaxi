#ifndef FAKTURY_H
#define FAKTURY_H

#include <iostream>
#include <vector>
#include <fstream>
#include <ctime>
#include "przejazdy.h"
#include "klienci.h"
#include "pch.h"

using namespace std;

class faktury
{
	time_t data = 0;
	int cena, liczba_przejazdy, nr;
public:
	klienci klient;
	bool rozliczona;
	faktury(vector<przejazdy> lista_przejazdy, klienci klient, int nr_poprzedniej_faktury);
	void zapisz_faktury(fstream &plik);
	faktury(fstream &plik); 
	void wyswietl_fakture();
	bool sprawdz_nr(int wybrany);
	~faktury();
};

#endif