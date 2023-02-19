#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - compiled
* Return: always 0
*/

void print_alphabet(void);
int main(void)

{

	char alph = 'a';

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar (alph);
}
putchar ('\n');

return (0);
}

