#include "main.h"
#include <stdio.h>

/**
 * there are two int *a , *b 
 * swap values of two
 */
void swap_int(int *a, int *b)
{
int x = *a;
*a = *b;
*b = x;
}
