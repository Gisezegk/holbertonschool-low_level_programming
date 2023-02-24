#include "main.h"
#include <stdio.h>

/**
* print_triangle - patric
* @size: size
* Return: Always 0
*/

void print_triangle(int size)
{
        int c;
	int f;

        if (size > 0)
        {
        for (c = 0; c < size; c++)
        {
                for (f = 0; f < size; f++)
		{
		if (f < size - c - 1)
			{

		_putchar(' ');
			}

		else
			{
				_putchar(35);
				
			}
		}
		_putchar('\n');
	}
	}
		else {
			_putchar(10);
	}
}
