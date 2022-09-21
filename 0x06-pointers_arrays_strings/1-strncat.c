#include <stdlib.h>

/**
 * _strncat - Concatenates two strings.
 *
 * @dest: destination
 * @src: source
 * @n: limit
 *
 * Return: concataned string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *copy = dest;
	int index = 1;

	while (*++copy)
		index++;

	while (n-- > 0 && *src)
		*(dest + index++) = *src++;

	return (dest);
}
