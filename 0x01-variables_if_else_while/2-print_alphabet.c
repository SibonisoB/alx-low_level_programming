#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always return 0 (Success)
 */
int main(void)
{
	unsigned int alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	return (0);
}
