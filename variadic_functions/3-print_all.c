#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>


void
print_all(const char * const format, ...)
{
	va_list args;
	va_start(args, format);
	int i = 0;
	char c;
	char s*;

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;

				case 'i':
				printf("%d", va_arg(args, int));
				separator = ", ";
				break;

				case 'f':

				printf("%f", (float)va_arg(args, double));
				break;

				case 's':

				s = va_arg(args, char *);
				if (s)
				{
					printf("%s", s);
				}
				else
				{
					printf("(nil)");
				}
				break;

				default:
				break;
		}
if (format[i + 1])
	printf(", ");
i++;

	}

	printf("\n");
	va_end(args);
}
