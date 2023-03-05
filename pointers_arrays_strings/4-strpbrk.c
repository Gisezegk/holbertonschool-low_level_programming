#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *_strpbrk - serches a string for amy of a set of bytes
 *@accept: value
 *@s: value
 *Return: Always null
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
