#include "main.h"
#include <stdio.h>
/**
 *_puts_recursion - gg
 *@s: value
 *
 *
 *
 */

void _puts_recursion(char *s)
{
		if (*s == '\0')
		{
			_putchar('\n');
			return;
		}
			_puts_recursion(s + 1);
			_putchar(*s);
}
