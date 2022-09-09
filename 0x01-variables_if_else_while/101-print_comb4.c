#include <stdio.h>

/**
 * main - Print combinations of three-digits
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
			int z;

			for (z = j + 1; z < 10; z++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + z);
				if ((i == 7 && j == 8) && z == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
