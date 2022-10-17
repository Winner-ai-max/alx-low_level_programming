#include <stdio.h>
/**
 * main- Entry point to program
 * Return:0 if cofe rurns without error
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			continue;
				putchar (c);
	putchar ('\n');
	}
	return (0);
}
