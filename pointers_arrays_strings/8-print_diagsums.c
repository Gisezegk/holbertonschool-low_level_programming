#include "main.h"

/**
 *print_diagsums - prints the sum
 *@a: value
 *@size: value
 *Return: Always 0
 *
 */

void print_diagsums(int *a, int size)
{
	int i, n, suma1 = 0, suma2 = 0;
	for (i = 0; i <= (size * size); i = i + size + 1)
		suma1 = suma1 + a[i];

	for (n = size - 1; n <= (size * size) - size; n = n + size -1)
		suma2 = suma2 + a[n];
	printf("%d, %d\n", suma1, suma2);
}
