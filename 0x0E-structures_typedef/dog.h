#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - struct for dog info
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 */
struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);
#endif
