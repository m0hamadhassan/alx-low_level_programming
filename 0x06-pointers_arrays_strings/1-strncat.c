#include "main.h"
/**
 * _strncat - function that concatenates
 *          two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 * @n: at most value of src
 * Return: pointer to resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int destCounter, i;

    destCounter = 0;
    while (dest[destCounter] != '\0')
    {
        destCounter++;
    }
    for (i = 0; i < n; i++)
    {
        dest[destCounter] = src[i];
        destCounter++;
    }
    return (dest);
}
