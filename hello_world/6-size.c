#include<stdio.h>

/**
 * main - compiled
 * Return: always 0
 */

int main(void)
{

char charType;
int intType;
long int longintType;
long long int longlongintType;
float floatType;

printf("Size of char: %zu byte\n", sizeof(char));
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of long int: %zu bytes\n", sizeof(long int));
printf("Size of long long int: %zu bytes\n", sizeof(long long int));
printf("Size of float: %zu bytes\n", sizeof(float));
return (0);
}
