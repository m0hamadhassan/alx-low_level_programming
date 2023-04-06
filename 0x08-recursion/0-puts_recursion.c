#include"main.h"
/**
 * _puts_recursion - print string using recursion
 *
 * Description: function that prints a string, followed by a new line
 *
 * @s: pointer to string
 *
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_putchar('\n');
		s++;
	}
}
