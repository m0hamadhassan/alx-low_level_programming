#include "lists.h"
void _print_str(char *str);
/**
 * print_list - print list function
 * @h: pointer to struct of type list_t
 */
size_t print_list(const list_t *h)
{
	list_t *counter;
	counter = h;
	while (counter->next != NULL)
	{
		_print_str(counter->str);
		counter = counter->next;
	}
}
/**
 * _print_str - print str function
 * @str: string to be printed
 */
void _print_str(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(i++);
	}
}