#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strspn - gets the length of a prefix substring
 *@s: value
 *@accept: value
 *Return: Always 0
 *
 */


unsigned int _strspn(char *s, char *accept)
{
	int cont = 0, i = 0, ch = 0;

	while (s[cont] != '\0')
	{
		while (accept[i] != '\0')
		{
		if (accept[i] == s[cont])
		{
			ch++;
		}
		i++;
		}
		cont++;
		}
	return (ch);
}

