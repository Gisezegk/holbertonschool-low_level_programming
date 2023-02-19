#include"main.h"

/**
* print_sign - is positive or no.
* @n: variable for number
* Return: 0
*/

int print_sign(int n)
{

	int mas = '+';
	int menos = '-';

	if (n >= 1)
	{
		_putchar(mas);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(menos);
	return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

