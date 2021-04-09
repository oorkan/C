#include <stdio.h>

void main()
{
  int c, numwords, is_inside_word;

  while ( (c = getchar()) != EOF ) {
    
    if ( c == ' ' || c == '\n' || c == '\t' ) {
      is_inside_word = 0;
    }
    else if ( is_inside_word == 0 ) {
      is_inside_word = 1;
      numwords++;
    }
  }

  printf("\nWords found: %d\n", numwords);
}