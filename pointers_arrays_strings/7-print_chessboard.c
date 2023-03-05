#include "main.h"
#include <stdio.h>

/**
 *print_chessboard - print chessboard
 *@a: value
 *Return: Always 0
 */

void print_chessboard(char (*a)[8])
{
	int jas, rod;

	for (jas = 0; jas < 8; jas++)
	{
		for (rod = 0; rod < 8; rod++)
			_putchar(a[jas][rod]);
		_putchar('\n');
	}
}
