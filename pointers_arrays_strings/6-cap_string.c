#include <stdio.h>
#include "main.h"

/**
 *cap_string - capitalizes all words of a string
 *Return: Always 0
 *@n: value
 *
 */

char *cap_string(char *n)
{
	int i = 0;

	while (n[i])
	{
		while (!(n[i] > 'a' && n[i] < 'z'))
		{
			i++;
		}
		if
			(n[i - 1] == ' ' ||
				n[i - 1] == '\t' ||
				n[i - 1] == '\n' ||
				n[i - 1] == ',' ||
				n[i - 1] == ';' ||
				n[i - 1] == '.' ||
				n[i - 1] == '!' ||
				n[i - 1] == '?' ||
				n[i - 1] == '"' ||
				n[i - 1] == '(' ||
				n[i - 1] == ')' ||
				n[i - 1] == '}' ||
				n[i - 1] == '{' ||
				i == 0)
		{
				n[i] = n[i] - 32;
			}

			i++;
		}
	return (n);
}
