#include<stdio.h>

int main(void)
{

char charType;
int intType;
float floatType;
long int longintType;
long long int longlongintType;

 
printf("Size of char: %zu byte\n", sizeof(char));
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of float: %zu bytes\n", sizeof(float));
printf("Size of long int: %zu bytes\n", sizeof(long));
printf("Size of long long int: %zu bytes\n", sizeof(longlongint));
 
return 0;
}
