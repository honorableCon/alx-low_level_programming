#include <stdio.h>

/**
 * main - Print lowercase alphabet
 *
 * Return: 0 if success
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar('z' - i);
	}
	putchar('\n');
	return (0);
}
