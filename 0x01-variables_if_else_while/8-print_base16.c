#include <stdio.h>

/**
 * main - Print ten first hexadecimal numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 0x0; i < 0xA; i++)
		putchar('0' + i);
	for (i = 0; i < 6; i++)
		putchar('a' + i);
	putchar('\n');

	return (0);
}
