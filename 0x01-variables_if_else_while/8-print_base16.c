#include <stdio.h>
/**
 * main-entry point for code
 *
 * Return:0 if code runs without erro
 */
int main(void)
{
	int i;
	char hexvalues[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar (hexvalues[i]);
	}
	putchar ('\n');
	return (0);
}

