#include"main.h"
/**
 *_isalpha - checks character if alphabet or not
 * Description: check character if alphabet or not
 * @c: input character
 * Return: 1 if character 0 if not
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c<= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
