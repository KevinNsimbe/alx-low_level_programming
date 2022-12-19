#include "main.h"
/**
 * swap_int - swap two pointers
 * @a : first in
 * @b: second int
 * Return 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
