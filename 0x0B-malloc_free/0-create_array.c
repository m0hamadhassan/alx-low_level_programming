#include"main.h"
/**
 * create_array - create array function
 *
 * Description: function that creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size of array
 * @c: character to fill array with
 *
 * Return: pointer to array
 *
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *arrPointer = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		arrPointer[i] = c;
	}
	return (arrPointer);
}
