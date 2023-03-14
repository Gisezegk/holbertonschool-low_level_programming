#include "main.h"
#include <string.h>

char
*str_concat(char *s1, char *s2)
{
	char *content;
	size_t len1;
	size_t len2;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	content = malloc(len1 + len2 + 1);

	if (content == NULL)
	{
		return (NULL);
	}

	memcpy(content, s1, len1);
	memcpy(content + len1, s2, len2);
	content[len1 + len2] = '\0';
	return (content);
}
