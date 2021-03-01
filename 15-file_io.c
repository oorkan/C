#include <stdio.h>

// Text input or output, regardless of where it originates or where it goes to,
// is dealt with as streams of characters. A text stream is a sequence of
// characters divided into lines; each line consists of zero or more characters
// followed by a new-line character.
// The standard library provides several functions for reading or writing 
// one character at a time, of which getchar() and putchar() are the 
// simplest.
// c = getchar(); putchar(c);
// Each time it's called, getchar reads the next input character from a
// text stream and returns that as its value.
// putchar prints a character each time it's called.
// putchar(c) prints the contents of the integer variable c as a character.

void main()
{
  int c = getchar();
  putchar(c);
}