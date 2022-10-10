#ifndef _DOG_
#define _DOG_

/**
 * struct dog - to define dog
 * @name: the name of the dog
 * @age: dog age
 * @owner: the dog owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);void print_dog(struct dog *d);

#endif
