#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string character containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int ui = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		ui = 2 * ui + (b[a] - '0');
	}
	return (ui);
}
