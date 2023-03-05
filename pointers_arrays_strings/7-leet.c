#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *leet - encodes a sting
 *@str: value
 *Return: Always str
 *
 */


char *leet(char *str)
{

	int u;
	int h;

	int g[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int n[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (u = 0; str[u] != '\0'; u++)
	{
		for (h = 0; g[h] != '\0'; h++)
	{
			if (str[u] == g[h])
			{
				str[u] = n[h];
			}
		}
	}
return (str);
}
