#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int n;
	int alph;

	n = '0';
	alph = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (alph <= 'f')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);

}
