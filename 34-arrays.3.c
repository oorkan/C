#include <stdio.h>

void main()
{
  /* 
    The previous example can work without pointing the array size explicitly.
    Compiler will automatically create an array of size 10 for us, in this case.
  */
  int primes[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };

  int len = ( sizeof(primes) / sizeof(int) );
  int i;

  printf("\nThe list of primes to 30\n");
  printf("---------------------------\n\n");

  for ( i = 0; i < len; ++i ) {
    printf("%d\n", primes[i]);
  }

  printf("\n");
}