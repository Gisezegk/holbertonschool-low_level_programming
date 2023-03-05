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
	int g, n;

	for (g = 0; s[g] != '\0'; g++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[g] == accept[n])
				return (s + g);
		}
	}
	return (NULL);
}
