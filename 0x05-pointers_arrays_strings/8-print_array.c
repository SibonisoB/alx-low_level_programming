#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array
 * @a: array
 * @n: number of elements in the array
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", *(a + i));
		if (i <= n - 2)
		{
			printf(", ");
		}
	}
	printf("\n");
}
