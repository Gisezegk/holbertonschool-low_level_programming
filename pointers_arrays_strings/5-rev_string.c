#include <string.h>
#include "main.h"
#include <stdio.h>
/**
* rev_string - print a string reverse
* Return: Always 0
* @s: value
*/

void rev_string(char *s)
{
	int length = strlen(s);
	int middle = length / 2;
	char temp;
	int i;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}

