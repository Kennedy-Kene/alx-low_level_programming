#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
		int i = 63;
		int count = 0;

		if (n == 0)
		{
		_putchar('0');
		return;
		}

		do {
		unsigned long int current = n >> i;

		if (current & 1)
		{
		_putchar('1');
		count++;
		}
		else if (count)
		{
		_putchar('0');
		}

		i--;
		} while (i >= 0);

		if (!count)
		_putchar('0');
}
