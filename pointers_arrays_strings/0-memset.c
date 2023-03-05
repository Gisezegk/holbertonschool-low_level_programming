#include "main.h"
#include <stdio.h>

/**
 *_memset - fills memory with a constant byte
 *@s: value
 *@b: value
 *@n: value
 *Return: Always numb
 */

char *_memset(char *s, char b, unsigned int n)
{
	char* a = s;
	while (n--) {
		*a++ = b;
	}
	return (s);
}
