#include <stdio.h>
#include "function_pointers.h"
void print_elem(int elem)
{
    printf("%d\n", elem);
}

int main(void)
{
    int array[] = {1, 2, 3, 4, 5};
    size_t size = sizeof(array) / sizeof(int);

    array_iterator(array, size, print_elem);

    return 0;
}
