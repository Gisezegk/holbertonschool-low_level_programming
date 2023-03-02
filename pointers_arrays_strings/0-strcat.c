#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 *
 *
 */


char *_strcat(char *dest, char *src)
{
	int i = 0;
	int O = 0;

	while(src[i] != '\0')
	{
		i++;
	}
	for (O = 0; O <= i; O++)
	{
		dest[O] = src[O];
	}
	if (O == i + 1)
	{
		dest[O] = '\0';
	}
	return (dest);
}
