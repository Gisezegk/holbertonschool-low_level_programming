#include <stdlib.h>
#include <stdio.h>

int
main(int foo, char *bar[])
{
	if (foo--)
	{
		printf("%s\n", *bar++);
	}
		return (0);
}
