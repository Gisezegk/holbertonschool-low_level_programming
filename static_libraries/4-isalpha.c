#include"main.h"

/**
 * * _isalpha - is alpha or no.
 * * @c: variable for ch
 * * Return: 0
 * */

int _isalpha(int c)
{
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
				{
							return (1);
								}
			else
					{
								return (0);
									}
}
