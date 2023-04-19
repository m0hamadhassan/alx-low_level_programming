#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - array iterator function
 *
 * @array: pointer to array
 * @size: struct of typpe size_t
 * @action: is a pointer to the function you need to use
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
