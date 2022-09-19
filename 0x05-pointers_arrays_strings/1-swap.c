/**
 * swap_int - Write a function that swaps the values of two integers.
 *
 * @a: first argument
 * @b: second argument
 */


void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
