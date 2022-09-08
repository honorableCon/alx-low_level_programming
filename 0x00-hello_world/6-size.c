#include <stdio.h>
/**
 * main - Print the size of various type
 *
 * Return: 0 to terminate program
 */
int main(void)
{
	printf("Size of a %s: %ld byte(s)\n", "char", sizeof(char));
	printf("Size of an %s: %ld byte(s)\n", "int", sizeof(int));
	printf("Size of a %s: %ld byte(s)\n", "long int", sizeof(long));
	printf("Size of a %s: %ld byte(s)\n", "long long int", sizeof(long long int));
	printf("Size of a %s: %ld byte(s)\n", "float", sizeof(float));
	return (0);
}
