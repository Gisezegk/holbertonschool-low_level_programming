#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point. Calls the funtion to perform the operation selected
 *by the user.
 *
 *@argv: The number of argumnets passed to the program
 *@argc: An array of pointers to the strings which are the arguments.
 *
 *Return: Always 0.
 */


int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' && argv[1][0] == '0') ||
				(argv[2][0] == '/' && argv[3][0] == '0') ||
				(argv[2][0] == '%' && argv[3][0] == '0') ||
				(argv[2][0] == '%' && argv[1][0] == '0'))

	{
	printf("Error\n");
	exit(99);
	}
	op_func = get_op_func(argv[2]);

	result = op_func(num1, num2);
	printf("%d\n", result);
	return (0);
}
