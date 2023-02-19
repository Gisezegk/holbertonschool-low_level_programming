#include"main.h"
#include<stdio.h>

/**
* _abs - is positive or no.
* @n: variable for number
* Return: Absolute value of number or 0
*/

int _abs(int c)
{
	
	if (c < 0)
	{
		int n;

		n = c * -1;
		return (n);
	}
	return (c);
}
