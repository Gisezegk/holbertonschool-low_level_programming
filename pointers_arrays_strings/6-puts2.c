#include "main.h"

/**
 * puts2 - every oyher character of a string
 *@str: value
 */

void puts2(char *str)
{
	while (*str != '\0')
	{

		if (*str != '\0')
		{
			putchar (*str);
			str++;
			str++;
		}
		if (*str == '\0')
		{
			break;
		}
		}

	}

