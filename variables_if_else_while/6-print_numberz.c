#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - compiled
* Return: always 0
*/

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	if (i < '9')

		putchar(i + '0');

	}

	putchar('\n');

	return (0);

}

