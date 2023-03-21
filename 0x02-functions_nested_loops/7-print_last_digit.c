#include"main.h"
/**
 * print_last_digit - return the last digit in number
 * Description: returns the last digit in numebr
 * @n: input number
 * Return: las digit in number
 *
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		num = (-1 * n) % 10;
	}
	else
	{
		num = n % 10;
	}
	_putchar(num + '0');
	return (num);
}
