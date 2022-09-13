#include <unistd.h>

/**
 * _isalpha - writes the character c to stdout
 * @c: The character to test
 *
 * Return: 1 If c is alpha.
 * Otherwise, 0 is returned.
 */
int _isalpha(int c)
{
	return (
			(c >= (int)'a' && c <= (int)'a' + 26) ||
			(c >= (int)'A' && c <= (int)'A' + 26)
			);
}
