#include "main.h"
#include <stdio.h>
/**
 *reverse_array - reverse the content of an array of integers
 *Return: Always 0
 *@a: value
 *@n: value
 */

void reverse_array(int *a, int n)
{
	int at = 0, i;

	for (i = 0; i < n / 2; i++)
	{
		at = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = at;
	}
}
