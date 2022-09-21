#include <stdlib.h>

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: destination
 * @src: source
 *
 * Return: concataned string
 */

char *_strcat(char *dest, char *src)
{
	char *copy = dest;
	int index = 1;

	while (*++copy)
		index++;

	while (*src)
		*(dest + index++) = *src++;

	return (dest);
}
