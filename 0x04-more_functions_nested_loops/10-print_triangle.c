#include"main.h"
/**
 * print_triangle - print triangle on terminal
 * Description: draws triangle
 * @size: size of triangle base and height
 */
void print_triangle(int size)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j >= n - i - 1)
					_putchar('#');
				else
					_putchar(' ');
			}
		}
	}
}
