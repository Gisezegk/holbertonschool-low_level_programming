#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - compiled
* Return: always 0
*/

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	if ('a' != 'e' && 'a' != 'q')
	{
		putchar(ch);
	}
	return (0);
}
