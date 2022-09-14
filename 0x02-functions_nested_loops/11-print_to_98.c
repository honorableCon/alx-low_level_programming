#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - writes the character c to stdout
 * @n: The character to test
 *
 */
void print_to_98(int n)
{
	int i = n;

	if (n < 98)
		for (; i < 98; i++)
			printf("%d, ", i);
	else
		for (; i > 98; i--)
			printf("%d, ", i);
	printf("98\n");
}
