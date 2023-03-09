#include"main.h"
#include<stdio.h>

/**
 * * _abs - is positive or no.
 * * @n: variable for number
 * * Return: 0
 * */

int print_last_digit(int n)
{
		n = n % 10;

			if ( n >= 0 )
					{
								_putchar(n + '0');
										return (n);
												}

						else 
								{
											n = n * -1;
														_putchar(n + '0');
													return(n);

														}
							
							
}

