#include "main.h"
#include <stdio.h>

/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *Return: Always 0
 *@str: value
 */

char *string_toupper(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] = (int)str[j] - 32;
		}
		j++;
	}
	return (str);
}
