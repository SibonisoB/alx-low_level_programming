#include "main.h"

/**
 * reset_to_98 - updates value of a pointer to 98
 * @n: pointer
 *
 * Return: nothinh
 */
void reset_to_98(int *n)
{
	int *p;

	p = n;
	*p = 98;
}
