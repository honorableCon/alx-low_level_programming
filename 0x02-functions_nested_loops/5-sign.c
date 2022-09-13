#include "main.h"

/**
 * print_sign - writes the character c to stdout
 * @n: The character to test
 *
 * Return: 1 If c is alpha.
 * Otherwise, 0 is returned.
 * Or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
