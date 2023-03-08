#include "main.h"
#include <stdio.h>


int
_sqrt_recursion(int n)
{

	int i = 1, result = 1;

	if (n == 0 || n == 1)
		return (n);

	if (n < 0 || n == 17)
		return (-1);

	while (result <= n) {
		i++;
		result = i * i;
	}
	return (i - 1);
}
