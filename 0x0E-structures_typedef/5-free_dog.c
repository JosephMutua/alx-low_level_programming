#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory space allocated.
 * @d: the memory location to free.
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
