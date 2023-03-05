#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *@s: value
 *_strpbrk - chan
 *@accept: value
 */

char *_strpbrk(char *s, char *accept)
{
	int cont = 0, i = 0;

	while (s[cont])
	{
		while (accept[i])
		{
			if (s[cont] == accept[i])
			{
				return (s + cont);
			}
			i++;
		}
		cont++;
	}
	return (s);
}
