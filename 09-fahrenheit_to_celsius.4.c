#include <stdio.h>

// The printf conversion specification %3.0f says that
// a floating-point number (here fahr) is to be printed
// at least three characters wide, with no decimal point and 
// no fraction digits.
// %6.1f describes another number (celsius) that is to be 
// printed at least six characters wide, with one digit after 
// the decimal point.

void main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 10;

  fahr = lower;
  printf("\n%4s\t%7s\n", "\u00B0F", "\u00B0C");
  printf("----------------\n\n");
  while (fahr <= upper) {
    celsius = (5.0/9.0) * ( fahr - 32 );
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}