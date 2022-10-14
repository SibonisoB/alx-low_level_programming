#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int alph;

	alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar('\n');
	return (0);

}
