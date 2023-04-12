#include"main.h"
/**
 * _strdup - duplicate string function
 *
 * Description: function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 *
 * @str: pointer to string
 *
 * Return: pointer to duplicate string
 *
 */
char *_strdup(char *str)
{
	int i, count = 1;
	char *strNew;

	while (str[count] != '\0')
	count++;
	strNew = (char *)malloc(count * sizeof(char));
	for (i = 0; i < count; i++)
	{
		strNew[i] = str[i];
	}
	strNew[count] = '\0';
	if (str == NULL || strNew == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < count; i++)
		{
			strNew[i] = str[i];
		}
		strNew[count] = '\0';
		return (strNew);
	}
}
