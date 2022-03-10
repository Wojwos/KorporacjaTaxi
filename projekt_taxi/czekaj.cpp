#include <iostream>
#include "pch.h"
#include "projekt_taxi.h"

void czekaj()
{
	clock_t a;
	a = clock() + 2 * CLOCKS_PER_SEC;
	while (clock() < a) {}
}