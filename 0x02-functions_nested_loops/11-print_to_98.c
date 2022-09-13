#include "main.h"

/**
 * print_to_98 - writes the character c to stdout
 * @n: The character to test
 *
 */
void print_to_98(int n)
{
	int i = n;

	for(; i < 98; i++)
	{
		_putchar('0' + i);
		_putchar(',');
		_putchar(' ');
	}

	_putchar('0' + 12);
	_putchar('\n');
}
