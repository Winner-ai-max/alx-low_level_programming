#include <stdio.h>
/**
 * main-entry point
 *
 * Return:0 if code runs without error
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
		putchar (c);
	putchar ('\n');
	return (0);
}
