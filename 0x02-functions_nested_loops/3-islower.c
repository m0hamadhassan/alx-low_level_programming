#include"main.h"
/**
 * _islower - check whether character is lower case or not
 * Description: check if character is lower case or not
 * @c: character
 * Return: 1 if lowercase and 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
