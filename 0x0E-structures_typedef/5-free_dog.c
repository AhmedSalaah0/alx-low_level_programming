#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - free struct
 *@d:will free 
 */
void free_dog(dog_t *d)
{
while (d)
{
free(d);
}
}
