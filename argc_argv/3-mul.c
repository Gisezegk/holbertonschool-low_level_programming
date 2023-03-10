#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char **argv)
{
	int a, b;
	int mul = 0;

	if ((argc != 3))
	{
		printf("Error\n");
		return (0);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	mul = a * b;

	printf("%d\n", mul);
	return (0);
}
