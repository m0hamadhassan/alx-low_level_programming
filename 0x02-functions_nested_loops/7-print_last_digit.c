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
	_putchar((n % 10) + '0');
	return (n % 10);
}
