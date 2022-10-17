#include <stdio.h>
/**
 * main-entry point to code
 *
 * Return:0 if code prints without error
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar (c);
	putchar ('\n');
	return (0);
}
