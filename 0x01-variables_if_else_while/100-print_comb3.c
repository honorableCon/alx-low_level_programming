#include <stdio.h>

/**
 * main - Print combinations of two-digits
 *
 * Return: 0 if success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = i + 1; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i == 8 && j == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
