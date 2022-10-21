#include "main.h"

/**
 * print_line - print a straight line using '_'
 * @n: The new number of '_' to be printed
 * Return: 0
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
}
