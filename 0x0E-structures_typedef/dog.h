#ifndef DOG_H
#define DOG_H

/**
 * struct dog - description of dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: Owner of the dog.
 *
 * Description: The struct will contain the description of dog in terms of its name, ages, and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
