#ifndef DOG_H
#define DOG_H

/**
 * struct dog - description of dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: Owner of the dog.
 *
 * Description: the description of dog's name, ages, and owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
