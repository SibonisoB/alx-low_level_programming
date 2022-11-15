#include "1-pi.h"
#include <stdio.h>

/**
 * main - chck the code
 *
 * Retunr: Always 0.
 */
int main(void)
{
	float a;
	float r;

	r = 98;
	a = PI * r * r;
	printf("%.3f\n", a);
	return (0);
}
