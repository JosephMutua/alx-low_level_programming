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
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * struct dog_t - description of dog
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: Owner of the dog.
 *
 * Description: the description of dog's name, age, and owner
 */
struct dog_t
{
	char *name;
	float age;
	char *owner;
};
#endif
