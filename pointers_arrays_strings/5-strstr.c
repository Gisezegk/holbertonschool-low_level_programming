#include <stdio.h>
#include "main.h"

/**
 *_strstr - locates a substring
 *@haystack: value
 *@needle: value
 *Return: Always NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *f = haystack;
		char *y = needle;

		while (*f == *y && *y != '\0')
		{
			f++;
			y++;
		}
		if (*y == '\0')
			return (haystack);
	}
	return (NULL);
}
