#include <stdio.h>

/**
 * main - Print lowercase, and then uppercase alphabet
 *
 * Return: 0 if success
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		if ('a' + i == 'q' || 'a' + i == 'e')
			continue;
		putchar('a' + i);
	}

	putchar('\n');
	return (0);
}
