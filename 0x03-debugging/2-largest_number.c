#include "main.h"

/**
 * largest_number - print the largest of 3 integer numbers
 *
 * Return: 0 success
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if ((a > b) && (b > c))
	{
		largest = a;
	}
	else if ((b > a) && (a > c))
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
