#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: dog to init
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->age = age;
	d->name = name;
	d->owner = owner;
}
