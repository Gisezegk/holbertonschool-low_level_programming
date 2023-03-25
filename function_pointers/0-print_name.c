#include <stdio.h>

void
print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
	f(name);
	}
}

void
my_print_function(char *str)
{
	printf("The name is: %s\n", str);
}
