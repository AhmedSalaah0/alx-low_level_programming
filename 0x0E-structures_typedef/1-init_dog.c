#include "dog.h"
#include <stdio.h>
/**
 * init_dog - struct intil. function
 * @d: pointer to struct
 * @name: varible of str.
 * @age: same
 * @owner:same
 * Return:retrn if NULL
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
