#include "main.h"

/**
 * print_last_digit - writes the character c to stdout
 * @n: The character to test
 *
 * Return: last digit of n.
 */
int print_last_digit(int n)
{
	int last_digit = ((n < 0) ? (n + 10) * -1 : n) % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
