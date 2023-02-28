#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strlen - length of a string.
* Return: Always 0
* @s: value
*
*/

int _strlen(char *s)
{
	int a = 0;
while (*s++)
{
	a++;
}
return (a);
}

