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

	int num, digit;

	printf("5:");

	scanf("%d", &num);

	digit = num % 10;
	printf("Last digit: %d", digit);

	return (0);
}
