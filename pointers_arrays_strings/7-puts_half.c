#include "main.h"
#include <string.h>
/**
 * puts_half - prints the half of the string
 *@str: value
 *
 */

void puts_half(char *str)
{

		int middle = strlen(str) / 2;
	str = str + middle;

	while (*str != '\0')
	{


		if (*str != '\0')
		{
			putchar (*str);
			str++;
		}

	}
	putchar ('\n');
}



