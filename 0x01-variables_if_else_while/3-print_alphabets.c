#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *Return: Always return 0 (Success)
 */
int main(void)
{
	int alphABET;

	int putchar(int alphABET);

	alphABET = 'a';

	while (alphABET <= 'z')
	{
		putchar(alphABET);
		alphABET++;
	}
	alphABET = 'A';
	while (alphABET <= 'Z')
	{
		putchar(alphABET);
		alphABET++;
	}
	return (0);
}
