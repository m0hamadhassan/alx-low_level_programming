#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print dog function
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
