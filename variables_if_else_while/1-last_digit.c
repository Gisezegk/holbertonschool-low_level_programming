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
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;


	if (n > 5)

	{
	printf("Last digit of %d is %d\ and is greater than 5", n, digit);
	}

	else if (n == 0)
	{

		printf("Last digit of %d is %d and is 0", n, digit);
	}

	else if (n < 6 && n != 0)
	{

		printf("Last digit of %d is %d and is 0", n, digit);
	}
	return (0);
}
