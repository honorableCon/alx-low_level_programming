#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define TARGET 2772
#define MAX 90
#define MIN 64

int main(void)
{
  int checksum = 0;

  srand( time( 0 ) );

  while ( TARGET - MAX >  checksum )
  {
    char random_char = rand() % (MAX - MIN + 1) + MIN;
    if (TARGET - (checksum + random_char) < MIN)
      continue;
    checksum += (int) random_char;
    printf("%c", random_char);
  }
  printf("%c", TARGET - checksum);

  return (0);
}
