#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 **_strcpy - copies the string pointed to by src
 *
 */

char *_strcpy(char *dest, char *src)
{
{
int i = 0;
int O = 0;
	strcat(dest, src);
	printf("%s", dest);

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

return (0);
}

