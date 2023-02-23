#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* print_most_numbers - prints numbers.
* Return: always 0
*/

void print_most_numbers(void)
{
	int ch = 0;

	for (ch = '0'; ch <= '9'; ch++)
	
	if (ch != '2' && ch != '4')
	_putchar(ch);
	
	_putchar('\n');
}
