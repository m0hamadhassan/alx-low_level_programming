#include "function_pointers.h"
/**
 * print_name - print name function
 * @name: pointer to string name
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
