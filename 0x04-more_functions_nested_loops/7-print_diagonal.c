#include"main.h"
/**
 * print_diagonal - print diagonal on terminal
 * Description: draws diagonal on terminal  terminated by \n
 * @n: number of times '\' should printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; i < n; j++)
			{
				if (i == j)
				_putchar('\\');
				else
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
