#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 63;
	int count = 0;
	unsigned long int exclusive = n ^ m;

	if (exclusive == 0)
	return (0);

	do	 {
	unsigned long int current = exclusive >> i;

	if (current & 1)
	count++;

	i--;
	} while (i >= 0);

	return (count);
}
