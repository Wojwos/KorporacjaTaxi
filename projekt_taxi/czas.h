#ifndef CZAS_H
#define CZAS_H

#include <iostream>
#include <fstream>
#include "pch.h"

using namespace std;

class czas
{
	int h, m;
public:
	czas();
	czas(int godzina, int minuta);
	void zapisz(fstream &plik);
	friend ostream& operator <<(ostream& os, const czas& wyswietlany);
	friend istream& operator >>(istream& is, czas& wczytywany);
	~czas();
};

#endif