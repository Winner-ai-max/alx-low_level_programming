#include "main.h"

/**
 * _isupper - checks if character is uppercase
 * @c: Variable test
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
