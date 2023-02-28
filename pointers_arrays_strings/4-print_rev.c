#include <string.h>
#include "main.h"
#include <stdio.h>
/**
* print_rev - print a string reverse
* Return: Always 0
* @s: value
*/

void print_rev(char *s)
{
	int a = 0;

	while (*s++)
	{
		a--;
	}
	s--;
	while (a != 1)
	{
		if (*s != '\0')
		{
			_putchar (*s);
		}
	s--;
	a++;
	}
	_putchar ('\n');
}
