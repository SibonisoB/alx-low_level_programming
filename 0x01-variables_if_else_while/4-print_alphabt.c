#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int alph;

	alph = 'a';

	while (alph <= 'z')
	{
		if (alph != 'q' && alph != 'e')
			putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
