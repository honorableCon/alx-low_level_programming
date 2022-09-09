#include <stdio.h>

/**
 * main - Print combinations from 0 to 9
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i == 9)
			break;
		putchar(',');
		putchar(0x20);
	}
	putchar('\n');
	return (0);
}
