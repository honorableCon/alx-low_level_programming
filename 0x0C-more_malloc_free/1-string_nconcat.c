#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: base string
 * @s2: string to add
 * @n: number of s2 bytes to add
 *
 * Return: NULL if fails,
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0;
	unsigned int size_s1 = 0;

	if (s2 == NULL)
		return (s1);

	str = malloc(sizeof(s1) + sizeof(char) * n);

	while (*s1)
	{
		*(str + size_s1) = *s1++;
		size_s1++;
	}

	while (*s2 != '\0' && n > i)
	{
		*(str + i + size_s1) = *(s2 + i);
		i++;
	}

	return (str);

}
