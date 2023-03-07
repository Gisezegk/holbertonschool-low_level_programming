#include "main.h"
#include <stdio.h>


int
_sqrt_recursion(int n)
{

 if (n == 0)
        return (1);
        else if (n < 0)
        {
                return (-1);
        }
        return (_sqrt_recursion(n + 1));

