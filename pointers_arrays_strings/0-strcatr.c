#include "main.h"
#include <stdio.h>

/**
 *
 *
 */


char *_strcat(char *dest, char *src)

{

	char s1;
	char s2;
	int i, len1, len2;

	len1 = strlen(s1);
	len2 = strlen(s2);

		for (i = 0; i <= len2; i++)
		{
	s1[len1 + i] = s2[i];
		}
		printf("%s", s1);
}
