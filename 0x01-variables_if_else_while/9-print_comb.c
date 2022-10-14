#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int n;
	int i;
	int j;

	n = '0';
	i = '0';
	j = '0';

	while (n <= '9')
	{
		j = n*i;
		putchar(j);
		n++;
	}
	return (0);
}
