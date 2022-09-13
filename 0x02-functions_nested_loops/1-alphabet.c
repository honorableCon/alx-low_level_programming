#include "main.h"

/**
 * print_alphabet - writes the alphabets to stdout
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar('a' + i);
	}
	_putchar('\n');
}
