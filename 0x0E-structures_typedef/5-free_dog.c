#include "stdlib.h"
#include "dog.h"
/**
 *free_dog - Frees a dog from memory
 *@d: Dog
 *Return: void
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->age);
free(d->owner);
}
