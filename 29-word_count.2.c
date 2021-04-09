#include <stdio.h>

void main()
{
  int c, numwords, is_word;

  while ( (c = getchar()) != EOF ) {
    
    if ( c == ' ' || c == '\n' || c == '\t' ) {
      is_word = 0;
    }
    else if ( is_word == 0 ) {
      is_word = 1;
      numwords++;
    }
  }

  printf("\nWords found: %d\n", numwords);
}