#include "main.h"

/**
 * set_bit - assigns the value of a bit to 1.
 * to the given index.
 * @n: string containing the long int.
 * @index: string containing the bit.
 *
 * Return: 1 if working, -1 if not working.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;
	*n = (*n | a);

	return (1);
}
