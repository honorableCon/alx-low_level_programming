#include <stdio.h>
#include <string.h>
/**
 * main - Print string in console
 *
 * Return: 0 to terminate program
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(msg, (sizeof(char) * strlen(msg)), 1, stderr);

	return (1);
}
