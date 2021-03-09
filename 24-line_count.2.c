#include <stdio.h>

void main()
{
  int c;
  double numlines;

  for ( numlines = 0; (c = getchar()) != EOF; ) {
  	if ( c == '\n' ) {
  		++numlines;
  	}
  }
  printf("Lines: %.0f\n", numlines);
}