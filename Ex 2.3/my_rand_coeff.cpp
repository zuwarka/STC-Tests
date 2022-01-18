#include "my_rand_coeff.h"
#include <iostream>

unsigned short seed = 1;

unsigned short my_rand_coeff()
{
	unsigned short a = 967, m = 14406, c = 3041; //константы, обеспечивающие максимальный период псевдослучайной последовательности

	seed = (seed * a + c) % m; //формула ЛКМ

	return seed;
}
