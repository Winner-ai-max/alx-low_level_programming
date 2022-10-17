#include <stdio.h>
/**
 * main-entry point
 *
 * Return:0 if code runs without error
 */

int main(void)
{
	char g;

	for (g = 'a'; g <= 'z'; g++)
	{
		putchar (g);
	}
	putchar ('\n');
	return (0);
}
