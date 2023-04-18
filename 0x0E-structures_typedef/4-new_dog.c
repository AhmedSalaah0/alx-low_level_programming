#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - create a new dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog struct, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    char *nc, *oc;

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    nc = malloc(sizeof(char) * (strlen(name) + 1));
    if (nc == NULL)
    {
        free(new_dog);
        return (NULL);
    }
    strcpy(nc, name);

    oc = malloc(sizeof(char) * (strlen(owner) + 1));
    if (oc == NULL)
    {
        free(nc);
        free(new_dog);
        return (NULL);
    }
    strcpy(oc, owner);

    new_dog->name = nc;
    new_dog->age = age;
    new_dog->owner = oc;

    return (new_dog);
}
