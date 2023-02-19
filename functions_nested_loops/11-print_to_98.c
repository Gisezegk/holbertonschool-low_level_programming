#include"main.h"
#include<stdio.h>

/**
* print_to_98 - is positive or no.
* @n: number
* Return: 0
*/

void print_to_98(int n)
{
	int h = n;

	if (n <= 98)
	{
		while (h < 98)
			printf("%d, ", h++);
		printf("%d\n", h);
	}
	else if (n > 98)
	{
		while (h > 98)
			printf("%d, ", h--);
		printf("%d\n", h);
	}

}
