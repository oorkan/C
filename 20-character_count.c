#include <stdio.h>

void main()
{
  int c;
  long numchars;

  numchars = 0;
  while ( ( c = getchar() ) != EOF ) {
    // omit new line chars
    if (c != '\n') {
      ++numchars;
    }
  }
  printf("%ld\n", numchars);
}