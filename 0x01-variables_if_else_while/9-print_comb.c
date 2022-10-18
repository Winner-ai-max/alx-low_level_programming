#include <stdio.h>
/**
 * main-entry point for code
 *
 * Return:0 if code runs without error
 */
int main(void)
{
	int num; //our int will be called num

	for (num = '0'; num <= '9'; num++)
	{
		putchar (num);
		if (num == '9')
		{
			break;
		}
		else
		{
			putchar (',')
			putchar (' ');
		}
	}
	putchar ('\n')
	return (0);
