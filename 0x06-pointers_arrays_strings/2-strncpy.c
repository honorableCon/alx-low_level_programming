#include <stdlib.h>

/**
 * _strncpy - Copy a string.
 *
 * @dest: destination
 * @src: source
 * @n: limit
 *
 * Return: concataned string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *copy = dest;

	while (n > 0 && *src)
	{
		*copy++ = *src++;
		n--;
	}
	copy = '\0';

	return (dest);
}
