#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first value
 * @b: pointer to second value
 */
void swap_int(int *a, int *b)
{
int x = *a;
*a = *b;
*b = x;
}
