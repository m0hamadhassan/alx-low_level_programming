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
	int i, nameCount = 0, ownerCount = 0;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	else
	{

		while (name[i] != '\0')
		{
			nameCount++;
		}

		while (owner[i] != '\0')
		{
			ownerCount++;
		}
		dog->name = malloc((nameCount + 1) * sizeof(char));
		dog->owner = malloc((ownerCount + 1) * sizeof(char));
		if (dog->name != NULL && dog->owner != NULL)
		{
			i = 0;
			while (name[i] != '\0')
			{
				dog->name[i] = name[i];
				i++;
			}
			dog->name[nameCount] = '\0';
			i = 0;
			while (owner[i] != '\0')
			{
				dog->owner[i] = owner[i];
				i++;
			}
			dog->owner[ownerCount] = '\0';
		}
		dog->age = age;
		return (dog);
	}
}
