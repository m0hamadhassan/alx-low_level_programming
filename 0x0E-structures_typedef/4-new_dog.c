#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - new dog function
 * @name: dog name type string
 * @age: dog age type float
 * @owner: dog owner type string
 * Description: function that creates a new dog.
 * Return: pointer to struct dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	else
	{
		i = 0;
		while (name[i] != '\0')
		{
			dog->name[i] = name[i];
		}
		dog->age = age;
		i = 0;
		while (name[i] != '\0')
		{
			dog->owner[i] = owner[i];
		}

		return (dog);
	}
}
