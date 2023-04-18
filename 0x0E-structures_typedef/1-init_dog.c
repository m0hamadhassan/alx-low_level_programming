#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - init function
 *
 * @d: pointer to struct of type dog
 * @name: name of dog type string
 * @age: age of dog type int
 * @owner: owner of dog type string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
