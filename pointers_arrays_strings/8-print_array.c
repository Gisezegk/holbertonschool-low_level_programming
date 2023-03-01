#include "main.h"
#include <string.h>

/**
 *print_array - print n elements of AN ARRAY OF INTEGRERS
 *Return: Always 0
 *@a: value
 *@n: value
 */

void print_array(int *a, int n)

{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);

	if (i < n - 1)
	{
	putchar (','), putchar (' ');
	}
	}
putchar ('\n');
}

