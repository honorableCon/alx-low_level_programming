#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars,
 * and initializes it with a specific char
 *
 * @size: the size of array
 * @c: the character
 *
 * Return: NULL if size egal zero
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size < 1)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	while (i < size)
		*(array + i++) = c;

	return (array);

}
