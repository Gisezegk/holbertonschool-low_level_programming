#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - compiled
 * Return: always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("n is positive 0\n");
	}

	else if (n == 0)
	{
		printf("n is zero 0\n");
	}

	else(n > 0)
	{
		printf("n is negative 0\n");
	}


return (0);
}
