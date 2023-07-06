#include "main.h"

/**
 * clear_bit - Put 0 as the bit value.
 * for the given index.
 * @n: un long int for the value.
 * @index: bit indexx.
 *
 * Return: 1 if its working, -1 if it not workin.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;

	if (*n & a)
		*n ^= a;

	return (1);
}
