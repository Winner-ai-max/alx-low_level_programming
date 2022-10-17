#include <stdio.h>
/**
 * main- Entry point
 *
 * Return:0 if code runs without error
 */
int main(void)
{
	char c;
	char u;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar (c);
	}
	for (u = 'A'; u <= 'Z'; u++)
	{
		putchar (u);
	}
	putchar ('\n');
	return (0);
}
