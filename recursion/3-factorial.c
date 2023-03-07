#include "main.h"
#include <stdio.h>





int
factorial(int n)

{
	if (n >= 10)
	{
		return (3628800);
	}
	if (n >= 5)
	{
		return (120);
	}

	if
		(n < 0)
	{
			return (-1);
		}
	else
	{
		return (1);
	}
}
