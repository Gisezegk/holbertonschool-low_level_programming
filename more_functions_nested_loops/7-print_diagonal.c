#include "main.h"
/**
* print_diagonal - prints the alphabet.
*
* @n: variable
*/

void print_diagonal(int n)
{
	int c, f = 0;

	if (n > 0)
	{
	for (c = 0; c < n; c++)
	{
		for (f = 0; f < c; f++)
		{
		_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
