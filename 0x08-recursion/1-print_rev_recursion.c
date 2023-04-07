#include"main.h"
/**
 * _print_rev_recursion - print string reversed using recursion
 *
 * Description: function that prints a string, reversed followed by a new line
 *
 * @s: pointer to string
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
		_putchar(*(s - 1));
	}
}
