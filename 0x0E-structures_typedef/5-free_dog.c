#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free dog function
 * @d: pointer to struct type dog_t
 * Description: function that frees dogs
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
