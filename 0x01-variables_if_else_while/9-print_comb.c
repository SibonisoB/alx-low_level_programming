#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Alwys retunr 0 (Success)
 */
int main(void)
{
	int n;
	int sp;
	int com;

	n = '0';
	com = ',';
	sp = ' ';

	while(n <= '9')
	{
		putchar(n);
		putchar(com);
		putchar(sp);
		n++;
	}
	putchar('\n');
	return (0);
}
