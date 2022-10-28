#include "main.h"

/**
 * reverse_array - reverses the element of an array
 * @a: array of numbers
 * @n: number of elements in an array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int *b = a;

	for (i = 0; i < n; i++)
	{
		if (i <= (n - i - 1))
		{
			b[i] = a[n - i - 1];
		}
	}
}
