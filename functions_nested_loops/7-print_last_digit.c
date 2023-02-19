#include "main.h"

/**
 *  print_last_digit - prints the last digit of a number
 *  @n: The number to be treated
 *  Return: Value of the last diigt of number
 */

int print_last_digit(int n)
{
	int ult;

	ult = n % 10;
	if (ult < 0)
	{
		ult = ult * -1;
	}
	_putchar(ult + '0');
	return (ult);
}
