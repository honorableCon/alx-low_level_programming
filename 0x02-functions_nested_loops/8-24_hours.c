#include "main.h"

void jack_bauer(void)
{
	int i, j, k, l;

	for(i = 0; i <= 2; i++)
	{
		_putchar('0' + i);
		for(j = 0; j <= 3; j++)
		{
			_putchar('0' + j);
			_putchar(':');

			for(k = 0; k <= 5; k++)
			{
				_putchar('0' + k);

				for(l = 0; l <= 9; l++)
				{
					_putchar('0' + l);
					_putchar('\n');
				}
			}
		}
	}
}
