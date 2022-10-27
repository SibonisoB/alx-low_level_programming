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

	for (i = 0; i >= 0 && a[i] != '\0'; i++)
	{
		a[n - i] = a[i];
	}
}
