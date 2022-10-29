#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the values of two integers
 * @a: integer one
 * @b: integer two
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int *n1, *n2;

	n1 = a;
	n2 = b;
	*a = *n2;
	*b = *n1;
}
