/**
 * _strlen - Write a function that returns the length of a string.
 *
 * @s: arg to count
 *
 * Return: string's length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
