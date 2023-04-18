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

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}