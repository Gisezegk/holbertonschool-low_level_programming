#include "main.h"

unsigned int
_strspn(char *s, char *accept)
{
	int cont = 0, pos = 0, character = 0;

	while (s[cont] != '\0')
	{
		while (accept[pos] != '\0')
		{
		if (accept[pos] == s[cont])
		{
			character++;
		}
		pos++;
		}
		cont++;
		}
	return (character);
}
