#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <conio.h>
#include <cstdlib>
#include "pch.h"
#include "przejazdy.h"
#include "klienci.h"
#include "faktury.h"
#include "taxi.h"

using namespace std;

void menu_faktury(vector<klienci> &lista_klienci, vector<przejazdy> lista_przejazdy, vector<faktury> &lista_faktury);
void wyswietl_menu_faktury();
vector<klienci> zarzadzaj_klient(vector<klienci> lista_klienci);
vector<taxi> zarzadzaj_taxi(vector<taxi> lista_taxi);
void wyswietl_menu_klient();
void wyswietl_menu_taxi();
vector<klienci> menu_usuwania_klient(vector<klienci> lista_klienci);
vector<taxi> menu_usuwania_taxi(vector<taxi> lista_taxi);
int dodaj_przejazd_taxi(vector<taxi> &lista_taxi);
void wyswietl_menu_dodaj_przejazd_taxi();
int dodaj_przejazd_klient(vector<klienci> &lista_klienci);
void wyswietl_menu_dodaj_przejazd_klient();
void dodaj_przejazd(vector<taxi> &lista_taxi, vector<klienci> &lista_klienci, vector<przejazdy> &lista_przejazdy);
vector<klienci> nowy_klient(vector<klienci> lista_klienci);
vector<taxi> nowe_taxi(vector<taxi> lista_taxi);
vector<klienci> sortuj_klient(vector<klienci> lista_klienci);
vector<taxi> sortuj_taxi(vector<taxi> lista_taxi);
void wyswietl_menu();
void menu(vector<taxi> &lista_taxi, vector<klienci> &lista_klienci, vector<przejazdy> &lista_przejazdy, vector<faktury> &lista_faktury);
void czekaj();
void wczytaj(vector<taxi> &lista_taxi, vector<klienci> &lista_klienci, vector<przejazdy> &lista_przejazdy, vector<faktury> &lista_faktury);
void zapisz(vector<taxi> lista_taxi, vector<klienci> lista_klienci, vector<przejazdy> lista_przejazdy, vector<faktury> lista_faktury);
int main();