#include"main.h"
/**
 * _strlen_recursion - returns the length of a string
 *
 * Description: function that returns the length of a string
 *
 * @s: pointer to string
 *
 * Return: the lenght of string (int)
 *
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return(1 + _strlen_recursion(++s));
	}
	else
		return (0);
}
