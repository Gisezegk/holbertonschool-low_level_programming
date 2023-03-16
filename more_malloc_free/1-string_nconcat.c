#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char
*string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *result;
	unsigned int len1, len2, len;

	if (s1 == NULL) {
	s1 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	len = len1 + n;
	result = malloc(sizeof(char) * (len + 1));

	if (result == NULL) {
	return (NULL);
	}

	strncpy(result, s1, len1);
	strncpy(result + len1, s2, n);
	result[len] = '\0';

	return (result);
}
