#include"main.h"
/**
 * print_sign - prints sign and return indicator
 * Description: print the sign and return 1 for +ve -1 for -ve and 0 for zero
 * @n: input number
 * Return: 1 for +ve -1 for -ve 0 for zero
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
