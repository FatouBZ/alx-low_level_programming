#include <stdio.h>
/**
*swap_int - Swaps the values of two integers.
*@a: Swap the first integer
*@b: swap the second integer
*
*Return: nothing
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
