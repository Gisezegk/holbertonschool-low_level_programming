#include <stdio.h>

/**
* main - compiled
* Return: always 0
*/


int main(void)
{
    int comb;

    for (comb = 0; comb < 10; comb++)
    {
        putchar(comb + '0');
        if (comb < 9)
        {
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
    return (0);
}
