#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_memcpy - copies memory area
 *@dest: value
 *@src: value
 *@n: value
 *Return: Always dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
