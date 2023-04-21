#include "function_pointers.h"

/**
 * print_name - print name function
 *
 * @name: pointer to string name
 * @f: pointer to function
 *
 * Description: function that prints a name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
