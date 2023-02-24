#include <stdio.h>

/**
* main - 0 to 100
* Return: Always 0
*/

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
	if (x % 3 == 0 && x % 5 == 0)
	{
		printf("FizzBuzz ");
	}
	else if (x % 3 == 0)
	{
		printf("Fizz ");
	}
	else if (x % 5 == 0 && x != 100)
	{
		printf("Buzz ");
	}
	else if (x == 100)
	{
		printf("Buzz");
	}
	else
	{
		printf("%d ", x);
	}
	}
putchar('\n');
	return (0);
}
