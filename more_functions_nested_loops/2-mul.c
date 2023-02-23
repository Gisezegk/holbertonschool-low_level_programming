#include"main.h"
#include <stdio.h>
/**
 * mul - multiplies two integers.
 *@a: variable for numer
 *@b: variable for number
 * Return: Always 0.
 */

int mul(int a, int b)
{
int multiply;
printf("a - ");
scanf("%d",&a);
printf("b - ");
scanf("%d",&b);
multiply = a * b;
printf("The multiplication of numbers %d and %d is %d",a , b, multiply);
return (0);
}
