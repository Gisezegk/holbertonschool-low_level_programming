#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
int t;
if (argc > 0)
{
	for (t = 0; t < argc; t++)
	printf("%s\n", argv[t]);
}
return (0);
}
