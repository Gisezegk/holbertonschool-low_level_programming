#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap valuo of two integers.
 * @a : value of first variable.
 * @b : value of second variable.
 *
 */


void swap_int(int *a, int *b)


{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}


