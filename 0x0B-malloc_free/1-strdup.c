#include "main.h"
#include <stdlib.h>

/**
 * _strdup - create an array of chars,
 *
 * @str: the string to copy
 *
 * Return: NULL if size egal zero
 */

char *_strdup(char *str)
{
	char *array;
	char *strcopy = str;
	unsigned int i = 0;
	unsigned int size = 0;

	if (str == NULL)
		return (NULL);

	while (*str++)
		size++;

	array = malloc(sizeof(char) * size + 1);

	if (array == NULL)
		return (NULL);

	while (i < size)
	{
		*(array + i) = *(strcopy + i);
		i++;
	}

	return (array);

}
