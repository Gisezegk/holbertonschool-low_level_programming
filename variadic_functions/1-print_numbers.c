#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i;

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg_list, int));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
			}
	}
va_end(arg_list);
printf("\n");
}
