#include "main.h"


unsigned
int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff = n ^ m;

	while (diff)
	{
		count++;
		diff &= (diff - 1);
	}
	return (count);
}
