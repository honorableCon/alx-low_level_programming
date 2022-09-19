#include "main.h"

/**
 * print_rev - Write a function that prints a string,
 * in reverse, followed by a new line.
 *
 * @s: string to print
 */

void print_rev(char *s)
{
	int length = 0;
	char *strcopied = s;

	while (*strcopied++)
		length++;

	while (length >= 0)
	{
		strcopied = s + length;
		_putchar(*strcopied);
		length--;
	}
	_putchar('\n');
}
