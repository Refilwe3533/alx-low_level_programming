#include "main.h"

/**
 * times_table - prints from 0 to 9 times table
 *
 * Return: Nothing
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');
			c = a * b;

			if (c > 9)
			       _putchar('0' + c / 10);
			else
				_putchar(' ');
			_putchar('0' + c % 10);
		}
		_putchar('\n');
	}
}	
