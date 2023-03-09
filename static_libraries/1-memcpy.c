#include "main.h"

/**
 *  * _memcpy - epico
 *   * @dest: var
 *    * @src: var
 *     * @n: tac
 *      * Return: always var
 *       *
 *        */


char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int pos;

			for (pos = 0; pos < n; pos++)
					{
								dest[pos] = src[pos];
									}
				return (dest);
}
