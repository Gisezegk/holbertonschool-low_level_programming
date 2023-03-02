#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 *_strcat - concatenates two strings.
 *Return: Always dest
 *@dest: value
 *@src: value
 */


char *_strcat(char *dest, char *src)
{
	char *q;
	char *p;

	for (q = dest; *q != '\0'; q++)
		;

	for (p = src; *p != '\0'; p++, q++)
		*q = *p
			;

	*q = '\0';

	return (dest);
}
