#include <stdio.h>

/**
 * print_array - Write a function that prints
 * n elements of an array of integers, followed by a new line.
 * @a: array to print
 * @n: is the number of elements of the array to be printed
 */


void print_array(int *a, int n)
{
	n = (n <= 0 ? 0 : n);

	*(a + (n * sizeof(char))) = '\0';

	if (n == 0)
		printf("\n");

	while (*a)
	{
		printf("%d%s", *a, (*(a + 1) ? ", " : "\n"));
		a++;
	}

}
