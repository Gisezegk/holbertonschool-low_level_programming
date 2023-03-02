#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strcpy - copies the string pointed to by src
 *@dest: value
 *@src: value
 *Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int O = 0;

	int a = strlen(src);

	for (i = 0; i <= a; i++)
	{
		dest[O] = src [i];
		O++;
	}
	if (i + 1 == O)
	{

		dest[O] = '\0';
	}
	return (dest);

}
