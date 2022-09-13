#include "main.h"


void print_alphabet_x10(void)
{
	int i;

	for(i = 0; i < 10; i++)
	{
		int j;

		for(j = 0; i < 26; j++)
		{
			_putchar('a' + j);
		}
		_putchar('\n');
	}
}
