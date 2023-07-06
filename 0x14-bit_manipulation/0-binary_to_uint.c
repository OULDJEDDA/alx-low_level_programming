#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: A pointer to a string of 0 and 1 characters.
 *
 * characters in the string b that is not 0 or 1, or if b is NULL.
 * Return: The converted unsigned integer, or 0 if there is one or more
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int legnth, second;

	if (!b)
		return (0);

	result = 0;

	for (legnth = 0; b[legnth] != '\0'; legnth++)
		;

	for (legnth--, second = 1; legnth >= 0; legnth--, second *= 2)
	{
		if (b[legnth] != '0' && b[legnth] != '1')
		{
			return (0);
		}

		if (b[legnth] & 1)
		{
			result += second;
		}
	}

	return (result);
}
