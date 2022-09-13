#include <unistd.h>

/**
 * _islower - writes the character c to stdout
 * @c: The character to test
 *
 * Return: 1 If c is lowercase.
 * Otherwise, 0 is returned.
 */
int _islower(int c)
{
	return ((c >= (int)'a' && c <= (int)'a' + 26));
}
