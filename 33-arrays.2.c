#include <stdio.h>

void main()
{
  // Array declaration by initializing elements
  int primes[10] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };

  int len = ( sizeof(primes) / sizeof(int) );
  int i;

  printf("\nThe list of primes to 30\n");
  printf("---------------------------\n\n");

  for ( i = 0; i < len; ++i ) {
    printf("%d\n", primes[i]);
  }

  printf("\n");
}