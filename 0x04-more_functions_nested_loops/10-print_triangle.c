#include"main.h"
/**
 * print_triangle - print triangle on terminal
 * Description: draws triangle
 * @size: size of triangle base and height
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j >= size - i + 1)
					_putchar('#');
				else
					_putchar(' ');
			}
		}
	}
}
