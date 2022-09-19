#include "main.h"

/**
 * _puts - Write a function that prints a string,
 * followed by a new line, to stdout.
 *
 * @str: sting to print
 */


void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
