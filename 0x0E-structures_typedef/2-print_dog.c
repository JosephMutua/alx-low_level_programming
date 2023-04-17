#include "dog.h"
#include <stdio.h>

/**
 * print_dog - this prints the dog's name, age, and owner
 * @d: the pointer to the dog structure.
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
