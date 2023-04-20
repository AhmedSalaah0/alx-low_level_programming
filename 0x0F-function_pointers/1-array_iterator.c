#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - function prints
 *@array:normal array
 *@size:size of array
 *@action: pointer of function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
