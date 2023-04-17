#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - finds the length of a string
 * @s: the string being used to find the length
 *
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * new_dog - copy and stores name and owner.
 * @name: name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 *
 * Return: the pointer to the dog_t.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *ne_dog = NULL;
	int name_len, owner_len, i;

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	ne_dog = malloc(sizeof(struct dog));
	if (ne_dog == NULL)
	{
		free(ne_dog);
		return (NULL);
	}
	ne_dog->name = malloc(name_len + 1);
	if (ne_dog->name == NULL)
	{
		free(ne_dog->name);
		free(ne_dog);
		return (NULL);
	}
	ne_dog->owner = malloc(owner_len + 1);
	if (ne_dog == NULL)
	{
		free(ne_dog->owner);
		free(ne_dog->name);
		free(ne_dog);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++)
		ne_dog->name[i] = name[i];
	for (i = 0; i <= owner_len; i++)
		ne_dog->owner[i] = owner[i];
	ne_dog->age = age;
	return (ne_dog);
}
