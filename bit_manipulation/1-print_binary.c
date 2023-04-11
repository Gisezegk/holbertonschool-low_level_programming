#include "main.h"

void
print_binary(unsigned long int n)
{
	int ls = sizeof(unsigned long int) * 8 - 1;
	int pr = 0;

	while (ls >= 0)
	{
		if ((n >> ls) & 1)
		{
			putchar('1');
			pr = 1;
		}
		else if (pr)
		{
			putchar('0');
		}
	ls--;
	}
	if (!pr)
	{
		putchar('0');
	}
}
