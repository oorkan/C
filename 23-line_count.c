#include <stdio.h>

void main()
{
  int c;
  double numlines = 0;

  while ( (c = getchar()) != EOF ) {
  	if ( c == '\n' ) {
  		++numlines;
  	}
  }
  printf("Lines: %.0f\n", numlines);
}