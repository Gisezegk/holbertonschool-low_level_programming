#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *_strcmp - compares two strings
 *Return: Always 0
 *@s1: value
 *@s2: value
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, g;

	while(s1[i] != '\0' && s2[i] != '\0')
	{
	if(s1[i] == s2[i])
	{
		g = 0;
	}

	else if(s1[i] > s2[i])
	{
		g = 15;
	}
	else if (s1[i] < s2[i])
	{
		g = -15;
	}
	i++;
}
		return (g);
}
