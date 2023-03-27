#ifndef LOLA
#define LOLA

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_c(char a);
void print_i(int a);
void print_f(float a);
void print_s(char *a);

#endif
