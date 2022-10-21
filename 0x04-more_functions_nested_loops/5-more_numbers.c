#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 * Return: 0
 */
void more_numbers(void)
{
	int a;
	int b;

	for (; b < 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}
