#include <stdio.h>

void
print_name(char *name, void (*f)(char *))
{
	f(name);
}

void my_print_function(char *str)
{
	printf("The name is: %s\n", str);
}
