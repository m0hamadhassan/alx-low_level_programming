#include "main.h"
/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	int destCounter, i;

	destCounter = 0;
	while (dest[destCounter] != '\0')
	{
		destCounter++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[destCounter] = src[i];
		destCounter++;
	}
	return (dest);
}
