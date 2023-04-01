#include"main.h"
/**
 * print_line - print line function
 * Description: draws straight line in terminal terminated by \n
 * @n: number of '_'
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
