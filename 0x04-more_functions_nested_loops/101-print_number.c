#include "main.h"
#include <stdio.h>
/**
*print_number - Prints an integer using only putchar
*@n: The integer to print
*/
void print_number(int n)
{
unsigned int num;
if (n < 0)
{
putchar('-');
num = -n;
}
else
{
num = n;
}
if (num / 10)
{
print_number(num / 10);
}
putchar((num % 10) + '0');
}
