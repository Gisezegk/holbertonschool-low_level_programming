#ifndef MAINPF
#define MAINPF

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*printf function prototype*/

int _printf(const char *format, ...);

/*prototype of auxiliary functions*/

int _putchar(char c);



/**
 * struct get_formats - contains the formats
 * @f_s: format specifier
 * @f: pointer to formatting functions
 *
 */

typedef struct get_formats
{
		char f_s;
			int (*f)(va_list args);
} get_t;

/*format prototypes*/

int print_char(va_list args);

int print_string(va_list args);

int print_inter(va_list args);

int print_binary(va_list args);

int print_unsigned(va_list args);

int print_octa(va_list args);

int print_hexa(va_list args);

int print_HEXA(va_list args);

int print_rev(va_list args);

int print_address(va_list args);

int print_rot13ed(va_list args);

int Non_printable_char(va_list args);

int print_base64(va_list agrs);

int print_module(__attribute__ ((unused)) va_list);
#endif
