#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
	if (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
