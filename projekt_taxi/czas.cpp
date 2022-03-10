#include <iostream>
#include "pch.h"
#include "czas.h"

czas::czas()
{
}

czas::czas(int godzina, int minuta)
{
	this->h = godzina;
	this->m = minuta;
}

void czas::zapisz(fstream &plik)
{
	plik << h << " " << m << endl;
}

ostream& operator <<(ostream& os, const czas& wyswietlany)
{
	if (wyswietlany.m < 10)
		os << wyswietlany.h << ":" << 0 << wyswietlany.m;
	else
		os << wyswietlany.h << ":" << wyswietlany.m;
	return os;
}

istream& operator >>(istream& is, czas& wczytywany)
{
	is >> wczytywany.h >> wczytywany.m;
	return is;
}

czas::~czas()
{

}