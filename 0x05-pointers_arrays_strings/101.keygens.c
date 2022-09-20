#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define TARGET 0xad4
#define MAX 0x5A
#define MIN 0x40

/**
 * main - generate keygen
 *
 * Return: 0 always
 */
int main(void)
{
        int checksum = 0;

        srand(time(NULL));

        while ( checksum != TARGET )
        {
                char random_char = rand() % (MAX - MIN + 1) + MIN;

                if (random_char + checksum > TARGET)
                        continue;
                
		checksum += (int) random_char;
                printf("%c", random_char);
        }
	printf("%c", TARGET - checksum);

	return (0);
}
