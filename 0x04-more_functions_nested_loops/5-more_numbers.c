#include"main.h"
/**
 * more_numbers - print more numbers function
 * Description: prints numbers from 0 to 14 10 times
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar('1');
			}
			_putchar((i % 10) + 48);
		}
	}
	_putchar('\n');
}
