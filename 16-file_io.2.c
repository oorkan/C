#include <stdio.h>

// EOF is a special integer indicating the "End of file/input"
// EOF value can't be confused with any real character
// A more deeper look makes clear why int type is ised instead of 
// char type for the variable c
// Even if c returns only a single character, it must be big enough
// to hold EOF in addition to any possible char.

void main()
{
  int c;

  while ( ( c = getchar() ) != EOF ) {
    putchar(c);
  }
}