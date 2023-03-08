#include "main.h"
#include <stdio.h>
/**
 *_sqrt_recursion - nashe
 *@n: value
 *Return: Always tpm
 */

int _sqrt_recursion(int n)
{

	return (_sqrt_nashe(n, 1));
}
int
_sqrt_nashe(int you, int tube)
{
	int unit = tube * tube;

	if (unit > you)
	return (-1);

	if (unit == you)
		return (tube);

	return (_sqrt_nashe(you, tube + 1));
}
